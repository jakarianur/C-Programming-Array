#include <stdio.h>  
int main() {  
int size, a;  
printf("Enter your any array size: ");  
scanf("%d", &size);  
int arr[size];  
printf("Enter %d Numbers: ", size);  
for(a=0; a<size; a++) {  
    scanf("%d", &arr[a]);} 
    printf("Revesed Element: "); 
    for(a=size-1; a>=0; a--){ 
printf("%d ", arr[a]); }  
return 0; } 
