#include <iostream>
#include "InsertionSort.h"

int main(){
	InsertionSort s;
	s.insert_data(23);
	s.insert_data(15);
	s.insert_data(14);
	s.insert_data(3);
	s.insert_data(12);
	s.insert_data(11);
	s.insert_data(10);
	s.insert_data(20);
	s.insert_data(24);
	s.insert_data(18);
	s.Insert_Sort();
	s.display();
}
