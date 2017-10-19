cmake_minimum_required(VERSION 3.8)
project(EstruturaDeDados)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c ListaSequencial/ListaSequencial.h ListaSequencial/ListaSequencial.c ListaDinamicaEncadeada/ListaDinEncad.h ListaDinamicaEncadeada/ListaDinEncad.c)
add_executable(EstruturaDeDados ${SOURCE_FILES})