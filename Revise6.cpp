#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2*n-2-row; col++)
        {
            cout<<"*";
        }
        for (int num = 0; num < 2*row+1; num++)
        {
            if (num%2 == 0)
            {
                cout<<row+1;
            }
            else{
                cout<<"*";
            }
            
        }
        for (int col = 0; col < 2*n-2-row; col++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
}