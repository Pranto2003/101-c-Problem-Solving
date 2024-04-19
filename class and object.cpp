#include <iostream>
#include <string.h>
using namespace std;
class Employees{
int salary;
string address,hiredate,dob,phone;
public:
void display(int a, string b,string c,string d, string e){
salary=a;
address=b;
hiredate=c;
dob=d;
phone=e;
cout<<"The salary of the employee is :"<<salary<<endl;
cout<<"The address of the employee is :"<<address<<endl;
cout<<"The hiredate of the employee is :"<<hiredate<<endl;
cout<<"The date of the birth of the employee is :"<<dob<<endl;
cout<<"The phone number of the employee is :"<<phone<<endl;
    }
};
class Departments{
string dname,location;
int budget;
public:
void display1(int a,string b, string c){
budget=a;
dname=b;
location=c;
cout<<"The name of the department is :"<<dname<<endl;
cout<<"The budget of the department is :"<<budget<<endl;
cout<<"The location of the department is :"<<location<<endl;
}
};
class Branches{
string location;
int managerID;
public:
void display2(int a, string b){
managerID=a;
location=b;
cout<<"The manager id is :"<<managerID<<endl;
cout<<"The location is :"<<location<<endl;
}

};
int main(){
    Employees emp;
    emp.display(50000,"Banani","12/4/2019","9/4/1990","01789931813");
    Departments dep;
    dep.display1(1000000,"FST","Kuratoli");
    Branches bran;
    bran.display2(4913,"Gulshan-2");

return 0;
}
