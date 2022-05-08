#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int kadane(int a[],int n){
    int me=0;
    int minnum=INT_MIN;
    stack<int> s;
    stack<int> av;
    double avg=0;

    for (int i = 0; i < n; i++)
    {
        me=me+a[i];
         avg=floor(me/(i+1));
       
        if (me<0)
        {

            me=0;

        }
         s.push(me);
         av.push(avg);
        
        
    }
    int setsize=s.size();
    int sarr[setsize];
    
   
    int c=0;
    
   while (!s.empty())
   {
        sarr[c] = s.top();
      
       s.pop();
       c++;
    }
  int avsize=av.size();
  int avar[avsize];

  int l=0;
while(!av.empty())
  {
      avar[l]=av.top();
      cout<<avar[l]<<endl;
      av.pop();
      l++;
  }
  
  int mx=INT_MIN;
  for (int i = 0; i < setsize; i++)
  {
      mx=max(mx,avar[i]*sarr[i]);
 
  }
  
  return mx;
  
    
}
int main() {
    cout<<"enter a number";
	int n;
    cin>>n;
    int a[n];
    cout<<"enter a array value";
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"your ans is"<<endl;
    cout<<kadane(a,n);
	return 0;
}
