# C 语言实现面向对象

## 三大特征

- 封装  
  在 `.h` 文件中声明结构体，然后在 `.c` 文件中详细定义结构体。这样其他文件就没办法直接访问结构体的具体内容。  
  为了方便，使用 `typedef` 做简化。  
  在这之后，只能通过 xxGetXXX() 来获取结构体内的内容。
- 继承  
  子类结构体包含父类结构体。父类结构体必须在第一个位置。这样转为父类指针时，子类结构体前面部分就是父类结构体了。
- 多态
  在父类结构体中加入一个子结构体，这个结构体专门存储函数指针。子类创建时，将子类的函数赋值到父类存储函数指针的结构体里面。  
  当转为父类时调用接口，会去获取对应的函数指针，然后调用函数，从而实现多态。


参考文档：
- Visual Studio Code 如何编写运行 C、C++ 程序？：https://www.zhihu.com/question/30315894
- Makefile由浅入深--教程、干货：https://zhuanlan.zhihu.com/p/47390641
- A Simple Makefile Tutorial：http://www.cs.colby.edu/maxwell/courses/tutorials/maketutor/
- Makefile的工作流程：http://c.biancheng.net/view/7091.html
- Linux下Makefile中动态链接库和静态链接库的生成与调用：https://blog.csdn.net/u011964923/article/details/73297443
- C语言：春节回家过年，我发现只有我没有对象！：https://mp.weixin.qq.com/s/2ivQ9hcRvZnhk89jzAppSg
- C语言的不完整类型和前置声明：https://blog.csdn.net/astrotycoon/article/details/41286413
- C语言实现多态：https://blog.csdn.net/dumpling5232/article/details/52632060

## 使用方法

1. 使用 Windows 环境

2. 下载 mingw：https://sourceforge.net/projects/mingw-w64/files/

3. 解压到任意文件夹。并将文件夹路径加入系统环境变量 Path 里面。参考 https://www.zhihu.com/question/30315894

4. 进入该项目文件夹，执行以下命令：
    ```
    make
    bin/main.exe
    ```