#include <iostream>
#include <string.h>
using namespace std;
int main(){
char string[1000];
int count=1;
cout<<"Enter any sentence :"<<endl;
gets(string);
for(int i=0; i<=strlen(string); i++){
    if(string[i]==' '){
        count++;
    }
}
cout<<count<<endl;

return 0;
}

