#pragma once

namespace mplc {
	template<int _range_end>
	struct while_ {
		static const int range_end = _range_end;
		int range_start = 0;
		template<typename _usr_meta_function_class>
		while_(_usr_meta_function_class metafunc) {
			while_impl(metafunc);
		}

	private:
		template<typename _usr_meta_function_class>
		void while_impl(_usr_meta_function_class metafunc) {
			if (range_end == range_start)//impure
				return;					 //impure
			metafunc(range_start);
			range_start++;				 //impure
			while_impl(metafunc);
		}
	};
}