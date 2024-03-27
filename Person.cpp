//
// Created by Bryan Lopez on 2/23/24.
//

#include "Person.h"

Person::Person()
:name(""), age(0)
{}

Person::Person(const std::string &name, int age) : name(name), age(age)
{}

std::ostream &operator<<(std::ostream &outs, const Person &person)
{
    outs << person.name << " " << person.age;
    return outs;
}

const std::string &Person::getName() const
{
    return name;
}

void Person::setName(const std::string &name)
{
    Person::name = name;
}

int Person::getAge() const
{
    return age;
}

void Person::setAge(int age)
{
    Person::age = age;
}

std::istream &operator>>(std::istream &ins, Person &person)
{
    std::cout << "------ Entering person information -----"<<std::endl;

    std::cout << "Enter your name: ";
    ins >> person.name;

    std::cout << "Enter your age: ";
    ins >> person.age;

    return ins;
}
