

# CMakeList.txt: ������ CMake ��� CMakeProject1; �������� �������� ��� � �����������,
# ������� ����� ������ ��� ����������� �������.
#
cmake_minimum_required (VERSION 3.8)

# �������� �������� � ����������� ���� ����� �������.
add_executable (Task7 "") 
target_sources(Task7 PRIVATE "Task7_main.c")
target_sources(Task7 PRIVATE "Task7_func.c")
target_include_directories(Task7 PRIVATE "func.h")

# TODO: �������� ����� � ������� �������, ���� ��� ����������.
