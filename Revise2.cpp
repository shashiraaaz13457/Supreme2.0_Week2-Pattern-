#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

//Self solved 
    // for (int rows = 0; rows < n; rows++)
    // {
    //     for (int col = 0; col < 2*rows+1; col++)
    //     {
    //         if (col%2 == 0)
    //         {
    //             cout<<rows+1;
    //         }
    //         else{
    //             cout<<"*";
    //         }
    //     }
    //     cout<<endl;
    // }

    //2nd method
    for (int rows = 0; rows < n; rows++)
    {
        for (int col = 0; col < rows+1; col++)
        {
            if (col == rows)
            {
                cout<<rows+1;
            }
            else{
                cout<<rows+1<<"*";
            }
            
        }
        cout<<endl;
    }
    
}