#include <iostream>
using namespace std;
int main(){
int *a,*b,c,d,sum,sub,mul,div;
cout<<"Enter any two numbers :"<<endl;
cin>>c>>d;
a=&c;
b=&d;
sum=*a+*b;
sub=*a-*b;
mul=(*a)*(*b);
div=*a/(*b);
cout<<"The sum is :"<<sum<<endl;
cout<<"The sub is :"<<sub<<endl;
cout<<"The mul is :"<<mul<<endl;
cout<<"The div is :"<<div<<endl;

return 0;
}
