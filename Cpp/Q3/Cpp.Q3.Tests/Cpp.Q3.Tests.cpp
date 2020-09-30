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

        ///TODO: There is a memory leak. Find it and fix it.
        ///File Student.h and Teacher.h can be modified, but only a portion of this section can be modified.
        TEST_METHOD(CppQ3Test)
		{
            Student::_counter = 0;

            {
                //*************** Can change this section ****************** Start
                Teacher* teacher1 = new Teacher();
                Teacher* teacher2 = new Teacher();
                Teacher* teacher3 = new Teacher();
                //*************** Can change this section ****************** End

                {
                    //*************** Can change this section ****************** Start
                    Student* student1 = new Student("Philippe", 14);
                    Student* student2 = new Student("Marc", 15);
                    //*************** Can change this section ****************** End

                    teacher1->add_student(student1);
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
                }

                auto teacher1_desc = teacher1->get_job_description();
                const std::string expected_teacher1 = "Teaching to: \r\nPhilippe, Marc";
                Assert::AreEqual(expected_teacher1, teacher1_desc);

                auto teacher2_desc = teacher2->get_job_description();
                const std::string expected_teacher2 = "Teaching to: \r\nMarc";
                Assert::AreEqual(expected_teacher2, teacher2_desc);

                auto teacher3_desc = teacher3->get_job_description();
                const std::string expected_teacher3 = "Nothing";
                Assert::AreEqual(expected_teacher3, teacher3_desc);

                Assert::AreEqual(2, Student::_counter);
            }

            Assert::AreEqual(0, Student::_counter);
		}
	};
}
