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
      reverse(buy.begin() , buy.end());
      int i=0 , j=0;
      
    //   for(int i=0; i<sell.size(); i++){
    //     cout<<sell[i].first<<' '<<sell[i].second;
    //   } cout<<endl;

    //   for(int i=0; i<buy.size(); i++){
    //     cout<<buy[i].first<<" "<<buy[i].second;
    //   } cout<<endl;

      

      while(i<sell.size() && j<buy.size()){
        // cout<<ans<<endl;
          if(abs(sell[i].first)<=buy[j].first){
              ans+=abs(sell[i].first)*(abs(sell[i].second - buy[j].second));
              buy[j].first=abs(buy[j].first-abs(sell[i].first));
              i++; 
          }
          else {
              if(buy[j].first==0){
                 j++;
              }
              else{
                 ans+=abs(buy[j].first)*(abs(sell[i].second-buy[j].second));
                 sell[i].first=abs(sell[i].first-buy[j].first);
                buy[j].first=0;
                // cout<<buy[j].first<< " "<<abs(buy[j].first-abs(sell[i].first))<<endl; 
              }
          }
      }
      
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