class Solution {
public:
    bool isValid(string str) {
        stack<char> s;

        for(int i=0;i<str.size();i++){
            //opening
            if(str[i]=='(' || str[i]=='{' ||  str[i]=='['){
                s.push(str[i]);
            }else{
                //closing
                if(s.size()==0){
                    return false;
                }

                if((s.top()=='(' && str[i]==')') || (s.top()=='{' && str[i]=='}') || (s.top()=='[' && str[i]==']')){
                    s.pop();
                }else{
                    return false;
                }
            }
        }
        return s.size()==0;
    }
};