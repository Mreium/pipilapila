#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c;
	printf("请输入三角形的三条边:\n");
	
	while(scanf("%f,%f,%f",&a,&b,&c)!=EOF){
	if(a+b>c&&b+c>a&&a+c>b)
	{
		if(a==b&&a==c)
			printf("等边三角形\n");
		else if(a==b||a==c||b==c)
			printf("等腰三角形\n");
			else if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
				printf("直角三角形\n");
				else printf("普通三角形\n");
	}
	else printf("不是三角形1234\n");
	}
	return 0;
}
