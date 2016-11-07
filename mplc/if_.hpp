#pragma once

#include "nil_.hpp"

namespace mplc {
	template<class _crtf, bool _cond_value>
	struct if_impl : nil {
	};

	template<class _crtf> struct if_impl<_crtf, true> {
		template<class _then_body>
		struct then_ {
			typedef _then_body type;

			template<class _else_body>
			struct else_ {
				typedef _then_body type;
			};
		};
	};

	template<class _crtf> struct if_impl<_crtf, false> {
		template <class _then_body>
		struct then_ {
			typedef nil type;
			template<class _else_body>
			struct else_ {
				typedef _else_body type;
			};
		};
	};

	template<class _cond>
	struct if_ :if_impl<if_<_cond>, _cond::value> {};
}
