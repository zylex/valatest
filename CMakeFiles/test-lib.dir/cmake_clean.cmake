FILE(REMOVE_RECURSE
  "assertion.c"
  "testcase.c"
  "../../lib/test-lib.vapi"
  "../../lib/test-lib.h"
  "../../lib/test-lib_internal.h"
  "CMakeFiles/test-lib.dir/assertion.c.o"
  "CMakeFiles/test-lib.dir/testcase.c.o"
  "../../lib/libtest-lib.pdb"
  "../../lib/libtest-lib.a"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang C)
  INCLUDE(CMakeFiles/test-lib.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
