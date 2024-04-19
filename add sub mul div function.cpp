#include <iostream>
using namespace std;
int func(int a,int b){
int sum=a+b;
int sub=a-b;
int mul=a*b;
int div=a/b;
cout<<"The sum is :"<<sum<<endl;
cout<<"The substraction is :"<<sub<<endl;
cout<<"The multiplication is :"<<mul<<endl;
cout<<"The division is :"<<div<<endl;
}
int main(){
int c,d;
cout<<"Enter two numbers :"<<endl;
cin>>c>>d;
func(c,d);
return 0;
}
