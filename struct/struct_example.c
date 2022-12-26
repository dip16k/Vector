/* structure definition*/
#include<stdio.h>
struct student{
		char name[10];
		int roll ;
		float marks;
		};
main()
{
	struct student v1,v2;// structure local variable declaration
	struct student v3;
		printf("enter name of student\n");
			scanf("%s",v1.name);
		printf("enter roll nummber\n");
			scanf("%d",&(v1.roll));
		printf("enter marks\n");
			scanf("%f",&(v1.marks));
		v3=v1;//assignment in same tag valid
	if(v1.roll==v3.roll)
		printf("same\n");
	else
		printf("notsame\n");

printf("%s   %d  %f\n",v1.name,v1.roll,v1.marks);
printf("%s   %d  %f\n",v3.name,v3.roll,v3.marks);
}
