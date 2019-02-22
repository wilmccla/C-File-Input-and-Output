#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
	ofstream logFile; // Give the file a name
	logFile.open("time.txt", ios::out | ios::app); // Open the file and determine what to do with it.
	/* ios::out puts information into the file, ios::in reads the file and gives information to the program
	 * ios::app appends the information to the end of the file, ios::trunc replaces the file information with the new info */
	logFile << "The time is 4:59 right now\n"; // Text to put into the file
	logFile << "The time is now 5:00\n"; // More text to put into the file
	system("Pause");

	string line;
	ifstream readLogFile;
	readLogFile.open("time.txt");
	getline(readLogFile, line);
	cout << line << endl;


	logFile.close(); // Make sure to close the file

	return 0;
}