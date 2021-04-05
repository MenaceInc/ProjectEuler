cmake_minimum_required(VERSION 3.0)
project(ProjectEuler)

add_executable(ProjectEuler)
target_compile_features(ProjectEuler PRIVATE
                        cxx_std_20
                        )
target_sources(ProjectEuler PRIVATE
               src/main.cpp
               src/Euler001/Euler001.cpp
               )
