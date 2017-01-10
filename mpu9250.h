#ifndef MPU9250_H
#define MPU9250_H

#include "mpu9250_global.h"

#define mpu9250_modo_cache

// Tamaño de transferencia FIFO
#define mpu9250_FIFO_capacidad 12   // girócopo y acelerómetro requieren 12 bytes

#ifdef mpu9250_modo_cache

#define mpu9250_capacidad_cache 16  // Porciones en un bloque
#define mpu9250_contador_bloque 16  // Contador de bloque de caché

typedef struct{
    unsigned char data[mpu9250_FIFO_capacidad * mpu9250_capacidad_cache];
    int contador;                   // Numero de porciones en el bloque de caché
    int index;                      // Índice actual en el caché
    unsigned char compass[8];       // Lecturas de la brújula
} mpu9250_bloque_cache;

#endif


class MPU9250SHARED_EXPORT MPU9250 {

public:
    mpu9250(mpu9250settings *settings);
    mpu9250();
    bool


};

#endif // MPU9250_H
