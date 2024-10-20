// Abhinav
// Sap 500120278

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Activity Selection Problem
typedef struct {
    int start, end;
} Activity;

int compare(const void *a, const void *b) {
    return ((Activity *)a)->end - ((Activity *)b)->end;
}

void activitySelection() {
    Activity activities[] = {{1, 3}, {2, 5}, {0, 6}, {8, 9}, {5, 7}, {5, 9}};
    int n = sizeof(activities) / sizeof(activities[0]);

    qsort(activities, n, sizeof(Activity), compare);

    printf("Selected activities:\n");
    int i = 0;
    printf("Activity (Start: %d, End: %d)\n", activities[i].start, activities[i].end);

    for (int j = 1; j < n; j++) {
        if (activities[j].start >= activities[i].end) {
            printf("Activity (Start: %d, End: %d)\n", activities[j].start, activities[j].end);
            i = j;
        }
    }
}

// Matrix Chain Multiplication 
void matrixChainOrder() {
    int p[] = {1, 2, 3, 4};
    int n = sizeof(p) / sizeof(p[0]);

    int m[n][n];
    for (int i = 1; i < n; i++)
        m[i][i] = 0;

    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            for (int k = i; k < j; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                }
            }
        }
    }
    printf("Minimum cost of multiplication: %d\n", m[1][n - 1]);
}

// Dijkstra's Algorithm
#define V 5

int minDistance(int dist[], int sptSet[]) {
    int min = INT_MAX, min_index;
    for (int v = 0; v < V; v++)
        if (sptSet[v] == 0 && dist[v] <= min)
            min = dist[v], min_index = v;
    return min_index;
}

void dijkstra() {
    int graph[V][V] = {
        {0, 10, 0, 0, 0},
        {0, 0, 5, 0, 0},
        {0, 0, 0, 50, 10},
        {0, 0, 0, 0, 0},
        {0, 0, 0, 20, 0}
    };

    int dist[V], sptSet[V] = {0};

    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX;
    dist[0] = 0;

    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, sptSet);
        sptSet[u] = 1;
        for (int v = 0; v < V; v++)
            if (!sptSet[v] && graph[u][v] && dist[u] != INT_MAX && dist[u] + graph[u][v] < dist[v])
                dist[v] = dist[u] + graph[u][v];
    }

    printf("Dijkstra's shortest path distances from source 0:\n");
    for (int i = 0; i < V; i++)
        printf("0 -> %d: %d\n", i, dist[i]);
}

// Bellman-Ford Algorithm
typedef struct {
    int src, dest, weight;
} Edge;

void bellmanFord() {
    Edge edges[] = {
        {0, 1, 10},
        {1, 2, 5},
        {2, 3, 50},
        {3, 4, 10},
        {4, 2, -10}
    };
    int E = sizeof(edges) / sizeof(edges[0]);
    int Ver = 5;
    int dist[Ver];

    for (int i = 0; i < Ver; i++)
        dist[i] = INT_MAX;
    dist[0] = 0;

    for (int i = 1; i < Ver; i++) {
        for (int j = 0; j < E; j++) {
            int u = edges[j].src, ver = edges[j].dest, w = edges[j].weight;
            if (dist[u] != INT_MAX && dist[u] + w < dist[ver])
                dist[ver] = dist[u] + w;
        }
    }

    printf("Bellman-Ford shortest path distances from source 0:\n");
    for (int i = 0; i < Ver; i++)
        printf("0 -> %d: %d\n", i, dist[i]);
}

// 0/1 Knapsack Problem
int knapsackDP(int W, int wt[], int val[], int n) {
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (i == 0 || w == 0)
                dp[i][w] = 0;
            else if (wt[i - 1] <= w)
                dp[i][w] = (val[i - 1] + dp[i - 1][w - wt[i - 1]] > dp[i - 1][w]) ? val[i - 1] + dp[i - 1][w - wt[i - 1]] : dp[i - 1][w];
            else
                dp[i][w] = dp[i - 1][w];
        }
    }
    return dp[n][W];
}

void knapsack() {
    int val[] = {60, 100, 120};
    int wt[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);
    printf("Maximum value in Knapsack: %d\n", knapsackDP(W, wt, val, n));
}

// Main Function
int main() {
    printf("\n1. Activity Selection Problem:\n");
    activitySelection();

    printf("\n2. Matrix Chain Multiplication:\n");
    matrixChainOrder();

    printf("\n3. Dijkstra's Algorithm:\n");
    dijkstra();

    printf("\n4. Bellman-Ford Algorithm:\n");
    bellmanFord();

    printf("\n5. 0/1 Knapsack Problem:\n");
    knapsack();

    return 0;
}
