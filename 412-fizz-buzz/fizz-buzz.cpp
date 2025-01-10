class Solution {
public:
    vector<string> fizzBuzz(int n) {
        // vector<string>ans();

        vector<string>ans(n+1);
        for(int i=1;i<=n;i++){
            if(i%3==0&&i%5==0){
                ans[i]="FizzBuzz";                
                // ans.push_back("FizzBuzz");                
            }
            else if(i%3==0){      
                ans[i]="Fizz";          
                // ans.push_back("Fizz");                                
            }
           else if(i%5==0){
                ans[i]="Buzz";
                // ans.push_back("Buzz");                                
            }else{
                ans[i]=to_string(i);
            }
        }
        return vector<string>(ans.begin()+1,ans.end());
    }
};