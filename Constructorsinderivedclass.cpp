#include <iostream>
using namespace std;
/*
Case 1:
class b: public a{};
//order of execution of constructor -> first a() then b)()

Case 2:
class  a: public b,public c{};
//order -> first b() then c() then a()

Case 3:
class a: public b(), virtual public c{};
//order -> first c() then b() then a()
*/

class base1{
    int data1;
    public:
    base1(int i){
        data1=i;
        cout<<"Base class const called."<<endl;
    }
    void printdata1(void){
    cout<<"The value of data1 is:"<<data1<<endl;
    }
};

class base2{
    int data2;
    public:
    base2(int i){
        data2=i;    
        cout<<"Base2 class const called."<<endl;
    }
    void printdata2(void){
        cout<<"The value of data2 is:"<<data2<<endl;
    }
};

class derived: public base1,public base2{
    int der1,der2;
    public:
    derived(int a,int b,int c,int d) : base1(a),base2(b){
        der1=c;
        der2=d;
        cout<<"Dderived class constructor called."<<endl;
    }
    void printdata(void){
        cout<<"The value of derived1 is:"<<der1<<endl;
        cout<<"The value of dedrived2 is:"<<der2<<endl;
    }
};

int main(){
    derived rishit(1,2,3,4);
    rishit.printdata1();
    rishit.printdata2();
    return 0;
}