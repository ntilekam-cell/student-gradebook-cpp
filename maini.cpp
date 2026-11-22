#include <iostream>
#include <fstream>
#include "gradebook.h"

int main() {

    int targetScore, targetLevel;

    std :: cout << "Enter Target Score: ";
    std :: cin >> targetScore;
    std :: cout << "Enter Target Grade Level: ";
    std :: cin >> targetLevel;

    //Create benchmark_student using overloaded constructor with empty string for name
    Gradebook benchmark_student("",targetScore, targetLevel);

    std :: ifstream file("Students.txt");
    if (!file) {
        std :: cerr << "Error opening Student.txt file!!" << std :: endl;
        return 1;
    }

    Gradebook currentStudent;
    std :: cout << "\nStudents meeting or exceeding the benchmark: \n";

    //Read and compare each record using while loop
    while (file >> currentStudent) {
        if (currentStudent >= benchmark_student) {
            std :: cout << currentStudent << std :: endl;
        }
    }

    file.close();
    return 0;

}
