#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

int main(){
    // Input vector of strings
    vector<string> s = {"eat", "tea", "tan", "ate", "nat", "bat"};
    
    // Create a hashmap to group anagrams
    unordered_map<string, vector<string>> hashmap;
    
    // Loop through each string in the input vector
    for (int i = 0; i < s.size(); i++) {
        // Make a copy of the string and sort it to use as a key
        string sorted_str = s[i];
        sort(sorted_str.begin(), sorted_str.end());
        
        // Insert the original string into the hashmap under the sorted key
        hashmap[sorted_str].push_back(s[i]);
    }
    
    // Create a result vector to store the grouped anagrams
    vector<vector<string>> res;
    
    // Iterate through the hashmap and push all grouped anagrams into the result
    for (auto& group : hashmap) {
        res.push_back(group.second);
    }
    
    // Print the grouped anagrams
    // for (int i = 0; i < res.size(); i++) {
    //     for (int j = 0; j < res[i].size(); j++) {
    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
     for (const auto& group : hashmap) {
        for (const string& word : group.second) {
            cout << word << " ";
        }
        cout << endl;
    }

    return 0;
}
