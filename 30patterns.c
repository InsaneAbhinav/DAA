// Abhinav Singla
// Sap 500120278

#include <stdio.h>
#include <stdlib.h>

void pattern1(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern2(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern3(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}
// .....

void pattern4(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern5(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern6(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern7(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            if(k == 1 || k == 2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int k = 1; k <= 2*i-1; k++) {
            if(k == 1 || k == 2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern8(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(j == i || j == n-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern9(int n) {
    for(int i = n/2; i <= n; i+=2) {
        for(int j = 1; j < n-i; j+=2) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = i; j < n; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (i*2)-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern10(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern11(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern12(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern13(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == n/2+1 || j == n/2+1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern14(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n || i == j || j == n-i+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern15(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            if(j == 1 || j == 2*i-1 || i == n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern16(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else if(i == 2 || i == n-1 || j == 2 || j == n-1)
                printf("+");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern17(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if((i+j) % 4 == 0 || (i == 2 && j % 4 == 0))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern18(int n) {
    int m[20][20] = {0};
    int top = 0, bottom = n-1, left = 0, right = n-1;
    int dir = 1;
    
    while(top <= bottom && left <= right) {
        if(dir == 1) {
            for(int i = left; i <= right; i++) {
                m[top][i] = 1;
            }
            top++;
            dir = 2;
        }
        else if(dir == 2) {
            for(int i = top; i <= bottom; i++) {
                m[i][right] = 1;
            }
            right--;
            dir = 3;
        }
        else if(dir == 3) {
            for(int i = right; i >= left; i--) {
                m[bottom][i] = 1;
            }
            bottom--;
            dir = 4;
        }
        else if(dir == 4) {
            for(int i = bottom; i >= top; i--) {
                m[i][left] = 1;
            }
            left++;
            dir = 1;
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(m[i][j] == 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void pattern19(int n) {
    for(int i = n; i >= 1; i--) {
        for(int j = n-i; j >= 1; j--) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 2; i <= n; i++) {
        for(int j = n-i; j >= 1; j--) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern20(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern21(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i = 1; i <= 2; i++) {
        for(int j = 1; j <= n-2; j++) {
            printf(" ");
        }
        printf("| |\n");
    }
}

void pattern22(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("*");
            else
                printf("%d", j-1);
        }
        printf("\n");
    }
}

void pattern23(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == 1 || i == n || j == 1 || j == n)
                printf("*");
            else if(i == 3 && j == n/2)
                printf("O");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern24(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            if(j == 1 || j == 2*i-1)
                printf("*");
            else
                printf("%d", i);
        }
        printf("\n");
    }
}

void pattern25(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void pattern26(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            if(j == 1 || j == 2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            if(j == 1 || j == 2*i-1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern27(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= 2*i-1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void pattern28(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            if(i == j || j == n-i+1 || j == n/2+1 || i == n/2+1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}


void pattern29(int n) {
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    for(int i = n-1; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        for(int j = 1; j <= 2*(n-i); j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            if(j == 1 || j == i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

void pattern30(int n) {
    for(int i = 1; i <= 3; i++) {
        for(int j = 1; j <= n; j++) {
            if((i+j) % 4 == 0 || (i == 2 && j % 2 == 0))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to display pattern descriptions
void displayPatternMenu() {
    printf("\nAvailable Star Patterns:\n");
    printf("1.  Right Triangle\n");
    printf("2.  Inverted Right Triangle\n");
    printf("3.  Pyramid\n");
    printf("4.  Inverted Pyramid\n");
    printf("5.  Diamond\n");
    printf("6.  Hollow Square\n");
    printf("7.  Hollow Diamond\n");
    printf("8.  X Pattern\n");
    printf("9.  Heart Pattern\n");
    printf("10. Butterfly Pattern\n");
    printf("11. Right Arrow\n");
    printf("12. Left Arrow\n");
    printf("13. Plus Sign\n");
    printf("14. Square with Diagonals\n");
    printf("15. Hollow Triangle\n");
    printf("16. Star Border\n");
    printf("17. Zigzag Pattern\n");
    printf("18. Spiral Pattern\n");
    printf("19. Hour Glass\n");
    printf("20. Double Triangle\n");
    printf("21. Christmas Tree\n");
    printf("22. Number Star Pattern\n");
    printf("23. Star Frame\n");
    printf("24. Diamond Number Pattern\n");
    printf("25. Arrow Head\n");
    printf("26. Diamond Border\n");
    printf("27. Double Diamond\n");
    printf("28. Star Cross\n");
    printf("29. Hollow Butterfly\n");
    printf("30. Star Wave\n");
}

int main() {
    int choice, n, continueProgram = 1;
    
    while(continueProgram) {
        system("clear"); // Use "cls" for Windows
        printf("\n=== Star Pattern Generator ===\n");
        displayPatternMenu();
        
        printf("\nEnter pattern number (1-30): ");
        scanf("%d", &choice);
        
        if(choice < 1 || choice > 30) {
            printf("Invalid pattern number! Please choose between 1 and 30.\n");
            continue;
        }
        
        printf("Enter size (5-20 recommended): ");
        scanf("%d", &n);
        
        printf("\nPattern %d with size %d:\n\n", choice, n);
        
        // Call appropriate pattern function
        switch(choice) {
            case 1: pattern1(n); break;
            case 2: pattern2(n); break;
            case 3: pattern3(n); break;
            case 4: pattern4(n); break;
            case 5: pattern5(n); break;
            case 6: pattern6(n); break;
            case 7: pattern7(n); break;
            case 8: pattern8(n); break;
            case 9: pattern9(n); break;
            case 10: pattern10(n); break;
            case 11: pattern11(n); break;
            case 12: pattern12(n); break;
            case 13: pattern13(n); break;
            case 14: pattern14(n); break;
            case 15: pattern15(n); break;
            case 16: pattern16(n); break;
            case 17: pattern17(n); break;
            case 18: pattern18(n); break;
            case 19: pattern19(n); break;
            case 20: pattern20(n); break;
            case 21: pattern21(n); break;
            case 22: pattern22(n); break;
            case 23: pattern23(n); break;
            case 24: pattern24(n); break;
            case 25: pattern25(n); break;
            case 26: pattern26(n); break;
            case 27: pattern27(n); break;
            case 28: pattern28(n); break;
            case 29: pattern29(n); break;
            case 30: pattern30(n); break;
            default: printf("Invalid choice!\n");
        }
        
        printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
        scanf("%d", &continueProgram);
    }
    
    printf("\nThank you for using Star Pattern Generator!\n");
    return 0;
}