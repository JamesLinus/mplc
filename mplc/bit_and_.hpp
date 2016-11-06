#pragma once
#include "bool_.hpp"

namespace mplc {
	template<bool _l, bool _r>
	struct and_impl {};
	template <> struct and_impl<true, true> :true_ {};
	template <> struct and_impl<true, false> :false_ {};
	template <> struct and_impl<false, false> :false_ {};
	template <> struct and_impl<false, true> :false_ {};
	template<typename _ltype, typename _rtype>
	struct and_ : and_impl<_ltype::value, _rtype::value> {};
}