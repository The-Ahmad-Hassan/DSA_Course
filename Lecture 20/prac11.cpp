#include<iostream>
#include<vector>

using namespace std;

   void merge(int nums1[], int m, int nums2[], int n) {
          int k=m+n-1;
  cout<<"K -> "<< k <<endl;
   int i=m-1,j=n-1;
  cout<< "i and j "<< i  <<" "<< j<<endl; 
  while(i>=0  && j>=0)
   {
   
  
 if(nums2[j]>=nums1[i])
   {    
    nums1[k--]=nums2[j--];
     
    }
  
   else  {
   nums1[k--]=nums1[i--];
   
   
  }
    
    }
  
  while(i>=0){ 
    nums1[k--]=nums1[i--];
   }

while(j>=0){
  nums1[k--]=nums2[j--];
   
   }
for(int i=0; i<6; i++)
cout<<nums1[i]<<" ";
}



int main(){
int  nums1[6]={1,4,5,0,0,0};
 int m=sizeof(nums1)/sizeof(nums1[0]);
int nums2[3]={5,5,6};

 int n=sizeof(nums2)/sizeof(nums1[0]);
merge(nums1,3,nums2,n);




}