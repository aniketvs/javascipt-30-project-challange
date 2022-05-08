#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string"<<endl;
    cin>>s;
    int n=s.size();
    int a[n];
    int num;
    string ch;
    for (int i = 0; i < n; i++)
    {
        if (s[i]!='?')
        {ch=s[i];
        num=stoi(ch);
        a[i]=num;
          
        }
        else if (s[i]=='?')
        {
            a[i]=0;
            
        }
        
        
    }
    for (int  j = 0; j < 10; j++)
    {
      for (int k = 0; k < 10; k++)
      {
          int sum =0;int c=0;
          for (int  i = 0; i < n; i++)
          {
              if (s[i]=='?')
              {
              if (c%2==0)
              {
                  a[i]=k;
              }else{
                  a[i]=j;
              }
              c++;
              }
            
              sum=sum*10+a[i];
              
              
          }
          if (sum%11==0)
          {
              cout<<sum<<endl;
          }
          
          
          
      }
      
    }
    
    
}