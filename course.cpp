// Implementation of Course class module
// Written by Wei Gong (open-src@qq.com) 2024-12-10

#include "course.h"
#include "enrollmentgrade.h"
#include "student.h"
#include <iostream>

extern std::vector<Course> courses;
extern std::vector<Student> students;
extern std::vector<EnrollmentGrade> enrollmentGrades;

short Course::maxEnrollments{80};

Course::Course(std::string name, std::string id, short credit) : m_name{name}, m_id{id}, m_credit{credit} {}

EnrollmentGrade *Course::enroll(std::string studentId)
{
    if (_enrollmentGrades.size() < maxEnrollments) {
        auto &r = enrollmentGrades
                      .emplace_back(studentId,
                                    m_id); //同意报名，创建新的enrollmentGrade对象，并返回其引用
        _enrollmentGrades.push_back(
            &r); //同意报名，添加新的enrollmentGrade对象的地址到关联指针数组中
        return &r;                                     //同意报名，返回新的enrollmentGrade对象的地址
    }
    return nullptr;
}

void Course::roster()
{
    std::cout << m_name + " selected by the students:\n";
    for (auto s : _enrollmentGrades) {
        s->studentInfo(); // 课程对象委托学生对象自己输出相关信息
    }
    std::cout << '\n';
}

bool Course::hasId(std::string courseId)
{
    return courseId == m_id;
}
