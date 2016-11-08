#pragma once

#include "bool_.hpp"

namespace mplc {
	template<class ..._while_body>
	struct for_ {
		static const int value = for_<_while_body...>::value;
	};
	template<class ..._while_body> struct for_<false_, _while_body...> {
		static const int value = 0;
	};
}