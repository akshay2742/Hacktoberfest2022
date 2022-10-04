#include<bits/stdc++.h>
using namespace std;
vector<int> mergeSortedArray(int m,int n,vector<int> v1,vector<int> v2)
{
    vector<int>las;
    int j=0,k=0;
    for(int i=0;i<m+n;i++)
    {
        if(v1[j]>v2[k] && v2[k]!=0)
        {
            las.push_back(v2[k]);
            k++;
        }
        else if(v1[j]<=v2[k] && v1[j]!=0)
        {
            las.push_back(v1[j]);
            j++;
        }
    }
    for(int i=j;i<m;i++)
    {
        las.push_back(v1[i]);
    }
    for(int i=k;i<n;i++)
    {
        las.push_back(v2[i]);
    }
    return las;
}
int main()
{
    vector<int>vec1;
    vector<int>vec2;
    vector<int>las;
    cout<<"Enter 1st array size"<<endl;
    int m,n,x;
    cin>>m;
    cout<<"Enter 1st array elements"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>x;
        vec1.push_back(x);
    }
    cout<<"Enter 2nd array size"<<endl;
    cin>>n;
    cout<<"Enter 2nd array elements"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec2.push_back(x);
    }
    las=mergeSortedArray(m,n,vec1,vec2);
    for(int i=0;i<las.size();i++)
    {
        cout<<las[i]<<endl;
    }
}