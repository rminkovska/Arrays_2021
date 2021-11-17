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
    int br_nula[4];
    for(int i=0; i<4; i++)
    {  
        int br=0;
        for(int j=0; j<5; j++)
       {
          if(a[i][j]==0)
          br++;
       }
       br_nula[i]==br;
    }
     for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
       {
          cout<<"  =>"br_nula[i]
       }
    }
    
}
