#include "student.h"

//default constructor
Student::Student()
{
}

//constructor with parameters
Student::Student(string name, string password)
{
    this->name = name;
    this->password = password;
}

//application froreservation
void Student::apply_order(){
    if(has_ticket==true){
        cout<<"you already has a student ticket!"<<endl;
        return;
    }
    if(student_ticket>0){
        student_ticket--;
        has_ticket=true;
        cout<<"Applied successfully!"<<endl;
    }else{
        cout<<"the ticket is sold out!"<<endl;
    }

};

//check reservation
void Student::show_order(){
    if(has_ticket){
        cout<<"This is a student ticket."<<endl;
    }else{
        cout<<"you don't have a student ticket!"<<endl;
    }

};

//cancel reservaiton
void Student::cancel_order(){
    if(has_ticket){
        student_ticket++;
        has_ticket=false;
        cout<<"Cancelled successfully!"<<endl;
    }
};


//menu of student
void Student::operation_menu(){
    {
        cout << "Welcome "<< name << "to student menu!" << endl;
        cout << "__________________________________"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          1.apply order         |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          2.view order          |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          3.cancel order        |"<<endl;
        cout << "|                                |"<<endl;
        cout << "|          0.log out             |"<<endl;
        cout << "|                                |"<<endl;
        cout << "__________________________________"<<endl;
        cout << "your choice is: " << endl;
    }
};
