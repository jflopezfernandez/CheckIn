
#define CHECK_API

#include <CheckIn\CheckIn.hxx>

namespace Check {
	CHECK_API bool TestConnection() noexcept {
		return true;
	}

	CHECK_API int returnInteger() {
		bool success = false;

		int input = 0;

		do {
			std::cin.clear();
			std::cin >> input;

			if (!std::cin.fail()) {
				success = true;
			}
		} while (!success);

		return input;
	}
}
