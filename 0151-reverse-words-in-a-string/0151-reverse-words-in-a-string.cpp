class Solution {
public:
    string reverseWords(string s) {
        string result;
        int x = s.size();
        stringstream ss(s);
        vector<string> temp;
        string word;
        while (ss >> word) {
            temp.push_back(word);
        }
        for (int i=temp.size()-1; i>=0; i--) {
            result += temp[i];
            if (i!=0) result += " ";
        }
        return result;
    }
};