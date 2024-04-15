#include<stdio.h> 
#include<stdlib.h> 
#include <math.h>
void PrintMenu();
void print_A();
void print_B();
void print_C();
void print_D();
void print_E();
void print_F();   //�������� 

int main()
{
	int choice;
	while(1)   //ѭ���忪ʼ 
	{    
		PrintMenu();   //���� printMenu����
		printf("��ѡ��0~6: \n");
		scanf("%d",&choice);   //����0~6�е�һ������ 
		if(choice==0)
		{
			break;
		}		
		switch(choice)
		{
			case 1:
				print_A();   //���� print_A���� ��ִ�� 1 ���� 
				break;
			case 2:
				print_B();   //���� print_B������ִ�� 2 ����
				break;
			case 3:
				print_C();   //���� print_C������ִ�� 3 ����
				break;
			case 4:
				print_D();   //���� print_D������ִ�� 4 ����
				break;		
			case 5:
				print_E();   //���� print_E������ִ�� 5 ����
				break;
			case 6:
				print_F();   //���� print_F������ִ�� 6 ����
				break;	
			default:
				printf("����������������룡\n");   //������������ַ����򷢳����� 
				break;				
		}
	}
	return 0;
}

void PrintMenu()   //���� printMenu����
{
	printf("\n");
	printf("**************�๦�ܿ�ѧ������**************\n");
	printf("**     1.���Ԫһ�η���                   **\n");
	printf("**     2.��һԪ���η���                   **\n");
	printf("**     3.���о�����ӡ�������������     **\n");
	printf("**     4.�������Ǻ���                     **\n");
	printf("**     5.���н׳�����                     **\n");
	printf("**     6.�����ݺ���                       **\n");
	printf("**     0.�˳�����                         **\n");
	printf("********************************************\n");
}

void print_A()   //����print_A���� 
{
	int a,b,m,c,d,n;
	double x=0,y=0;
	printf("�����������һ��������x��y��ϵ��a b�ͳ���m��\n");
	scanf("%d %d %d",&a,&b,&m);   //������������ 
	printf("����������ڶ���������x��y��ϵ��c,d�ͳ���n��\n");
	scanf("%d %d %d",&c,&d,&n);   //������������ 
	printf("%dx + %dy=%d\n",a,b,m);   //������� x��y��ϵ��a,b�ͳ���m�ķ���
	printf("%dx + %dy=%d\n",c,d,n);   //������� x��y��ϵ��c,d�ͳ���n�ķ���
	x=(m*d-b*n)/(a*d-b*c);
	y=(m*c-a*n)/(b*c-a*d);   //�ⷽ�������x,y 
	printf("\nx=%.2f\ty = %.2f\n",x,y);   //���x,y��ֵ 
}
	
void print_B()   //����print_B���� 
{
	int a, b, c;
	double x1,x2,delta; 
	printf("����������һԪ���η��̵���������a b c��\n"); 
	scanf("%d %d %d", &a, &b, &c);   //������������ 
	delta = b*b - 4*a*c;    //ͨ����ʽ����� delta
	x1 = (-b + sqrt(delta))/(2 * a); 
	x2 = (-b - sqrt(delta))/(2 * a);    //ͨ����ʽ��������̵������� 
	if (delta>0) 
	{
		printf("һԪ���η�����������\n"); 
		printf("һԪ���η��̵ĵ�һ���⣬x1 = %.2f\n",x1); 
		printf("һԪ���η��̵ĵڶ����⣬x2 = %.2f\n",x2); 
	} 
	else if (delta ==0)
	{
		printf("һԪ���η�����������ͬ�Ľ�\n");
		printf("һԪ���η��̵Ľ�Ϊx1 = x2 = %.2f\n",x1);
	} 
	else 
	{
		printf("һԪ���η����޽�\n");
	}	
}

