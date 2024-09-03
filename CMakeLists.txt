cmake_minimum_required(VERSION 3.30)

project(pqman
	VERSION 1.0.1
	DESCRIPTION "C++ library with class Pqmqn for work with PostgreSQL."
	LANGUAGES CXX)

file(GLOB
	public_headers "*.h"
	sources "*.cpp")

# set the C++ standard
set(CMAKE_CXX_STANDARD 17)

# set Postgresql actual version.
set(PostgreSQL_ADDITIONAL_VERSIONS "16")

add_subdirectory(
	"./libpqxx-7.9.2" libpqxx-build
)

set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

#target_compile_features(${PROJECT_NAME} PRIVATE cxx_std_17)
#target_link_libraries(${PROJECT_NAME}.exe ${PROJECT_NAME}_lib libpqxx-build)
add_library(${PROJECT_NAME} ${sources} ${public_headers} pqxx)
