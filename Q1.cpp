#include <iostream>
#include <stdio.h>
using namespace std;
int main(int argc, const char **argv, const char **envp){
    // Your code here!
    int a = 3;
    int b = 5;
    int c = 0;
    int f = (unsigned)a >> 31;
    a = a+f;
    int d = a >> 1;
    c = a*b - d;
    printf("%d",c);
}
