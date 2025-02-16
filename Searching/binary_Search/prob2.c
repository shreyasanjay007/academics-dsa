#include <stdio.h>
#include <stdbool.h>
int main(){

    
    
    int n;
    printf("Enter the length of the array:");
    scanf("%d",&n);
    
    int arr[n];
    printf("Enter a sorted array(asc or desc)\n");
    for(int i=0; i<n; i++){
        printf("Enter element %d:",(i+1));
        scanf("%d",&arr[i]);
    }

    int element ;
    printf("Enter the number to be searched:");
    scanf("%d",&element);

    int ans = orderAgnosticBS(arr,n,element);
    if(ans == -1){
        printf("The desired number does not exist in the given array");
    } else{
        printf("The desired number is present at index numbered: %d of the given array",ans);
    }

    return 0;
}

int orderAgnosticBS(int arr[],int n, int target){
    int start = 0;
    int end = n - 1;

    bool isAsc = arr[start] < arr[end];

    while(start <= end){
        int mid = start + ((end-start)/2);
        if(arr[mid] == target){
            return mid;
        }

        if(isAsc){
            if(target < arr[mid]){
                end = mid - 1;
            } else{
                start = mid + 1;
            }
        } else{
            if(target > arr[mid]){
                end = mid - 1;
            } else{
                start = mid + 1;
            }
        }
    }
}