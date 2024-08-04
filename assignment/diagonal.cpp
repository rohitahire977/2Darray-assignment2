//print diagonals of a square matrix.
#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"enter no. of rows/columns:" ;
    cin>>m;
    int square_matrix[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>square_matrix[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(i==j || (i+j==m-1)){
                cout<<square_matrix[i][j]<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}