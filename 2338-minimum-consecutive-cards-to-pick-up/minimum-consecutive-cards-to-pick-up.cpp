class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        int n=cards.size();
        unordered_map<int,int> umap;
        int minLength=INT_MAX;

        for (int i = 0; i < n; i++) {
            if (umap.find(cards[i]) != umap.end()) {
            minLength = min(minLength, i-umap[cards[i]]+ 1);
            }
            umap[cards[i]]=i;
        }

        return (minLength==INT_MAX)?-1:minLength;        
    }
};