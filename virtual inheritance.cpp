//Virtual class

#include<iostream>
using namespace std;

class student{
    protected:
    int roll_no;
    public:
    void set_rollno(int a){
        roll_no=a;
    }
    void print_no(void){
        cout<<"Your roll no is:"<<roll_no<<endl;
    }
};

class test : virtual public student{
    protected:
    float math,physics;
    public:
    void set_marks(float m1,float m2){
        math=m1;
        physics=m2;
    }
    void print_marks(void){
        cout<<"Your result is:"<<endl
            <<"Maths:"<<math<<endl
            <<"Physics"<<physics<<endl;
    }
};

class sports : virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void print_score(void){
        cout<<"Your score is:"<<sc<<endl;
    }
};

class result : public test, public sports{
    protected:
    float total;
    public:
    void display(void){
        total=maths+physics+score;
        print_no();
        print_marks();
        print_score();
        cout<<"Your total score is:"<<total<<endl;
    }
};

int main(){
    result rishit;
    rishit.set_no(347);
    rishit.set_marks(90,89);
    rishit.set_score(10);
    rishit.display();
    return 0;
}