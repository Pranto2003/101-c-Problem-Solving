#include <iostream>
using namespace std;
int main(){
int max=0,i;
int myArray[7]={-99, 45, 100, 37, 89, -327, 245};
for(i=0; i<7; i++){

    if(myArray[i]>max){
        max=myArray[i];
    }
}
cout<<"The Biggest Integer is :"<<max<<endl;


return 0;
}
