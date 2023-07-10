#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
    bool uniqueOccurrences(vector<int>& arr) {
     int i=0;
     vector<int> ans;

sort(arr.begin(),arr.end());
while(i<arr.size()){
int count=1;
for(int j=i+1; j<arr.size(); j++){

if(arr[i]==arr[j]){

  count++;
}
}

ans.push_back(count);
i=count+i;

}

// dobara sort karde

sort(ans.begin() , ans.end());


for(int i=0; i<ans.size(); i++){

if(ans[i]==ans[i+1]){
  return false;
}


}
return true;


    }



int main(){

vector<int> arr= {-1,-2,-1,-2,-1,3};
cout<<uniqueOccurrences(arr);

}