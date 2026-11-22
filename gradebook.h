#ifndef GRADEBOOK_H
#define GRADEBOOK_H

#include <iostream>
#include <string>

class Gradebook {
    private:
        std :: string studentName;
        int score;
        int gradeLevel;

    public:
        //Constructors & Destructors
        Gradebook();
        Gradebook(std :: string name, int s, int level);
        ~Gradebook();

        //Accessor
        int get_score() const;

        //Friend Overloaded Operators
        friend bool operator >= (const Gradebook & student1, const Gradebook & student2);
        friend std :: istream & operator >> (std :: istream & in, Gradebook & student);
        friend std :: ostream & operator << (std :: ostream & out, const Gradebook & student);
};

#endif