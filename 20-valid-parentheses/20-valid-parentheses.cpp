class Solution {
public:
    
    unordered_map<char, int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
    
    bool isValid(string s) {
        stack<char> st;
    for(char bracket : s){
        if(symbols[bracket] < 0){
            st.push(bracket);
        }
        else{
            if(st.empty()) return false;
            char top = st.top();
            st.pop();
            if(symbols[top] + symbols[bracket] != 0){
                return false;
            }
        }        
    }
    if(st.empty()) return true;
    return false;
    }
};

// -----------------------------------------------------------------
// Recursive solution

#include <bits/stdc++.h>
using namespace std;

void solve(int open, int close, string output, vector<string>& answer){
    
    // base condition
    if(open == 0 && close == 0){
        answer.push_back(output);
        return;
    }
    else {
        // check if we have the open count, then push the opening bracket to the string
        if(open != 0){
            string op1 = output;
            op1.push_back('(');
            solve(open-1, close, op1, answer);
    }
        // if the open count is less than the close count, then we can add the closing bracket to the string
        if(open < close){
            string op2 = output;
            op2.push_back(')');
            solve(open, close-1, op2, answer);
            return;
        }
    }
}

int main(){

    int n = 3;
    int open = n, close = n; // using two separate variable to store the count of open and closed brackets
    vector<string> answer;
    string output = "";
    solve(open, close, output, answer);

    // print the answer
    cout << endl;
    for(auto s : answer)
        cout << s << endl;
    cout << endl;

    return 0;
}
