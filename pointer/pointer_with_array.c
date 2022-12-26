#include<stdio.h>
main()
{
int array[10],sum=0,i,avg;//array[] int array used to store marks
printf("enter the marks\n");
for(i=0;i<10;i++)
{
printf("enter the marks of subject %d\n",i+1);
scanf("%d",&array[i]);// takin input in array ** storing marks
sum=sum+array[i];// adding marks
}
avg=sum/10;// avrage of all marks
printf("sum of all marks=%d\n",sum);
printf("avg of marks=%d\n",avg);
}


