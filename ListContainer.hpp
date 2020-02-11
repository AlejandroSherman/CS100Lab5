#ifndef _LISTCONTAINER_HPP_
#define _LISTCONTAINER_HPP_
#include "container.hpp"
#include <list>
class ListContainer : public Container{
private:
	list<Base*> listcon;	
public:
	ListContainer(){};
	void add_element(Base* element){listcon.push_back(element);}
	void print();
	void sort();
	void swap(int i, int j);
	void Base* at(int i);
	void int size(){return listcon.size();}
};
#endif
