#pragma once

#include <iostream>
#include <string>

typedef struct {   
    std::string title;
    double mark;
    std::string date;
    std::string description;
}tarea;


class usuario {
    private:
        std::string name_;
        std::string last_name_; 
        int code_;
        bool teacher_;
        
    public:
        usuario(std::string name, std::string last_name, int code, bool teacher) :
            name_(name),
            last_name_(last_name),
            code_(code),
            teacher_(teacher)        
        { /*code*/}

        std::string get_name(void)
        {
            return name_;
        }
        std::string get_last_name(void){
            return last_name_;
        }
        
        void set_name(std::string name){
            name_ = name;
        }
        void set_last_name(std::string last_name)
        {
            last_name_ = last_name; 
        }
        int get_code() {
            return code_;
        }
        void set_code(int code){
            code_ = code;
        }


        bool isProfesor(){
            return true;
        }

        ~usuario(){}
};