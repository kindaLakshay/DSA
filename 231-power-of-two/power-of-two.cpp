class Solution {
public:
    bool isPowerOfTwo(int n) {
        long int arr[32];
        for(long int i = 0; i<31;i++){
            arr[i] = pow(2,i);
            // cout<<arr[i];
            if(n==arr[i])
            return true;
            
        }
        
        return false;
    }
};