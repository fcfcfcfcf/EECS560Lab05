#ifndef BSTNODE_H
#define BSTNODE_H
#include<string>
using namespace std;



class BSTnode {


private:
  int data;
  BSTnode* leftChild;
  BSTnode* rightChild;


public:
  BSTnode();
  BSTnode(int theData);
  void setData(int newData);
  int getData();
  void setLeftChild(BSTnode* newLeft);
  BSTnode* getLeftChild();
  void setRightChild(BSTnode* newRight);
  BSTnode* getRightChild();



};

#endif
