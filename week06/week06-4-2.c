int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={};//統計數字出現的次數(陣列裡全都是零)
    int best=0;//出現最多次的次數
    for(int i=0;i<numsSize;i++){
        int now =nums[i];
        a[now]++;
        if(a[now]>best) best=a[now];
    }
    int ans=0;
    for(int i=0;i<numsSize;i++){
        int now=nums[i];
        if(a[now]==best) ans++;//如果它出現的次數是best,就+1
    }
    return ans;
}