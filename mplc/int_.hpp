#pragma once

namespace mplc {
	//int_ type
	template<int _i>
	struct int_ {
		static const int value = _i;
		typedef int_ type;
		typedef int value_type;
	};
}