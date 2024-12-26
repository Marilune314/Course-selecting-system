#include "enrollmentgrade.h"
#include "course.h"
#include "student.h"

extern std::vector<Course> courses;
extern std::vector<Student> students;
extern std::vector<EnrollmentGrade> enrollmentGrades;

EnrollmentGrade::EnrollmentGrade(
    std::string studentId, std::string courseId)
    : m_studentId{studentId}
    , m_courseId{courseId}
{
    for (auto &s : students) {
        if (s.hasId(studentId))
            _student = &s;
    }
    for (auto &c : courses) {
        if (c.hasId(courseId))
            _course = &c;
    }
}

void EnrollmentGrade::studentInfo()
{
    _student->info();
}

bool EnrollmentGrade::hasId(std::string studentId, std::string courseId)
{
    return (m_studentId == studentId) && (m_courseId == courseId);
}
