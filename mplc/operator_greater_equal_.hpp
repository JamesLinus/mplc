#pragma once

namespace mplc {
	// >= operator
	template<typename _type_a, typename _type_b>
	struct greator_equal {
		static const bool value = _type_a::value >= _type_b::value;
	};
}