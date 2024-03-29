/*
2942. Find Words Containing Character (leetcode problem)
*/

//leetcode solution
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
    vector<int>v1;
    for(int i=0;i<words.size();i++){
        string& str=words[i];
        int length=str.length();
        for(int j=0;j<length;j++){
            if(str[j]==x){
                v1.push_back(i);
                break;
            }
        }
    }
    return v1;
        
    }
};

// general compiler solution
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

vector<int> test(vector<string>words, char x){
    vector<int>v1;
    for(int i=0;i<words.size();i++){
        string& str=words[i];
        int length=str.length();
        for(int j=0;j<length;j++){
            if(str[j]==x){
                v1.push_back(i);
                break;
            }
        }
    }
    return v1;
}

int main() {
    vector<string>v2={"abcd","dfgh","ahtaf","asdaf"};
char x = 'a';
vector<int> test1=test(v2,x);

for(int i=0;i<test1.size();++i){
    cout<<test1[i]<<" ";
}

    return 0;
}