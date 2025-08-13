//LINEAR SEARCH

#include <stdio.h>


int linear_search(int arr[], int n, int key) {
    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            pos = i;
            break;
        }
    }
    return pos;
}

int main() {
    int x,k;
    printf("Enter the no. of elements in the array: ");
    scanf("%d",&x);
     
    int a[x];
    printf("Enter the elements ");
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the no. to be searched: ");
    scanf("%d",&k); 
    int ans=linear_search(a,x,k);
    printf("%d",ans);
    return 0;
}


//Binary Search

#include <stdio.h>

int bs(int arr[], int beg, int end, int key) {
    if (beg <= end) {
        int mid = (beg + end) / 2;
        if (arr[mid] == key)
            return mid;
        else if (key < arr[mid])
            return bs(arr, beg, mid - 1, key);
        else
            return bs(arr, mid + 1, end, key);
    }
    return -1;
}

int main() {
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements in sorted order:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &key);
    int result = bs(arr, 0, n - 1, key);
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");
    return 0;
}

