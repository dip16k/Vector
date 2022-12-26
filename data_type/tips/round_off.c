#include<stdio.h>
float round(float f)
{
	return f<0? f-0.5:f+0.5;
}
main()
{
	float f;
	printf("enter number :");
	scanf("%f",&f);
	printf("after round off=%fn",round(f));
}
