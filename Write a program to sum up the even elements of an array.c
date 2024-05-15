#include <stdio.h> 
int main() { 
int a, b, sum=0; 
printf("Enter your any array size: "); 
scanf("%d", &a); 
int nur[a]; 
printf("Enter %d Numbers: ", a); 
for(b=0; b<a; b++) 
scanf("%d", &nur[b]); 
for(b=0; b<a; b++) { 
if(nur[b]%2==0) 
sum=sum+nur[b]; } 
printf("Total Sum of Even values is: %d ",sum); 
return 0; } 
