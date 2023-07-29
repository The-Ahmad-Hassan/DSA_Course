int s=0; int sum=0; int ans=-1; 
 for(int i=0; i<n; i++){
   sum +=arr[i];
 }
int e=sum;
int mid=s+(e-s)/2;
while(s<e){

if(isPossible(arr, n,m,mid))
{
 ans=mid;
 e=mid-1;

}

else{

    s=mid+1;
}

mid=s+(e-s)/2;


}
return ans;


}
