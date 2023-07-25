cmake_minimum_required(VERSION 3.23)
project(beg_cplusplus17)

set(CMAKE_CXX_STANDARD 17)

add_executable(Ex6_07 Examples/Chapter06/Ex6_07.cpp)

# 14.1.2 调用继承的函数
add_executable(Ex14_01 Examples/Chapter14/Ex14_01/Ex14_01.cpp)
# 14.1.3 虚函数
add_executable(Ex14_02 Examples/Chapter14/Ex14_02/Ex14_02.cpp)
add_executable(Ex14_03 Examples/Chapter14/Ex14_03/Ex14_03.cpp)
# 14.1.4 虚函数中的默认实参值
add_executable(Ex14_04 Examples/Chapter14/Ex14_04/Ex14_04.cpp)
# 14.1.5 通过引用调用虚函数
add_executable(Ex14_05 Examples/Chapter14/Ex14_05/Ex14_05.cpp)
# 14.1.6 多态集合
add_executable(Ex14_06 Examples/Chapter14/Ex14_06/Ex14_06.cpp)
# 14.1.7 通过指针释放对象
add_executable(Ex14_07 Examples/Chapter14/Ex14_07/Ex14_07.cpp)
add_executable(Ex14_07A Examples/Chapter14/Ex14_07A/Ex14_07A.cpp)
# 14.1.11 在构造函数或析构函数中调用虚函数
add_executable(Ex14_08 Examples/Chapter14/Ex14_08/Ex14_08.cpp)
# 14.3 确定动态类型
add_executable(Ex14_09 Examples/Chapter14/Ex14_09/Ex14_09.cpp)
# 14.4.1 抽象类
add_executable(Ex14_10 Examples/Chapter14/Ex14_10/Ex14_10.cpp)
# 14.4.2 用作接口的抽象类
add_executable(Ex14_11 Examples/Chapter14/Ex14_11/Ex14_11.cpp)

add_executable(Ex17_01 Examples/Chapter17/Ex17_01/Ex17_01.cpp)
add_executable(Ex17_02 Examples/Chapter17/Ex17_02/Ex17_02.cpp)
add_executable(Ex17_03 Examples/Chapter17/Ex17_03/Ex17_03.cpp)
add_executable(Ex17_04 Examples/Chapter17/Ex17_04/Ex17_04.cpp)