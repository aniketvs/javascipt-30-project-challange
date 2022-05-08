#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4]={2,4,-1,-2};
    int m=0;
    int mx=INT_MIN;
    int av;
    int i=3;
    int n;
    for (int i = 0; i < 4; i++)
    {
        m=m+a[i];
        
           av=round(m/(i+1));
            cout<<av<<endl;
        
        
      
      
        if (m<0)
        {
            m=0;
        }
       
    
    }
    
    
}