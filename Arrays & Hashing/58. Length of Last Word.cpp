class Solution {
public:
    int lengthOfLastWord(string s) {
        string str  = "" ; 
        for (int  i = s.size()-1 ; i >=0 ; i--){
            if(s[i] != ' ') str += s[i] ; 
            if(s[i] == ' ' && str != ""){
                break ; 
            }
        }
        return str.size() ;
    }
};
