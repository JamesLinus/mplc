#pragma once

namespace mplc {
	template<typename _cond>
	struct if_ {
		template<typename _usr_metafunction_class>
		if_(_usr_metafunction_class metafunc) {
			if_impl(_cond::value, metafunc);
		}
		template<typename _usr_metafunction_class>
		void if_impl(bool _flag,_usr_metafunction_class metafunc) {
			metafunc();
		}
	};
}
