#include <iostream>
using namespace std;

//Base Class
class employee{
    public:
    int id;
    float salary;
    employee(int empid){
        id= empid;
        salary=34;
    }
    employee(){}
};

//Derived Class
/* Note:
1.Default visibility mode is private if not defined 
2.Public visibility mode:Public members of base class become public members of deriveed class.
3. Private visibility mode: Public members of base class become private members of derived class.
4.Private members are never inherited.
*/
class programmer : public employee{
    public:
    programmer(int empid){
        id=empid;
    }
    int languagecode = 9;
    void getData(){
        cout<<id<<endl;
    }
};

int main(){
    employee x(1),r(2);
    cout<<x.salary<<endl;
    cout<<r.salary<<endl;
    programmer skillf(1);
    cout<<skillf.id<<endl;
    skillf.getData();
    return 0;
}