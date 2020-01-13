#include <iostream>
#include <vector>

using namespace std;

void display_vec(vector<double> vec) {
    for (int i=0; i<vec.size(); i++) {
        cout << vec[i] << "  ";
    }
    cout << endl;
}

double sum(vector<double> vec) {
	double total = 0;
	for (int i=0; i < vec.size(); i++) {
		total += vec[i];
	}
	return total;
}

void multiply(vector<double>& vec, double factor) {
	for (int i=0; i < vec.size(); i++) {
		vec[i] = vec[i] * factor;
	}
}

vector<double> square(vector<double> in_vec) {
    vector<double> out_vec;
	for (int i=0; i < in_vec.size(); i++) {
		out_vec.push_back(in_vec[i] * in_vec[i]);
	}
	return out_vec;
}


/* Our main program for running some vector examples,
   using the helper functions defined above.
*/
int main() {

    vector<double> data(3);
    cout << "stored in data[2] is: " << data[2] << endl;

cout << endl << "--------------------" << endl << endl;

    // Adding elements to the "back" of the vector using push_back()
    vector<double> values;
    values.push_back(3);
    values.push_back(5);
    values.push_back(1);
    values.push_back(8);
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // Removing elements from the "back" of the vector using pop_back()
    values.pop_back();
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // How can we empty an entire vector? Member function clear() pops everything off!
    values.clear();
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // Filling vector from cin (or other file stream inputs!)
    double input;
    while (cin >> input) {
        values.push_back(input);
    }
    cout << "values is now... ";
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // Here is a function that does NOT modify the vector contents
    double total = sum(values);
    cout << "Total is: " << total << endl;
    cout << "values is: ";
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // Here is a function that DOES modify the vector contents
    multiply(values, 2);
    cout << "values is: ";
    display_vec(values);

cout << endl << "--------------------" << endl << endl;

    // Here is a function that returns a vector, and takes one as input
    vector<double> new_values;
    new_values = square(values);
    cout << "new_values is: ";
    display_vec(new_values);

    return 0;
}