void print_C()   //����print_C���� 
{
	int n,m,c=0;
	int a[100][100],b[100][100];
	int fc[100][100];
	int i,j,k;
	printf("*�������*\n");
	printf("����������ά��:");
	scanf("%d",&n);   //����һ������ 
	m=n*n;   //����ĸ���m 
	printf("�������һ������a������%d��Ԫ�أ�:\n",m);   //���û������һ������ 
	do   //ѭ����ṹ��ʼ 
	{
		m--;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&a[i][j]);   //���� a[i][j]��ֵ 
			}
	}while(m<0);   //��mС��0ʱ��ִֹͣ��ѭ���� 

	printf("������ڶ�������b������%d��Ԫ�أ�:\n",m);   //���û�����ڶ�������
	do   //ѭ����ṹ��ʼ 
	{
		m--;
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
			{
				scanf("%d",&b[i][j]);   //���� b[i][j]��ֵ 
			}
	}while(m<0);   //��mС��0ʱ��ִֹͣ��ѭ���� 
	
	printf("������ľ���a=\n");   //����û�����ľ���a
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("%10d",a[i][j]);   //���� a[i][j]��ֵ 
			if(j==n-1)
				printf("\n");	
		}
		
	printf("������ľ���b=\n");   //����û�����ľ���b 
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			printf("%10d",b[i][j]);   //���� a[i][j]��ֵ 
			if(j==n-1)
				printf("\n");	
		}
		
	while(1)
	{
		printf("\n");		
		printf("1 �������\n");
		printf("2 �������\n");
		printf("3 �������\n");
		printf("0 �˳�ϵͳ\n");
		printf("\n");	
		printf("��ѡ������0~3:");
		scanf("%d",&c);   //����0~3�е�һ������ 
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
				printf("�����Ϊ��\n");   //�������������Ӻ�ľ���� 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //��j��ֵΪn-1ʱ��ѭ��������ת�� 
					}
				break;
			case 2:
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						fc[i][j]=0;
						fc[i][j]=a[i][j]-b[i][j];
					}
				printf("�����Ϊ��\n");   //����������������ľ���� 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //��j��ֵΪn-1ʱ��ѭ��������ת�� 
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
				printf("�����Ϊ��\n");   //�������������˺�ľ���� 
				for(i=0;i<n;i++)
					for(j=0;j<n;j++)
					{
						printf("%10d",fc[i][j]);
						if(j==n-1)
							printf("\n");   //��j��ֵΪn-1ʱ��ѭ��������ת�� 
					}	
				break;
			default:
				printf("����������������룡\n");   //������������ַ����򷢳����� 
				break;	
		}
	}
}

void print_D()   //����print_D���� 
{
	int i;
	while(1)
	{
		double a,j;
		printf("���Ǻ���������\n");
		printf("1.���Һ���sin\n");
		printf("2.���Һ���cos\n");
		printf("3.���к���tan\n");
		printf("4.���к���cot\n");
		printf("5.�����ses\n");
		printf("6.����csc\n");
		printf("0.�˳�ϵͳ\n");
		printf("��ѡ��0~6:");   //����0~6�е�һ������ 
		scanf("%d",&i);
		if(i==0)
		{
			break;
		}
		switch(i)
		{
			case 1:
				printf("������Ƕȣ�\n");
				scanf("%lf",&a);
				j=sin (a*3.14/180);
				printf("%.2f��sinֵΪ%.2f\n\n",a,j);
			break;
			case 2:
				printf("������Ƕȣ�\n");
				scanf("%lf",&a);
				j=cos (a*3.14/180);
				printf("%.2f��cosֵΪ%.2f\n\n",a,j);
			break;
			case 3:
				printf("������Ƕȣ�\n");
				scanf("%lf",&a);
				j=tan (a*3.14/180);
				if(a==90||a==270)
				{
					printf("%.2f��tanֵ������\n\n",a);
				}
				else 
					printf("%.2f��tanֵΪ%.2f\n\n",a,j);
			break;
			case 4:
			    printf("������Ƕȣ�\n");
			    scanf("%lf",&a);
			    j=1/tan (a*3.14/180);
			    printf("%.2f��cotֵΪ%.2f\n\n",a,j);
			break;
		    case 5:
			    printf("������Ƕȣ�\n");
			    scanf("%lf",&a);
			    j=1/cos (a*3.14/180);
			    printf("%.2f��sesֵΪ%.2f\n\n",a,j);
		    break;
			case 6:
			    printf("������Ƕȣ�\n");
			    scanf("%lf",&a);
			    j=1/sin (a*3.14/180);
			    printf("%.2f��cscֵΪ%.2f\n\n",a,j);
			break;
		}
	}
}

void print_E()   //����print_E���� 
{
	int i=1,n;
	double x=1;
	printf("������Ҫ����Ľ׳���n��");
	scanf("%d",&n);   //����һ������
	while(i<=n)
	{
		x=x*i;
		i++;   //ѭ���� 
	}
	printf("n�Ľ׳�x=%.2f\n",x);   //���x��ֵ 
}

void print_F()   //����print_F���� 
{
	double x, y, z;
    printf("�������ݺ����ĵ���x����y��\n");
    scanf("%lf %lf",&x,&y);   //������������������ 
	z = pow( x, y );
	printf( "%.2f^%.2f = %.2f\n", x, y, z );   //������յ��ݺ���ʽ�� 
 
}
