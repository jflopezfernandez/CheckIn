
#define _SILENCE_TR1_NAMESPACE_DEPRECATION_WARNING

#include <Windows.h>
#include <gtest/gtest.h>
#include <CheckIn/CheckIn.hxx>
#include <TestCheckIn/CheckIn-Input-Validation-Module.hxx>
#include <iostream>

TEST(Setup, InitialConfiguration) {
	EXPECT_EQ(Check::TestConnection(), true);
}

TEST(ExpectingInteger, ReturnIntegerOrKeepGoing) {
	EXPECT_EQ(1, 1);
}


int main(int argc, char *argv[])
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
