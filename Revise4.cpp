#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n-row; col++)
        {
            if (col == n-row-1 || col == 0 ||row==0)
            {
                cout<<row+col+1;
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
}