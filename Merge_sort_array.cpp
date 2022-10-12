//Inplace merging of two sortd arrays
#include<bits/stdc++.h>
int main()
{
    int a1,m,n,b1;
    std::cin>>a1;
    std::cin>>b1;
    int a[a1];
    int b[b1];
    std::cin>>m;
    std::cin>>n;
    int i,j=0,k;
    for(i=0;i<a1;i++)
    {
        std::cin>>a[i];
    }
    for(i=0;i<b1;i++)
    {
        std::cin>>b[i];
    }
    for(i=m;i<a1;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=1;i<a1;i++)
    {
        k=a[i];
        j=i-1;
        while(j>=0 && a[j]>k)
        {
             a[j + 1] = a[j];
             j = j - 1;
        }
        a[j + 1] = k;
    }
    for(i=0;i<m+n;i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}
