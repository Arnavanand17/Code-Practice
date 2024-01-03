// structures in c language
#include<stdio.h>
int main()
{
	struct student
	{
		char name[20];
		int roll;
		
	}
	s;
	printf("\n enter student name");
	scanf("%s",&s.name);
	
	printf("\n enter roll number");
	scanf("%i",&s.roll);
	
	printf("\n student name is %s",s.name);
	printf("\n roll number is %i",s.roll);
}
	