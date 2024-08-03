#include <stdio.h>

// Function to perform binary search
int binsrc(int x[], int low, int high, int key) {
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (key == x[mid])
            return mid;
        if (key < x[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}

int main() {
    int x[20], key, i, n, succ;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("Enter the elements in ascending order:\n");
        for (i = 0; i < n; i++)
            scanf("%d", &x[i]);
        
        printf("Enter the key element to be searched: ");
        scanf("%d", &key);
        
        succ = binsrc(x, 0, n - 1, key);
        
        if (succ >= 0)
            printf("Element found at position = %d\n", succ + 1);
        else
            printf("Element not found\n");
    } else {
        printf("Number of elements should be greater than zero\n");
    }
    
    return 0;
}
