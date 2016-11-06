#pragma once

namespace mplc {
	template<int _range_start, int _range_end>
	struct for_ {
		static const int range_end = _range_end;
		int range_start = _range_start;	//impure
		template<typename _usr_meta_function_class>
		for_(_usr_meta_function_class metafunc) {
			for_impl(metafunc);
		}

	private:
		template<typename _usr_meta_function_class>
		void for_impl(_usr_meta_function_class metafunc) {
			if (range_end == range_start)//impure
				return;					 //impure
			metafunc(range_start);		 
			range_start++;				 //impure
			for_impl(metafunc);
		}
	};
}