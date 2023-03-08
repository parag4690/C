#include <bits/stdc++.h>
using namespace std;


class Solution{
  public:
  long long int wineSelling(vector<int>& Arr, int N){
      //Code here.
      long long int ans=0;
      vector<pair<int , int>> sell , buy;
      for(int i=0; i<N; i++){
          if(Arr[i]<0) sell.push_back({Arr[i] , i});
          else buy.push_back({Arr[i] , i});
      }
      sort(sell.begin() , sell.end());
      sort(buy.begin() , buy.end() );
      int i=0 , j=0;
      
      for(int i=0; i<sell.size(); i++){
        cout<<sell[i]<<' ';
      } cout<<endl;

      

    //   while(i<sell.size() && j<buy.size()){
    //       if(abs(sell[i].first)<=buy[j].first){
    //           ans+=abs(sell[i].first)*(abs(sell[i].second - buy[j].second));
    //           i++; 
    //       }
    //       else {
    //           if(buy[j].first==0){
    //              j++;
    //           }
    //           else{
    //              ans+=abs(buy[j].first)*(abs(sell[i].second-buy[j].second));
    //              sell[i].first=abs(sell[i].first-buy[j].first);
    //           }
    //       }
    //   }
      
      return ans;
  }
};


// 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        long long int ans = ob.wineSelling(arr,n);
        
        cout<<ans<<endl;
    }
}