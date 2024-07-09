class Solution {
public:
    int lengthOfLastWord(string s) {
       
       int length = 0;

       for(int i = s.length()-1; i >= 0; i--){

        //If there were any spaces before any character, continue 
        if(s[i] == ' ' && length == 0){
            continue;
        }
        
        //If there is a space after a word, return the length
        if(s[i] == ' ' && length != 0){
            return length;
        }
        else{
            length++;
        }
       }
       
       //returns the length in case there were just one word
        return length;
    }
};