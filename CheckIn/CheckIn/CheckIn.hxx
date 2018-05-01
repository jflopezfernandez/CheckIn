
#ifndef CHECK_IN_CHECK_IN_HXX_
#define CHECK_IN_CHECK_IN_HXX_

#ifdef CHECK_API
#define CHECK_API __declspec(dllexport)
#else
#define CHECK_API __declspec(dllimport)
#endif

#include <iostream>

namespace Check {
	CHECK_API bool TestConnection() noexcept;

	CHECK_API int returnInteger();
}

#endif // CHECK_IN_CHECK_IN_HXX_
