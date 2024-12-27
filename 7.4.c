#include<stdio.h>
int main()
{
int n,sum=0;
printf("Enter nth term:");
scanf("%d", &n);
for(int i=1; i<=n; i++){
sum += 8*i-4;
}
printf("Output= %d", sum);
return 0;
}