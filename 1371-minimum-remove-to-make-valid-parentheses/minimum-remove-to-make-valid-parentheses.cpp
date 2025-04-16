class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>index;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                index.push(i);
            }else if(s[i]==')'){
                if(!index.empty()&&s[index.top()]=='('){
                    index.pop();
                }else{
                    index.push(i);
                }
            }
        }
        int n=index.size();
        for(int i=0;i<n;i++){
            s.erase(index.top(),1);
            index.pop();
        }
        return s;
    }
};