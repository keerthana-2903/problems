int maxSubArray(int* nums, int n){
    int sum=0;
    int numSize=nums[0];
    for(int i=0;i<n;i++){
        sum+=nums[i];
        if(sum > numSize) numSize=sum;
        if(sum<0) sum=0; 
    }
    return numSize;

}
