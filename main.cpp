/**
  * BinaryTree Tests
  * Create a BinaryTree
  * CPP course, Ariel University
  * Created by: Moti Dahari
  * https://github.com/motidahari
  */

#include "sources/BinaryTree.hpp"
#include <fstream>
#include <sstream>
#include <iostream>
#include <stdexcept>
#include <vector>

// using namespace ariel;
using namespace std;
using namespace ariel;


int main(){
  BinaryTree<int> tree_of_ints;
  tree_of_ints.add_root(50)
  .add_left(50, 30).add_right(50, 70)
  .add_left(30, 20).add_right(30, 40)
  .add_left(70, 60).add_right(70, 80);


  cout << "postorder =  \n" ;
  for (auto it=tree_of_ints.begin_postorder(); it!=tree_of_ints.end_postorder(); ++it) {
    cout << (*it) << " " ;
  }  // prints: 20 40 30 60 80 70 50
  cout << " \n" ;
  
  cout << "inorder =  \n" ;
  for (auto it=tree_of_ints.begin_inorder(); it!=tree_of_ints.end_inorder(); ++it) {
    cout << (*it) << " " ;
  }  // prints: 20 30 40 50 60 70 80 
  cout << " \n" ;

  cout << "preorder =  \n" ;
  for (auto it=tree_of_ints.begin_preorder(); it!=tree_of_ints.end_preorder(); ++it) {
    cout << (*it) << " " ;
  }  // prints: 50 30 20 40 70 60 80
  cout << " \n" ;
  





    return 0;
  }
    



/*

make clean;  make; clear; clang++-9 -std=c++2a -o main main.cpp && ./main
clear && clang++-9 -std=c++2a -o main main.cpp && ./main

*/