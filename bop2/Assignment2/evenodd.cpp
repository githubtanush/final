#include<iostream>
using namespace std;

bool evenodd(int n){
    // if(n%2==0){
    //     return 0;
    // }
    // return 1;

    if(n&1){
        return false;
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number for which u check that is even or odd : ";
    cin>>n;
    cout<<"The given number is : "<<evenodd(n)<<endl;
return 0;
}