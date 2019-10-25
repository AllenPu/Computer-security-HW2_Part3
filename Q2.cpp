#include<iostream>
using namespace std;
int main(int argc, const char **argv, const char **envp)
{
 int c[]={12,15,221,3,432,54,16,67};
 int size_c=sizeof(c);
 int max=*c;

 int i;
 int temp;
 for(i=0;i<size_c;i++)
 {
  temp=*(c+i);
  if(temp>max)
   max=temp;
 }
 cout<<"max="<<max<<endl;

}