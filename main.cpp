#include <iostream> //C++ 语言定义了一些头文件，这些头文件包含了程序中必需的或有用的信息。上面这段程序中，包含了头文件 <iostream>。
#include <cstring>  //字符串比较方法库

using namespace std;//导入std命名空间 C＋＋标准程序库中的所有标识符都被定义于一个名为std的namespace

/*
 * 定义了一个颜色枚举，变量 c 的类型为 color。最后，c 被赋值为 "blue"。
 */
enum Color { red=1, green=2, blue=3 };

// 变量声明
extern int a, b;
extern int c;
extern float f;
//使用 #define 预处理器定义常量的形式：
#define LENGTH 10
#define WIDTH  5
#define NEWLINE '\n'
const int  LENGTH1 = 10;
int main() {
    if(strcmp("map", "map1") == 0) {
        cout << "Hello, World!" << endl;
    } else{
        cout << "Hello, World!----" << endl;
    }
    cout << sizeof(bool) << std::endl;
    cout << sizeof(int) << std::endl;

    Color yanse = Color::blue;

    cout << yanse << endl;

    // 变量定义
    int a, b;
    int c;
    float f;

    // 实际初始化
    a = 10;
    b = 20;
    c = a + b;

    cout << c << endl ;

    f = 70.0/3.0;
    cout << f << endl ;

    int area;

    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    cout << LENGTH1;
    return 0;
}



