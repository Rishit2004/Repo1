#include<iostream>
#include<cstring>
using namespace std;

class a{
    protected:
    string title;
    float rating;
    public:
    a(string s, float r){
        title = s;
        rating=r;
    }
    virtual void disp(){cout<<"bogus";}
};

class av:public a{
    int vidlen;
    public:
    av(string s,float r,int vl):a(s,r){
        vidlen=vl;
    }
    /*void disp(){
        cout<<"This is a amazing vid"<<title<<endl;
        cout<<"Ratings are:"<<rating<<endl;
        cout<<"Length of video is:"<<vidlen<<endl;
    }*/
};

class at:public a{
    int words;
    public:
    at(string s,float r,int wc):a(s,r){
        words=wc;
    }
    void disp(){
        cout<<"This is a amazing vid"<<title<<endl;
        cout<<"Ratings are:"<<rating<<endl;
        cout<<"No of words in this tutorial is:"<<words<<endl;
    }
};

int main(){
    string title;
    float rating,vlen;
    int words;

    //for av
    title = "HeHe";
    rating = 4.5;
    vlen = 4.56;
    av vid(title,rating,vlen);
    vid.disp();

    //for av
    title="HeHe";
    rating=3.56;
    words=333;
    at txt(title,rating,words);
    txt.disp();

    /*a* tuts[2];
    tuts[0]=&vid;
    tuts[1]=&txt;

    tuts[0]->disp();
    tuts[1]->disp();*/
    return 0;
}