cmake_minimum_required(VERSION 3.15)
project(public_key_crypto)

set(CMAKE_CXX_STANDARD 14)

add_executable(public_key_crypto src/main.cpp src/create_prime.cpp src/create_p_q.cpp src/calculate_n.cpp src/choose_d.cpp)
