//
// pch.cpp
// Include the standard header and generate the precompiled header.
//

#include <CheckIn\CheckIn.hxx>
#include <TestCheckIn\CheckIn-Input-Validation-Module.hxx>


TEST(Setup, TestConnection) {
	EXPECT_EQ(Check::TestConnection(), true);
}
