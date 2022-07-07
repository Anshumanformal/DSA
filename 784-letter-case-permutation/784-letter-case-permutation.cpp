class Solution {
public:
    
    void solve(vector<string>& answer, string input, string output){
        
        if(input.size() == 0){
            answer.push_back(output);
            return;
        }
        
        // case when the given character is an alphabet
        if(isalpha(input[0])){        
            string op1 = output;
            string op2 = output;
            // choosing the lower case choice
            op1.push_back(tolower(input[0]));
             // choosing the upper case choice
            op2.push_back(toupper(input[0]));
            // reducing the input size
            input.erase(input.begin() + 0);
            // recursively calling the function for further smaller input
            solve(answer, input, op1);
            solve(answer, input, op2);
        }
        // case when the given character is a digit
        else {
            string op1 = output;
            op1.push_back(input[0]);
            input.erase(input.begin() + 0);
            solve(answer, input, op1);
        }
    }
    
    vector<string> letterCasePermutation(string s) {
        vector<string> answer;
        string output = "";
        solve(answer,s,output);
        return answer;
    }
};