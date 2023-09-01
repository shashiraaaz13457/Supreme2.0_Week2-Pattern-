#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    for (int rows = 0; rows < n; rows++)
    {
        for (int spaces = 0; spaces < n-rows-1; spaces++)
        {
            cout<<" ";
        }
        
        for (int col = 0; col < 2*rows+1; col++)
            {
                if ( col == 0 || col == 2*rows )
                {
                    cout<<"*";
                }
                else if (rows == n-1)
                {
                    if (col < n)
                    {
                        cout<<" *";
                    }
                    else{
                        break;
                    }
                }
                
                else{
                    cout<<" ";
                }
                
                
            }
        cout<<endl;
        
    }
    
}