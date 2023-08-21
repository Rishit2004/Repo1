//Multiple Inheritance

#include <iostream>
using namespace std;

class base1{
    protected:
    int base1int;
    public:
    void set_base1(int a){
        base1int=a;
    }
};

class base2{
    protected:
    int base2int;
    public:
    void set_base2(int b){
        base2int=b;
    }
};

class derived : public base1, public base2{
    public:
    void show(){
        cout<<"value of base 1 is:"<<base1int << endl;
        cout<<"value of base 2 is:"<<base2int << endl;
        cout<<"value of sum is:"<< base1int + base2int << endl;
}
};

int main(){
    derived rishit; 
    rishit.set_base1(12);
    rishit.set_base2(13);
    rishit.show();
    return 0;
}