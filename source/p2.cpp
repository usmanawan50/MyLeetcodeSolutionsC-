class Solution {
public:
    bool isPalindrome(int x) {
        string original = to_string(x);  // convert input to string
        string reverse;
        
        // reverse the input string
        for(auto c = original.rbegin(); c != original.rend(); c++) 
            reverse += *c;
        
        // check for palindrome
        if(original == reverse) 
            return true;

        return false;
    }
};
