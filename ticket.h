#pragma once
#include<iostream>
using namespace std;

class ticket
        {
        public:
            string name;
            int age;
            string gender;
            string ID;

            int get_ID(){
                return this->id;
            };

            string get_name(){
                return this->name;
            }

             int get_age(){
                return this->age;
            };

             int get_gender(){
                return this->gender;
            };

            void set_ID(int ID){
                this->ID = ID;
            }

            void set_name(string name){
                this->name = name;
            }

            void set_age(string age){
                this->age = age;

            void set_gender(string gender){
                this->gender = gender;
            }
            }


        };

