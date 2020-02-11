#ifndef __SELECTIONSORT_CPP
#define __SELECTIONSORT_CPP

#include "SelectionSort.hpp"


void SelctionSort::sort(Container* container){
     int i,j,first;
     int numLength = container->size();
     for (i = numLength-1; i > 0; i--){
     first = 0;
     for(j=1;j<=i;j++){
       if (container->at(j)->evaluate() < container->at(first)->evaluate)
       first = j;
     }
     container->swap(i,first);
     }
    return;
}

#endif
