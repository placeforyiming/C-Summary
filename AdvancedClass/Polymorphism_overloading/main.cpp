#include <ctime>
#include<iostream>
#include <string>
// a simple example of overloading
class Date {
public:
    Date(int day, int month, int year) : day_(day), month_(month), year_(year) {}
    Date(int day, int month) : day_(day), month_(month)  // automatically sets the Date to the current year
    {
        time_t t = time(NULL);
        tm* timePtr = localtime(&t);
        year_ = timePtr->tm_year;
    }

private:
    int day_;
    int month_;
    int year_;
};

// an example of operator overloading
struct Vector2
{
    float x,y;
    Vector2(float x, float y):x(x),y(y){}

    Vector2 Add(const Vector2& other) const //const at the end to make sure no change of class member variable
    {
        return Vector2(x+other.x,y+other.y);
    }

    Vector2 operator+(const Vector2& other) const 
    {
        return Add(other);
    }

    Vector2 Multiply(const Vector2& other) const 
    {
        return Vector2(x*other.x,y*other.y);
    }

    Vector2 operator*(const Vector2& other) const 
    {
        return Multiply(other);
    }
};

std::ostream& operator<<(std::ostream& stream, const Vector2& other)
{
    stream<<other.x<<","<<other.y;
    return stream;
}
int main(){
    Date A(4,5,6);
    Date B(4,5);

    Vector2 position(4.0,4.6);
    Vector2 speed(0.5,1.5);
    Vector2 powerup(1.5,1.5);

    Vector2 result_1=position.Add(speed.Multiply(powerup));

    Vector2 result_2=position+speed*powerup;

    std::cout<<result_1<<std::endl;
    std::cout<<result_2<<std::endl;

}