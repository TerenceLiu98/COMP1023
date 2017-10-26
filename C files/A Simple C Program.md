# A Simple C Program

[![a.png](https://i.loli.net/2017/09/27/59cb36e378f0a.png)](https://i.loli.net/2017/09/27/59cb36e378f0a.png)
## Header file: `#include <stdio.h>`
A header file: stdio.h- standard input/output header

`#include <stdio.h>`
It is a preprocessing instruction, it contains information about input and output functions, such as `printf()` for the compiler to use,

The effect of `#include <stdio.h>` is the same as if you had type the entire contents of the ‘stdio.h’ file into your code.
- - - -

## A comment
There two type of comment code :
	1. `/*...*/` : enclose comments - ignored by the compiler. They can be placed anywhere
	Examples: 
	`/*This is a C comment.*/` 
	2. `//` : C99 added a second style of comments, one popularised by  C++ and Java. The new style uses the symbols `//`  to create comments that are confined to a single line:
	Examples: 
	`//Here is a commentconfined to one line.`
	::This form doesn’t extend over more than one line.::

- - - -

## The body of the function
**Braces**
`int main(void)`
`{ // the start of the main function` 
`Statement;` 
`}//the end of the main function`
Only braces ({ }) work for this purpose, not parentheses( ( ) ) and not brackets ( [ ] )

**Declarations**
	int: A C keyword. You can’t user them for other purposes.
	Num: An identifier. That is, a name you select for a variable, a function, 		or some other entity,
**Assignment**
`num =1;//Assign the value 1 to the variable` 

**Function call**
`printf("I am a simple");// the cursor on the same line` 
`printf("computer.\n");/*move the cursor to the beginning of the next line*/`
`printf("My favorite number is %d because it is first.\n",num);` 
The % alerts the program that a variable is to be printed at that location, and the d tells it to print the variable as a decimal ( base 10 ) integer.

**Return**
`return 0;//return value 0.`

- - - -
## A Simple Example
```
#include <stdio.h>
int main(void) /* a simple programme *／
{
int num; /* define a variable called num * /
num = 1; /* assign a value to num */
printf("I am a simple "); /* user the printf() function */
printf("computer.\n");
printf("My favorite number is %d because it is 
first.\n",num);
ruturn 0;
} 
```

- - - -

## Multiple Declaration
Example:

```
#include <stdio.h>
int main(void)
{
         int feet, fathoms; //multiple declarations
         
          fathoms = 2 ;
          feet =6*fathoms;
          printf("There are %d feet in %d fathoms! \n". feet, fathoms);
           printf("Yes, I said %d feet!\n", 6*fathoms);/* the value printed doesn't have to be a variable */
 return 0;
} 
```

- - - -

## Debugging
Programme errors often are called bugs, and finding and fixing the errors is called debugging.
### Syntax Errors
Use valid C symbols in the wrong places. Do not follow C’s rules
### Semantic Errors
Semantic errors are errors in meaning. Follow the rules of C correctly but to an incorrect end.
The compiler does not detect semantic errors, because they don’t violate C rules.
