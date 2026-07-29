#ifdef TESTAPPLIB_USE_DLL
#ifdef TESTAPPLIB_BUILDING_PROJECT
#define TESTAPPLIB_API __declspec(dllexport)
#else
#define TESTAPPLIB_API __declspec(dllimport)
#endif
#else
#define TESTAPPLIB_API
#endif
