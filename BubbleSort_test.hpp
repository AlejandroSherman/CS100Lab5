//bubble sort test hpp
#ifndef _BUBBLESORT_TEST_HPP
#define _BUBBLESORT_TEST_HPP
using namespace std;

#include "VectorContainer.hpp"
#include "base.hpp"
#include "op.hpp"
#include "add.hpp"
#include "Sub.hpp"
#include "mult.hpp"
#include <iostream>
#include "BubbleSort.hpp"
#include "sort.hpp"

TEST(SortTestSet, BubbleSortTest){
   Op* nine = new Op(9);
   Op* two = new Op(2);
   Mult* TreeA = new Mult(nine, two);

   Op* five = new Op(5);
   Op* six = new Op(6);
   Add* TreeB = new Add(five, six);

   Op* eight = new Op(8);
   Op* one = new Op(1);
   Sub* TreeC = new Sub(eight, one);

   VectorContainer* container = new VectorContainer();
   container->add_element(TreeA);
   container->add_element(TreeB);
   container->add_element(TreeC);

   ASSERT_EQ(container->size(), 3);
   EXPECT_EQ(container->at(0)->evaluate(), 18);
   EXPECT_EQ(container->at(1)->evaluate(), 11);
   EXPECT_EQ(container->at(2)->evaluate(), 7);

   container->set_sort_function(new BubbleSort());
   container->sort();
   ASSERT_EQ(container->size(), 3);
   EXPECT_EQ(container->at(0)->evaluate(), 7);
   EXPECT_EQ(container->at(1)->evaluate(), 11);
   EXPECT_EQ(container->at(2)->evaluate(), 18);
}


#endif
