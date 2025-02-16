#include <stdio.h>
int main(){

    int n;
    printf("Enter the number of elements of the array:");
    scanf("%d",&n);

    int arr[n];
    for(int i=0; i<n; i++){
        printf("Enter element %d:",(i+1));
        scanf("%d",&arr[i]);
    }

    int element;
    printf("Enter the number to be searched:");
    scanf("%d",&element);

    int ans = linearSearch(arr,n,element);
    if(ans == -1){
        printf("The desired number does not exist in the given array!");
    } else{
        printf("The desired number is present at index numbered: %d of the given array",ans);
    }
    
    return 0;
}

int linearSearch(int arr[], int n, int target){
    for(int i=0; i<n; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}