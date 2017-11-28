\1. Write a C program that asks the user to enter twopositive integers, then compute and display their greatest common divisor(gcd). 

*Entertwo integers: 12 28(input from user)*

*Thegreatest common divisor is: 4(output from the program)*

​    Hint: The Euclidean algorithm is anefficient method for computing the greatest common divisor (GCD). It is basedon the principle that the greatest common divisor of two numbers does notchange if the smaller number is subtracted from the larger number. For example,21 is the GCD of 252 and 105 (252 = 21 × 12; 105 = 21 × 5); since 252 − 105 =147, the GCD of 147 and 105 is also 21. Since the larger of the two numbers isreduced, repeating this process gives successively smaller numbers until one ofthem is zero. Use the Euclidean algorithm to define a function *gcd(a, b)* which returns the gcd of 2positive integers *a & b* followingthe pseudo-code below: 

   1. set the larger number of (a, b) to m, andthe smaller number to n, so that m>n;

   2. divide m by n and obtain the remainder r;

   3. set m=n and n=r, repeat step 2 until r iszero;

   4. return n from the preceding step asgcd(a, b).



```C
#include <stdio.h>  
  
int main(void)  
{  
    int a,b,r;  
    printf("Please input two positive integer：\n");  
    scanf("%d %d",&a,&b);  
    //如果a<b，交换a和b的值  
    if(a<b)  
    {  
        r=a;  
        a=b;  
        b=r;  
    }  
  
    /*辗转相除法，因为r的初始值不为0，所以while语句至少会执行一次  */
    //直至余数为零，跳出循环  
    while(r!=0)  
    {  
        r=a%b;  
        a=b;  
        b=r;  
    }  
  
    //输出最大公约数  
    printf("最大公约数为：%d\n",a);  
  
    return 0;  
}  
```

 

\2. Write a program that reads integers until 0 is entered. After input terminates, the program should report the total numberof even integers (excluding the 0) entered, the average value of the evenintegers, the total number of odd integers entered, and the average value ofthe odd integers.

```c
#include <stdio.h>
#include <ctype.h>

#define STOP 0

int main(void)
{
	int even_count = 0, even_sum = 0, odd_count = 0, odd_sum = 0;
	float even_avg, odd_avg;
	int input;

	printf("Enter integers (0 to stop):\n");
  //当input等于0时，跳出循环
	while(scanf("%d", &input) == 1  && input != STOP)
	{
		if (input % 2 == 0)//2为偶数的公约数
		{
			even_count++;//计算偶数的个数
			even_sum += input;//叠加偶数的sum
		}
		else
		{
			odd_count++;
			odd_sum += input;
		}
	}

	even_avg = even_sum / (float) even_count;
	odd_avg = odd_sum / (float) odd_count;

	printf("Number of even integers: %d\n", even_count);
	printf("Average value of even integers: %.2f\n", even_avg);
	printf("Number of odd integers: %d\n", odd_count);
	printf("Average value of odd integers: %.2f\n", odd_avg);

	return 0;
}
```



 

\3. Have a program request the user to enter an uppercase letter. Use nested loops to producea pyramid pattern like this:

A

ABA

ABCBA

ABCDCBA

ABCDEDCBA

The pattern should extend to the character entered. For example, the preceding pattern would result from aninput value of E. Hint: Use an outer loop to handle the rows. Use three innerloops in a row, one to handle the spaces, one for printing letters in ascendingorder, and one for printing letters in descending order.

 ```C
#include <stdio.h>
int main (void)
{
    char ch;
    int i,j,k,h;
    
    
    printf ("Please input a chracter:\n");
    scanf ("%c",&ch);
    k = ch-'A';
    
    for (i = k;i >= 0;i--)
    {
        for (j=i;j > 0;j--)
        {
            printf (" ");
        }
        for (j=0;j<=k-i;j++)
        {
            printf ("%c",65+j);//这里j的值比原来的差值大了1，所以下面要减去一个1
        }
        for (h=1;h<=k-i;h++)//第一个A，不需要降序打印，所以h置1更好
        {
            printf ("%c",65+j-h-1);
        }
        printf ("\n");
    }
    return 0;
}
 ```

 

