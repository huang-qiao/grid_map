cmake_minimum_required(VERSION 2.8.3)
project(gridmap)

# force using c++11
include(CheckCXXCompilerFlag)
CHECK_CXX_COMPILER_FLAG("-std=c++11" COMPILER_SUPPORTS_CXX11)
CHECK_CXX_COMPILER_FLAG("-std=c++0x" COMPILER_SUPPORTS_CXX0X)
if(COMPILER_SUPPORTS_CXX11)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
elseif(COMPILER_SUPPORTS_CXX0X)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++0x")
else()
    message(STATUS "The compiler ${CMAKE_CXX_COMPILER} has no C++11 support. Please use a different C++ compiler.")
endif()

set(CMAKE_MODULE_PATH 
  ${CMAKE_MODULE_PATH} 
  "${PROJECT_SOURCE_DIR}/CMakeModules/"
)

find_package(PkgConfig REQUIRED)
find_package(Eigen3 REQUIRED)

include_directories(
  grid_map_core/include
  ${EIGEN3_INCLUDE_DIR}
)

set(HDRS
  grid_map_core/include/grid_map_core/eigen_plugins/DenseBasePlugin.hpp
  grid_map_core/include/grid_map_core/eigen_plugins/Functors.hpp
  grid_map_core/include/grid_map_core/eigen_plugins/FunctorsPlugin.hpp
  grid_map_core/include/grid_map_core/iterators/CircleIterator.hpp
  grid_map_core/include/grid_map_core/iterators/EllipseIterator.hpp
  grid_map_core/include/grid_map_core/iterators/GridMapIterator.hpp
  grid_map_core/include/grid_map_core/iterators/LineIterator.hpp
  grid_map_core/include/grid_map_core/iterators/PolygonIterator.hpp
  grid_map_core/include/grid_map_core/iterators/SpiralIterator.hpp
  grid_map_core/include/grid_map_core/iterators/SubmapIterator.hpp
  grid_map_core/include/grid_map_core/iterators/iterators.hpp
  grid_map_core/include/grid_map_core/BufferRegion.hpp
  grid_map_core/include/grid_map_core/GridMap.hpp
  grid_map_core/include/grid_map_core/GridMapMath.hpp
  grid_map_core/include/grid_map_core/Polygon.hpp
  grid_map_core/include/grid_map_core/SubmapGeometry.hpp
  grid_map_core/include/grid_map_core/TypeDefs.hpp
  grid_map_core/include/grid_map_core/grid_map_core.hpp
  grid_map_core/include/grid_map_core/gtest_eigen.hpp  
)

set(SRCS
  grid_map_core/src/GridMap.cpp
  grid_map_core/src/GridMapMath.cpp
  grid_map_core/src/SubmapGeometry.cpp
  grid_map_core/src/BufferRegion.cpp
  grid_map_core/src/Polygon.cpp
  grid_map_core/src/iterators/GridMapIterator.cpp
  grid_map_core/src/iterators/SubmapIterator.cpp
  grid_map_core/src/iterators/CircleIterator.cpp
  grid_map_core/src/iterators/EllipseIterator.cpp
  grid_map_core/src/iterators/SpiralIterator.cpp
  grid_map_core/src/iterators/PolygonIterator.cpp
  grid_map_core/src/iterators/LineIterator.cpp  
)

add_library(${PROJECT_NAME} STATIC ${SRCS})

install(TARGETS ${PROJECT_NAME} DESTINATION ${CMAKE_INSTALL_PREFIX}/lib)
install(DIRECTORY grid_map_core/include DESTINATION ${CMAKE_INSTALL_PREFIX})
