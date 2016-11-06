mplc 
----
 use c++ template metaprogramming technique to bootstrap the c programming language

如你所见这只是一个用来证明C艹黑科技的娱乐库.即便如此我也需前置声明一些东西,一个合理概念上的c++ template metaprogramming是只依赖C++编译期的,这个期间通常又称为纯函数语言时期,在此期间元数据和元函数[类]是不可变的且没有副作用,但是这和我们的娱乐精神相违背,因为这种特性导致我们造出来的玩具几乎没有可玩性,所以我们必须导入少量的运行期元素.我能做的是尽量最小化运行期成分,并可能会考虑统计运行期成分比例(小得可怜),如果还是不能说服完美主义者我很抱歉.


## if-statement
````cpp
struct ifbody_a {
	void operator()() {
		std::cout << "if body a" << std::endl;
	}
};

...
ifbody_a ifa;
if_<bool_<true>>::if_(ifa);
````

## for-statement
````cpp
struct forbody {
	void operator()(int cnt) {
		std::cout << "helloworld at "<<cnt<< std::endl;
	}
};

...
forbody fb;
for_<0,10>::for_(fb);
````

## while-statement
````cpp
struct whilebody {
	void operator()(int cnt) {
		std::cout << "helloworld at "<<cnt<< std::endl;
	}
};
...
whilebody wb;
while_<10>::while_(wb);
````