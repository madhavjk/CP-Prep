#include <iostream>
#include <string>
#include <map> 

using namespace std;
int main() {
    //EMPTY MAP
	map<int, int> mp;
    // INSERTING
	mp.insert(std::pair<int, int>(200, 1));

	mp.insert(std::pair<int, int>(201, 2));

	cout << "Map size is: " << mp.size() << endl; //SIZE

	cout << endl << "Default map Order is: " << endl;
   //ITERATING OVER THE VALUES OF THE MAP
	for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {

		cout << (*it).first << ": " << (*it).second << endl;
	}
}