#include <iostream>
using namespace std;
int main() 
{
    int a[4][5];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
       {
          cin>>a[i][j];
       }
    }
    int chislo=10;
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
       {
          a[i][j]=a[i][j]+chislo;
       }
       chislo=chislo+10;
    }
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
       {
          cout<<a[i][j]<<" ";
       }
              cout<<endl;
    }
    return 0;
}
