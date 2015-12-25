#include<iostream>

using namespace std;

struct node {
  int val;
  node *next;
};
//@start
void pushS(struct node **root, int n){
    node *newNode = new node;
    newNode->val = n;
    newNode->next = *root;
    *root = newNode;
}

//@end
void pushE(struct node *root, int n) {
    node *newNode = new node;
    newNode->val = n;
    newNode->next = NULL;

    node *cur = root;
    while(cur) {
        if(cur->next == NULL) {
            cur->next = newNode;
            return;
        }
        cur = cur->next;
    }
}

void print(struct node *root) {
    node *cur = root;
    while(cur) {
        cout << cur->val <<endl;
        cur = cur->next;
    }
    cout << endl;
}

int main(){
    node *root ;
    pushS(&root,5);
    pushS(&root,6);
    pushE(root,9);
    print(root);
}