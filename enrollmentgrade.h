// Interface of Course class module
// Written by Wei Gong (open-src@qq.com) 2024-12-14

#pragma once

#include <string>
#include <vector>
class Course;
class Student;

class EnrollmentGrade
{
public:
    EnrollmentGrade(std::string studentId, std::string courseId);

    double score() const noexcept;
    double addPointsScore(double points = 0) noexcept;
    void studentInfo();
    void courseInfo();
    bool hasId(std::string studentId, std::string courseId);

private:
    bool m_graded;

    double m_midterm;
    double m_final;
    std::vector<double> m_homework;

    std::string m_studentId;
    std::string m_courseId;

    Course *_course;
    Student *_student;
};
