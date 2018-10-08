// Jacob Marshall // 2876707 // EECS560 // Lab2 // 17 Sept 2018 //
#include"BSTnode.h"
#include<string>
using namespace std;





BSTnode::BSTnode(){
  leftChild = nullptr;
  rightChild = nullptr;
  data = -1;
}

BSTnode::BSTnode(int theData){
  setData(theData);
}


void BSTnode::setData(int newData){
  data = newData;
}

int BSTnode::getData(){
  return data;
}

void BSTnode::setLeftChild(BSTnode* newLeft){
  leftChild = newLeft;
}

BSTnode* BSTnode::getLeftChild(){
  return leftChild;
}

void BSTnode::setRightChild(BSTnode* newRight){
  rightChild = newRight;
}

BSTnode* BSTnode::getRightChild(){
  return rightChild;
}
