#define CHAR_TO_INDEX(x) (int)(x-'a')
#include<string.h>
#include<stdbool.h>
typedef struct {
    struct Trie* childPointers[26];
    bool endOfWord;
} Trie;


Trie* trieCreate() {
    Trie *newNode=(Trie*)malloc(sizeof(Trie));
    newNode->endOfWord=false;
    for(int i=0;i<26;i++){
        newNode->childPointers[i]=NULL;
    }
    return newNode;
}

void trieInsert(Trie* root, char * key) {
  int len=strlen(key);
    int index;
    Trie* temp=root;
    for(int i=0;i<len;i++){
        index=CHAR_TO_INDEX(key[i]);
        
        if(!temp->childPointers[index]){
            temp->childPointers[index]=trieCreate();
        }
        
        temp=temp->childPointers[index];
    }
    temp->endOfWord=true;
}

bool trieSearch(Trie* root, char * key) {
  int len=strlen(key);
    int index;
    Trie *temp=root;
    for(int i=0;i<len;i++){
        index=CHAR_TO_INDEX(key[i]);
        if(!temp->childPointers[index]){
            return false;
        }
        temp=temp->childPointers[index];
    }
    return temp->endOfWord;
}

bool trieStartsWith(Trie* root, char * key) {
  int len=strlen(key);
  int index;
  Trie *temp=root;
  for(int i=0;i<len;i++){
      index=CHAR_TO_INDEX(key[i]);
      if(!temp->childPointers[index]){
          return false;
      }
      temp=temp->childPointers[index];
  }
  return ((!temp->endOfWord) || (temp->endOfWord));
}

void trieFree(Trie* root) {
    free(root);
}

/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);
 
 * bool param_2 = trieSearch(obj, word);
 
 * bool param_3 = trieStartsWith(obj, prefix);
 
 * trieFree(obj);
*/