//Binary Search

#include <stdio.h>

int main() {
    int n, i, key, found = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order:\n", n);
    for ( i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int low = 0, mid;
    int high = n - 1;
    
    while(low<=high){
        mid=(low+high)/2;
        
        if(arr[mid]==key) {
            printf("element %d is found at the position %d: ",key,mid+1);
            found=1;
            break;
        }
        else if(arr[mid]<key){
            low=mid+1;
        }else
        {
            high=mid-1;
        }
    }
    
    if(!found){
        printf("element %d is not found");
    }
    
    return 0;
    }
