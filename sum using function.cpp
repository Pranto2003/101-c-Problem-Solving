#include <iostream>
using namespace std;

int sum(int a, int b){
int total=a+b;
return total;
}
int main(){
int value1,value2,total;
cout<<"Enter two values :"<<endl;
cin>>value1>>value2;
total=sum(value1, value2);
cout<<"The sum is :"<<sum(value1, value2)<<endl;




return 0;
}
