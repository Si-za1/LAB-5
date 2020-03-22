#include <iostream>
#include "InsertionSort.h"

int main(){
	InsertionSort num;
	num.insert_data(1);
	num.insert_data(5);
	num.insert_data(2);
	num.insert_data(11);
	num.insert_data(20);
	num.insert_data(12);
	num.insert_data(16);
	num.insert_data(22);
	num.insert_data(23);
	num.insert_data(15);
	num.Insert_Sort();
	num.final_display();
}