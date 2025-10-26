cmake_minimum_required(VERSION 3.23) 
project(Solucoes C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_library(poli STATIC "${CMAKE_CURRENT_SOURCE_DIR}/6.Vetores/poli.c")
target_include_directories(poli  PUBLIC "/${CMAKE_CURRENT_SOURCE_DIR}/6.Vetores")

add_library(mat STATIC "${CMAKE_CURRENT_SOURCE_DIR}/7.Matriz/matriz.c")
target_include_directories(mat PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/7.Matriz")

function(add_exercicio pasta nome)
    set(num 1)
    foreach(arquivo IN LISTS ARGN)
        add_executable(${nome}${num} "./${pasta}/${num}/${arquivo}.c")
        find_library(MATH_LIBRARY m)
        if(MATH_LIBRARY)
            target_link_libraries(${nome}${num} PRIVATE ${MATH_LIBRARY})
        endif()
        math(EXPR num "${num} + 1")
    endforeach()
endfunction()

add_exercicio("1.Inteiros" int
um dois tres quatro cinco seis sete oito nove dez onze doze treze catorze
quinze dezesseis dezessete dezoito dezenove vinte vinteum vintedois vintetres vintequatro
)

add_exercicio("2.Repetições_Encaixadas" repete
um dois tres quatro cinco seis sete oito)

add_exercicio("3.Reais" real
um dois tres quatro cinco seis sete oito nove dez onze doze)

add_exercicio("4.Funcoes1" fn1_
um dois tres quatro cinco seis)

add_exercicio("5.Funcoes2" fn2_
um dois tres quatro cinco seis)

#falta 10, 11, 12, 13, 14, 15, 16, 17
add_exercicio("6.Vetores" vet
um dois tres quatro cinco seis sete oito nove dez onze doze treze catorze quinze dezesseis dezessete)

add_exercicio("7.Matriz" ma
um dois tres quatro cinco seis sete oito nove dez onze doze)

add_exercicio("8.Funcoes3" fn3_ um dois tres quatro cinco seis sete oito nove dez onze doze treze catorze quinze)

foreach(tgt vet10 vet11 vet12 vet13 fn3_10)
    target_link_libraries(${tgt} PUBLIC poli)
endforeach()

foreach(tgt ma1 ma2 ma3 ma4 ma5 ma6 ma7 ma9 ma10 ma11 ma12 fn3_3 fn3_4 fn3_5 fn3_7 fn3_8 fn3_9 fn3_11 fn3_14 fn3_15)
    target_link_libraries(${tgt} PUBLIC mat)
endforeach()