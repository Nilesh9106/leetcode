class Solution {
public:
    int tribonacci(int n) {
        int arr[n+1];
        arr[0]=0;
        for(int i=1;i<=n;i++){
            if(i==1 or i==2){
                arr[i]=1;
            }else
                arr[i]=arr[i-1]+arr[i-2]+arr[i-3];
        }
        return arr[n];
    }
};