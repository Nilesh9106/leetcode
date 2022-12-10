/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        
        int l=0 , h=n;
        long long t;
        while(true){
            t = l + (h-l)/2;
            
            if(t==0)break;
            if(guess(t)==0){
                return t;
            }else if(guess(t) == 1){
                l=t+1;
                
            }else{
                h=t;
                
            }
            
        }
        return n;
    }
};