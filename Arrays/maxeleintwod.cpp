#include<iostream>
using namespace std;

int findmax(int arr[][4],int row,int col){
int maxAns = INT_MIN;
for(int i = 0; i < row;i++){
    for(int j = 0; j < col;j++){
        if(arr[i][j]>maxAns){
            maxAns = arr[i][j];
        }
    }
}
return maxAns;
}

int main(){

    int crr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    int row = 3;
    int col = 4;
    int num = findmax(crr,row,col);
    cout<<"Max no. in this array is : "<<num;

return 0;
}