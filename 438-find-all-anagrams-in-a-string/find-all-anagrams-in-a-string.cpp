class Solution {
public:
    bool allZeros(vector<int>alpha){
        bool isZero=false;
        for(int i=0;i<alpha.size();i++){
            if(alpha[i]!=0){
                isZero=true;
            }
        }
        return isZero?false:true;
    }
    vector<int> findAnagrams(string s, string p) {
        vector<int>alpha(26,0);
        int l=0,r=0,n=s.size();
        vector<int>ans;

        for(char c:p){
            alpha[c-'a']++;
        }

        while(r<n){
            alpha[s[r]-'a']--;

            if(r-l+1==p.size()){
            if(allZeros(alpha)){
                ans.push_back(l);
            }
            alpha[s[l]-'a']++;
                l++;

            }
            r++;
        }
        return ans;
    }
};






// class Solution {
// public:
// //Close to solution after 37 min but can't find the right way(avoid duplicates)
//     vector<int> findAnagrams(string s, string p) {
//         unordered_map<char,int>umap;
//         int r=0,l=0;
//         vector<int>ans;
//         int length=0;
//         for(char c:p){
//             umap[c]++;
//         }

//         while(r<s.size()){
            
            
//             if(umap.find(s[r])==umap.end()){
//                 l=r;
//                 length=0;
//             }
//             length=max(length,r-l+1);
//             if(length==p.size()){
//                 ans.push_back(l);
//             }
//             r++;
//         }
//         return ans;

//     }
// };



// class Solution {
// public:
//     vector<int> findAnagrams(string s, string p) {
//         unordered_map<char, int> umap;
//         vector<int> ans;
//         int l = 0, r = 0;
//         int needed = p.size();
        
//         for (char c : p) {
//             umap[c]++;
//         }


//         while (r < s.size()) {
//             // If s[r] is needed, reduce needed count
//             if (umap[s[r]] > 0) {
//                 needed--;
//             }
//             umap[s[r]]--;
            
//             // Now window size = r - l + 1
//             if (r - l + 1 == p.size()) {
//                 if (needed == 0) {
//                     ans.push_back(l);
//                 }
//                 // Before sliding the window, restore the effect of s[l]
//                 if (umap[s[l]] >= 0) {
//                     needed++;
//                 }
//                 umap[s[l]]++;
//                 l++; // Move left pointer
//             }
//             r++; // Expand right pointer
//         }

//         return ans;
//     }
// };
