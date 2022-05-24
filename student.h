#pragma once
#include<iostream>
using namespace std;
#include "identity.h"
#include "general.h"

//class student
class Student :public General
        {
        public:
            static int student_ticket;
            //default constructor
            Student();

            //constructor with parameters
            Student(string name, string password);


            //check reservation
            void show_order();
            virtual void operation_menu();

            //application for reservation
            void apply_order();
            ///cancel reservation
            void cancel_order();
};