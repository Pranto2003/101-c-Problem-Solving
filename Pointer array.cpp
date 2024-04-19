#include <iostream>
using namespace std;
int main(){
int x=5,y=10;
cout<<"Value of X :"<<x<<endl;
cout<<"Address of X :"<<&x<<endl;
cout<<"Address of Y :"<<&y<<endl;

int *ax=&x;
int *ay=&y;
int *p;
p=NULL;
cout<<"Value of AX :"<<*ax<<endl;
cout<<"Value of AY :"<<*ay<<endl;
cout<<"Address of AY :"<<&ay<<endl;

*ax=20;
*(ax-1)=30;
*(ay+1)=0;
cout<<"Value of X :"<<x<<endl;
cout<<"Value of Y :"<<y<<endl;

int size;
cin>>size;
int *arr=new int [size];
arr[20]=20;
cout<<arr[20]<<endl;

delete arr;


return 0;
}

