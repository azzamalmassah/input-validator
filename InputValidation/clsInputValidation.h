#pragma once
#include <iostream>
#include"clsDate.h"


using namespace std;
class clsInputValidation
{
public:
	static int ReadPositiveNumber(string message) {
		int number = 0;
		do {
			cout << message << endl;
			cin >> number;
			while (cin.fail())
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				cout << "Write valid answer" << endl;
				cin >> number;

			}
		} while (number <= 0);
		return number;
	}

	
	static double ReadDblNumber(string ErrorMessage = "Invalid Number, Enter again\n") {
		double Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
			cin >> Number;
		}
		return Number;

	}

	static int ReadIntNumber(string ErrorMessage = "Invalid Number, Enter again\n") {
		int Number;
		while (!(cin >> Number)) {
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << ErrorMessage << endl;
			cin >> Number;

		}
		return Number;

	}
	static bool NumberInRange(int Number,int From, int To) {
		return (Number>=From && Number<=To);
	}


	static int ReadIntNumberBetween(int From, int To,string ErrorMessage ="Number is Not within range") {
		int Number = ReadIntNumber();
		while (!NumberInRange( Number,From,To)) {
			cout << ErrorMessage;
			Number = ReadIntNumber();
		}
		return Number;
	}

	static double ReadDblNumberBetween(double From, double To, string ErrorMessage = "Number is Not within range") {
		double Number = ReadDblNumber();
		while (!NumberInRange(Number, From, To) ) {
			cout << ErrorMessage;
			Number = ReadDblNumber();
		}
		return Number;
	}
	static bool IsValidDate(clsDate date) {
		
		return clsDate::isValid(date);
		}
};

