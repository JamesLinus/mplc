#pragma once
namespace mplc {
	// - operator
	template< typename T, const T _a, const T _b>
	struct minus_impl {
		static const T value = _a - _b;
	};
	template<typename _type_a, typename _type_b>
	struct minus : minus_impl<typename _type_a::value_type, _type_a::value, _type_b::value> {};
}