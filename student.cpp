// Implementation of Student class module
// Written by Wei Gong (open-src@qq.com) 2024-12-09

#include "student.h"

#include "course.h"
#include "enrollmentgrade.h"
#include <iostream>
#include <vector>

extern std::vector<Course> courses;
extern std::vector<Student> students;
extern std::vector<EnrollmentGrade> enrollmentGrades;

Student::Student(std::string name, std::string id) : m_name{name}, m_id{id} {}

void Student::registerCourse(std::string courseId)
{
    for (auto &c : courses) {
        if (c.hasId(courseId)) {
            auto egp{c.enroll(m_id)};
            if (egp) {
                _enrollmentGrades.emplace_back(egp);
            } else {
                std::cerr << "Course enrollment failed, the class is full.";
            }
        }
    }
}

bool Student::hasId(std::string studentId)
{
    return studentId == m_id;
}

void Student::info()
{
    std::cout << m_id << "  " << m_name << '\n';
}
