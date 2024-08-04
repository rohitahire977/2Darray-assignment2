//rotate matrix about 90degree anticlock wise.
//anticlockwise=transpose+reverse every column
#include<iostream>
using namespace std;
/*
   123    147    369
   456    258    258
   789    369    147     */
int main(){
    int m,n;
    cout<<"enter no. of rows:";
    cin>>m;
    cout<<"enter no. of columns:";
    cin>>n;
    int arr[m][n];
    int brr[m][n];
    cout<<"enter elements of matrix1:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"matrix1:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        //transpose.
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                brr[i][j]=arr[j][i];
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        //reverse every column.
        for(int k=0;k<n;k++){
            int j=0;
            int i=n-1;
            while(j<=i){
                int temp=brr[j][k];
                brr[j][k]=brr[i][k];
                brr[i][k]=temp;
                j++;
                i--;
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<brr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
}