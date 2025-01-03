class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        if (n < 0 || n > 10000){ // Number can't be negative nor greater than 10,000
             result.push_back("");
             return result;
        }
        for(int i =1; i <= n; ++i ){
            if(i%3 == 0 && i%5 == 0){
                result.push_back("FizzBuzz");
                continue;
            }
            if(i%3 == 0){
                result.push_back("Fizz");
                continue;
            }
            if(i%5 == 0){
                result.push_back("Buzz");
                continue;
            }
            result.push_back( to_string(i));

        }
        return result;
    }
};