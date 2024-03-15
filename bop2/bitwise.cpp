#include<iostream>
using namespace std;

int main(){

    // int a = 2;
    // int b = 3;

    // cout<<(a&b)<<endl;
    // cout<<(a|b)<<endl;

    // int num = 1;
    // cout<<~num<<endl;

    // bool n = 1;
    // cout<<~n<<endl;

    // int c = 5;
    // int d = 5;
    // cout<<(c^d)<<endl;

    //left shift or right shift
    // int a = 100;
    // int ans = a << 2;
    // cout<<ans<<endl;

    // int num = -100;
    // cout<<(num>>1)<<endl;
    // unsigned int n = -100;
    // cout<<(n>>1);


    bool a = 1;
    cout<<(~a)<<endl;//In these cout assume that ~a is an integer

    bool b = 1;
    bool c = (~b);
    cout<<c<<endl;//In this it cannot assume because we give that c is boolean
    

return 0;
}