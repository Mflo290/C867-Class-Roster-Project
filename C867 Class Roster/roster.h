#pragma once
#include"student.h"


class Roster {
public: 
	Student* classRosterArray[5];
	void add(string studentID, string firstName, string lastName, string emailAddress, int Age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	void remove(string studentID);
	void printAll(); 
	void printAverageDaysInCourse(string studentID); 
	void printInvalidEmails(); 
	void printByDegreeProgram(DegreeProgram degreeProgram); 
	int capacity = 0;	
	void parse(string data); 
	


};






