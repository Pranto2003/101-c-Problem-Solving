#include <iostream>
using namespace std;
int main(){
int sum=0;
for(int i=101; i>=1; i-=2){
    sum=sum+i;
}
cout<<"Sum of the series is :"<<sum<<endl;
return 0;
}
