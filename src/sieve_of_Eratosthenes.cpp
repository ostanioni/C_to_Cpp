#include <vector>

typedef  unsigned long long int ullint;

int main()
{
	using namespace std;
	
	ullint	current_number = 13,
			max_value = 1000000000;
	vector<ullint> V {2, 3, 5, 7, 11};

	static int is_even = 1;
	for (auto n: V ) {
		if (current_number%n == 0){
			is_even = 0;
		}
	}
	if (is_even) {
		V.push_back(current_number);
		current_number += 2;
	}
}