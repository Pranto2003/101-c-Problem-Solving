#include <iostream>
using namespace std;
int main(){
int sum=0;
int myArray[10];
cout<<"Enter 10 integer numbers below :"<<endl;
for(int i=0; i<10; i++){
    cin>>myArray[i];
    sum=sum+myArray[i];
}
cout<<"The total sum is :"<<sum<<endl;


return 0;
}
