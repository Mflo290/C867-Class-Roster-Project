#include <iostream>
#include <string>
using namespace std;
#include"student.h"
#include"roster.h"
#include "Main.h"





int main() {

	cout << "C867-Scripting & Programming: Applications" << endl;
	cout << "Language: C++" << endl;
	cout << "Student ID: 5915299" << endl;
	cout << "Name: Mario Flores" << endl;

	const string studentData[] = {
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Mario,Flores,mflo290@wgu.edu,24,15,30,45,SOFTWARE"
	};

	cout << endl;
	cout << "Displaying All Students:" << endl;
	Roster classRoster; 
	for (int i = 0; i < 5; i++)
	{
		classRoster.parse(studentData[i]);
	}
	//Print All
	classRoster.printAll(); 
	cout << endl;

	//Print Invalid Emails
	cout << "Displaying Invlalid Emails:" << endl;
	classRoster.printInvalidEmails();
	cout << endl;

	//Print Average Days in Course
	cout << "Displaying average days in course: " << endl;
	for (int i = 0; i < 5; i++)
	{
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->GetStudentID());
	}
	cout << endl;

	//Print By Degree Program
	cout << "Showing students in degree program: SOFTWARE" << endl;
	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);
	cout << endl; 

	//Remove 
	cout << "Removing A3: " << endl;
	classRoster.remove("A3");



	return 0;
}