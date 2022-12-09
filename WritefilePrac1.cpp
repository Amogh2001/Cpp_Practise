#include <iostream>
#include <iomanip>
#include <cassert>
#include <fstream>

//This program is used to write data into a file using user input.

int main(int argc, char* argv[]) {
	
	double x[6],y[6];

	std::ifstream read_input("24-10.txt");
	assert(read_input.is_open());
	int i= 0;
	while(!read_input.eof()) {
		read_input >> x[i] >> y[i];
		i++;

	}
	read_input.close();
	return 0;
}
