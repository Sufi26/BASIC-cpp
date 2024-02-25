#include <iostream>


class Student{
    private:
    int roll_no, grade=0;
    public:
    Student();
    Student(int a, int b):roll_no(a), grade(b){};
    void show(){
        std::cout<<roll_no<<" "<<grade<<std::endl;
    }
    friend class helper;
};

// int show_grade(Student &obj){
//     return obj.grade;
// }

class helper{
    private:
    int a;
    public:
    int show_grade(Student &obj){
        return obj.grade;
    }
};


int main(){
    Student st(1, 2);
    helper obj;
    std::cout<<obj.show_grade(st)<<std::endl;

    return 0;
}