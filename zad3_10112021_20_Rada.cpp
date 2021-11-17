#include <iostream>
using namespace std;
int main() 
{
    int a[4][5];
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<4; i++)
       {
          cin>>a[i][j];
       }
    }
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<4; i++)
       {
         a[i][j]=a[i][j]+i+1;
       }
    }
    for(int j=0; j<5; j++)
    {
        for(int i=0; i<4; i++)
       {
         cout<<a[i][j]<<'\t';
       }
       cout<<endl;
    }
    return 0;
}
