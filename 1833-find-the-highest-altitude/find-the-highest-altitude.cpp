class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>ngain(gain.size()+1);

        ngain[0]=0;

        for(int i=1;i<=gain.size();i++){
            ngain[i]=ngain[i-1]+gain[i-1];
        }
        int max=ngain[0];
        for(int i=1;i<ngain.size();i++){
            if(ngain[i]>max){
                max=ngain[i];
            }
        }
        return max;
    }
};