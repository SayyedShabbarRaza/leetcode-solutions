class Solution {
public:
    bool isPowerOfTwo(int n) {
        return (n > 0) && ((n & (n - 1)) == 0) ;
    }
};

// 1 =>  0000 0001
// (n-1) 0000 0000 &=>0000 0000 =0 True

// 3 =>  0000 0011
// (n-1) 0000 0010 &=>0000 0010 =2 False

// 16 => 0001 0000
// (n-1) 0000 1111 &=>0000 0000 =0 True
