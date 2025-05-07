#include <stdio.h> 
 
 
void sortIntegers(int *nums, int len); 
 
int main(){ 
 
    int len; 
 
 
    printf("This program can sort the numbers between 2147483647 and -2147483647!\n"); 
    printf("Enter the number of integers you want to sort: "); 
    scanf("%d", &len); 
    int numbers[len]; 
    for(int i=0; i<len; i++){ 
        printf("Enter the number %d: ", i+1); 
        scanf("%d", &numbers[i]); 
    } 
    sortIntegers(numbers, len); 
    printf("Sorted integers: "); 
    for(int i=0; i<len; i++){ 
        printf("%d ", numbers[i]); 
    } 
 
    return 0; 
 
} 
 
void sortIntegers(int *nums, int len){ 
    int i,j,min,indexTemp; 
    for(j=0; j<len; j++){ 
        min=nums[j]; 
        indexTemp=j; 
        for(i=j; i<len ;i++ ){ 
            if(min>nums[i]){ 
                min=nums[i]; 
                indexTemp=i; 
            } 
        } 
        int temp = nums[j]; 
        nums[j] = nums[indexTemp]; 
        nums[indexTemp] = temp; 
     
    } 
} 
