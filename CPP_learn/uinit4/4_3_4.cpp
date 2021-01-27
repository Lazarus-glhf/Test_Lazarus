//委托构造函数
// Clock(int newH,int newM,int newS):
// hour(newH),minute(newM),second(newS){}  //构造函数
// Clock::Clock:hour(0),minute(0),second(0){}  //默认构造函数


// 委托构造函数使用类的其他构造函数执行初始化过程
// Clock(int newH,int newM,int newS):
// hour(newH),minute(newM),second(newS){}
// Clock():Clock(0,0,0){}