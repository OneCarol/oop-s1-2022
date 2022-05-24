#include <fstream>
#include "manager.h"
#include "globalFile.h"
#include "general.h"
#include "student.h"

//default constructor
Manager::Manager()
{
}

//constructor with parameters
Manager::Manager(string name, string password)
{
    this->name = name;
    this->password = password;
}

//show number of tickets
void Manager::show_ticket(){
    cout<<"there are "<< General::ticket<< " general ticket left."<<endl;
    cout<<"there are "<< Student::student_ticket<< " student ticket left."<<endl;
}

//add users
void Manager::add_user(){
    
    cout << "Please choose the user type" << endl;
    cout << "1. add student user" << endl;
    cout << "2. add general user" << endl;

    string file_name;
    string tip;
    ofstream file_stream;

    int select = 0;
    cin >> select;

    if (select == 1)
    {
        file_name = STUDENT_FILE;
    }
    else
    {
        file_name = GENERAL_FILE;
    }

    file_stream.open(file_name, ios::out | ios::app);
    string name;
    string pwd;
    cout <<tip << endl;

    cout << "Please input name: " << endl;
    cin >> name;

    cout << "Please input password: " << endl;
    cin >> pwd;

    file_stream<< name << " " << pwd <<" "<< endl;
    cout << "added successfully!" << endl;

    system("pause");
    system("cls");

    file_stream.close();
}

//the menu of manager
void Manager::operation_menu()
{
    cout << "Welcome "<< name << "!" << endl;
    cout << "__________________________________"<<endl;
    cout << "|                                |"<<endl;
    cout << "|          1.add user            |"<<endl;
    cout << "|                                |"<<endl;
    cout << "|          2.view ticket         |"<<endl;
    cout << "|                                |"<<endl;
    cout << "|          0.log out             |"<<endl;
    cout << "|                                |"<<endl;
    cout << "__________________________________"<<endl;
    cout << "your choice is: " << endl;
}

void Manager::cleanFile(){

}