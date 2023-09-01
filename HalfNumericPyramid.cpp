#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {   
        for (int col = 0; col < rows+1; col++){    
                cout<<col+1<<" ";
            }
        cout<<endl;
        
    }
    
}