//Robert Pace IV

#include<string>
#include<iostream>
using namespace std;


class Car{
    private:
        int speed;
        int year;
        string make;
    public:
        void setSpeed(int s)
            {speed = s;}
        int getSpeed()
            {return speed;}
        string getMake()
            {return make;}
        int getYear()
            {return year;}
        Car(int yr, string mk)
            {year=yr; 
            make=mk;
            setSpeed(0);
            }
        void accelarete()
            {speed += 5;}
        void Break()
            {speed -= 5;}
};

int main()
{
    Car car1(1999, "Ford");
    cout<<"The speed of the car is: "<<car1.getSpeed()<<endl;
    for(int i = 0; i<5;i++){
        car1.accelarete();
        cout<<"accelareteing..."<<endl;
    }
    cout<<"The speed of the car is: "<<car1.getSpeed()<<endl;
    for(int i = 0; i<5;i++){
        cout<<"breaking..."<<endl;
        car1.Break();
    }
    cout<<"The speed of the car is: "<<car1.getSpeed()<<endl;
    return 0;
}
