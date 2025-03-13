class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int n = colors.size();
        int i=0;
        int j=n-1;

        while(colors[i]==colors[n-1]){
            i++;
        }
        int left=n-1-i;
        while(colors[j]==colors[0]){
            j--;
        }
        return max(left,j);
    }
};
