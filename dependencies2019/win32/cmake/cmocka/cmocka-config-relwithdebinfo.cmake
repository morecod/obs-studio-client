#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cmocka::cmocka" for configuration "RelWithDebInfo"
set_property(TARGET cmocka::cmocka APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(cmocka::cmocka PROPERTIES
  IMPORTED_IMPLIB_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/cmocka.lib"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/bin/cmocka.dll"
  )

list(APPEND _IMPORT_CHECK_TARGETS cmocka::cmocka )
list(APPEND _IMPORT_CHECK_FILES_FOR_cmocka::cmocka "${_IMPORT_PREFIX}/lib/cmocka.lib" "${_IMPORT_PREFIX}/bin/cmocka.dll" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
