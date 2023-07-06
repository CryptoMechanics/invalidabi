project(contract2)

find_package(cdt)

add_contract( contract2 contract2 contract2.cpp )
target_include_directories( contract2 PUBLIC 	${CMAKE_SOURCE_DIR}/../include
						${CMAKE_SOURCE_DIR}/../../contract1/include
)

target_ricardian_directory( contract2 ${CMAKE_SOURCE_DIR}/../ricardian )
