#include <iostream>
using namespace std;
int Even_Odd(int a){
if (a%2==0){
    cout<<"It's an Even number"<<endl;
}
else{
    cout<<"It's an Odd number"<<endl;
}

}
int main(){
    int b;
    cout<<"Enter any number "<<endl;
    cin>>b;
    Even_Odd(b);
return 0;
}
