//
//  main.c
//  helloworld
//
//  Created by 刘骏杰 on 28/9/2017.
//  Copyright © 2017 刘骏杰. All rights reserved.
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
