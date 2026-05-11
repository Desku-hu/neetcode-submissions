class Solution {
public:
    bool isPalindrome(string s) {
        bool isit = true;
        string cs = s;
        cs.erase(remove(cs.begin(), cs.end(), ' '), cs.end());
        for(int i=cs.size()-1; i>0; i--){
            if(isalnum(cs[i])==0){
                if(isalnum(cs[cs.size()-1-i])==0){
                    cs.erase((cs.size()-1-i), 1);
                    i--;
                }   
                cs.erase(i, 1);
            }
            else if(isalnum(cs[cs.size()-1-i])==0){
                cs.erase((cs.size()-1-i), 1);
            }
            else{
                if(tolower(cs[i])!=tolower(cs[(cs.size()-1-i)])){
                    isit=false;
                    break;
                }
            }
        }
        return isit;
    }
};
