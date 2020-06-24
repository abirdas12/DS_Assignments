#include <iostream>
#include <vector>
using namespace std;

class Employee {
	public:
	vector <int> sales;
	void input() {
		int x;
		int a = 0;
		while(cin >> x) {
			if (x > 0 and x <= 50) { //constraint 1.
				sales.push_back(x); // holding number of sales into the vector.
				a++; //counting the number of position.
				if (sales.size() == 5) { //Make sure 5 numbers are getting added.
					break;
				}
			}
			else {
				cout << "The program can only accept up to 50 sales. " << x << " is not accepted. Replace it below." << endl;
			}
		}
	}
	int calculateTotalSale() { // calculated the total sales for each employee
	    int sum = 0;
	    for ( int i = 0; i < sales.size(); i++) {
	        sum = sum + sales[i]; // getting the sum of all the numbers in the vector
	    }
	    return sum;
	}

};

int main() {
	bool z = false;
	do {
		cout << "Enter the number of employee : ";
		int n;
		cin >> n;
		if (n < 1 or n > 100) { //constraint 2
			cout << "Wrong number of employee. Make sure it is between 1 <=n<= 100. Please enter again." << endl;
		}
		else {
			Employee numberofemployee[n]; // Calling the class employee to hold number of employees data using the array object
			int Exceeding_Jack_Sales = 0;
			for (int k = 0; k < n; k++) {
				cout << "Enter sales of " << k+1 << " Employee : "; //(k+1) would help to start the number of employee from 1, b/c k is starting from 0 in the for loop
				numberofemployee[k].input(); // calling the input function for number of employees from the class
				//cout << "Total Sales for " << k+1 << " employee: "<< numberofemployee[k].calculateTotalSale() << endl; // displays the total number of sales for each employee from the calculate function in the class
				if (numberofemployee[k].calculateTotalSale() > numberofemployee[0].calculateTotalSale()) { // since Jack's total sale is described when k = 0, the total sales from the rest employees are compared to jack.
					Exceeding_Jack_Sales++; // counting the number employees whose has higher total than Jack.
				}
			}
			cout << "Number of employee's sales that are greater than Jack is: " << Exceeding_Jack_Sales << endl; // prints the number of employee.
			break;
		}
	} while (z == false);
    return 0;
}
