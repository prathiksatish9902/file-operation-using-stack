cmake_minimum_required(VERSION 3.16)

project(fo_reverse_stack LANGUAGES C)

add_executable(fo_reverse_stack main.c)

include(GNUInstallDirs)
install(TARGETS fo_reverse_stack
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
