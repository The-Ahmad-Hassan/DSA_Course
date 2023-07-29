#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void merge(vector<int>& num1, vector<int>& num2, int m, int n){
    int i = m - 1, j = n - 1;


    while(i >= 0 && j >= 0){
        if(num1[i] > num2[j]){
        

        }
        else{
        
            num1[i--] = num2[j--];
          if(j==0){
              
            swap(num1[i],num1[i-1]);
              num1[2]=num2[0];
              break;

            }

          }
        
        }
    }
    


void print(vector<int>& num1, int n){
    for(int i = 0; i < n; i++){
        cout << num1[i] << " ";
    }
}

int main(){
    vector<int> num1 = {1, 2, 3, 0, 0, 0};
    vector<int> num2 = {2, 4, 5};
    
    merge(num1, num2, 6, 3);
    
    print(num1, 6);
    
    return 0;
}