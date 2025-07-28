class Solution {
public:
    bool isValid(string s) {
        stack<char> check;  // create stack to evaluate expression

        for(auto c : s) {
            if(c == '(' || c == '{' || c == '[')
                check.push(c);
            else {
                if (check.empty())
                    return 0; 
            
                if((c == ')' && check.top() == '(') ||
                   (c == ']' && check.top() == '[') ||
                   (c == '}' && check.top() == '{'))
                        check.pop();
                else    // return false if parenthesis mismatch
                    return 0;
            }
        }
        return check.empty();
    }
};
