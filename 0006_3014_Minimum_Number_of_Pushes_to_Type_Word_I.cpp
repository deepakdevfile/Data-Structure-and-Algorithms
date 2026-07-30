class Solution
{
public:
    int minimumNumber(string word)
    {

        int len = word.size();
        if(len <= 8){
            return len;
        } else if(len < 16){
            return 8 + 2 * (len % 8);
        } else if(len == 16){
            return 24;
        } else if(len < 24){
            return 24 + 3 * (len % 8);
        } else if(len == 24){
            return 48;
        } else {
            return 48 + 4 * (len % 8);
        }

        return 0;
    }
};