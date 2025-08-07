#include<iostream> 
#include<vector> 
#include<algorithm> 

using namespace std; 

class Solution{
public: 
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
      int n = candies.size(); 
      vector<bool> res(n, false); 
      int max_candy =0; 
      for(int candy: candies){
        max_candy = max(max_candy, candy); 
      }
      for(int i=0; i<n;++i){
        if(candies[i]+extraCandies >= max_candy) res[i]=true; 
      }
      return res; 
    }
};
int main(){
  vector<int> candies = {2,3,5,1,3};
  int extraCandies= 3; 
  Solution sol; 
  vector<bool> res= sol.kidsWithCandies(candies, extraCandies); 
  for(bool h:res){
    cout << boolalpha << h << "," ; 
  }
  cout << endl; 
  return 0; 
}
