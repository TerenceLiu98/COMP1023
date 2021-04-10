#include <stdio.h>

int main (void){
    int var = 20;
    int *ip;
    ip = &var;
    printf("Address of var is: %p\n", &var);
    printf("Address stored in ip is: %p\n", ip);
    printf("value of *ip is: %d\n", *ip);
    printf("size of ip: %ld\n", sizeof(ip));
    return 0;
}