﻿# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Включение горячей перезагрузки для компиляторов MSVC, если поддерживается.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProject1")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1 "CMakeProject1.cpp" "CMakeProject1.h" "main.cpp" "src/headers/YaProject.h" "src/sources/YaProject.cpp" "src/headers/Tool.h" "src/sources/Tool.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.

include_directories("C:/Users/ФАНИЛЬ/source/repos/CMakeProject1/src/headers")
include_directories("C:/src/vcpkg/packages/nlohmann-json_x64-windows/include")
include_directories("C:/src/vcpkg/packages/cpp-httplib_x64-windows/include")