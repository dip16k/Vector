#include<stdio.h>
///////////// structure definition /////////////////
	struct student{
			char name[10];
			int roll;
			float marks;
			};
///////////// main ////////////////////
main()
{
	struct student v;// structure local variable declaration
	printf("enter name of student\n");
		scanf("%s",&(v.name));
	printf("roll number\n");
		scanf("%d",&(v.roll));
	printf("enter marks\n");
		scanf("%f",&(v.marks));
	printf("%s %d %f\n",v.name,v.roll,v.marks);
}


