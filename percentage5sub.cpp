# include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5,per;
	printf("Enter sub1 mark:");
	scanf("%d",&sub1);
	printf("Enter sub2 mark:");
	scanf("%d",&sub2);
	printf("Enter sub3 mark:");
	scanf("%d",&sub3);
	printf("Enter sub4 mark:");
	scanf("%d",&sub4);
	printf("Enter sub5 mark:");
    scanf("%d",&sub5);
    per=((sub1+sub2+sub3+sub4+sub5)/500)*100;
    printf("The percentage is %d",per);
}
