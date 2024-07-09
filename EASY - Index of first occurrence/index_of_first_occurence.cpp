//Solution without string.find()
class Solution {
public:
    int strStr(string haystack, string needle) {

        int index = -1;
        int needleIt = 0;


        for (int i = 0; i < haystack.length(); i++) {
           
           //Once the first letter of the needle is found in the haystack
           if(haystack[i] == needle[0]){
                index = i;
                
                //The next characters of the haystack are compared to the needle
                for(int j = i; j < needle.length()+j; j++){

                    if(haystack[j] == needle[needleIt]){
                        //If the needle is complete, return the index
                        if(j-i == needle.length()-1){
                            return index;
                        }
                        needleIt++;
                    //If the needle is not complete, keep looking for it
                    }else{
                        index = -1;
                        needleIt = 0;
                        break;
                    }
                }
                
           }
        }
        return index;
    }
};






//Easier solution
class Solution {
public:
    int strStr(string haystack, string needle) {

        return haystack.find(needle);

    }
};