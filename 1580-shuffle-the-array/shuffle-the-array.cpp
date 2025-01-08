class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int size=n*2;
        vector<int>shuffle(size);
        int it=0;
        int t=1;
        for(int i=0;i<n;i++){

            shuffle[i+it]=nums[i];
            shuffle[i+t]=nums[i+n];
            it++;
            t++;
        }
        return shuffle;
    }
};