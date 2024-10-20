
# **Analysis of Implemented Algorithms**


## **1. Quicksort with Different Pivot Strategies**

### **Time Complexity**
| Pivot Strategy        | Best Case       | Worst Case       | Average Case     |
|------------------------|----------------|------------------|------------------|
| **First/Last Element** | \( O(n \log n) \) | \( O(n^2) \)      | \( O(n \log n) \) |
| **Middle Element**     | \( O(n \log n) \) | \( O(n \log n) \) | \( O(n \log n) \) |
| **Random Element**     | \( O(n \log n) \) | \( O(n \log n) \) (rare) | \( O(n \log n) \) |

### **Space Complexity**
| Pivot Strategy        | Space Complexity |
|------------------------|------------------|
| All                   | \( O(\log n) \)  |

### **Performance Summary**
- **First/Last Element**: Poor choice for sorted or nearly sorted input; leads to \( O(n^2) \) complexity.
- **Middle Element**: Ensures balanced partitions and avoids worst-case behavior.
- **Random Element**: Reduces likelihood of worst-case but requires random number generation.

---

## **2. MergeSort**

### **Time Complexity**
| Case        | Time Complexity |
|-------------|-----------------|
| Best Case   | \( O(n \log n) \) |
| Worst Case  | \( O(n \log n) \) |
| Average Case| \( O(n \log n) \) |

### **Space Complexity**
| Case | Space Complexity |
|------|------------------|
| All  | \( O(n) \)       |

### **Performance Summary**
- **Guaranteed \( O(n \log n) \)** for all cases, making it stable and predictable.
- Requires additional memory for temporary arrays, unlike in-place sorting algorithms like quicksort.

---

## **3. Strassen's Matrix Multiplication vs. Traditional Matrix Multiplication**

### **Time Complexity**
| Algorithm               | Time Complexity        |
|--------------------------|------------------------|
| **Traditional**          | \( O(n^3) \)          |
| **Strassen's Algorithm** | \( O(n^{\log_2 7}) \approx O(n^{2.81}) \) |

### **Space Complexity**
| Algorithm               | Space Complexity       |
|--------------------------|------------------------|
| **Traditional**          | \( O(1) \) (In-place) |
| **Strassen's Algorithm** | \( O(n^2) \)          |

### **Performance Summary**
- **Traditional Method**:
  - Simpler to implement.
  - Computationally expensive for large matrices.
- **Strassen's Algorithm**:
  - Fewer multiplications make it faster for large matrices.
  - Higher space complexity and overhead for smaller matrices.

### **Practical Comparison**
| Matrix Size    | Traditional Execution Time | Strassen Execution Time |
|-----------------|-----------------------------|--------------------------|
| \( 2 \times 2 \)  | Fast (Minimal operations)  | Slightly slower          |
| \( 8 \times 8 \)  | Moderate                  | Fast                     |
| \( 64 \times 64 \)| Slower                    | Faster                   |
| \( 512 \times 512 \)| Significantly slower     | Significantly faster     |

---

## **4. Kadane's Algorithm for Maximum Subarray Sum**

### **Time Complexity**
| Case         | Time Complexity |
|--------------|-----------------|
| All Cases    | \( O(n) \)      |

### **Space Complexity**
| Case         | Space Complexity |
|--------------|------------------|
| All Cases    | \( O(1) \)       |

### **Performance Summary**
- Efficient \( O(n) \) solution to find the maximum sum subarray in a 1D array.
- Operates in constant space, making it ideal for memory-constrained systems.
- Handles negative sums gracefully by resetting the current sum when it becomes negative.
