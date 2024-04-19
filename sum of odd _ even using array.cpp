#include <iostream>
using namespace std;
int main(){
int myArray[10];
int evenSum=0,oddSum=0;
cout<<"Enter 10 integer numbers : "<<endl;
for(int i=0; i<10; i++){
    cin>>myArray[i];
    if(myArray[i]%2==0){
        evenSum=evenSum+myArray[i];
    }
    else{
        oddSum=oddSum+myArray[i];
    }
}

cout<<"The Sum of even numbers :"<<evenSum<<endl;
cout<<"The sum of odd numbers :"<<oddSum<<endl;


return 0;
}
