#pragma once
#include "bool_.hpp"

namespace mplc {
	template<bool _l, bool _r>
	struct xor_impl {};
	template <> struct xor_impl<true, true> :false_ {};
	template <> struct xor_impl<true, false> :true_ {};
	template <> struct xor_impl<false, true> :true_ {};
	template <> struct xor_impl<false, false> :false_ {};
	template<typename _ltype, typename _rtype>
	struct xor_ : xor_impl<_ltype::value, _rtype::value> {};
}