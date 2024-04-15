#include<stdio.h> 
#include<stdlib.h> 
#include <math.h>
void PrintMenu();
void print_A();
void print_B();
void print_C();
void print_D();
void print_E();
void print_F();   //函数声明 

int main()
{
	int choice;
	while(1)   //循环体开始 
	{    
		PrintMenu();   //调用 printMenu函数
		printf("请选择0~6: \n");
		scanf("%d",&choice);   //输入0~6中的一个整数 
		if(choice==0)
		{
			break;
		}		
		switch(choice)
		{
			case 1:
				print_A();   //调用 print_A函数 ，执行 1 操作 
				break;
			case 2:
				print_B();   //调用 print_B函数，执行 2 操作
				break;
			case 3:
				print_C();   //调用 print_C函数，执行 3 操作
				break;
			case 4:
				print_D();   //调用 print_D函数，执行 4 操作
				break;		
			case 5:
				print_E();   //调用 print_E函数，执行 5 操作
				break;
			case 6:
				print_F();   //调用 print_F函数，执行 6 操作
				break;	
			default:
				printf("输入错误！请重新输入！\n");   //如果输入其他字符，则发出警告 
				break;				
		}
	}
	return 0;
}

void PrintMenu()   //定义 printMenu函数
{
	printf("\n");
	printf("**************多功能科学计算器**************\n");
	printf("**     1.解二元一次方程                   **\n");
	printf("**     2.解一元二次方程                   **\n");
	printf("**     3.进行矩阵相加、相减、相乘运算     **\n");
	printf("**     4.进行三角函数                     **\n");
	printf("**     5.进行阶乘运算                     **\n");
	printf("**     6.进行幂函数                       **\n");
	printf("**     0.退出程序                         **\n");
	printf("********************************************\n");
}

void print_A()   //定义print_A函数 
{
	int a,b,m,c,d,n;
	double x=0,y=0;
	printf("请依次输入第一个方程里x，y的系数a b和常数m：\n");
	scanf("%d %d %d",&a,&b,&m);   //输入三个整数 
	printf("请依次输入第二个方程里x，y的系数c,d和常数n：\n");
	scanf("%d %d %d",&c,&d,&n);   //输入三个整数 
	printf("%dx + %dy=%d\n",a,b,m);   //输出带有 x，y的系数a,b和常数m的方程
	printf("%dx + %dy=%d\n",c,d,n);   //输出带有 x，y的系数c,d和常数n的方程
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);   //解方程组求出x,y 
	printf("\nx=%.2f\ty = %.2f\n",x,y);   //输出x,y的值 
}
	
void print_B()   //定义print_B函数 
{
	int a, b, c;
	double x1,x2,delta; 
	printf("请依次输入一元二次方程的三个参数a b c：\n"); 
	scanf("%d %d %d", &a, &b, &c);   //输入三个整数 
	delta = b*b - 4*a*c;    //通过公式法求出 delta
	x1 = (-b + sqrt(delta))/(2 * a); 
	x2 = (-b - sqrt(delta))/(2 * a);    //通过公式法求出方程的两个根 
	if (delta>0) 
	{
		printf("一元二次方程有两个解\n"); 
		printf("一元二次方程的第一个解，x1 = %.2f\n",x1); 
		printf("一元二次方程的第二个解，x2 = %.2f\n",x2); 
	} 
	else if (delta ==0)
	{
		printf("一元二次方程有两个相同的解\n");
		printf("一元二次方程的解为x1 = x2 = %.2f\n",x1);
	} 
	else 
	{
		printf("一元二次方程无解\n");
	}	
}

