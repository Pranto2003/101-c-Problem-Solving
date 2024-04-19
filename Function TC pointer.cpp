#include <iostream>
using namespace std;

void helloMsg(){
cout<<"Hello Everyone"<<endl;
}

int factorial(int n){
int fact=1;
for(int i=1; i<=n; i++){
    fact=fact*i;
}
return fact;
}

double add(double op1, double op2){
double result=op1+op2;
return result;
}

void swapV(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
cout<<"Inside swapV"<<endl;
cout<<"A :"<<a<<endl;
cout<<"B :"<<b<<endl;

}

void swapR(int *a, int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
cout<<"Inside swapV"<<endl;
cout<<"*A :"<<*a<<endl;
cout<<"*B :"<<*b<<endl;
}

int main(){
    helloMsg();
    int x;
    int n;
    cout<<factorial(6)<<endl;
    cout<< factorial(factorial(3))<<endl;
    x = add(factorial(5),factorial(4));
    cout<<x<<endl;
    cout<<"Add : "<<add(4.5,5.5)<<endl;

    int a,b;
    a=10;
    b=20;
    swapV(a,b);
    cout<<"Inside main"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;

    swapR(&a,&b);
    cout<<"Inside main"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;


return 0;
}



