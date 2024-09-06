#include<stdio.h>
int main(){
    int n;
    printf("Please enter size of array:");
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i < n;i++){
        printf("\nEnter Element at %d :",i);
        scanf("%d", &arr[i]);
    }
    printf("Array before deletion is: \n");
    for(int i = 0;i < n;i++){
        printf("%d ",arr[i]);
    }
    int p;
    printf("\nEnter Index of the Element to delete: ");
    scanf("%d",&p); 
    if(p > n-1 || p < 0) {
        printf("Cannot Delete !!!!!!");
        return 0;
    }
    for(int i = p; i < n-1;i++){
        arr[i] = arr[i+1];
    }
    printf("Array after deletion is: \n");
    for(int i = 0;i < n-1;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
