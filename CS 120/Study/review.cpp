#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Dog{
    int age;
    string name;
    // Dog(int a, string n){
    //     {age=a,name=n;}
    // }
};

class House{

    private:
        Dog tom/*25,"Allen"*/;
        int address;
    public:
        House(){
            address = 1152;
        }
        string getDogName(){
            return tom.name;
        }
        int getDogAge(){
            return tom.age;
        }
        void setDogName(string);
        void setDogAge(int age){
            tom.age = age;
        }
};
void House::setDogName(string name ){
    tom.name = name;
}

int add(int& a, int& b){
    a+=b;// a=a+b
    b-=a;
    return b;
}

int adds(){
    static int count;
    count++;
}

int gcd(int x, int y)
{
	  if (x % y == 0) //base case
			return y;
	  else
        cout<<"\n\n x:"<<x<<"\n\n y: "<<y<<endl;
			return gcd(y, x % y);
}

int main(){
    int a=3, b=5;

    House ourHouse;

    cout<<gcd(43, 66)<<endl;

    vector<int> v ={3,1,2};
    v.insert(v.begin,1);
    for(int val: v){
        cout<<val<<endl;
    }

    // char str[20] = "hi";
    // char *ptsd = str;
    // cout<< &ptsd;

    // int firstvalue, secondvalue;
    // int * mypointer;

    // mypointer = &firstvalue;
    // *mypointer = 10;
    // mypointer = &secondvalue;
    // *mypointer = 20;
    // cout << "firstvalue is " << firstvalue << '\n';
    // cout << "secondvalue is " << secondvalue << '\n';
    
    // int dogos[20];
    // cout<<dogos[1]<<endl;
    // ourHouse.setDogAge(12);
    // ourHouse.setDogName("Tom");
    // int dAge = ourHouse.getDogAge();
    // string dName= ourHouse.getDogName();

    // cout<<"The dog's age "<< dAge<<endl;
    // cout<<"The dog's Name "<< dName<<endl;
    
    
    // cout<<"b = "<< b<<endl;
    // cout<<"b = "<< add(a,b)<<endl;
    // cout<<"b = "<< b<<endl;
    // typedef int yearArray[1]={0,1};
    // yearArray highTemps, lowTemps;

    // cout<<highTemps[1];




    return 1;
}
