class Solution {
public:
    int romanToInt(string s) {

        if(s[0]==NULL){
            return 0;
        }
        int output =0;
        for(int ctrl = 0; ctrl <= s.length();ctrl++){
            // for I
            if(s[ctrl]=='I' && s[ctrl+1]!='V' && s[ctrl+1] != 'X' ){
                output += 1;
                continue;
            }
            if(s[ctrl]=='I' && s[ctrl+1]=='V' ){
                output += 4;
                ctrl++;
            //Incrementing control variable to not look at the V after the current index.
                continue;
            }
            if(s[ctrl]=='I' && s[ctrl+1]=='X' ){
                output += 9;
                ctrl++;
                continue;
            }
            // for V
            if(s[ctrl]=='V'){
                output+= 5;
                continue;
            }
            // for X
            if( s[ctrl] == 'X' && s[ctrl+1] != 'L' && s[ctrl+1]!='C' ){
                output += 10;
                continue;
            }
            if(s[ctrl]=='X' && s[ctrl+1]=='L' ){
                output += 40;
                ctrl++;
                continue;
            }
             if(s[ctrl]=='X' && s[ctrl+1]=='C' ){
                output += 90;
                ctrl++;
                continue;
            }
            //For C
            if(s[ctrl]=='C' && s[ctrl+1]!= 'D' && s[ctrl+1]!= 'M'){
                output+=100;
                continue;
            }
            if(s[ctrl]=='C' && s[ctrl+1]== 'D'){
                output += 400;
                ctrl++;
                continue;
            }
            if(s[ctrl]== 'C' && s[ctrl+1]=='M'){
                output += 900;
                ctrl++;
                continue;
            }
            if(s[ctrl]=='L'){
                output+= 50;
                continue;
            }
            if(s[ctrl]=='D'){
                output += 500;
                continue;
            }
            if (s[ctrl]=='M'){
                output+= 1000;
                continue;
            }
        }
         return output;
    }
};