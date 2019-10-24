#include<iostream>
using namespace std;
int fun(int* a, int b, int c);
int main(int argc, const char **argv, const char **envp)
{
    int a,b,c;
    int arr[100];
    int i;
    b = 100;
    c = 7;
    for(i=0;i<b;i++){
        arr[i] = i+1;
    }
    a = fun(arr, b, c);
    printf("%d\n",a);
    system("pause");
    return 0;
    
    
}

int fun(int* arr, int len1, int len2){
    int a=0;
    int b=0;
    int c,i;
    for(i = 0; i<len1; i++){
        c = 1;
        while( c<len2 ){
            while( !arr[b]){
                b = (b+1)%len1;
            }
            ++c;
            b = (b+1)%len1;
        }
        while(!arr[b]){
            b = (b+1)%len1;
        }
        a = arr[b];
        
    }
    return a;
    
}