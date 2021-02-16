#include<bits/stdc++.h>
using namespace std;
int main() {
	int size;
	cout << "Enter the size of array:" << "\n";
	cin >> size;
	int *arr = new int(size);
	for (i = 0; i < size; i++) {
		cin >> arr[i];
	}
	cout << "the value of array is";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
