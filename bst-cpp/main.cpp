#include <iostream>

class BSTNode {
public:
  int key;
  BSTNode* left;
  BSTNode* right;


  BSTNode(int key) {
    this->key = key;
    left = nullptr;
    right = nullptr;
  }

  ~BSTNode() {
    if (!this->left) {
      delete this->left;
    }

    if (!this->right) {
      delete this->right;
    }

    delete this;
  }

  void insert(BSTNode* node) {
  


  }

  void search(int val) {
  

  }

};

int main(int argc, char** argv) {

  BSTNode* node = new BSTNode(1);
  std::cout<<node->key<<std::endl;

  return 0;
}



