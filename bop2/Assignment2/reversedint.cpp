#include<iostream>
using namespace std;
int reverse_integer(int n){
    int answer = 0;
    bool isNeg = false;
    //So we can improve the overflow conditions
    if(n<=INT_MIN){
        return 0;
    }
    if(n<0){
        isNeg = true;
        n = -n;
    }
        while(n!=0){
            if(answer>INT_MAX/10){
                return 0;
            }
            int rem = n % 10;
            answer = answer*10+rem;//Signed integer overflow
            n = n/10;
        }
        return isNeg?-answer:answer;
}

int main(){
    int n;
    cout<<"Enter the number for which u want the reverse : ";
    cin>>n;
    int reversed = reverse_integer(n);
    cout<<"The reverse of the given number "<<n<< " is "<<reversed<<endl;

return 0;
}