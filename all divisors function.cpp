#include <iostream>
using namespace std;
int divisor(int a){
    cout<<"The divisors are :"<<endl;
for(int i=1; i<=a; i++){
    if(a%i==0){
        cout<<i<<endl;
    }
}
}
int main(){
int b;
cout<<"Enter any number :"<<endl;
cin>>b;
divisor(b);

return 0;
}
