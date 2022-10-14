#include<bits/stdc++.h>
#define ll long long int
using namespace std; 
int main(){
      ll n1;
      cout<<"enter the size of first array:\n";
      cin>>n1; 
      multiset <ll> ms;
      cout<<"enter the values of first array:\n";
      for(ll i=0;i<n1;i++){
         ll x;
         cin>>x;
         ms.insert(x);
          
      }  

      ll n2;
      cout<<"enter the size of second array:\n";
      cin>>n2;
      cout<<"enter the values of second array:\n";
      for(ll i=0;i<n2;i++){
         ll x;
         cin>>x;
         ms.insert(x);
      }
      
      for(auto val:ms){
        cout<<val<<" ";
      }

}