#include "gradebook.h"

//Default constructor
Gradebook :: Gradebook() : studentName(""), score(0), gradeLevel(0) {}

//Overloaded constructor
Gradebook :: Gradebook(std :: string name, int s, int level)
: studentName(name), score(s), gradeLevel(level) {}

//Destructor
Gradebook :: ~Gradebook() {}

//Accessor
int Gradebook :: get_score() const {
    return score;
}

//Overloaded >= operator
bool operator >= (const Gradebook & student1, const Gradebook & student2) {
    return (student1.score >= student2.score) && (student1.gradeLevel >= student2.gradeLevel);
}

//Overloaded extraction operator(>>)
std :: istream & operator >> (std :: istream & in, Gradebook & student) {
    in >> student.studentName >> student.score >> student.gradeLevel;
    return in;
}

//Overloaded insertion operator (<<)
std :: ostream & operator << (std :: ostream & out, const Gradebook & student) {
    out << "Name: " << student.studentName
        << ", Score: " << student.score
        << ",Grade Level: " << student.gradeLevel;
        return out;
}