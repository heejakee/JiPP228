#include <iostream>
using namespace std;

int main(){
    int matrix1[9];
    int matrix2[9];
    int matrix_sum[9];
    cout<<"Input values of the first matrix one by one: ";
    for(int i = 0; i < 9; i++){
        cin>>matrix1[i];
    }
    cout<<"Input values of the second matrix one by one: ";
    for(int j = 0; j < 9; j++){
        cin>>matrix2[j];
    }
    for(int i = 0; i<9;i++){
       matrix_sum[i] = matrix1[i] + matrix2[i];
    }
    for(int i = 0; i < 3; i++){
        cout<<matrix_sum[i]<<" "<<matrix_sum[i+1]<<" "<<matrix_sum[i+2]<<endl;
    }
    return 0;
}