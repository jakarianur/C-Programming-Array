#include <stdio.h>  
int main() {  
int a, b;  
printf("Enter your any array size: ");  
scanf(“%d”, &a); 
int nur[a];  
printf("Enter %d Numbers: ", a);  
for(b=0; b<a; b++){  
scanf("%d", &nur[b]);}  
printf("The maximum numbers are: ");  
int max = nur[0];  
for(b=1; b<a; b++) {  
max=nur[b];}  
printf("%d", max);  
return 0; } 
