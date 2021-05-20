// it is ceil like problem it is different in the context that :
//            whenever the alphabet in the list of char is same as target then also we will continue the search 
//            at the place of int we have char
class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start=0;
        int end= letters.size()-1;
        char res=letters[start];
        while (start<=end){
            int mid = start+ (end-start)/2;
            if (target == letters[mid])
                start=mid+1; // here we dont want to return the matched we want the greater then target
            else if (target<letters[mid])
            {
                res=letters[mid];
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};
