#include "gtest/gtest.h"

int main(int argc, char* argv[])
{
	::testing::GTEST_FLAG(filter) = "ConfigManagerTests*";
	//::testing::GTEST_FLAG(filter) = "UtilManagerTests*";
	::testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}