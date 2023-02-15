class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int c=0;
        int n=num.size();
        
        for(int i=n-1;i>=0;i--){
            int t = k%10;
            k/=10;
            num[i]+=(t+c);
            c=0;
            if(num[i]>9){
                c=num[i]/10;
                num[i]=num[i]%10;
            }
            
        }
        while(k>0){
            int s = (k%10) + c;
            c=0;
            k/=10;
            if(s>9){
                c=s/10;
                s=s%10;
            }
            num.insert(num.begin(),s);
        }
        if(c>0){
            num.insert(num.begin(),c);
        }
        return num;
    }
};