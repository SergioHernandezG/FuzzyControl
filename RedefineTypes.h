/*
Header para asignar nuevos nombres a los tipos de datos para las variables para no afectar el codigo de los componentes al momento de cambiar de micro
		
 */
											
typedef int    sint16;		/*Entero signado de 16 bit de ancho: 1 bit de signo + 15 de magnitud.\n											
						 *				Rango del tipo A = {x | (x ∈ ℤ) ∩ (x ∈ [-2^15, 2^15-1])}			
						 */							
													
typedef long    sint32;		/*Entero signado de 32 bit de ancho: 1 bit de signo + 31 de magnitud.\n											
						 *				Rango del tipo A = {x | (x ∈ ℤ) ∩ (x ∈ [-2^31, 2^31-1])}			
						 */												
																		
													
typedef unsigned int    uint16;		/*Entero sin signo de 16 bit de ancho: 16 de magnitud.\n											
						 *				Rango del tipo A = {x | (x ∈ ℕ) ∩ (x ∈ [0, 2^16-1])}			
						 */							
													
typedef unsigned long    uint32;		/*Entero sin signo de 32 bit de ancho: 32 de magnitud.\n											
						 *				Rango del tipo A = {x | (x ∈ ℕ) ∩ (x ∈ [0, 2^32-1])}			
						 */							
													
//typedef byte    uint8;		/*Entero sin signo de 8 bit de ancho: 8 de magnitud.\n
						 *				Rango del tipo A = {x | (x ∈ ℕ) ∩ (x ∈ [0, 2^8-1])}			
						 */							
typedef float    float32;		/*Flotante de precisión sencilla con longitud de 32bit.\n								 
						*
						*/			
