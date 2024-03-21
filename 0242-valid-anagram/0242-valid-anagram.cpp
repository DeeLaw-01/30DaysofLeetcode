class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.empty() || t.empty()){
            return false;
        }
        int len =s.length();
        if(s.length() != t.length()){
            return false;
        }
        vector<int> sol;
        sol.resize(26,0);
        for(char c: s){
            sol[c - 'a']+=1;
        }
        for(char c: t){
            sol[c-'a'] -=1;
        }
        for(const auto& val: sol){
            if(val!=0){
                return false;
            }
        }
        return true;
    }
};