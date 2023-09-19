# CMakeList.txt: проект CMake для Elvees; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (Elvees "Elvees.cpp"  "1_1.cpp" "includer.h" "1_2.cpp" "1_3.cpp" "1_4.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Elvees PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
