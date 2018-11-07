//demo c++ program
#include<iostream>
using namespace std;
struct student{
        int id;
        string name;
} s;
class School{
        public:
        student S;
        void Display()
        {
                cout<<"Student details:"<<endl;
                cout<<"id: "<<S.id<<"\tName: "<<S.name<<endl;
        }
        void Welcome();
};

void School::Welcome(void)
        {
                cout<<"Welcome "<<S.name<<"!!!"<<endl;
        }
int main()
{
        s.id=1,s.name="rakshith";
        cout<<"Hello"<<endl;
        cout<<"id: "<<s.id<<"\tName: "<<s.name<<endl;
        School school;
        school.S.id=2;
        school.S.name="Rakesh";
        school.Display();
        school.Welcome();
}
