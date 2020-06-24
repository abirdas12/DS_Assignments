#include <iostream>
using namespace std;
#include <string>

template <class T> //template classes
class addelements {
	T element;
public:
	addelements(T arg) {
		element = arg;
	}
	T add(T arg) {
		return element+arg;
	}
};
template <>
class addelements <string> {
	string element;
public:
	addelements (string arg) {
		element = arg;
	}
	string concatenate (string arg) {
		return element+arg;
	}
};

int main() {
	int n;
	cin >> n;
	for (int i = 1; i < n+1; i++) {
		string type;
		cin >> type;
		if (type == "string") {
			string char1,char2;
			cin >> char1 >> char2;
			addelements<string>chars(char1);
			cout << chars.concatenate(char2) << endl;
		}
		if (type == "int") {
			int num1, num2;
			cin >> num1 >> num2;
			addelements<int>number(num1);
			cout << number.add(num2) << endl;
		}
		if (type == "float") {
			double num1, num2;
			cin >> num1 >> num2;
			addelements<double>number(num1);
			cout << number.add(num2) << endl;
		}

	}
	return 0;
}