void print_C()   //定义print_C函数 
{
	int n,m,c=0;
	int a[100][100],b[100][100];
	int fc[100][100];
	int i,j,k;
	printf("*输入矩阵*\n");
	printf("请输入矩阵的维数:");
	scanf("%d",&n);   //输入一个整数 
	m=n*n;   //矩阵的个数m 
	printf("请输入第一个矩阵a（共有%d个元素）:\n",m);   //让用户输入第一个矩阵 
	do   //循环体结构开始 
	{
		m--;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);   //输入 a[i][j]的值 
			}
	}while(m<0);   //当m小于0时，停止执行循环体 

	printf("请输入第二个矩阵b（共有%d个元素）:\n",m);   //让用户输入第二个矩阵
	do   //循环体结构开始 
	{
		m--;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);   //输入 b[i][j]的值 
			}
	}while(m<0);   //当m小于0时，停止执行循环体 
	
	printf("您输入的矩阵a=\n");   //输出用户输入的矩阵a
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("%10d",a[i][j]);   //输入 a[i][j]的值 
			if(j==n-1)
				printf("\n");	
		}
		
	printf("您输入的矩阵b=\n");   //输出用户输入的矩阵b 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("%10d",b[i][j]);   //输入 a[i][j]的值 
			if(j==n-1)
				printf("\n");	
		}
		
	while(1)
	{
		printf("\n");		
		printf("1 矩阵相加\n");
		printf("2 矩阵相减\n");
		printf("3 矩阵相乘\n");
		printf("0 退出系统\n");
		printf("\n");	
		printf("请选择运算0~3:");
		scanf("%d",&c);   //输入0~3中的一个整数 
		if(c==0)
		{
			break;
		}
		switch(c)
		{
			case 1:
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
						{
							fc[i][j]=0;
							fc[i][j]=a[i][j]+b[i][j];
						}
				printf("矩阵和为：\n");   //输出两个矩阵相加后的矩阵和 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //当j的值为n-1时，循环结束并转行 
					}
				break;
			case 2:
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						fc[i][j]=0;
						fc[i][j]=a[i][j]-b[i][j];
					}
				printf("矩阵差为：\n");   //输出两个矩阵相减后的矩阵差 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //当j的值为n-1时，循环结束并转行 
					}
				break;
			case 3:
				for (i=0;i<n;i++)
					for (j=0;j<n;j++)
					{
						fc[i][j]=0;
						for (k=0;k<n;k++)
							fc[i][j]=a[i][k]*b[k][j];
					}
				printf("矩阵积为：\n");   //输出两个矩阵相乘后的矩阵积 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //当j的值为n-1时，循环结束并转行 
					}	
				break;
			default:
				printf("输入错误！请重新输入！\n");   //如果输入其他字符，则发出警告 
				break;	
		}
	}
}

void print_D()   //定义print_D函数 
{
	int i;
	while(1)
	{
		double a,j;
		printf("三角函数的运算\n");
		printf("1.正弦函数sin\n");
		printf("2.余弦函数cos\n");
		printf("3.正切函数tan\n");
		printf("4.余切函数cot\n");
		printf("5.正割函数ses\n");
		printf("6.余割函数csc\n");
		printf("0.退出系统\n");
		printf("请选择0~6:");   //输入0~6中的一个整数 
		scanf("%d",&i);
		if(i==0)
		{
			break;
		}
		switch(i)
		{
			case 1:
				printf("请输入角度：\n");
				scanf("%lf",&a);
				j=sin (a*3.14/180);
				printf("%.2f的sin值为%.2f\n\n",a,j);
			break;
			case 2:
				printf("请输入角度：\n");
				scanf("%lf",&a);
				j=cos (a*3.14/180);
				printf("%.2f的cos值为%.2f\n\n",a,j);
			break;
			case 3:
				printf("请输入角度：\n");
				scanf("%lf",&a);
				j=tan (a*3.14/180);
				if(a==90||a==270)
				{
					printf("%.2f的tan值不存在\n\n",a);
				}
				else 
					printf("%.2f的tan值为%.2f\n\n",a,j);
			break;
			case 4:
			    printf("请输入角度：\n");
			    scanf("%lf",&a);
			    j=1/tan (a*3.14/180);
			    printf("%.2f的cot值为%.2f\n\n",a,j);
			break;
		    case 5:
			    printf("请输入角度：\n");
			    scanf("%lf",&a);
			    j=1/cos (a*3.14/180);
			    printf("%.2f的ses值为%.2f\n\n",a,j);
		    break;
			case 6:
			    printf("请输入角度：\n");
			    scanf("%lf",&a);
			    j=1/sin (a*3.14/180);
			    printf("%.2f的csc值为%.2f\n\n",a,j);
			break;
		}
	}
}

void print_E()   //定义print_E函数 
{
	int i=1,n;
	double x=1;
	printf("请输入要计算的阶乘数n：");
	scanf("%d",&n);   //输入一个整数
	while(i<=n)
	{
		x=x*i;
		i++;   //循环体 
	}
	printf("n的阶乘x=%.2f\n",x);   //输出x的值 
}

void print_F()   //定义print_F函数 
{
	double x, y, z;
    printf("请输入幂函数的底数x和幂y：\n");
    scanf("%lf %lf",&x,&y);   //输入两个浮点型数据 
	z = pow( x, y );
	printf( "%.2f^%.2f = %.2f\n", x, y, z );   //输出最终的幂函数式子 
 
}
