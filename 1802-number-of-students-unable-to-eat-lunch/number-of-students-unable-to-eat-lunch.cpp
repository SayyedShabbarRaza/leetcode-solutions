class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int  n=students.size();
        int co=0;
        int cz=0;
        for(int i=0;i<n;i++){
            if(students[i]==1)co++;
            else cz++;
        }
        for(int s:sandwiches){
            if(s==1&&co>0)co--;
            else if(s==0&&cz>0)cz--;
            else break;
        }
        return co+cz;
    }
};