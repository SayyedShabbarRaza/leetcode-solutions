class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        unordered_map<char, int> lIndex;
        vector<int> ans;

        for (int i=0;i<n;i++) {
            lIndex[s[i]]=i;
        }


        int end=0;
        int i=0;
        while(i<n){
        end=lIndex[s[i]];
        int j;
        for (j = i; j < end; j++) {
        if(lIndex[s[j]]>end){
        end=lIndex[s[j]];
        }
        }
        ans.push_back(j-i+1);
        i=j+1;
    }
        return ans;
    }
};