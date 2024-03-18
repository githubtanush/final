#include<iostream>
using namespace std;

int setbit(int n,int k){
    int mask = 1 << k;
    int answer = n | mask;
    return answer;
}

int main(){
    int n;
    cout<<"Enter the value for which u find kth bit : ";
    cin>>n;
    int k;
    cout<<"Enter the value for how many times you shift the bit : ";
    cin>>k;
    cout<<"The value after setting the kth bit is  : "<<setbit(n,k)<<endl;
return 0;
}