//
// Created by Bryan Lopez on 2/23/24.
//

#include "Student.h"

Student::Student():email(""),id(0){}

Student::Student(const std::string &email, int id)
{
    this->email = email;
    this->id = id;
}

Student::Student(const std::string &name, int age, const std::string &email, int id)
{
    setName(name);
    setAge(age);
    this->email = email;
    this->id = id;
}

const std::string &Student::getEmail() const
{
    return email;
}

void Student::setEmail(const std::string &email)
{
    Student::email = email;
}

int Student::getId() const
{
    return id;
}

void Student::setId(int id)
{
    Student::id = id;
}

std::ostream &operator<<(std::ostream &outs, const Student &student)
{
    outs << student.getName() << " " << student.getAge() << " " << student.email << " " << student.id << std::endl;

    return outs;
}

std::istream &operator >>(std::istream& ins, Student& student)
{
    std::string name;
    int age;

    std::cout <<"----- Enter student information -----" << std::endl;

    std::cout << "Enter your name: ";
    ins >> name;
    student.setName(name);
    std::cout <<"Enter your age: ";
    ins >> age;
    student.setAge(age);

    std::cout << "Enter your email: ";
    ins >> student.email;

    std::cout << "Enter your id: ";
    ins >> student.id;

    return ins;
}

