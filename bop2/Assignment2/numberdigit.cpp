#include<iostream>
using namespace std;

int formNumberfromdigit(int n){
    int num = 0;
    for(int i = 0; i < n;i++){
        cout<<"Enter digit : "<<i+1<<" : ";
        int digit;
        cin>>digit;
        num = num * 10 + digit;
        cout<<"Number created so far : "<<num<<endl;
    }
    return num;
}

int main(){

    int n;
    cout<<"Enter number of digits you want to enter : ";
    cin>>n;
    int number = formNumberfromdigit(n);
    cout<<"The number created after entering the digits : "<<number<<endl;

return 0;
}