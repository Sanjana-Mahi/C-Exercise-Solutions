#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter nth term:");
scanf("%d", &n);
for(int i=1; i<=n; i++){
sum += i*(i+1)*(i+2);
}
printf("Output= %d", sum);
return 0;
}