<center> Singleton </center>

1. When should you use a Singleton
2. How do you implement a Singleton correctly

## Use a Singleton if:

1. If you need to have one and only one object of a type in system

## Do not use a Singleton if:

1. If you want to save memory
2. If you want to try something new
3. If you want to show off how much you know
4. Because everyone else is doing it (See cargo cult programmer in wikipedia)
5. In user interface widgets
6. It is supposed to be a cache
7. In strings
8. In Sessions
9. I can go all day long

## How to create the best singleton:

1. The smaller, the better. I am a minimalist
2. Make sure it is thread safe
3. Make sure it is never null
4. Make sure it is created only once
5. Lazy or system initialization? Up to your requirements
6. Sometimes the OS or the JVM creates singletons for you (e.g. in Java every class definition is a singleton)
7. Provide a destructor or somehow figure out how to dispose resources
8. Use little memory

## c++

1. In C++11 statics are initialized in a thread safe way: Object initialization will be made only by one thread, other threads will wait till it complete.

2. 静态成员变量初始化顺序不依赖构造函数, 得看编译器心情的, 没法保证初始化顺序 

3. 静态化并不是单例模式: 把所有的成员变量和成员方法都用 static 修饰，去了面对对象的重要特性 -- "多态", 静态成员方法不可能是 virtual 的


## reference
	1. http://stackoverflow.com/questions/86582/singleton-how-should-it-be-used