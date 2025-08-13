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
