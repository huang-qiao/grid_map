LOCAL_PATH := $(call my-dir)

# gridmap.a
$(info "Build gridmap.a")
$(info $(LOCAL_PATH))
include $(CLEAR_VARS)
LOCAL_MODULE           := gridmap
LOCAL_EXPORT_C_INCLUDES := \
  $(LOCAL_PATH)/grid_map_core/include \
  $(LOCAL_PATH)/grid_map_cv/include
LOCAL_C_INCLUDES +=  \
  $(EIGEN_PATH) \
  $(LOCAL_PATH)/grid_map_core/include \
  $(LOCAL_PATH)/grid_map_cv/include

LOCAL_SRC_FILES  += \
  grid_map_core/src/GridMap.cpp \
  grid_map_core/src/GridMapMath.cpp \
  grid_map_core/src/SubmapGeometry.cpp \
  grid_map_core/src/BufferRegion.cpp \
  grid_map_core/src/Polygon.cpp \
  grid_map_core/src/iterators/GridMapIterator.cpp \
  grid_map_core/src/iterators/SubmapIterator.cpp \
  grid_map_core/src/iterators/CircleIterator.cpp \
  grid_map_core/src/iterators/EllipseIterator.cpp \
  grid_map_core/src/iterators/SpiralIterator.cpp \
  grid_map_core/src/iterators/PolygonIterator.cpp \
  grid_map_core/src/iterators/LineIterator.cpp \
  grid_map_cv/src/GridMapCvProcessing.cpp

include $(BUILD_STATIC_LIBRARY)
