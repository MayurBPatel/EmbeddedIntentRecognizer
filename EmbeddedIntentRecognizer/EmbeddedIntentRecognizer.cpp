// EmbeddedIntentRecognizer.cpp : Defines the entry point for the application.
//

#include "EmbeddedIntentRecognizer.h"
using namespace std;

int main()
{
	cout << "Hello Embedded Intent Recognizer using CMake." << endl;	
	string input;
	do {
		cout << "Hey! How can I help you? " << endl;
		input.clear();
		getline(cin, input);

		// convert the input line to lower case for intent recognization check
		transform(input.begin(), input.end(), input.begin(), ::tolower);

		// intent recognization using regular expression or can be also done using string matching e.g. string::find()
		if ((regex_search(input, regex("weather")) || regex_search(input, regex("rain"))) && regex_search(input, regex("in")))
			cout << "Intent: Get Weather City" << endl;
		else if (regex_search(input, regex("weather")) || regex_search(input, regex("rain")))
			cout << "Intent: Get Weather" << endl;
		else if (regex_search(input, regex("free")) || regex_search(input, regex("busy")) || regex_search(input, regex("appointment")))
			cout << "Intent: Check Calendar" << endl;
		else if (regex_search(input, regex("fact")))
			cout << "Intent: Get Fact" << endl;
		else if (regex_search(input, regex("fuel")) || regex_search(input, regex("petrol")) || regex_search(input, regex("diesel")))
			cout << "Intent: Get Fuel Station" << endl;
		else if (regex_search(input, regex("restaurant")) || regex_search(input, regex("hungry")) || regex_search(input, regex("food")))
			cout << "Intent: Get Restaurant" << endl;
		else if (regex_search(input, regex("entertainment")) || regex_search(input, regex("movie")) || regex_search(input, regex("song")))
			cout << "Intent: Get Entertainment" << endl;
		else if (regex_search(input, regex("bye")))
			cout << "Good Bye!" << endl;
		else
			cout << "Intent: Unknown" << endl;

	} while (input != "bye");

	return 0;
}

