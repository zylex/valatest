FILE(REMOVE_RECURSE
  "assertion.c"
  "testcase.c"
  "usr/share/vala/vapi/test-lib.vapi"
  "usr/include/test-lib.h"
  "usr/include/test-lib_internal.h"
  "CMakeFiles/test-lib.dir/assertion.c.o"
  "CMakeFiles/test-lib.dir/testcase.c.o"
  "/usr/lib/libtest-lib.pdb"
  "/usr/lib/libtest-lib.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/test-lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
