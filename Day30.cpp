/*
2114. Maximum Number of Words Found in Sentences (leetcode problem)
*/

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>v1;
        int  c=0;
        char x = ' ';
        for(int i=0;i<sentences.size();i++){
            string& str=sentences[i];
            c=0;
            for(int j=0;j<str.length();j++){
                if(str[j]==x){
                    c=c+1;
                    
                }
              v1.push_back(c+1); 
            }
             
        }
        if(!v1.empty()){

            auto y=max_element(v1.begin(), v1.end());
            int z=*y;
            return z;

        }else{
            return 0;
        }

    }
};