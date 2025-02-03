class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jn=jewels.size();
        int sn=stones.size();
        unordered_multiset<char>umstones(stones.begin(),stones.end());
        unordered_multiset<char>umjewels(jewels.begin(),jewels.end());
        int num=0;
        for(char chr:umstones){
            if(umjewels.find(chr)==umjewels.end()){

            }else{
                num++;
            }            
        }
        return num;
    }
};