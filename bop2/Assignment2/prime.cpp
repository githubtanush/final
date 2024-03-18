#include<iostream>
#include<cmath>
using namespace std;
int check_prime(int n){
    //optimized solution
    for(int i = 2; i <= sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}

void print_prime(int n){
    cout<<"The prime number between 1 to n is : ";
    int i = 2;
    for(i = 2; i < n;i++){
    if(check_prime(i)==1){
        cout<<i<<" ";
    }
    }
}

int main(){

    int n;
    cout<<"Enter the number for which u want to check that it is prime or not : ";
    cin>>n;
    if(check_prime(n)==1){
        cout<<"The given number "<<n<<" is the prime number."<<endl;
    }
    else{
        cout<<"The given number "<<n<<" is not the prime number. "<<endl;
    }
    print_prime(n);

return 0;
}