class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int jn=jewels.size();
        int sn=stones.size();
        int count=0;
        for(int i=0;i<jn;i++){
            for(int j=0;j<sn;j++){
                if(jewels[i]==stones[j]){
                    count++;
                }
            }
        }
        return count;
    }
};