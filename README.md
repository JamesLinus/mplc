mplc 
----
 use c++ template metaprogramming technique to bootstrap the c programming language

如你所见这只是一个用来证明C艹黑科技的娱乐库.即便如此我也需前置声明一些东西,一个合理概念上的c++ template metaprogramming是只依赖C++编译期的,这个期间通常又称为纯函数语言时期,在此期间元数据和元函数[类]是不可变的且没有副作用,但是这和我们的娱乐精神相违背,因为这种特性导致我们造出来的玩具几乎没有可玩性,所以我们必须导入少量的运行期元素.我能做的是尽量最小化运行期成分,并可能会考虑统计运行期成分比例(小得可怜),如果还是不能说服完美主义者我很抱歉.


## if-statement
````cpp
#include <iostream>
#include "if_.hpp"

int main(){
	using namespace mplc;
	if_ <
		int_<1>
	>::then_<
		if_<bool_<true>>::then_<long>::type
	>::else_<
		double
	>::type longa;
	longa = 5000;
	std::cout<<longa;
	return 0;
}
````

## while-statement
````cpp
#include "operator_less_.hpp"
#includue "int_.hpp"
#include "if_.hpp"
#inlcude "while_hpp"
#include "bool_.hpp"

int main() {
	using namespace mplc;
	while_ <
		if_<
		less<int_<9>, int_<7>>
		>::then_<true_>::else_<false_>::type
	> t;
	return 0;
}
````