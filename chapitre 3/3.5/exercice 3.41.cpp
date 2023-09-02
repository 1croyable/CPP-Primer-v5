#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int ia[] = {0,1,2,3,4,5,6,7,8,9};
	vector<int> ivec(begin(ia),end(ia));

	for (size_t i : ivec)
		cout << i << " ";
    cout << endl;

	return 0;
}