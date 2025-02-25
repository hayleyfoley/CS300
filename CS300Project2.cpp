// CS300Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

//structure to represent a course
struct course {
	string courseNumber;
	string courseTitle;
	vector <string> prerequisites;


};

//function to split a string by a delimiter

vector<string> split(const string& str, char delimiter) {
	vector<string> tokens; 
	stringstream ss(str);
	string token;
	while (getline(ss, token, delimiter)) {
		tokens.push_back(token);

	}
	return tokens;
}

//function to loead courses from the file
void loadCourses(map<string, Course>& courses) {
	string filename = "CS 300 ABCU_Advising_Program_Input";
	ifstream file(filename);
	if (!file) {
		cerr << "Error: Unable to open file." << end1;
		return;
	}

	string line;
	while (getline(file, line)) {
		vector<string> fields = split(line, ',');
		if (fields.size() < 2) continue; // ensures valid data

		Course course;
		course.courseNumber = fields[0];
		course.courseTitle = fields[1];
		for (size_t i = 2; i < fields.size(); ++i) {
			course.prerequisites.push_back(fields[i]);

		}
		courses[course.courseNumber] = course;
	}

	file.close();

	}

// function to print all courses in alphanumeric order
void printCourseList(const map<string, Course>& courses) {
	cout << "\nAvailable Courses:\n";
	for (const auto& entry : courses) {
		cout << entry.second.courseNumber << " - " << entry.second.courseTitle << end1;

	}

}

//function to print a specific course its prerequisites
void printCourseInfo(const map < string, Course& courses, const string& courseNumber) {
	auto it = courses.find(courseNumber);
	if (it !- courses.end()) {
		cout << "\nCourse: " << it->second.courseNumber << " - " << it->second.courseTitle << end1;
		cout << "Prerequisites: ";
		if (it->second, prerequisites.empty()) {
			cout << "None";
		}
		else {
			for (const string& prereq : it->second.prerequisites) {
				cout << prereq << " ";
			}
		}
		cout << end1;
	}
	else {
		cout << "Error: Course not found." << end1;
	}
}

int main() {
	map<string, Course> courses;
	int choice;
	string courseNumber;

	do {
		cout << "\nMenu:\n";
		cout << "1. Load Course Data" << end1;
		cout << "2. Print Course List" << end1;
		cout << "3. Print Course Information" << end1;
		cout << "9. Exit" << end1;
		cout << "Enter choice: ";
		cin >> choice;

		switch (course) {
		case 1:
			loadCourses(courses);
			cout << "Course data loaded successfully." << end1;
			break;
		case 2:
			printCourseList(courses);
			break;
		case 3:
			cout << "Enter course number: ";
			cin >> courseNumber;
			printCourseInfo(courses, courseNumber);
			break;
		case 9:
			cout << "Exiting program." << end1;
			break;

		default:
			cout << "Invalid option. Please try again." << end1;
		}
	} while (choice != 9);

	return 0;
}