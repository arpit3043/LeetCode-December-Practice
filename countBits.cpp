class Solution {
    private:
    int countBits(int a, int b) {
        int ans = 0;
        int count = 0;
        ans = a^b;
        while(ans>0) {
            count= count + (ans&1);
            ans = ans>>1;
        }
        return count;
    }
    
    public:
    // Function to find number of bits needed to be flipped to convert A to B
    int countBitsFlip(int a, int b) {
        // Your logic here
        return countBits(a, b);
    }
};
