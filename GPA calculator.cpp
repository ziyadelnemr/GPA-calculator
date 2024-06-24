#include <iostream>
#include <iomanip>
using namespace std;

void design(float num) {
	cout << "Credit hours" << setw(4) << "GPA" << endl;
	for (int i = 1; i <= num; i++) {
		cout << "|" << setw(8) << "|" << setw(9) << "|"<<endl;
	}
	
}

float typeGpa(float num,float gpaTable[],string gpa[]) {
	float sum = 0;
	for (int i = 0; i < num; i++) {
		if (gpa[i] == "A" || gpa[i] == "A+" || gpa[i] == "4")
			sum += gpaTable[i] * 4;
		else if (gpa[i] == "A-" || gpa[i] == "3.7")
			sum += gpaTable[i] * 3.7;
		else if (gpa[i] == "B+" || gpa[i] == "3.3")
			sum += gpaTable[i] * 3.3;
		else if (gpa[i] == "B" || gpa[i] == "3")
			sum += gpaTable[i] * 3;
		else if (gpa[i] == "B-" || gpa[i] == "2.7")
			sum += gpaTable[i] * 2.7;
		else if (gpa[i] == "C+" || gpa[i] == "2.3")
			sum += gpaTable[i] * 2.3;
		else if (gpa[i] == "C" || gpa[i] == "2")
			sum += gpaTable[i] * 2;
		else if (gpa[i] == "C-" || gpa[i] == "1.7")
			sum += gpaTable[i] * 1.7;
		else if (gpa[i] == "D+" || gpa[i] == "1.3")
			sum += gpaTable[i] * 1.3;
		else if (gpa[i] == "D" || gpa[i] == "1")
			sum += gpaTable[i] * 1;
		else if (gpa[i] == "F" || gpa[i] == "0")
			sum += gpaTable[i] * 0;
		else {
			cout << "Try real letter or number grade.";
			i--;
		}
	}
	return sum;
}

void getin(int num_of_subjects,float gpaTable[],string gpa[]) {
	for (int i = 0; i < num_of_subjects; i++) {

		cin >> gpaTable[i];
		cout << "GPA-->";
		cin >> gpa[i];
	}
}

int main() {
	

	//design(num_of_subjects);
	char state='y';
	while (state=='y'||state=='Y')
	{
		int num_of_subjects = 0;
		cout << "Enter the number of subjects you have: ";
		cin >> num_of_subjects;
		float* gpaTable = new float[num_of_subjects];
		string* gpa = new string[num_of_subjects];

		getin(num_of_subjects, gpaTable, gpa);
		float sum_of_credits = 0;
		for (int i = 0; i < num_of_subjects; i++)
			sum_of_credits += gpaTable[i];

		cout << "Your GPA result is " << typeGpa(num_of_subjects, gpaTable, gpa) / sum_of_credits;
		int num = 1;

		cout << endl << "Do you want try again(y/n): ";
		cin >> state;
		
			if ((state != 'y' || state != 'Y') && (state == 'n' || state == 'N')) 
				exit;
			else if(state != 'y' || state != 'Y'){
				cout << "Wrong letter";
				cout << endl << "Do you want try again(y/n): ";
				cin >> state;
			}
		
			delete[] gpaTable;
			delete[] gpa;
	}
	

	

	

	

	

	
}