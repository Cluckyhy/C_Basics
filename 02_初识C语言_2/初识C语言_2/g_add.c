

	//static 修饰全局变量
	//改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内部使用
	//出了源文件就没法使用了
	//static int g_val = 2021;   //全局变量

	//定义一个相加函数
	static int Sum(int x,int y) {
		return (x + y);
	}