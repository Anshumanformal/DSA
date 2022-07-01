class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        
        // Method - 1 (simple method) - does unnecessary extra evaluation of the same values like
        // i % 3 and i % 5
        
//         for(int i=1; i<=n; ++i){
//             if(i % 3 == 0 and i % 5 == 0)
//                 answer.push_back("FizzBuzz");
//             else if(i % 3 == 0)
//                 answer.push_back("Fizz");
//             else if(i % 5 == 0)
//                 answer.push_back("Buzz");
//             else
//                 answer.push_back(to_string(i));
//         }
        
//         return answer;
        
        // Method - 2(storing the result of i % 3 and i % 5 into some variable)
        
        for(int i=1; i<=n; ++i){
            
            bool fizz = i % 3 == 0;
            bool buzz = i % 5 == 0;
            
            if(fizz and buzz)
                answer.push_back("FizzBuzz");
            else if(fizz)
                answer.push_back("Fizz");
            else if(buzz)
                answer.push_back("Buzz");
            else
                answer.push_back(to_string(i));
        }
        
        return answer;
        
    }
};