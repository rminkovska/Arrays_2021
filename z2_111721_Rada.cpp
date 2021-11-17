#include <iostream>
using namespace std;
int main()
{
    int arr[20][30];
    int n;
    int m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    int proizv[n];
    for(int i=0; i<n; i++)
    {
         int pr=1;
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]>=0)
            {
                pr=pr*arr[i][j];
            }
            proizv[i]=pr;
        }
    }
     int br_nech[m];
     for(int j=0; j<m; j++)
    {   
        int br=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i][j]%2!=0 && arr[i][j]<0)
            {
               br++;
            }
        }
        br_nech[j]=br;
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
                cout<<arr[i][j]<<'\t';
                
        }
        cout<<"->"<<proizv[i];
        cout<<endl;
   }
   for(int j=0; j<m; j++)
        {
            cout<<br_nech[j]<<'\t';
        }
    return 0;
}
