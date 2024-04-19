#include <iostream>
using namespace std;
class Rectangular{
public:
    int a,b;
    int count=0;
    Rectangular(int a, int b){
    cout<<"The area of Rectangular is :"<<a*b<<endl;
    count++;
     cout<<"Count for Rectangular :"<<count<<endl;
    }

};
class Triangle:public Rectangular{
public:

    Triangle(int a, int b, int c):Rectangular(a,b){
    cout<<"The area of Triangle is :"<<a*b*c<<endl;
    count++;
    cout<<"Count for Triangle :"<<count<<endl;
    }
    ~Triangle(){
    count--;
    cout<<"Destructor count :"<<count<<endl;
    }


};
int main(){
Triangle tri(5,6,7);


return 0;
}
