#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
//1st method(Best method)
    // for (int row = 0; row < n; row++)
    // {
    //     for (int spaces = 0; spaces < n-row-1; spaces++)
    //     {
    //         cout<<" ";
    //     }
    //     int ans ;
    //     for (int col = 0; col < row+1; col++)
    //     {
    //         ans = col+1;
    //         cout<<ans;
    //     }
    //     for (int reverse = ans; reverse > 1; )
    //     {
    //         reverse--;
    //         cout<<reverse;
    //     }
        
    //     cout<<endl;
    // }

    //2nd one
    for (int row = 0; row < n; row++)
    {
        for (int spaces = 0; spaces < n-row-1; spaces++)
        {
            cout<<" ";
        }
        int ans ;
        for (int col = 0; col < row+1; col++)
        {
            ans = col+1;
            cout<<ans;
        }
        for (int col = 0; col < row; col++)
        {
            cout<<row-col;
        }
        
        cout<<endl;
    }
    
    
    
}