#include <iostream>
using namespace std;
int main() 
{
    int arr[20][10];
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout<<arr[i][j]<<'\t';
        }
        cout<<endl;
    }
    int mini[m];
    for(int j=0; j<m; j++)
    {   
        mini[j]=arr[0][j];
        for(int i=0; i<n; i++)
        {
            if(arr[i][j]<mini[j])
            {
                mini[j]=arr[i][j];
            }
        }
    }
    for(int j=0; j<m; j++)
    {
             cout<<mini[j]<<'\t';
    }
    cout<<endl;
    int br[m];
    for(int j=0; j<m; j++)
    {   
        for(int i=0; i<n; i++)
        {
            if(arr[i][j]!=arr[i][j+1])
            {
                br[j]++;
            }
        }
    }
    for(int j=0; j<m; j++)
    {
            if(br[j]>0)
            {
                cout<<"Yes"<<'\t';
            }
            else
            {
                 cout<<"No"<<'\t';
            }
    }
    return 0;
}
