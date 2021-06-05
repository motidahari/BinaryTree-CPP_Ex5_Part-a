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
#include "sources/BinaryTree.hpp"
#include <vector>
#include <stdexcept>

using namespace ariel;
using namespace std;

const int numOfTest = 100;


/**
 * Test for the tree of ints
 */
TEST_CASE("Test for the tree of int"){
  std::vector<int> PostOrder = {20 ,40 ,30 ,60 ,80 ,70 ,50};      
  std::vector<int> InOrder = {20, 30, 40, 50, 60, 70, 80};      
  std::vector<int> PreOrder = {50, 30, 20, 40, 70, 60, 80};      
  BinaryTree<int> tree_of_ints;


  CHECK_NOTHROW(tree_of_ints.add_root(50));
  CHECK_NOTHROW(tree_of_ints.add_left(50, 30));
  CHECK_NOTHROW(tree_of_ints.add_right(50, 70));
  CHECK_NOTHROW(tree_of_ints.add_left(30, 20));
  CHECK_NOTHROW(tree_of_ints.add_right(30, 40));
  CHECK_NOTHROW(tree_of_ints.add_left(70, 60));
  CHECK_NOTHROW(tree_of_ints.add_right(70, 80));
  CHECK_THROWS(tree_of_ints.add_right(100, 80));

  

  u_int i = 0;
  for (auto it=tree_of_ints.begin_preorder(); it!=tree_of_ints.end_preorder(); ++it) {
    CHECK_EQ(*it, PreOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_ints.begin_inorder(); it!=tree_of_ints.end_inorder(); ++it) {
    CHECK_EQ(*it, InOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_ints.begin_postorder(); it!=tree_of_ints.end_postorder(); ++it) {
    CHECK_EQ(*it, PostOrder.at(i));
    i++;
  } 
}

/**
 * Test for the tree of double
 */
TEST_CASE("Test for the tree of double"){
  std::vector<double> PostOrder = {20 ,40 ,30 ,60 ,80 ,70 ,50};      
  std::vector<double> InOrder = {20, 30, 40, 50, 60, 70, 80};      
  std::vector<double> PreOrder = {50, 30, 20, 40, 70, 60, 80};      
  BinaryTree<double> tree_of_doubles;

  CHECK_NOTHROW(tree_of_doubles.add_root(50));
  CHECK_NOTHROW(tree_of_doubles.add_left(50, 30));
  CHECK_NOTHROW(tree_of_doubles.add_right(50, 70));
  CHECK_NOTHROW(tree_of_doubles.add_left(30, 20));
  CHECK_NOTHROW(tree_of_doubles.add_right(30, 40));
  CHECK_NOTHROW(tree_of_doubles.add_left(70, 60));
  CHECK_NOTHROW(tree_of_doubles.add_right(70, 80));
  CHECK_THROWS(tree_of_doubles.add_right(100, 80));
  CHECK_THROWS(tree_of_doubles.add_left(100, 80));
  u_int i = 0;
  for (auto it=tree_of_doubles.begin_preorder(); it!=tree_of_doubles.end_preorder(); ++it) {
    CHECK_EQ(*it, PreOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_doubles.begin_inorder(); it!=tree_of_doubles.end_inorder(); ++it) {
    CHECK_EQ(*it, InOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_doubles.begin_postorder(); it!=tree_of_doubles.end_postorder(); ++it) {
    CHECK_EQ(*it, PostOrder.at(i));
    i++;
  } 
}


/**
 * Test for the tree of float
 */
TEST_CASE("Test for the tree of float"){
  std::vector<float> PostOrder = {20 ,40 ,30 ,60 ,80 ,70 ,50};      
  std::vector<float> InOrder = {20, 30, 40, 50, 60, 70, 80};      
  std::vector<float> PreOrder = {50, 30, 20, 40, 70, 60, 80};      
  BinaryTree<float> tree_of_floats;

  CHECK_NOTHROW(tree_of_floats.add_root(50));
  CHECK_NOTHROW(tree_of_floats.add_left(50, 30));
  CHECK_NOTHROW(tree_of_floats.add_right(50, 70));
  CHECK_NOTHROW(tree_of_floats.add_left(30, 20));
  CHECK_NOTHROW(tree_of_floats.add_right(30, 40));
  CHECK_NOTHROW(tree_of_floats.add_left(70, 60));
  CHECK_NOTHROW(tree_of_floats.add_right(70, 80));
  CHECK_THROWS(tree_of_floats.add_right(100, 80));
  CHECK_THROWS(tree_of_floats.add_left(100, 80));
  u_int i = 0;
  for (auto it=tree_of_floats.begin_preorder(); it!=tree_of_floats.end_preorder(); ++it) {
    CHECK_EQ(*it, PreOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_floats.begin_inorder(); it!=tree_of_floats.end_inorder(); ++it) {
    CHECK_EQ(*it, InOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_floats.begin_postorder(); it!=tree_of_floats.end_postorder(); ++it) {
    CHECK_EQ(*it, PostOrder.at(i));
    i++;
  } 
}
/**
 * Test for the tree of string
 */
TEST_CASE("Test for the tree of string"){
  std::vector<string> PostOrder = {"20" ,"40" ,"30" ,"60" ,"80" ,"70" ,"50"};      
  std::vector<string> InOrder = {"20", "30", "40", "50", "60", "70", "80"};      
  std::vector<string> PreOrder = {"50", "30", "20", "40", "70", "60", "80"};      
  BinaryTree<string> tree_of_strings;


  CHECK_NOTHROW(tree_of_strings.add_root("50"));
  CHECK_NOTHROW(tree_of_strings.add_left("50", "30"));
  CHECK_NOTHROW(tree_of_strings.add_right("50", "70"));
  CHECK_NOTHROW(tree_of_strings.add_left("30", "20"));
  CHECK_NOTHROW(tree_of_strings.add_right("30", "40"));
  CHECK_NOTHROW(tree_of_strings.add_left("70", "60"));
  CHECK_NOTHROW(tree_of_strings.add_right("70", "80"));
  CHECK_THROWS(tree_of_strings.add_right("100", "80"));
  CHECK_THROWS(tree_of_strings.add_left("100", "80"));
  u_int i = 0;
  for (auto it=tree_of_strings.begin_preorder(); it!=tree_of_strings.end_preorder(); ++it) {
    CHECK_EQ(*it, PreOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_strings.begin_inorder(); it!=tree_of_strings.end_inorder(); ++it) {
    CHECK_EQ(*it, InOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_strings.begin_postorder(); it!=tree_of_strings.end_postorder(); ++it) {
    CHECK_EQ(*it, PostOrder.at(i));
    i++;
  } 
}

/**
 * Test for the tree of char
 */
TEST_CASE("Test for the tree of char"){
  std::vector<char> PostOrder = {'2' ,'4' ,'3' ,'6' ,'8' ,'7' ,'5'};      
  std::vector<char> InOrder = {'2', '3', '4', '5', '6', '7', '8'};      
  std::vector<char> PreOrder = {'5','3', '2', '4', '7', '6', '8'};      
  BinaryTree<char> tree_of_chars;

  CHECK_NOTHROW(tree_of_chars.add_root('5'));
  CHECK_NOTHROW(tree_of_chars.add_left('5', '3'));
  CHECK_NOTHROW(tree_of_chars.add_right('5', '7'));
  CHECK_NOTHROW(tree_of_chars.add_left('3', '2'));
  CHECK_NOTHROW(tree_of_chars.add_right('3', '4'));
  CHECK_NOTHROW(tree_of_chars.add_left('7', '6'));
  CHECK_NOTHROW(tree_of_chars.add_right('7', '8'));
  CHECK_THROWS(tree_of_chars.add_right('1', '8'));
  CHECK_THROWS(tree_of_chars.add_left('1', '8'));
  u_int i = 0;
  for (auto it=tree_of_chars.begin_preorder(); it!=tree_of_chars.end_preorder(); ++it) {
    CHECK_EQ(*it, PreOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_chars.begin_inorder(); it!=tree_of_chars.end_inorder(); ++it) {
    CHECK_EQ(*it, InOrder.at(i));
    i++;
  } 
  i = 0;
  for (auto it=tree_of_chars.begin_postorder(); it!=tree_of_chars.end_postorder(); ++it) {
    CHECK_EQ(*it, PostOrder.at(i));
    i++;
  } 
}
/*
clear && make demo && ./demo
clear && make test && ./test
*/