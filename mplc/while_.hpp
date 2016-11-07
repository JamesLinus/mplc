#pragma once

#include "bool_.hpp"

namespace mplc {
	template<class ..._while_body>
	struct while_ {
		static const int value = while_<_while_body...>::value;
	};
	template<class ..._while_body> struct while_<false_,_while_body...> {
		static const int value = 0;
	};
}