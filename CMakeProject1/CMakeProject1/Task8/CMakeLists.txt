# CMakeList.txt: ������ CMake ��� CMakeProject3; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#

cmake_minimum_required (VERSION 3.8)


# �������� �������� � ����������� ���� ����� �������.
add_library(Task8_lib STATIC "../Task7/Task7_func.c")
target_include_directories(Task8_lib PRIVATE "../Task7/func.h")
add_executable (Task8 "")
target_sources(Task8 PRIVATE "../Task7/Task7_main.c")
target_link_libraries(Task8 Task8_lib)

#add_executable ("Task7_func.c" "func.h") 
# TODO: �������� ����� � ������� �������, ���� ��� ����������.