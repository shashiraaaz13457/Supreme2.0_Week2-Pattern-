#include<iostream>
using namespace std;

int main (){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    //1st method

    // for (int rows = 0; rows < n; rows++)
    // {
    //     for (int spaces = 0; spaces < n-rows-1; spaces++)
    //     {
    //         cout<<" ";
    //     }
        
    //     for (int col = 0; col < 2*rows+1; col++)
    //         {
    //             if ( col == 0 || col == 2*rows )
    //             {
    //                 cout<<"*";
    //             }
    //             else if (rows == n-1)
    //             {
    //                 if (col < n)
    //                 {
    //                     cout<<" *";
    //                 }
    //                 else{
    //                     break;
    //                 }
    //             }
                
    //             else{
    //                 cout<<" ";
    //             }
                
                
    //         }
    //     cout<<endl;
        
    // }

    // 2nd method

    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < 2*n-1; j++)
        {
            if (j<(n-i-1))
            {
                cout<<" ";
            }
            else if (k < (2*i+1))
            {
                if (k == 0 || k == 2*i || i==n-1)
                {
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            
            else{
                cout<<" ";
            }
             
        }
        cout<<endl;
        
        
    }
    
    
}