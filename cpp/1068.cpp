#include <iostream>

using namespace std;

class Node {
  private:
    int parentPosition;
    int position;
    Node* leftChild;
    Node* rightChild;

  public:
    Node() {}
    Node(int parentposition) {
      this->parentPosition = parentposition;
      leftChild = nullptr;
      rightChild = nullptr;
    }

    ~Node() {
      delete leftChild;
      delete rightChild;
    }

    void addChild(Node* newNode, int parentPosition) {
      cout << "Add in position " << newNode->getPosition() << endl;

      if (leftChild == NULL) {
        leftChild = newNode;
        leftChild->setLeftChildPosition(parentPosition);
      }

      else {
        rightChild = newNode;
        rightChild->setRightChildPosition(parentPosition);
      }
    }

    void deleteChildNode() {
      leftChild = NULL;
      rightChild = NULL;
    }
    
    void setPosition(int value) {
      position = value;
    }

    int getParentPosition() {return (this->parentPosition);}
    int getPosition() {return (this->position);}
    int getRealPosition() {return ((this->position)-1);}
    void setLeftChildPosition(int parentPosition) {
      this->position = 2*parentPosition;
    }
    void setRightChildPosition(int parentPosition) {
      this->position = 2*parentPosition+1;
    }
    Node* getLeftChild() {return this->leftChild;}
    Node* getRightChild() {return this->rightChild;}
};

void insertChild(Node* root, Node* newNode, int InsertPosition,bool isInsert)
{
  if (isInsert) {return;}

  if (root->getRealPosition() == InsertPosition) {
    cout << root->getRealPosition() << " insert "<< newNode->getParentPosition() << endl;
    root->addChild(newNode,InsertPosition);
    isInsert = true;
  }

  if (root->getLeftChild()) {insertChild(root->getLeftChild(),newNode,InsertPosition,isInsert);}
  if (root->getRightChild()) {insertChild(root->getRightChild(),newNode,InsertPosition,isInsert);}
}

void cutChild(Node* root, int cutPosition, bool isFind)
{
  if (isFind) {return;}
  if (root->getRealPosition() == cutPosition) {
    isFind = true;
    root->deleteChildNode();
  }

  if (root->getLeftChild()) {cutChild(root->getLeftChild(),cutPosition,isFind);}
  if (root->getRightChild()) {cutChild(root->getRightChild(),cutPosition,isFind);}
}

void FindLength(Node* root,int& count)
{
  count++;

  if (root->getLeftChild()!=NULL) {
    FindLength(root->getLeftChild(),count);
  }

  if (root->getRightChild()!=NULL) {
    FindLength(root->getRightChild(),count);
  }
}

void printTree(Node* root)
{
  cout << "======new node======" << endl;
  cout <<"position"<< root->getPosition() << endl;
  cout << "parentPosition" << root->getParentPosition() << endl;
  cout << "real Position " << root->getRealPosition() << endl;
  cout << "left child " << (root->getLeftChild()==nullptr) << endl;
  cout << "right child " << (root->getRightChild()==nullptr) << endl;
  if (root->getLeftChild()) {printTree(root->getLeftChild());}
  if (root->getRightChild()) {printTree(root->getRightChild());}
}

int main(void)
{
  int N = 0;
  cin >> N;

  int rootNum = 0;
  cin >> rootNum;
  Node* root = new Node(rootNum);
  root->setPosition(1); 
  
  for (int i=0 ; i<(N-1) ; i++) {
    int parentPosition = 0;
    cin >> parentPosition;

    Node* newNode = new Node(parentPosition);

    bool isInsert = false;  
    insertChild(root,newNode,parentPosition,isInsert);
    cout << "insert " << newNode->getPosition() << " to " << newNode->getParentPosition() << endl;
  }


  printTree(root);

  delete root;

  return 0;
}