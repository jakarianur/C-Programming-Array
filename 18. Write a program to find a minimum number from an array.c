#include <stdio.h>  
int main()
{  
int i, n;  
printf("Enter any array size: ");  
scanf(“%d”,&n); 
int arr[n];  
printf("Enter %d Numbers: ", n);  
for(i=0; i<n; i++)
{  
scanf("%d", &arr[i]);
}  
printf("The maximum numbers are: ");  
int min = arr[0];  
for(i=1; i<n; i++)
{  
if(arr[i] < min)
    {
     min=arr[i];
    }
}  
printf("%d", min);  
return 0;
}
