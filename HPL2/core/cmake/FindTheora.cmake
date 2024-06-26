FIND_PATH(THEORA_INCLUDE_DIR NAMES theora/theora.h)
MARK_AS_ADVANCED(THEORA_INCLUDE_DIR)
 
FIND_LIBRARY(THEORA_LIBRARY NAMES
theora
libtheora
)
MARK_AS_ADVANCED(THEORA_LIBRARY)
 
INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(Theora DEFAULT_MSG THEORA_LIBRARY THEORA_INCLUDE_DIR)
