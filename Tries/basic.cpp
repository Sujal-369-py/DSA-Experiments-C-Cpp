#include<iostream>
using namespace std;

struct TrieNode{
    TrieNode *children[25];
    bool isEnd;
    TrieNode(){
        isEnd = false;
        for(int i=0; i<26; i++){
            children[i] = nullptr;
        }
    }
};

class Tries{
    public:
    struct TrieNode *root;
    Tries(){
        root = new TrieNode;
    }

    bool check(string ch){
        for(char &c:ch){
            if(islower(c))continue;
            else{
                cout<<"Word is not lowercase";
                return false;
            }
        }
        return true;
    }
    void insert(string word){
        struct TrieNode *curr = root;
        if(check(word)){
           for(char &ch:word){
                int pos = ch - 'a';
                if(curr->children[pos] == nullptr) 
                    curr->children[pos] = new TrieNode;
                curr = curr->children[pos];
           }
           curr->isEnd = true;
        }
    }
    bool search(string word){
        struct TrieNode *s = root;
        for(char &ch:word){
            int pos = ch - 'a';
            if(s->children[pos] == nullptr) return false;
            s = s->children[pos];
        }
        if(s->isEnd == true) return true;
        else return false;
    }
    bool isFreeNode(TrieNode* node) {
    for (int i = 0; i < 26; i++) {
        if (node->children[i] != nullptr) return false;
    }
    return true;
    }
    int del(struct TrieNode *s,string word,int i){
        if(s->isEnd == true) return 0;
        int pos = word[i] - 'a';
        del(s->children[pos],word,i+1);

    }
};

int main(){
    Tries t;
    t.insert("aman");
    t.insert("rajat");
    t.del("aman");

    if(t.search("aman")) cout<<"Founded";
    else cout<<"Not founded";
}