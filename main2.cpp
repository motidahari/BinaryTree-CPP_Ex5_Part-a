/**
  * BinaryTree Tests
  * Create a BinaryTree
  * CPP course, Ariel University
  * Created by: Moti Dahari
  * https://github.com/motidahari
  */


#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <vector>

// using namespace ariel;
using namespace std;

    template<typename T>struct Node {
      T val;
      Node *left, *right, *parent;
      Node(T node): val(node), left(nullptr), right(nullptr), parent(nullptr){}
      Node(T node, Node& left, Node& right): val(node), right(&right), left(&left), parent(nullptr){}
    };


template<typename T = int> void addLeft(Node<T>& node){
  Node<T>left(((int)rand()%100));
  node.left = &left;
}
template<typename T = int> void addRight(Node<T>& node){  
  Node<T> right(((int)rand()%100));
  node.right = &right;
}

template<typename T = int> void buildTree(Node<T>& root, int size){
  if(size == 0)return;

  if(root.right == NULL){
    addRight<T>(root);
    // cout << "print = "<< root.right->val << endl;
    buildTree<T>(root.right, --size);
  }
  else{
    buildTree<T>(*(root.right),size);
  }
  if(root.left == NULL){
    addLeft<T>(root);
    buildTree<T>(*(root.left), --size);
  }else{
    buildTree<T>(*(root.left), size);
  }
}
  int main(){
    Node<int> root(100);
    buildTree<int>(root,5);


    cout << "root = " << root.val << endl;
    cout << "root.right ="<< root.right->val << endl;

    // Node<int>left(101);
    // Node<int>right(102);
    // Node<int> root(100,left,right);

    // for (size_t i = 0; i < 15; i++){
    //   Node<int>left(rand()%100);
    //   Node<int>right(rand()%100);
    //   Node<int> root(100,left,right);
    // }
    
    // cout << "_root = " << root.node << endl;
    // cout << "left = " << (root.lChild)->node << endl;
    // cout << "right = " << (root.rChild)->node << endl;






    // Node<int> left(103);
    // _root.lChild->rChild = &Node<int>(104);
    // _root.rChild->lChild = &Node<int>(105);
    // _root.rChild->rChild = &Node<int>(106);


    // cout << "root = " << _root->node << endl;
    return 0;
  }
    



/*

make clean;  make; clear; clang++-9 -std=c++2a -o main main.cpp && ./main
clear && clang++-9 -std=c++2a -o main main2.cpp && ./main

*/