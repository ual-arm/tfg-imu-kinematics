#ifndef MPU9250_GLOBAL_H
#define MPU9250_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MPU9250_LIBRARY)
#  define MPU9250SHARED_EXPORT Q_DECL_EXPORT
#else
#  define MPU9250SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // MPU9250_GLOBAL_H
