/**
  * BinaryTree Tests
  * Create a BinaryTree
  * CPP course, Ariel University
  * Created by: Moti Dahari
  * https://github.com/motidahari
  */

#include <string>
#include "doctest.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include "sources/BinaryTree.hpp"
#include <vector>
#include <stdexcept>

using namespace ariel;
using namespace std;

const int numOfTest = 100;


//     /**
//      * getMsgWithSizeAndVal - Receive a message with a certain character and size
//      * @param: size - Message size
//      * @param: c - The character we want to insert into the message
//      * @return: msg - A string that represents the message in the size and character requested
//      */
//     string getMsgWithSizeAndVal(uint size,char c){
//         string msg;
//         for (size_t i = 0; i < size; i++)
//             msg += c; 
//         return msg;
//     }
//     /**
//      * getMsgWithSize - Receive a random message with a certain size
//      * @param: size - Message size
//      * @return: msg - A string that represents the message in the size requested
//      */
//     string getMsgWithSize(uint size){
//         string msg;
//         for (size_t i = 0; i < size; i++)
//             msg += (rand() % 89 + 1) + 33; 
//         return msg;
//     }
//     /**
//      * getMsgWithSizeAndVal - Receive a random message 
//      * @param: none
//      * @return: msg - A string that represents the random message 
//      */
//     string getRandMsg(){
//         string msg;
//         for (size_t i = 0; i < rand()%maxMsg; i++)
//             msg += (rand() % 89 + 1) + 33; 
//         return msg;
//     }

// int getRandSizeOfTree(){
//   return (int)(rand()%100);
// }
// int getRandNum(){
//   return (int)(rand()%100);
// }
// template<typename T> 
// BinaryTree<T>& createRandTree(int size){
//   BinaryTree<T> tree_of_ints;
//   int {root} = getRandNum();
//   int left = getRandNum(); 
//   int right = getRandNum();

//   tree_of_ints.add_root(root);
//   for (size_t i = 0; i < size; i++){
//     connectRandTree(tree_of_ints,root, left ,right);
//     int temp = right;
//     connectRandTree(tree_of_ints,left,left = getRandNum() ,right = getRandNum());
//     connectRandTree(tree_of_ints,temp,left = getRandNum() ,right = getRandNum());
//     // int root = getRandNum();
//     // int left = getRandNum(); 
//     // int right = getRandNum();

    
//   }
  

//   return (int)(rand()%100);
// }
// void connectRandTree(BinaryTree<int>& tree, int root,int left, int right){
//   tree.add_left(root, left);
//   tree.add_right(root, right);


//   /* [1 , 3 ,5, 2]
//       1
//     /   \ 
  
//   */
// }

// /**
//  * Test for the operator -
//  */
// TEST_CASE("test for the tree of ints"){
//   int size = getRandSizeOfTree();
//   BinaryTree<int> tree_of_ints = createRandTree(size);   
//   std::vector<int> PostOrder = {20 ,40 ,30 ,60 ,80 ,70 ,50};      
//   std::vector<int> InOrder = {20, 30, 40, 50, 60, 70, 80};      
//   std::vector<int> PreOrder = {50, 30, 20, 40, 70, 60, 80};      
//   BinaryTree<int> tree_of_ints;

//   tree_of_ints.add_root(50)
//   .add_left(50, 30).add_right(50, 70)
//   .add_left(30, 20).add_right(30, 40)
//   .add_left(70, 60).add_right(70, 80);

//   int i = 0;
//   for (auto it=tree_of_ints.begin_preorder(); it!=tree_of_ints.end_preorder(); ++it) {
//     CHECK_EQ(*it, PreOrder[i]);
//     CHECK_NE(*it, InOrder[i]);
//     CHECK_NE(*it, PostOrder[i]);
//     i++;
//   } 
//   i = 0;
//   for (auto it=tree_of_ints.begin_inorder(); it!=tree_of_ints.end_inorder(); ++it) {
//     CHECK_EQ(*it, InOrder[i]);
//     CHECK_NE(*it, PreOrder[i]);
//     CHECK_NE(*it, PostOrder[i]);
//     i++;
//   } 
//   i = 0;
//   for (auto it=tree_of_ints.begin_postorder(); it!=tree_of_ints.end_postorder(); ++it) {
//     CHECK_EQ(*it, PostOrder[i]);
//     CHECK_NE(*it, InOrder[i]);
//     CHECK_NE(*it, PreOrder[i]);
//     i++;
//   } 
// }


// /*
// make demo && ./demo
// make test && ./test
// */