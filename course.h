// Interface of Course class module
// Written by Wei Gong (open-src@qq.com) 2024-12-09

#pragma once
#include <string>
#include <vector>

class EnrollmentGrade;

class Course
{
public:
    Course(std::string name, std::string id, short credit);

    // enroll()操作做报名审核：同意报名后，创建EnrollmentGrade并返回其指针；不同意报名，则返回空指针
    EnrollmentGrade *enroll(std::string studentId);
    void roster();
    bool hasId(std::string courseId);
    void recordsScore(std::ifstream &ifs); //todo
    void info();

private:
    std::string m_name;
    std::string m_id;
    short m_credit;
    static short maxEnrollments;

    std::vector<EnrollmentGrade *> _enrollmentGrades;
};
