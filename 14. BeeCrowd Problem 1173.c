// https://www.beecrowd.com.br/judge/en/problems/view/1173 

#include <stdio.h> 
int main() { 
    int n[10],x,i; 
    scanf("%d",&x); 
    for(i=0; i<10; i++) { 
        if(i==0) 
            n[i] = x; 
        else 
            n[i] = n[i-1]*2; } 
    for(i=0; i<10; i++) 
        printf("N[%d] = %d\n",i,n[i]); 
    return 0; } 
