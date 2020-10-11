/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n, i, j;
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<=n-2-i;j++)
        {
            if(j==0||j==n-2-i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
