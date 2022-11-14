#include "Assignment2.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortbysec(const pair<string, int>& a,
	const pair<string, int>& b)
{
	return (a.second > b.second);
}

int main() {

	vector<double> numbers{ 645.41, 37.59, 76.41, 5.31, -34.23, 1.11, 1.10, 23.46, 635.47, -876.32, 467.83, 62.25 };
	vector<pair<string, int>> people{ {"Hal", 20}, {"Susann", 31}, {"Dwight", 19}, {"Kassandra", 21}, {"Lawrence", 25}, {"Cindy", 22}, {"Cory", 27}, {"Mac", 19}, {"Romana", 27}, {"Doretha", 32}, {"Danna", 20},
		{"Zara", 23}, {"Rosalyn", 26}, {"Risa", 24}, {"Benny", 28}, {"Juan", 33}, {"Natalie", 25}};

	sort(numbers.begin(), numbers.end());
	for (auto n : numbers) {
		cout << n << endl;
	}
	cout << endl;
	sort(people.begin(), people.end());
	sort(people.begin(), people.end(), sortbysec);
	for (auto p : people)
	{
		cout << p.first << " " << p.second << endl;
	}
}