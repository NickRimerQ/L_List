#include "linked_list.h"
#include "linked_list.cpp"

int main()
{
	List<int> art;
	for (int i = 0; i < 5; i++) {
		art.push_back(i);
	}
	art.push_front(23);
	art.insert(9, 2);
	//art.removeAt(2);
	art.pop_back();
	for (int i = 0; i < art.GetSize(); i++) {
		cout << art[i] << endl;
	}
	return 0;
}