\4. Write a C program tocalculate e, the base of the natural log function, using the following formulawith x=1, and sum up to the first 1000 terms, instead of infinite terms. 

![img](file://localhost/Users/liujunjie/Library/Group%20Containers/UBF8T346G9.Office/msoclip1/01/clip_image002.gif)

 ```C
#include "stdio.h"  
  
void main()  
  
{  
    double e = 1.0;             //定义e的初始值  
    double jc = 1.0;            //阶乘  
    int n = 1;  
  
    for (;1/jc >= 1e-7;n++)  
    {  
        jc *= n;            //求n的阶乘  
        e += 1/jc;  
    }  
    printf("e的值为：%lf\n",e);  
}  
 ```





5.Use the following powerseries expansion in a C program to compute sin(x) and cos(x) for any x<1 to an accuracy of 1.0e-5. [Hint: use double data type to make sure you have enoughaccuracy]

![img](file://localhost/Users/liujunjie/Library/Group%20Containers/UBF8T346G9.Office/msoclip1/01/clip_image004.gif)

 ```C
#include<stdio.h>  
#include<math.h>  
#define Pi 3.1415926  
int main()  
{  
    double x,t,a=1.0,a1=1.0;  
    double i,j,m,n,b=-1.0,c=1.0,r1=0.0,r2=0.0;  
    scanf("%lf%lf",&x,&t);  
    while(x>2*Pi)  
    {  
        x=x-2*Pi;//x放到0到2*Pi内    
    }  
    for(i=1;;i=i+2)//奇数   
    {  
        b=0-b;//正负号的转换   
        for(j=i;j>=1;j--)  
        {  
            a=a*(x/j);  
        }  
        // x的几次方除以几的阶乘   
        r1=r1+b*a;  
        //sin的值   
        if(fabs(a)<t)  
        break;  
        a=1.0;  
    }  
    printf("%lf\n",r1);  
    for(m=2;;m=m+2)//从2开始   
    {  
        c=0-c;  
        for(n=m;n>=1;n--)  
        {  
            a1=a1*(x/n);  
        }  
        // x的几次方除以几的阶乘   
        r2=r2+c*a1;  
        //cos的值   
        if(fabs(a1)<t)  
        break;  
        a1=1.0;  
    }  
    printf("%lf\n",r2+1);//加上第一项   
    return 0;  
}  
 ```



\6. Write a program that requests the hours worked in a week and then prints the grosspay, the taxes, and the net pay. Assume the following:

a. Basic pay rate = $10.00/hr

b. Overtime (in excess of 40hours) = ten and a half

c. Tax rate: #15% of the first$300

20% of the next $150

25% of the rest

 ```C
#include<stdio.h>
#define X 400//美元
#define Y 15//40小时后
#define A 300*0.15//前300
#define B (450-300)*0.20+A
#define C 0.25
int main(void)
while(scanf("%d",&hr) == 1)
{
    int hr = 0;
    float b = 0;//含税工资
    printf("Please input how man hrs have you worked.");
    {
        if (hr <= 40)
        {
            b = hr*10;//这里应该是a*10
            printf("%f\n", b);
        }
        else if (hr > 40)
        {
            printf("%d\n", (hr - 40)*Y + X);//工资
            b = (hr - 40)*Y + X;
        }
      break;
    }
    printf("%f\n", b);
    if (b <= 300)
        printf("%f\n", b*(1-0.15));
    else if (b <= 450)
        printf("%f\n", b-(b-300)*0.2-300*0.15);
    else
        printf("%f\n", b-(b - 450)*C-(B));
    return 0;
    //getchar();
    }
}
 ```



 

 

\7. The ABC Mail Order Grocery sells artichokes for \$1.15 per pound, and carrots for  \$1.09 per pound. It gives a 5%discount for orders of \$100 or more prior to adding shipping costs. It charges \$6.50 shipping and handling for any order of 5 pounds or under, \$14.00 shippingand handling for orders over 5 pounds and under 20 pounds, and $14.00 plus$0.50 per pound for shipments of 20 pounds or more. Write a program that uses aswitch statement in a loop such that a response of a lets the user enter thepounds of artichokes desired, b the pounds of beets, c the pounds of carrots,and q allows the user to exit the ordering process. The program should keep trackof cumulative totals. That is, if the user enters 4 pounds of beets and laterenters 5 pounds of beets, the program should use report 9 pounds of beets. Theprogram then should compute the total charges, the discount, if any, theshipping charges, and the grand total. Theprogram then should display all the purchase information: the cost per pound, the pounds ordered, and the cost for that order for eachvegetable, the total cost of the order, thediscount (if there is one), the shipping charge, and the grand total of all the charges.

```C
#include

#include

#define RATE1 2.05            //洋蓟的价格

#define RATE2 1.15            //甜菜的价格

#define RATE3 1.09            //胡萝卜的价格

#define RATE4 6.5             //少于5磅时收取的费用

#define RATE5 14              //5磅到20磅收取的费用

#define RATE6 0.5             //超过20磅续重1磅收取的费用

#define RATE7 0.05            //1-打折优惠

#define BREAK1 100            //打折的价格

#define BREAK2 5              //收取6.5美元时的重量

#define BREAK3 20             //收取14美元的重量

int main(void)

{

char ch;

double a = 0, b = 0, c = 0, u = 0, suma = 0, sumb = 0, sumc = 0, sum = 0, v = 0, h = 0;//三种菜代称，数量（abc)，价格(suma,sumb,sumc,v)，总重(sum)，总价(h)

int num;

double all, money;

printf("****************************************************************\n\n");

printf("Choose your vegetable type:\n");

printf("a) Artichoke                              b) beet\n");

printf("c) carrot                                 s) Bill\n");

printf("q) quit\n");

printf("****************************************************************\n\n");

while ((ch = getchar()) != 'q')

{

if (islower(ch))

{

switch (ch)

{

case 'a':

printf("Please enter the weight (pounds);");

scanf("%lf", &v);

a += v;

suma += (v*RATE1);

break;

case 'b':

printf("Please enter the weight (pounds);");

scanf("%lf", &v);

b += v;

sumb += (v*RATE2);

break;

case 'c':

printf("Please enter the weight (pounds);");

scanf("%lf", &v);

c += v;

sumc += (v*RATE3);

break;

case 's':

u = a + b + c;

sum = suma + sumb + sumc;

if (sum >= BREAK1)

{

h = RATE7*sum;

sum *= (1 - RATE7);

}

if (u < BREAK2)

{

money = RATE4;

sum += RATE4;

}



if (u <= BREAK3&&u >= BREAK2)

{

money = RATE5;

sum += RATE5;

}

if (u > BREAK3)

{

money = (RATE5 + RATE6*(u - BREAK3));

sum += (RATE5 + RATE6*(u - BREAK3));

}

printf("Artichoke($2.05/pounds)          %.2lf            %.2lf\n", a, suma);

printf("Beet($1.15/pounds)               %.2lf            %.2lf\n", b, sumb);

printf("Carrot ($2.05/pounds)            %.2lf            %.2lf\n", c, sumc);

printf("Total cost of order              %.2lf           %.2lf\n", u, suma+sumb+sumc);

printf("discount                                         -%.2lf\n", h);

printf("Freight and packing fees                          %.2lf\n", money);

printf("Total cost                                        %.2lf\n", sum);

a = 0; b = 0; c = 0; sum = 0; suma = 0; sumb = 0; sumc = 0; u = 0; h = 0; money = 0;

break;

default:

printf("Please enter the correct letter!\n");

break;

}

printf("****************************************************************\n\n");

printf("Choose your vegetable type:\n");

printf("a) Artichoke                              b) beet\n");

printf("c) carrot                                 s) Bill\n");

printf("q) quit\n");

printf("****************************************************************\n\n");

}



}

return 0;

 

}

```

 
