#pragma once
#include<iostream>
using namespace std;

//abstract class
class Identity
        {
        public:
            string name; //set username
            string password;//set passiword

            string get_name(){
                return this->name;
            }

            void set_name(string name){
                this->name = name;
            }
            virtual void operation_menu() = 0;

        };

