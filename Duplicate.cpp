// C++ program to remove the duplicateelements in an array
#include <iostream>
#include <unordered_map>


using namespace std;
void remove_duplicate_elements(int arr[], int n)
{
// Hash map which will store the elements which has appeared previously.
	unordered_map<int, bool> mp;

	for (int i = 0; i < n; ++i) {

// Print the element if it is there in the hash map
	if (mp.find(arr[i]) == mp.end()) {
		cout << arr[i] <<"";
	}

// Insert the element in the hash map
	mp[arr[i]] = true;
	}
}

int main(int argc, char const* argv[])
{
	int n;
	cin >> n;
	int arr[n];
	int i;
	for(i = 0; i < n; i++)
		{
			cin >> arr[i];
		}		
	remove_duplicate_elements(arr, n);
	return 0;
}
