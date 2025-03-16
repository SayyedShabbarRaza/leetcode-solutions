class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;

        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"&&!st.empty()){
                st.pop();
            }else if(operations[i]=="D"){
               int top= st.top();
               top=top*2;
               st.push(top);
            }else if(operations[i]=="+"){
                    int num1=st.top();
                    st.pop();
                    int num2=st.top();
                    st.push(num1);

                    st.push(num1+num2);                
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int sum=0;
        int n=st.size();
        for(int i=0;i<n;i++){
            sum=sum+st.top();
            st.pop();
        }
        return sum;
    }
};