#pragma once

#include <QtCore/qglobal.h>

#ifndef BUILD_STATIC
# if defined(SOUTHQTNETWORK_LIB)
#  define SOUTHQTNETWORK_EXPORT Q_DECL_EXPORT
# else
#  define SOUTHQTNETWORK_EXPORT Q_DECL_IMPORT
# endif
#else
# define SOUTHQTNETWORK_EXPORT
#endif
