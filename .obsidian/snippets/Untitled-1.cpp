#include<iostream>
#include<string>

class Engine
{
    public:
        Engine(std::string, int);
        void print();
        int getHp();
        std::string getFuel();
    private:
        std::string fuelType;
        int hp;
};
int Engine::getHp()
{return hp;}
std::string Engine::getFuel()
{return fuelType;}
Engine::Engine(std::string fuelType, int hp)
    :fuelType(fuelType), hp(hp){}

void Engine::print()
{
    std::cout << getFuel() << " engine with " << getHp() << " horse power";
}
class Car
{
    public:
        Car();
        Car(std::string, std::string, int);
        void print();
        std::string getName();
    private:
        std::string name;
        Engine engine;
};
std::string Car::getName(){return name;}

Car::Car(): name(""), engine("", 0){}

Car::Car(std::string name, std::string fuelType, int hp)
    :name(name), engine(fuelType, hp){}

void Car::print()
{
    std::cout << getName() << " has " ;
    engine.print();
}
class AutoPark
{
    public:
        AutoPark(std::string);
        void addCar(Car& newCar);
        void print();
        std::string getNameauto();
    private:
        std::string name;
        Car cars[100];
        int carCount;

};
std::string AutoPark::getNameauto(){return name;}
AutoPark::AutoPark(std::string name)
    :name(name), carCount(0){}

void AutoPark::addCar(Car& newCar)    
{   

    cars[carCount]= newCar;
    carCount++;
}
void AutoPark::print()
{
    std::cout<<"The following cars are available in " << getNameauto() << ":";
    for(int i = 0; i < carCount; i++)
        cars[i].print();
}
int main()
{   
    Car c1{"VW id4","electrical",201};
    Car c2{"Toyota", "hybrid",219};
    Car c3{"Ferrari","gasoline",424};

    AutoPark a{"AutomobileRO"};
    a.addCar(c1);
    a.addCar(c2);
    a.addCar(c3);

    a.print();
    return 0;
}