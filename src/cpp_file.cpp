#include <iostream>
#include <vector>

using namespace std;

extern "C" void cppsayhello(char * str);
extern "C" void add_to_vector(int n);
extern "C" void del_from_vector();
extern "C" void print_vector();

void cppsayhello(char * str)
{
	std::cout << str << "\n";
}

vector<int> V {1,2,3};
void add_to_vector(int n)
{
	V.push_back(n);
}
void print_vector()
{
	for (auto i: V){
		cout << i << ", ";
	}
	cout << "\n";
}
void del_from_vector()
{
	V.pop_back();
}
