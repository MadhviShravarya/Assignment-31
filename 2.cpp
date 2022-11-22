#include<iostream>
using namespace std;

class AddData          //Base Class
{
        protected:
                int num1, num2;
        public:
                void accept()
                {
                        cout<<"\n Enter First Number : ";
                        cin>>num1;
                        cout<<"\n Enter Second Number : ";
                        cin>>num2;
                }
};
class Addition: public AddData   //Class Addition – Derived Class
{
                int sum;
        public:
                void add()
                {
                        sum = num1 + num2;
                }
                void display()
                {
                        cout<<"\n Addition of Two Numbers : "<<sum;
                }
};
int main()
{
        Addition a;
        a.accept();
        a.add();
        a.display();
        return 0;
}
