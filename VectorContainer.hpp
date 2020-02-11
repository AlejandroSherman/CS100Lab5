#ifndef _VECTORCONTAINER_H_
#define _VECTORCONTAINER_H_
#include "container.hpp"
#include <vector>
using namespace std; 
class VectorContainer : public Container{
private:
	vector<Base*> vectcon;
public:
	VectorContainer(){};
	void add_element(Base* element){vectcon.push_back(element);}
	void print(); 
	void sort();
	void swap(int i, int j);
	Base* at(int i);
	int size(){return vectcon.size();}
};
#endif
