#include <iostream>
using namespace std;
class Area_of_Rectangular{
public:


   virtual void Area(){
 int a,b;
    cout<<"Enter the length and width"<<endl;
    cin>>a>>b;
    cout<<"The area of Rectangular is :"<<a*b<<endl;
    }};
    class Area_of_Circle:public Area_of_Rectangular{
    void Area(){
        int a;
    cout<<"Enter the radius of Circle"<<endl;
    cin>>a;
    cout<<"The area of Circle is :"<<3.14*a*a<<endl;
    }};
    class Area_of_Triangular:public Area_of_Circle{
    void Area(){
    int a,b;
    cout<<"Enter the height and base of triangle"<<endl;
    cin>>a>>b;
    cout<<"The area of Triangular is :"<<0.5*a*b<<endl;
    }

    };

int main();
Area_of_Rectangular *rectangular;
Area_of_Rectangular rect;
rectangular=&rect;
rectangular->Area();
Area_of_Circle circle;
rectangular=&circle;
rectangular->Area();
Area_of_Triangular tri;
rectangular=&tri;
rectangular->Area();

return 0;
}
