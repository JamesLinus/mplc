#pragma once
#include "bool_.hpp"

namespace mplc {
	template<bool _x>
	struct not_impl {};
	template <> struct not_impl<true> :false_ {};
	template <> struct not_impl<false> :true_ {};
	template <typename _type>
	struct not_ :not_impl<_type::value> {};
}