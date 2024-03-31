#include<iostream>
#include<string.h>
using namespace std;
void printUppercase(char ch[],int len){
    int index = 0;
    while(ch[index]!='\0'){
        if(ch[index]>='a' && ch[index]<='z'){
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }
}
int findlength(char ch[],int size){
    //int length = 0;
    int index = 0;
    while(ch[index] != '\0'){
        //length++;
        index++;
    }
    return index;
    // int length = 0;
    // for(int i = 0; i < size;i++){
    //     if(ch[i]=='\0'){
    //          break;
    //     }
    //     else{
    //         length++;
    //     }
    // }
    // return length;
}
void replacecharacter(char ch[],int size){
        for(int i = 0; i < size;i++){
            while(ch[i]!='\0'){
                if(ch[i]=='@'){
                    str.replacecharacter(@,)
                }
            }
        }
}
int main(){

    char ch[100];
    //cin>>ch;
    cin.getline(ch,100);
    cout<<"Before convert to Uppercase String is : "<<ch<<endl;
    int len = findlength(ch,100);
    cout<<"length of string is : "<<len<<endl;
    printUppercase(ch,100);
    cout<<"After convert to Uppercase String is : "<<ch<<endl;
    replacecharacter(ch,100);
    cout<<"After replacing @ sign with space is : "<<ch<<endl;
    //Inbuilt function
    cout<<"Printing length : "<<strlen(ch)<<endl;

return 0;
}
