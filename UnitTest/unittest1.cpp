#include "stdafx.h"
#include "CppUnitTest.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(CustomConstructorTest)
		{
			Module module1("OOP", "COM326", 20, 95);

			std::string expectedModuleName("OOP");
			std::string expectedModuleCode("COM326");
			int expectedModuleCreditPoints(20);
			int expectedModuleResult(95);

			Assert::AreEqual(expectedModuleName, module1.getModuleTitle());
			Assert::AreEqual(expectedModuleCode, module1.getModuleCode());
			Assert::AreEqual(expectedModuleCreditPoints, module1.getModuleCreditPoints());
			Assert::AreEqual(expectedModuleResult, module1.getModuleMark());

		}

		TEST_METHOD(ModuleCodeGetterTest)
		{
			Module module1("OOP", "COM326", 20, 95);

			std::string expectedModuleCode("COM326");
			Assert::AreEqual(expectedModuleCode, module1.getModuleCode());
		}

		TEST_METHOD(ModuleCodeSetterTest)
		{
			Module module1("OOP", "COM326", 20, 95);

			std::string expectedCode("COM666");
			module1.setModuleCode(expectedCode);

			Assert::AreEqual(expectedCode, module1.getModuleCode());
		}

		TEST_METHOD(ModuleCreditPointsGetterTest)
		{
			Module module1("OOP", "COM326", 20, 95);

			int expectedModuleCreditPoints(20);
			Assert::AreEqual(expectedModuleCreditPoints, module1.getModuleCreditPoints());
		}

		TEST_METHOD(ModuleCreditPointsSetterTest)
		{
			Module module1("OOP", "COM326", 20, 95);

			int expectedCreditPoints(30);
			module1.setModuleCreditPoints(expectedCreditPoints);

			Assert::AreEqual(expectedCreditPoints, module1.getModuleCreditPoints());
		}

	};
}