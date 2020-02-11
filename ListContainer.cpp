#ifndef _LISTCONTAINER_CPP_
#define _LISTCONTAINER_CPP_
#include "Container.hpp"
#include <iostream>
using namespace std; 
void ListContainer::print(){
	list <Base*>::iterator it; 
	for (it = listcon.begin(); it != listcon.end(); it++)
	{
		cout << it->stringify();
	}
}
void ListContainer::sort(){

}
void ListContainer::swap(int i, int j){
	list<Base*>::iterator it1 = listcon.begin();
	list<Base*>::iterator it2 = listcon.begin();
	advance(it1, i);
	advance(it2, j);
	swap(*it1,*it2);
}
Base* ListContainer::at(int i){
	list<Base*>::iterator it = listcon.begin();
	return advance(it, i);
}		
#endif
