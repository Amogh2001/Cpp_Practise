#include <iostream>
#include <cassert>
#include <fstream>

//This program is used to read data from a given file.

int main(int argc, char* argv[]) {
	double x[6], y[6];
	std::ifstream read_file("Output.dat");
	assert(read_file.is_open());
	for(int i=0; i<3; i++) {
		read_file >>  x[i] >>y[i];
	}
	read_file.close();
	return 0;
}


