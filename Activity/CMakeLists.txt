cmake_minimum_required(VERSION 3.0)
project(Activity)
#设定编译参数
set(CMAKE_CXX_STANDARD 11)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include(../CMakeComm.txt)
#设定头文件路径
include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_SOURCE_DIR}/Data/protobuf
        ${PROJECT_SOURCE_DIR}/resource/protobuf
)

# 数据结构文件

# Visual Studio项目中包含头文件
#file(GLOB_RECURSE CURRENT_HEADERS  ${PROJECT_SOURCE_DIR}/include/*.h ${PROJECT_SOURCE_DIR}/include/*.hpp)
#source_group("Header Files" FILES ${CURRENT_HEADERS}) 

#设定所有源码列表 ：aux_source_directory(<dir> <variable>)
#比如:aux_source_directory(${CMAKE_SOURCE_DIR} DIR)  将${CMAKE_SOURCE_DIR}目录下，也就是最顶级目录下所有的.cpp文件放入DIR变量中，后面的add_executable就可以很简化
#    add_executable(hello_world ${DIR})
# 主要代码
aux_source_directory(${PROJECT_SOURCE_DIR}/src SOURCE_DIR)
# 数据定义
aux_source_directory(${PROJECT_SOURCE_DIR}/Data/protobuf SOURCE_DIR)
# 配置定义
aux_source_directory(${PROJECT_SOURCE_DIR}/resource/protobuf SOURCE_DIR)

add_definitions( -DPROJECT_SOURCE_DIR=\"${PROJECT_SOURCE_DIR}\")

add_executable(Activity 
    ${SOURCE_DIR} 
)

target_link_libraries(Activity 
        ${COMM_LIB_NAME}
)
