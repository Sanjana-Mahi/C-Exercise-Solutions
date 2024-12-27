{
int n,sum=0;
printf("Enter nth term:");
scanf("%d", &n);
for(int i=1; i<=n; i++){
sum = sum + 2*i;
}
printf("Output= %d", sum);
return 0;
}