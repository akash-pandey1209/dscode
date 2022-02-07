class Solution {
private:
    void key(string digits,string output,int index,vector<string>& ans,string assign[]){
        if(index>=digits.length()){
            ans.push_back(output);
            return;
        }
        int number=digits[index]-'0';
        string value=assign[number];
        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            key(digits,output,index+1,ans,assign);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.length()==0){
            return ans;
        }
        
        string output="";
        int index=0;
        string assign[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        key(digits,output,index,ans,assign);
        return ans;
        
        
    }
};