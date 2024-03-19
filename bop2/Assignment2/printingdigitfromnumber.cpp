#include<iostream>
using namespace std;

void printdigitsofnumber(int n){
    while(n!=0){
        int digit = n%10;
        cout<<"Digit : "<<digit<<endl;
        n /= 10;
    }
}

int main(){

    int n;
    cout<<"Enter the number from which u print all the digits of a given number : ";
    cin>>n;
    printdigitsofnumber(n);

return 0;
}