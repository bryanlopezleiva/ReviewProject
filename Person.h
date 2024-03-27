//
// Created by Bryan Lopez on 2/23/24.
//

#ifndef REVIEWPROJECT_PERSON_H
#define REVIEWPROJECT_PERSON_H

#include <iostream>
#include <string>

class Person
{
private:
    std::string name;
    int age;

public:
    Person();
    Person(const std::string &name, int age);

    const std::string &getName() const;
    void setName(const std::string &name);

    int getAge() const;
    void setAge(int age);

    friend std::ostream &operator <<(std::ostream& outs, const Person &person);

    friend std::istream &operator >>(std::istream& ins, Person& person);
};


#endif //REVIEWPROJECT_PERSON_H
