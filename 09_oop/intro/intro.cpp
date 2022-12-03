struct Person
{
    Person() 
    { 
        std::cout << "Person::ctor" << std::endl; 
    }
    ~Person() 
    { 
        std::cout << "Person::dtor" << std::endl; 
    }
    std::string name{};
};

struct Student: virtual public Person
{
    Student() 
    { 
        std::cout << "Student::ctor" << std::endl; 
    }
    ~Student() 
    { 
        std::cout << "Student::dtor" << std::endl; 
    }
    int score{};
};

struct Teacher: virtual public Person
{
    Teacher() 
    { 
        std::cout << "Teacher::ctor" << std::endl; 
    }
    ~Teacher() 
    { 
        std::cout << "Teacher::dtor" << std::endl; 
    }
};

struct TA: Teacher, Student
{
    TA()
    {
        std::cout << "TA::ctor" << std::endl;
    }
    ~TA()
    {
        std::cout << "TA:dtor" << std::endl;
    }
};


int main()
{
    TA ta;

    ta.score = 5.0;

    ta.name = "Da Sha";

    return 0;
}