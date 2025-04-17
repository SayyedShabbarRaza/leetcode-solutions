class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int result=-1;
        unordered_map<int,int>umap;
        for(int c:nums){
            if(c%2==0){
                umap[c]++;
            }
        }
    int number=-1;
        for(auto & [num,count]:umap){

             if(result<count || (result==count && number>num)){
                result=count;
                number=num;
             }
        }
        return number;
    }
};