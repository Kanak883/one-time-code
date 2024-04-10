#include <iostream>
#include <cstdlib>
using namespace std;
int x;
int main() {
	const string albet{ "abcdefghijklmnopqrstuvwxyz" };
	for (int i = 0; i < albet.length(); i++) {
		cout << albet[i] << " ";
	}
	return 0;
}