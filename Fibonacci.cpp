#include <iostream>
using namespace std;
int main(){
int temp,first=0,second=1,p;
cout<<"Enter the limit :"<<" ";
cin>>p;
while(first<=p){
    cout<<first;
    temp=first;
    first=second;
    second=second+temp;
}

return 0;
}
