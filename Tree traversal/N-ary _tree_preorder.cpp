/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/
 
class Solution {
public:
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if (root == nullptr) {
            return ans;
        }
        stack<Node*> S;
        S.push(root);
        while (!S.empty()) {
            Node* cur = S.top();
            S.pop();
            ans.push_back(cur -> val);
            for (int i = cur -> children.size() - 1; i >= 0; i--) { // pushing(in stack) nodes in reverse order so that last in is first out.
                    S.push(cur -> children[i]); 
            }
        }
        return ans;
    }
};

// Using recursion;

class Solution {
private:
    void travel(Node* root, vector<int>& result) {
        if (root == nullptr) {
            return;
        }
        
        result.push_back(root -> val);
        for (Node* child : root -> children) {
            travel(child, result);
        }
    }
public:
    vector<int> preorder(Node* root) {
        vector<int> result;
        travel(root, result);
        return result;
    }
};