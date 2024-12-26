// Interface of Student class module
// Written by Wei Gong (open-src@qq.com) 2024-12-10

#pragma once
#include <string>
#include <vector>

class EnrollmentGrade;

class Student
{
public:
    Student(std::string name, std::string id);

    void registerCourse(std::string courseId);
    void schedule();
    bool hasId(std::string studentId);
    // void info(std::string &courseRoster); //协作课程对象完成选课学生信息的数据传送
    void info(); //协作课程对象完成选课学生信息的输出，是课程对象要委托给学生对象的行为

private:
    std::string m_name;
    std::string m_id;

    std::vector<EnrollmentGrade *> _enrollmentGrades;
};
