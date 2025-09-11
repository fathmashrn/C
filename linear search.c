//linear search

#include <stdio.h>
int main()
{
    int i,n,s;
    int found=0;
    
    printf("enter the number of elements: ");
    scanf("%d",&n);
    
    int arr[n];
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    printf("enter the element to search: ");
    scanf("%d",&s);
    
    //linear search
    for(i=0;i<n;i++){
        if(arr[i]==s){
            printf("\nelement %d is found at the position %d ",s,i+1);
            found=1;
            break;
        }
    }
    if(!found){
        printf("element %d is not found");
    }
    return 0;
}
