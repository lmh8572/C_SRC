# CMakeLists.txt
cmake_minimum_required(VERSION 3.22)

# 프로젝트 이름
project(cmake_test)

# 실행 파일 추가
add_executable(cmake_test a.c b.c main.c)