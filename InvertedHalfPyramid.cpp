#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < n-rows; col++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    
}