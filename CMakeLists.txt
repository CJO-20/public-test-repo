cmake_minimum_required(VERSION 3.30)
project(Test_Project LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

find_package(Poco REQUIRED)
file(GLOB TEST_SRC CONFIGURE_DEPENDS src/*.cpp)
add_executable(test.out ${TEST_SRC})
target_include_directories(test.out PRIVATE include)
target_link_libraries(test.out Poco::Foundation Poco::Data Poco::Encodings Poco::Zip Poco::JSON Poco::Crypto Poco::Net Poco::NetSSL)
