set(rmc_core_srcs   	${CMAKE_CURRENT_SOURCE_DIR}/RemoteControlBoard.cpp)

set(rmc_core_hrds   	${CMAKE_CURRENT_SOURCE_DIR}/RemoteControlBoard.h)


if(CBW2_USE_YARP_THRIFT)

set(rmc_core_srcs   	${rmc_core_srcs}
                        ${CMAKE_CURRENT_SOURCE_DIR}/stateExtendedReader.cpp
                        )

set(rmc_core_hrds   	${rmc_core_hrds}
                        ${CMAKE_CURRENT_SOURCE_DIR}/stateExtendedReader.hpp
                        )

endif(CBW2_USE_YARP_THRIFT)


# using PARENT_SCOPE to make files visible from upper level

set(rmc_core_srcs ${rmc_core_srcs} PARENT_SCOPE)
set(rmc_core_hrds ${rmc_core_hrds} PARENT_SCOPE)


set(rmc_core_incl_dirs  ${CMAKE_CURRENT_SOURCE_DIR} PARENT_SCOPE)
