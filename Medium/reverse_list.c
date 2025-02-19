#include <stdio.h>
#include <stdlib.h>

/*
Given an array, of size , reverse it.

Example: If array, arr=[1,2,3,4,5] , after reversing it, the array should be,arr= [5,4,3,2,1] .
*/
int main()
{
    int num, *arr, i;
    scanf("%d", &num);
    int start = 0;
    int end = num -1;
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }

   while(start < end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        
        start++;
        end--;
        
   }
    
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}