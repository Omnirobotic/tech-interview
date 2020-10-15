#include "pch.h"
#include "CppUnitTest.h"

#include "Teacher.h"
#include "Student.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CppQ3Tests
{
	TEST_CLASS(CppQ3Tests)
	{
	public:

        ///TODO: There is a memory leak. Find it and fix it. The test must pass.
        ///File Student.h and Teacher.h can be modified, but only a portion of this section can be modified.
        TEST_METHOD(CppQ3Test)
		{
            Student::_counter = 0;

            {
                //*************** Can change this section ****************** Start
                //Creation of teachers must stay here.
                Teacher* teacher1 = new Teacher();
                Teacher* teacher2 = new Teacher();
                Teacher* teacher3 = new Teacher();
                //*************** Can change this section ****************** End

                {
                    //*************** Can change this section ****************** Start
                    //Creation of students must stay here.
                    Student* student1 = new Student("Philippe", 14);
                    Student* student2 = new Student("Marc", 15);
                    //*************** Can change this section ****************** End

                    teacher1->add_student(student1);

                    //Teachers have to refer to the same instance of student2.
                    teacher1->add_student(student2);
                    teacher2->add_student(student2);

                    auto teacher1_desc = teacher1->get_job_description();
                    const std::string expected_teacher1 = "Teaching to: \r\nPhilippe, Marc";
                    Assert::AreEqual(expected_teacher1, teacher1_desc);

                    auto teacher2_desc = teacher2->get_job_description();
                    const std::string expected_teacher2 = "Teaching to: \r\nMarc";
                    Assert::AreEqual(expected_teacher2, teacher2_desc);

                    auto teacher3_desc = teacher3->get_job_description();
                    const std::string expected_teacher3 = "Nothing";
                    Assert::AreEqual(expected_teacher3, teacher3_desc);

                    // We must handle the feature that a student changes his name.
                    // It's only there to make sure that both teachers are referring to the same student.
                    student2->_name = "MarcII";
                }

                auto teacher1_desc = teacher1->get_job_description();
                const std::string expected_teacher1 = "Teaching to: \r\nPhilippe, MarcII";
                Assert::AreEqual(expected_teacher1, teacher1_desc);

                auto teacher2_desc = teacher2->get_job_description();
                const std::string expected_teacher2 = "Teaching to: \r\nMarcII";
                Assert::AreEqual(expected_teacher2, teacher2_desc);

                auto teacher3_desc = teacher3->get_job_description();
                const std::string expected_teacher3 = "Nothing";
                Assert::AreEqual(expected_teacher3, teacher3_desc);

                //Teachers are still referring to those 2 students.
                Assert::AreEqual(2, Student::_counter);
            }

            //No more teachers so no more students.
            Assert::AreEqual(0, Student::_counter);
		}
	};
}
