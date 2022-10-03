
#include <iostream>
#include <string>

struct Data {
    int age;
    std::string name;
};

uintptr_t serialize(Data* ptr)
{
    uintptr_t retVal = reinterpret_cast<uintptr_t>(ptr);
    return retVal;
}

Data* deserialize(uintptr_t raw)
{
    Data *retVal = reinterpret_cast<Data *>(raw);
    return retVal;
}

int main()
{
    Data boy1;
    boy1.name = "Tom";
    boy1.age = 5;

    std::cout << std::endl << boy1.name << std::endl;
    std::cout << boy1.age << std::endl;

    uintptr_t serialized = serialize(&boy1);
    Data *boy2;
    boy2 = deserialize(serialized);

    std::cout << boy2->name << std::endl;
    std::cout << boy2->age << std::endl << std::endl;
    return 0;
}