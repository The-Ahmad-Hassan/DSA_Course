#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool uniqueOccurence(vector<int> & arr, int size){
vector<int> ans;
int i=0;

sort(arr.begin(),arr.end());
while(i<size){
int count=1;

for(int j=i+1; j<size; j++){
if(arr[i]==arr[j]){
    count++;
}
}
ans.push_back(count);
i=count+i;

}

sort(ans.begin(),ans.end());

for(int i=0; i<ans.size()-1; i++){
if(ans[i]==ans[i+1]){
    return 0;
}


}

return 1;




}

int main(){
vector<int> arr={1,2,2,2,2,2,2,2,2,3,3,4,4,4,5,5,5,5,6,6,6,6,6};

cout<<uniqueOccurence(arr,arr.size());

}