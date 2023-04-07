#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define K 5  // K değerini burada tanımlayabilirsiniz

// Uzaklığı hesaplamak için fonksiyon
double distance(int x1[], int x2[], int n) {
    double dist = 0.0;
    int i;
    for ( i = 0; i < n; i++) {
        dist += pow(x1[i] - x2[i], 2);
    }
    return sqrt(dist);
}


int knn(int train[][3], int test[], int n, int k) {
    double distances[n];

    int i;
    for ( i = 0; i < n; i++) {
        distances[i] = distance(train[i], test, 3);
    }

    
    int indices[k],j;
    
    for ( i = 0; i < k; i++) {
        int min_index = 0;
        for ( j = 1; j < n; j++) {
            if (distances[j] < distances[min_index]) {
                min_index = j;
            }
        }
        indices[i] = min_index;
        distances[min_index] = INFINITY;
    }

    
    int count[2] = {0, 0}; 
    for ( i = 0; i < k; i++) {
        count[train[indices[i]][2]]++;
    }

    
    if (count[0] > count[1]) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    
    int train[4][3] = {
        {1, 2, 0},
        {2, 1, 0},
        {2, 3, 1},
        {3, 2, 1}
    };

   
    int test[3] = {2, 2, -1};

    
    int result = knn(train, test, 4, K);

    printf("Test verisi sinifi: %d\n", result);

    return 0;
}

