#ifndef otbSomeFile_h
#define otbSomeFile_h

// this header defines export macros, such as ExternalTemplate_EXPORT.
// On Windows, it is replaced by declspec import/export
#include "SandBoxModuleExport.h"

namespace otb {

SandBoxModule_EXPORT void ThisFunctionDoesNothing();

}

#endif
