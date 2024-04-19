#include <iostream>
using namespace std;
int main(){
int A[5],B[5],AB[5];
cout<<"Enter the values of A :"<<endl;
for(int i=0; i<5; i++){
    cin>>A[i];
}
cout<<endl;
cout<<"Enter the values of B :"<<endl;
for(int i=0; i<5; i++){
    cin>>B[i];
}
cout<<endl;
for(int i=0; i<5; i++){
    AB[i]=A[i]+B[i];
    cout<<"The sum is :"<<AB[i]<<endl;
}

return 0;
}
