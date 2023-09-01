#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {
        for (int space = 0; space < n-rows-1; space++)
            {
                cout<<" ";
            }
        for (int col = 0; col < rows+1; col++)
            {
                cout<<"* ";
            }
        cout<<endl;
        
    }
    
}