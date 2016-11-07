#pragma once
#include "bool_.hpp"

namespace mplc {
	template<bool _l, bool _r>
	struct or_impl {};
	template <> struct or_impl<true, true> :true_ {};
	template <> struct or_impl<true, false> :true_ {};
	template <> struct or_impl<false, true> :true_ {};
	template <> struct or_impl<false, false> :false_ {};
	template<typename _ltype, typename _rtype>
	struct or_ : or_impl<_ltype::value, _rtype::value> {};
}