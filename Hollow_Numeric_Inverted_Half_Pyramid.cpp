#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            if (row == 0 || col == 0)
            {
                cout<<col+row+1;
            }
            else if (col == n-row-1)
            {
                cout<<n;
            }
            
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
        
    }
    
}