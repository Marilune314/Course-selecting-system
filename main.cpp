// Course selection system demo
// Written by Wei Gong (open-src@qq.com) 2024-12-09

#include <vector>

#include "course.h"
#include "enrollmentgrade.h"
#include "student.h"

 // 数据管理层中的全局数组，用于管理所有的领域对象
std::vector<Student> students;
std::vector<Course> courses;
std::vector<EnrollmentGrade> enrollmentGrades;

int main()
{
    students.emplace_back("Thomas", "202200023");
    students.emplace_back("Baker", "202200005");
    students.emplace_back("Norman", "202200014");

    students.emplace_back("Biden", "202300005");
    students.emplace_back("Jerry", "202300033");
    students.emplace_back("Tom", "202300045");

    students.emplace_back("Harris", "202400050");
    students.emplace_back("Trump", "202400002");
    students.emplace_back("Musk", "202400001");

    courses.emplace_back("C Programming", "b601", 4);
    courses.emplace_back("data structure", "b606", 3);
    courses.emplace_back("Operating System Principles", "c702", 3);
    courses.emplace_back("Software Construction " "and Implementation", "x801", 4);

    students[0].registerCourse("x801");
    //students[1].registerCourse("x801");
    //students[2].registerCourse("x801");

    //students[3].registerCourse("x801");
    //students[4].registerCourse("c702");
    //students[5].registerCourse("c702");

    //students[6].registerCourse("c702");
    //students[8].registerCourse("b601");
    //students[7].registerCourse("b601");

    courses[3].roster();
    //courses[2].roster();
    //courses[3].roster();

    return 0;
}
