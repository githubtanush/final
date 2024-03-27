#include<iostream>
using namespace std;
void inputarray(int brr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout<<"Enter the element for row "<<i<<" and col "<<j<<" is : ";
            cin>>brr[i][j];
        }
    }
}
void rowwiseSum(int arr[1000][1000],int row,int col){
    for(int i = 0; i < row;i++){
        int sum = 0;
        for(int j = 0; j < col;j++){
            sum = sum + arr[i][j];
        }
        cout<<"The sum for row "<<i <<" is : "<<sum<<endl;
    }
}

int main(){

    int crr[1000][1000];
    int row;
    cout<<"how many rows you want in matrix : ";
    cin>>row; 
    int col;
    cout<<"how many cols you want in matrix : ";
    cin>>col;
    inputarray(crr,row,col);
    rowwiseSum(crr,row,col);

return 0;
}