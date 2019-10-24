#include <iostream>
#include <stdio.h>
using namespace std;

int main(int argc, char** argv, char** envp) {

    int count = 0x64;
    int a,b,c;
    while (count < 0x3E7) {
        c = count / 100;
        b = (c * -0x64 + count) / 10;
        a = count - count / 10 * 10;
        if (a * a * a +b * b * b + c * c * c == count){
            printf("%d\n", count);
        }
        count += 1;
    }
    return 0;
}
