#pragma once
#include <iostream>

namespace external_ns {
	struct MyCls;
}

namespace external_ns {
	struct MyCls {
		void f() {
			std::cout << "external_ns::MyCls::f()\n";
		}
	};
}