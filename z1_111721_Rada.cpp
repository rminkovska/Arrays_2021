#include <iostream>
using namespace std;
int main()
{
    int arr[20][15];
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
    
    int br1[n];
    

    for(int i=0; i<n; i++)
    {int br=0;
        for(int j=0; j<m; j++)
        {
            if(arr[i][j]%2==0)
            {
                br++;
            }
            br1[i]=br;
        }
    }
     int sum_nech[m];
     
     for(int j=0; j<m; j++)
    {   
        int sum=0;
        for(int i=0; i<n; i++)
        {
            if(arr[i][j]%2!=0)
            {
               sum=sum+arr[i][j];
            }
        }
        sum_nech[j]=sum;
        
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
                cout<<arr[i][j]<<'\t';
                
        }
        cout<<"->"<<br1[i]<<" chetni";
        cout<<endl;
   }
   for(int j=0; j<m; j++)
        {
            cout<<sum_nech[j]<<'\t';
        }
    return 0;
}
