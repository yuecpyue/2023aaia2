//2485. Find the Pivot Integer
int pivotInteger(int n) {
    int total=0;
    for(int i=1;i<=n;i++){
        total+=i;
    }
    int left=0;
    for (int i=1;i<=n;i++){
        left+=i;
        if(left*2-i==total){
            return i;
        }
    }       
    return -1;
}