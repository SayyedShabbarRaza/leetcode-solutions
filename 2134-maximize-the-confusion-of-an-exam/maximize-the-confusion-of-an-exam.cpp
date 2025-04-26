class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        //Intitution 2 min 
        //completed in 37 min x
        //Max time on making logic
        int n=answerKey.size();
        int r=0,l=0;
        int maxCount=0;
        int length=0;
        unordered_map<char,int>umap;
        while(r<n){
            umap[answerKey[r]]++;
            maxCount=max(maxCount,umap[answerKey[r]]);

            while((r-l+1)-maxCount>k){
                umap[answerKey[l]]--;
                l++;
                maxCount=max(umap['T'],umap['F']);
            }
            length=max(length,r-l+1);
            r++;
        }
        return length;
    }
};
//1st attempt
// class Solution {
// public:
//     int maxConsecutiveAnswers(string answerKey, int k) {
//         //Intitution 2 min 
//         //completed in 37 min
//         //Max time on making logic
//         int n=answerKey.size();
//         int r=0,l=0;
//         int maxCount=0;
//         int length=0;
//         unordered_map<char,int>umap;
//         while(r<n){
//             umap[answerKey[r]]++;
//             maxCount=max(maxCount,umap[answerKey[r]]);

//             while((r-l+1)-maxCount>k){
//                 umap[answerKey[l]]--;
//                 maxCount=max(maxCount,umap[answerKey[l]]);
//                 l++;
//             }
//             length=max(length,r-l+1);
//             r++;
//         }
//         return length;
//     }
// };