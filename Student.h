//
// Created by Bryan Lopez on 2/23/24.
//

#ifndef REVIEWPROJECT_STUDENT_H
#define REVIEWPROJECT_STUDENT_H

#include "Person.h"

class Student : public Person
{
private:
    std::string email;
    int id;

public:
    Student();
    Student(const std::string& email, int id);
    Student(const std::string &name, int age, const std::string &email, int id);

    const std::string &getEmail() const;
    void setEmail(const std::string &email);

    int getId() const;
    void setId(int id);

    friend std::ostream &operator <<(std::ostream& outs, const Student &student);
    friend std::istream &operator >>(std::istream& ins, Student& student);
};


#endif //REVIEWPROJECT_STUDENT_H
