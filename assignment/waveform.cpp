#include<iostream>
using namespace std;
/*123 print it as
  456   7 4 1 2 5 8 9 6 3.
  789                        */
int main(){
    int m,n;
    cout<<"enter no. of rows:" ;
    cin>>m;
    cout<<"enter no. of columns:" ;
    cin>>n;
    int arr[m][n];
    cout<<"enter elements of matrix1:";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>arr[i][j] ;
            }
        }
        cout<<"matrix1:"<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" " ;
            }
            cout<<endl;
        }
        cout<<endl;
        for(int j=0;j<n;j++){
            if(j%2!=0){
                for(int i=0;i<m;i++){
                    cout<<arr[i][j]<<" " ;
                }
            }
            else{ 
                for(int i=(m-1);i>=0;i--){
                    cout<<arr[i][j]<<" " ;
                    }
                }
        }
}