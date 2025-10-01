cmake_minimum_required(VERSION 3.23)
project(Solucoes_comentadas_da_Introducao_a_Computacao_IME_USP_2005 C)

set(CMAKE_C_STANDARD 11)

function(add_exercicio pasta nome)
    set(num 1)
    foreach(arquivo IN LISTS ARGN)
        add_executable(${nome}${num} "${pasta}/${num}/${arquivo}.c")
        find_library(MATH_LIBRARY m)
        if(MATH_LIBRARY)
            target_link_libraries(${nome}${num} PUBLIC ${MATH_LIBRARY})
        endif()
        math(EXPR num "${num} + 1")
    endforeach()
endfunction()

add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/1.Inteiros" int
        um dois tres quatro cinco seis sete oito nove dez onze doze treze catorze
        quinze dezesseis dezessete dezoito dezenove vinte vinteum vintedois vintetres
)

add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/2.Repetições Encaixadas" repete um dois tres quatro cinco seis sete oito)
add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/3.Reais" real um dois tres quatro cinco seis sete oito nove dez onze doze)
add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/4.Funcoes1" fn1_ um dois tres quatro cinco seis)
add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/5.Funcoes2" fn2_ um dois tres quatro cinco seis)

#falta 10, 11, 12, 13, 14, 15, 16, 17
add_exercicio("../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/6.Vetores" vet um dois tres quatro cinco seis sete oito nove dez onze doze treze catorze quinze dezesseis dezessete)

function(add_matriz_exercicio)
    set(num 1)
    foreach(arquivo IN LISTS ARGN)
        add_executable(m${num} "../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/7.Matriz/${num}/${arquivo}.c"
                "../Solucoes-comentadas-da-Introducao-a-Computacao-IME-USP-2005/7.Matriz/matriz.c")
        math(EXPR num "${num} + 1")
    endforeach()
endfunction()

#falta 8, 9, 10, 11, 12
add_matriz_exercicio(um dois tres quatro cinco seis sete oito nove dez onze doze)

