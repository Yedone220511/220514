#include <stdio.h>

//int main() //�������������Ӵ�С���� 
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	scanf("%d%d%d", &a, &b, &c);
//	if(a>b)
//	{
//		if(a>c)
//		{
//			if(b>c)
//			printf("%d %d %d", a, b, c);
//			else
//			printf("%d %d %d", a, c, b);
//		}
//		else
//		{
//			printf("%d %d %d", c, a, b);
//		}
//	}
//	else
//	{
//		if(b>c)
//		{
//			if(c>a)
//			printf("%d %d %d", b, c, a);
//			else
//			printf("%d %d %d", b, a, c);
//		}
//		else
//		{
//			printf("%d %d %d", c, b, a);
//		}
//	}
//	return 0;
//}






//int main() //���1-100֮������3�ı��������� 
//{
//	int i=0;
//	int n=0;
//	for(i=1;(i/3)!=1;i++)
//	{
//		continue;
//	}
//	for(n=i;n<101;n+=3)
//	{
//		printf("%d\n", n);
//	}
//	return 0;
//}






//int main() //�������������Լ�� 
//{
//	int m=24;
//	int n=18;
//	int r=0;
//	while(m%n)
//	{
//		r=m%n;
//		m=n;
//		n=r;
//	}
//	printf("%d\n", n);
//	return 0;
//}






//int main() //��ӡ1000-2000֮������� 
//{
//	int year=0;
//	int count=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//�ܱ�4�������Ҳ��ܱ�100����
//		//�ܱ�400���� 
//		if(year%4==0 && year%100!=0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else if(year%400==0)
//		{
//			printf("%d\n", year);
//			count++;
//		}
//		else
//		continue;
//	}
//	printf("�ܹ���%d������", count);
//	return 0;
//}
//������ 
//if(((year%4==0)&&(year%100!=0))||(year%400==0)) // &&��ʾ���ң�||��ʾ���� 
//{
//	printf("%d", year);
//	count++
//}





//#include <math.h>
//int main()   //��ӡ100-200֮�����е����� 
//{
//	int i=0;
//	int count=0;
//	for(i=101;i<=200;i+=2) //ֱ���ų�ż�����Ż��㷨 
//	{
//		//�ж�i�Ƿ�Ϊ������
//		//1.�Գ��� 
//		int j=0;
//		for(j=2;j<i;j++) //�������Ը�Ϊj<=sqrt(i)��ֻҪ�㵽i��ƽ�������ɣ��Ż��㷨 
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			count++;
//			printf("%d\n", i);
//		}
//	}
//	printf("һ����%d������", count);
//	return 0;
//}





//int main() //1-100֮���ж��ٸ�����9 
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9) //�����λ�м���9 
//		Count++;
//		if(i/10==9) //����ʮλ�м���9 
//		count++;
//	}
//	return 0;
//}




//����1-1/2+1/3-1/4......+1/99-1/100
//int main() //����1 
//{
//	int i=0;
//	double sum=0.0;
//	int flag=1;
//	for(i=1;i<=100;i++)
//	{
//		sum+=flag*1.0/i;
//		flag=-flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}

//int main()  //����2 
//{
//	int i=0;
//	double sum1=0.0;
//	double sum2=0.0;
//	for(i=1;i<=100;i+=2)
//	{
//		sum1+=1.0/i;
//	}
//	for(i=2;i<=100;i+=2)
//	{
//		sum2+=1.0/i;
//	}
//	printf("sum=%lf\n", sum1-sum2);
//	return 0;
//}





//int main() //���һ����������ֵ 
//{
//	int arr[]={1,2,3,-1,5,6,7,8,9,10};
//	int max=arr[0]; //����max��ֵΪ���е�һ������������������max�Ƚ� 
//	int i=0;
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	for(i=1;i<sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//		else
//		continue;
//	}
//	printf("max=%d\n", max);
//	return 0;
//}






//int main() //����˷��ھ��� 
//{
//	int i=0;
//	int n=0;
//	for(i=1;i<=9;i++)
//	{
//		for(n=1;n<=i;n++)
//		{
//			printf("%d*%d=%2d ", i, n, i*n);
//			//%d*%d=%2d���Ⱥź����ֵΪ2λ����ֻ��1λ�Ļ����ÿո���
//			//%d*%d=%-2d �Ⱥź����ֵΪ2λ������������룬�����Ⱥ� 
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main() //��һ��������һ����k 
//{
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int left=0;
//	int right=sizeof(arr)/sizeof(arr[0])-1;
//	while(left<=right)
//	{
//		int mid=(left+right)/2;
//		if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("�Ҳ�����");
//	}
//	return 0;
//}






//���һ����������Ϸ 
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("********************************\n");
	printf("***1: play      0: exit*********\n");
	printf("********************************\n");
}

void game()
{
	int ret=0;
	int guess=0;
	ret=rand()%100+1; //���ɵ���0-32767֮�������%100+1������Ϊ1-100֮�� 
	while(1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("�´���\n");
		}
		else if(guess<ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
 } 
 
int main()
{
	int input=0;
	srand((unsigned int) time(NULL)); //��ʱ����������������������� 
	do
	{
		menu();
		printf("��ѡ��>:\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
		    case 0:
		    	printf("�˳���Ϸ\n");
		    	break;
		    default:
		    	printf("ѡ�����\n");
		    	break;
		}
			
	}
	while(input);
	return 0;
}





//goto��䣺����������������ط��������Ƕ��Ƕ���У�Ҫ���break���ܲ���˳���goto����ֱ������ȥ 
//int main()
//{
//	printf("hello bit\n");
//	goto again;          //ֱ��������ӡ����á� 
//	printf("���\n");
//	again:
//	printf("hehe\n");
//	return 0;
//}




//
//#include <string.h>
//#include <stdlib.h>

//int main() һ�����ڹػ�������������ȡ���ػ� 
//{
//	//shutdown -s -t 60 ��ʾ���õ���60���ڹػ� 
//	//system()- ִ��ϵͳ����
//	char input[20]={0};
//	system("shutdown -s -t 60"); 
//again:
//	printf("��ע�⣬��ĵ����ڽ�1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//	scanf("%s", input);
//	if(strcmp(input, "������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//
//int main() //��while������goto���ʵ�� 
//{
//	//shutdown -s -t 60 ��ʾ���õ���60���ڹػ� 
//	//system()- ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ����ڽ�1�����ڹػ���������룺��������ȡ���ػ�\n������>:");
//		scanf("%s", input);
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}