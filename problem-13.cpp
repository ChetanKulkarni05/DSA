#include<iostream>
#include<unordered_map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> values = {
          {'I', 1},
          {'V', 5}, 
          {'X', 10},
          {'L', 50}, 
          {'C', 100}, 
          {'D', 500}, 
          {'M', 1000} 
        };
       

        int ans = 0;

        for(int i=0; i<s.size(); i++){
            if(values[s[i]] < values[s[i+1]]){
                ans -= values[s[i]];
            }
            else{
                ans += values[s[i]];
            }
        }
        return ans;
    }
};

int main(){
    cout<<"Enter the Roman number:"<<endl;
    string s;
    cin>>s;

    Solution obj;
    int result = obj.romanToInt(s);
    cout<<"Integer value = "<<result<<endl;
    return 0;
}