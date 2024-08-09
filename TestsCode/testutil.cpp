#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Code/Util.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestsCode
{		
	TEST_CLASS(UtilTests)
	{
	public:
		TEST_METHOD(linearSearch_SingleArray)
		{
			int tab[] = { 0 };
			const int NB_ELEMENTS = 1;
			const int VALUE_TO_FIND = 1;

			int index = Util::linearSearch(tab, NB_ELEMENTS, VALUE_TO_FIND);

			Assert::AreEqual(-1, index);
		}
		TEST_METHOD(binarySearch_SingleArray)
		{
      int tab[] = {0};
      const int NB_ELEMENTS = 1;
      const int VALUE_TO_FIND = 1;

      int index = Util::binarySearch(tab, NB_ELEMENTS, VALUE_TO_FIND);

      Assert::AreEqual(-1, index);
		}
		/*A COMPLETER */

		TEST_METHOD(bubbleSort_SingleElementArray)
		{
			int tab[] = { 0 };
			const int EXPECTED_TAB[] = { 0 };
			const int NB_ELEMENTS = 1;
			
			Util::bubbleSort(tab, NB_ELEMENTS);

			Assert::IsTrue(areArraysEqual(EXPECTED_TAB,tab, NB_ELEMENTS));
		}
		/*A COMPLETER */
	
	private:
		bool areArraysEqual(const int arr1[], const int arr2[], unsigned int size)
		{
			/*A COMPLETER */
			return false;
		}

	};
}