#include<iostream>//preprocessor directive - include and these line full mean that we include these lines before start execution of the programme
using namespace std;//this specify that kon si tijori mein se hm check kr rah hai jeise hmna include kiya to uske baad cout vgera ka meaning kaha par pada hai to that is namespace
int main(){//starting point of the programme written with main and return type before it 
    int num;
    cout<<num<<endl;//when we not initialize it it can take any garbage value

    char a;
    //a = 'bjsk';//if u written like this in char then it only take the last value before the commaa but this way is also wrong
    char b='s';
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<"size of "<<sizeof(a)<<endl;
    cout<<"size of "<<sizeof(b)<<endl;

    //operators
    //Arithmetic operators
    int e = 4;
    int f = 7;
    cout<<e+f<<endl;
    cout<<e-f<<endl;
    cout<<e*f<<endl;
    cout<<e/f<<endl;
    cout<<e%f<<endl;
    
    //Relational operators
    cout<<(e<f)<<endl;
    cout<<(e>f)<<endl;
    cout<<(e>=f)<<endl;
    cout<<(e<=f)<<endl;
    cout<<(e!=f)<<endl;
    cout<<(e==f)<<endl;

    //Assignment operator
    int m = 4;

    //Logical operator
    cout<<(e&&f)<<endl;
    cout<<(e||f)<<endl;
    cout<<(!e)<<endl;

    return 0;//terminate point of the programme
}