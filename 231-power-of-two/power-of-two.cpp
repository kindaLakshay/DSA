// class Solution {
// public:
//     bool isPowerOfTwo(int n) {
//         long int arr[32];
//         for(long int i = 0; i<31;i++){
//             arr[i] = pow(2,i);
//             // cout<<arr[i];
//             if(n==arr[i])
//             return true;
            
//         }
        
//         return false;
//     }
// };

class Solution {
public:
    bool isPowerOfTwo(int n) {
        bitset<64> binary(n);
        if(__builtin_popcount(n)==1&&n>0) return true;
        return false;
        
    }
};