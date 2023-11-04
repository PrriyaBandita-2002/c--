#include<iostream>
using namespace std;

typedef struct seniors
{
    int id;
    char girlfriend;
    float cgpa;

}s;
union gorb
{
    int rate;
    
};
int main ()
{
    union gorb gb;
    enum Meal{breakfast,lunch,dinner};
    Meal m1=breakfast;
    Meal m2=lunch;
    Meal m3=dinner;
   
s roshan;
s saurav;
s archisman;
s pratik;
cout<<"start choosing and rating"
roshan.id = 40;
roshan. girlfriend='s';
roshan.cgpa=9.4;
gb.rate=3;
cout<<"the value of roshan is"<<  roshan.id<<endl;
cout<<"the value is"<<roshan. girlfriend<<endl;
cout<<"the value is"<<roshan.cgpa<<endl;
saurav .id = 40;
saurav. girlfriend='s';
saurav.cgpa=9.4;
gb.rate=3;
cout<<"the value of saurav is"<<saurav .id<<endl;
cout<<"the value is"<<saurav. girlfriend<<endl;
cout<<"the value is"<<saurav.cgpa<<endl;
cout<<"the value is"<<gb.rate<<endl;
pratik.id = 40;
pratik. girlfriend='p';
pratik.cgpa=9.4;
gb.rate=3;
cout<<"the value of pratik is "<<pratik.id <<endl;
cout<<"the value is "<<pratik. girlfriend<<endl;
cout<<"the value is "<<pratik.cgpa<<endl;
cout<<"the value is "<<gb.rate<<endl;
archisman .id = 4;
archisman. girlfriend='a';
archisman.cgpa=9.4;
gb.rate=3;
cout<<"the value of archisman is "<<archisman .id <<endl;

cout<<"the value is"<<archisman. girlfriend<<endl;

cout<<"the value is"<<archisman.cgpa<<endl;
cout<<"the value is"<<gb.rate<<endl;
}

