class TrieNode {
public:
    TrieNode* children[26];
    bool endOfWord;

    TrieNode() {
        endOfWord = false;
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

class WordDictionary {
    TrieNode* root;

public:
    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(const string& word) {
        TrieNode* cur = root;
        for (char c : word) {
            int idx = c - 'a';
            if (cur->children[idx] == nullptr) {
                cur->children[idx] = new TrieNode();
            }
            cur = cur->children[idx];
        }
        cur->endOfWord = true;
    }

    bool search(const string& word) {
        return dfs(word, 0, root);
    }

private:
    bool dfs(const string& word, int j, TrieNode* node) {
        TrieNode* cur = node;
        for (int i = j; i < word.size(); i++) {
            char c = word[i];
            if (c == '.') {
                for (int k = 0; k < 26; k++) {
                    if (cur->children[k] && dfs(word, i + 1, cur->children[k])) {
                        return true;
                    }
                }
                return false;
            } else {
                int idx = c - 'a';
                if (cur->children[idx] == nullptr) {
                    return false;
                }
                cur = cur->children[idx];
            }
        }
        return cur->endOfWord;
    }
};