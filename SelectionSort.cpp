#ifndef __SELECTIONSORT_CPP
#define __SELECTIONSORT_CPP

#include "SelectionSort.hpp"


void SelectionSort::sort(Container* container){
     unsigned int i,j,first;
    // int numLength = container->size();
     for (i = 0; i < container->size()-1; ++i){
     //first = 0;
     for(j=i+1;j<container->size();j++){
       //if (container->at(j)->evaluate() < container->at(first)->evaluate()){
       if(container->at(i) < container->at(j)){
       container->swap(i,j);
       }
      // first = j;
      // } 
     }
     //container->swap(first,i);
     }
}

#endif
