//3005. Count Elements With Maximum Frequency
int maxFrequencyElements(int* nums, int numsSize) {
    int a[101]={};//統計數字出現的次數(陣列裡全都是零)
    int best=0;//出現最多的次數
    for(int i=0;i<numsSize;i++){
        int now =nums[i];
        a[now]++;//統計次數+1
        if(a[now]>best){
            best=a[now];
        }
    }
    int ans=0;
    for(int i=1;i<=100;i++){
        if(a[i]==best){
            ans+=a[i];
        }
    }
    return ans;
}