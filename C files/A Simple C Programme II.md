# A Simple C Programme II
## Calculate the area of a Circle: Radius is 8 and assume that the pi equals to 3.14
### First form: 
```
//
//  main.c
//  helloworld
//
//  Created by TerenceLau on 28/9/2017.
//  Copyright © 2017 TerenceLau. All rights reserved.
//

#include <stdio.h>
#define pi 3.14 // define pi = 3.14

int main(void) //a simple programme
{
    // insert code here...
    int num; //define a variable called num, a interger
    
    int num2; //define a variable called num2, a interger
    
    float area; //define a variable called erea, a float
    
    num = 8;//assign a value to num
    
    num2 = num*num;/*a calculate the num^2 and assign the value to num2*/
    
    printf("%d* %f\n" ,num2,pi);
    
    area = num2*pi;
    
    printf("%f\n",area );
    
    return 0;
}
```

### Second form:
```
//
//  main.c
//  helloworld
//
//  Created by TerenceLau on 28/9/2017.
//  Copyright © 2017 TerenceLau. All rights reserved.
//

#include <stdio.h>

int main(void) //a simple programme
{
    // insert code here...
    int num; //define a variable called num, a interger
    
    int num2; //define a variable called num2, a interger
     
    
    float area; //define a variable called erea, a float
    
    num = 8;//assign a value to num
    
    num2 = num*num;/*a calculate the num^2 and assign the value to num2*/
     
     area = 3.14
    
    printf("%d* %f\n" ,num2,pi);
    
    erea = num2*pi;
    
    printf("%f\n",area );
    
    return 0;
}
```

## A calculator to solve a ]unitary quadratic equation
Time: In the National Holiday
Place: Home
```
//
//  main.c
//  C_study
//
//  Created by 刘骏杰 on 10/10/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,p,q;
    int i;
    printf("A program solveing function set(unitary quadratic equation)\nax?+bx+c=0\n");
    printf("Please enter 'a':\n");
    scanf("%f",&a);
    printf("Please enter 'b':\n");
    scanf("%f",&b);
    printf("Please enter 'c':\n");
    scanf("%f",&c);
    if(a<0)
    {
        a=-a;
        b=-b;
        c=-c;
    }
    printf("Are the equations solved only in the real number range？\nY=1；N=2\n");
    scanf("%d",&i);
    d=b*b-4*a*c;
    p=(-b)/(2*a);
    if(d>0)
    {
        q=(sqrt(d))/(2*a);
        printf("x1=%.9f\n",p+q);
        printf("x2=%.9f\n",p-q);
    }
    else if(d==0)
    {
        printf("x=%.9f\n",p);
    }
    else if(i==1)
    {
        printf("This function has no real root.");
    }
    else if(i==2)
    {
        q=(sqrt(-d))/2*a;
        printf("x1=%.9f+%.9fi\n",p,q);
        printf("x2=%.9f-%.9fi\n",p,q);
    }
    else
    {
        printf("There is a error while input\n");
    }
    return 0;
}
```

