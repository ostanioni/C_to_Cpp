void cppsayhello(const char* str);
void add_to_vector(int n);
void del_from_vector();
void print_vector();

int main()
{
	cppsayhello("Hello from C to C++");
	add_to_vector(4);
	add_to_vector(5);
	print_vector();
	del_from_vector();
	print_vector();
	
	return 0;
}