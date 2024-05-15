#include <stdio.h> 
int main(){ 
int a, b; 
printf("Enter your any array size: "); 
scanf("%d", &a); 
int nur[a]; 
printf("Enter %d Numbers: ", a); 
for(b=0;b<a;b++){ 
scanf("%d",&nur[b]);} 
printf("Odd Numbers in Array are: "); 
for(b=0;b<a;b++){ 
if(nur[b]%2!=0) 
printf("%d ",nur[b]);} 
return 0;} 
