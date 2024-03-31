//for create char arr 
//create like this 
// char ch[5];



//creation - char ch[10];
//access - ch[index];
//i/p  -  cin>>ch;
//o/p - cout<<ch;
//Null character \0 - ASCII VALUE = 0;
//Character array is more efficient and faster use this because this is memory efficient and faster


#include<iostream>
using namespace std;
int main(){
    //creation 
    char ch[100];
    //input le skte hai for loop se but asi koi need nhi hai 
    //hm side cin bhi likh skte hai asa
    //at the end it automatically add null character which is the special character
    //\0 like this jab bhi hm input lete hai to uske last mein null character automatically add ho jata hai

    //cin>>ch;
    //In normal cin by default delimeter is enter,space and tab so we remove this error by using getline
    //like this 
    //in this by default getline function delimeter is new line
    cin.getline(ch,100);
    //also we print by single line
    cout<<"Printing the value of ch : "<<ch<<endl;
    

    //integer arr
    // int arr[10];
    // for(int i = 0; i < 10;i++){
    //     cin>>arr[i];
    // }
    // for(int i = 0; i < 10;i++){
    //     cout<<arr[i];
    // }
    return 0;
}