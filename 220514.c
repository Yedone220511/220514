#include <stdio.h>

//int main() //输入三个数按从大到小排列 
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






//int main() //输出1-100之间所有3的倍数的数字 
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






//int main() //求两个数的最大公约数 
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






//int main() //打印1000-2000之间的闰年 
//{
//	int year=0;
//	int count=0;
//	for(year=1000; year<=2000; year++)
//	{
//		//能被4整除并且不能被100整除
//		//能被400整除 
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
//	printf("总共有%d个闰年", count);
//	return 0;
//}
//方法二 
//if(((year%4==0)&&(year%100!=0))||(year%400==0)) // &&表示并且，||表示或者 
//{
//	printf("%d", year);
//	count++
//}





//#include <math.h>
//int main()   //打印100-200之间所有的素数 
//{
//	int i=0;
//	int count=0;
//	for(i=101;i<=200;i+=2) //直接排除偶数，优化算法 
//	{
//		//判断i是否为素数：
//		//1.试除法 
//		int j=0;
//		for(j=2;j<i;j++) //条件可以改为j<=sqrt(i)，只要算到i的平方根即可，优化算法 
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
//	printf("一共有%d个素数", count);
//	return 0;
//}





//int main() //1-100之间有多少个数字9 
//{
//	int i=0;
//	int count=0;
//	for(i=1;i<=100;i++)
//	{
//		if(i%10==9) //计算个位有几个9 
//		Count++;
//		if(i/10==9) //计算十位有几个9 
//		count++;
//	}
//	return 0;
//}




//计算1-1/2+1/3-1/4......+1/99-1/100
//int main() //方法1 
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

//int main()  //方法2 
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





//int main() //输出一组数里的最大值 
//{
//	int arr[]={1,2,3,-1,5,6,7,8,9,10};
//	int max=arr[0]; //定义max的值为其中的一个数，再拿其他数跟max比较 
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






//int main() //输出乘法口诀表 
//{
//	int i=0;
//	int n=0;
//	for(i=1;i<=9;i++)
//	{
//		for(n=1;n<=i;n++)
//		{
//			printf("%d*%d=%2d ", i, n, i*n);
//			//%d*%d=%2d，等号后面的值为2位数，只有1位的话会用空格补齐
//			//%d*%d=%-2d 等号后面的值为2位数，但向左对齐，紧跟等号 
//		}
//		printf("\n");
//	}
//	return 0;
//}





//int main() //从一组数中找一个数k 
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到！");
//	}
//	return 0;
//}






//设计一个猜数字游戏 
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
	ret=rand()%100+1; //生成的是0-32767之间的数，%100+1，调整为1-100之间 
	while(1)
	{
		printf("请猜数字：>");
		scanf("%d", &guess);
		if(guess>ret)
		{
			printf("猜大了\n");
		}
		else if(guess<ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	}
 } 
 
int main()
{
	int input=0;
	srand((unsigned int) time(NULL)); //拿时间戳来设置随机数的生成起点 
	do
	{
		menu();
		printf("请选择>:\n");
		scanf("%d", &input);
		switch(input)
		{
			case 1:
				game();
				break;
		    case 0:
		    	printf("退出游戏\n");
		    	break;
		    default:
		    	printf("选择错误\n");
		    	break;
		}
			
	}
	while(input);
	return 0;
}





//goto语句：可以任意跳到任意地方，尤其是多层嵌套中，要多个break才能层层退出，goto可以直接跳出去 
//int main()
//{
//	printf("hello bit\n");
//	goto again;          //直接跳过打印“你好” 
//	printf("你好\n");
//	again:
//	printf("hehe\n");
//	return 0;
//}




//
//#include <string.h>
//#include <stdlib.h>

//int main() 一分钟内关机，输入我是猪取消关机 
//{
//	//shutdown -s -t 60 表示设置电脑60秒内关机 
//	//system()- 执行系统命令
//	char input[20]={0};
//	system("shutdown -s -t 60"); 
//again:
//	printf("请注意，你的电脑在将1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//	scanf("%s", input);
//	if(strcmp(input, "我是猪")==0)
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
//int main() //用while而不用goto语句实现 
//{
//	//shutdown -s -t 60 表示设置电脑60秒内关机 
//	//system()- 执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在将1分钟内关机，如果输入：我是猪，就取消关机\n请输入>:");
//		scanf("%s", input);
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//	return 0;
//}