#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < n-rows; col++)
        {
            cout<<"*";
        }
        for (int space = 0; space < 2*rows+1; space++)
        {
            cout<<" ";
        }
        for (int col = 0; col < n-rows; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }

    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < rows+1; col++)
        {
            cout<<"*";
        }
        for (int space = 0; space < 2*n-2*rows-1; space++)
        {
            cout<<" ";
        }
        for (int col = 0; col < rows+1; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}