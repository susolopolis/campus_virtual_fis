#pragma once

#include <iostream>
#include <string>

using namespace std;

typedef struct {   
    string title;
    double mark;
    string date;
    string description;
}tarea;


class usuario {
    private:
        string name_;
        string last_name_; 
        string code_;
        bool teacher_;
        
    public:
        usuario(string name, string last_name, string code, bool teacher) :
            name_(name),
            last_name_(last_name),
            code_(code),
            teacher_(teacher)        
        { /*code*/}

       string get_name(void)
        {
            return name_;
        }
        string get_last_name(void){
            return last_name_;
        }
        string get_code() {
            return code_;
        }
        bool isProfesor(){
            return true;
        }

       
        ~usuario(){}
};