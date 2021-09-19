#include <iostream>
#include <string>


// inheritance

// composition, friends : the meaning of those two class relationship

// Polymorphism : overloading, override

// virual function

// Example solution for Animal class

// Define base class Animal
class Animal {
public:
    std::string color;
    std::string name;
    int age;
};

// Public inheritance: the public and protected members of the base class listed after the specifier keep their member access in the derived class

// Protected inheritance: the public and protected members of the base class listed after the specifier are protected members of the derived class

// Private inheritance: the public and protected members of the base class listed after the specifier are private members of the derived class


// Declare derived class Snake
class Snake : public Animal {
public:
    int length;
    
    void MakeSound() const
    {
        std::cout << "Hiss\n";
    }
};

// Declare derived class Cat
class Cat : public Animal {
public:
    int height;

    void MakeSound() const
    {
        std::cout << "Meow\n";
    }
};

// Test in main()
int main() {

    Cat cat;
    Snake snake;

    cat.age = 10;
    cat.name = "Lucy";
    cat.MakeSound();
    snake.MakeSound();

    std::cout << cat.age << " " << cat.name << "\n";
}

// Composition is a closely related alternative to inheritance. Composition involves constructing ("composing") classes from other classes, instead of inheriting traits from a parent class.
// A common way to distinguish "composition" from "inheritance" is to think about what an object can do, rather than what it is. This is often expressed as "has a" versus "is a".
// From the standpoint of composition, a cat "has a" head and "has a" set of paws and "has a" tail.
// From the standpoint of inheritance, a cat "is a" mammal.



// In C++, friend classes provide an alternative inheritance mechanism to derived classes. 
// The main difference between classical inheritance and friend inheritance is that a friend class can access private members of the base class, which isn't the case for classical inheritance. 
// In classical inheritance, a derived class can only access public and protected members of the base class.