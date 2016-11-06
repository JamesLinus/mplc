#pragma once

namespace mplc {
	// ==equal
	template<typename _type_a, typename _type_b>
	struct equal {
		static const bool value = _type_a::value == _type_b::value;
	};
}