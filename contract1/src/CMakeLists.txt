project(contract1)

find_package(cdt)

add_contract( contract1 contract1 contract1.cpp )
target_include_directories( contract1 PUBLIC ${CMAKE_SOURCE_DIR}/../include )
target_ricardian_directory( contract1 ${CMAKE_SOURCE_DIR}/../ricardian )