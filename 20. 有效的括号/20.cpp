class Solution {
public:
    bool isValid(string s) {
        stack<char> s_s;
        for(char i:s)
        {
            switch(i){
                case '(':
                case '{':
                case '[':
                    s_s.push(i);
                    break;
                case ')':
                    if(s_s.empty()||s_s.top()!='(')
                        return false;
                    else
                        s_s.pop();
                    break;
                case '}':
                    if(s_s.empty()||s_s.top()!='{')
                        return false;
                    else
                        s_s.pop();
                    break;
                case ']':
                    if(s_s.empty()||s_s.top()!='[')
                        return false;
                    else
                        s_s.pop();
                    break;
            }
        }
        return s_s.empty();
    }
};