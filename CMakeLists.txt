cmake_minimum_required(VERSION 2.8)

project(eigen_trial) #The name of your choice for the project comes here

add_compile_options(-std=c++11) #optional to use c++11

find_package(Eigen3 REQUIRED)

link_directories(${Eigen_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} "eigen_trial.cpp") #The name of the cpp file and its path can vary

target_link_libraries(${PROJECT_NAME}
   ${Eigen_LIBRARIES}
   )
