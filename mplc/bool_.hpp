#pragma once

namespace mplc {
	//bool_ type
	template <bool _b>
	struct bool_ {
		static const bool value = _b;
		typedef bool_ type;
		typedef bool value_type;
	};
	typedef bool_<true> true_;
	typedef bool_<false> false_;
}