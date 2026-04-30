*Este proyecto ha sido creado como parte del currículo de 42 por joaqumar*

# 📚 Libft - @42Barcelona

## 📜 Descripción
Este proyecto consiste en la creación de mi propia biblioteca de C. El objetivo es recrear funciones esenciales de la `libc` estándar, así como implementar utilidades adicionales para el manejo de memoria, cadenas de caracteres y listas enlazadas. Esta librería servirá como base fundamental para todos los proyectos futuros dentro del currículo de 42.

---

## 🛠️ Funciones Implementadas

### 🔹 Parte 1: Funciones de la Libc
Recreación de las funciones estándar para el manejo de caracteres, memoria y cadenas.

* 🔤 **`ft_isalpha`**: Comprueba si el carácter es alfabético.
* 🔢 **`ft_isdigit`**: Comprueba si el carácter es un dígito del 0 al 9.
* 🔣 **`ft_isalnum`**: Comprueba si el carácter es alfanumérico.
* 🌐 **`ft_isascii`**: Comprueba si el carácter pertenece al set ASCII.
* 🖼️ **`ft_isprint`**: Comprueba si el carácter es imprimible.
* 📏 **`ft_strlen`**: Calcula la longitud de una cadena.
* 🧼 **`ft_memset`**: Llena la memoria con un byte constante.
* 🧹 **`ft_bzero`**: Escribe ceros en un bloque de memoria.
* 📋 **`ft_memcpy`**: Copia memoria (sin solapamiento).
* 🔄 **`ft_memmove`**: Copia memoria (segura ante solapamientos).
* 📦 **`ft_strlcpy`**: Copia cadenas con límite de tamaño.
* 🪢 **`ft_strlcat`**: Concatena cadenas con límite de tamaño.
* 🔼 **`ft_toupper`**: Convierte a mayúscula.
* 🔽 **`ft_tolower`**: Convierte a minúscula.
* 🔍 **`ft_strchr`**: Busca un carácter en una cadena (desde el inicio).
* 🔙 **`ft_strrchr`**: Busca un carácter en una cadena (desde el final).
* ⚖️ **`ft_strncmp`**: Compara dos cadenas hasta 'n' caracteres.
* 📍 **`ft_memchr`**: Busca un byte en un bloque de memoria.
* 🔀 **`ft_memcmp`**: Compara dos bloques de memoria.
* 🔦 **`ft_strnstr`**: Localiza una subcadena en otra.
* 🆔 **`ft_atoi`**: Convierte una cadena a entero.
* 🏗️ **`ft_calloc`**: Reserva memoria e inicializa a cero.
* 💾 **`ft_strdup`**: Duplica una cadena existente.

### 🔹 Parte 2: Funciones Adicionales
* ✂️ **`ft_substr`**: Extrae una subcadena.
* ➕ **`ft_strjoin`**: Une dos cadenas en una nueva.
* ✂️ **`ft_strtrim`**: Elimina caracteres específicos al inicio y final.
* 🔪 **`ft_split`**: Divide una cadena por un delimitador.
* 🔢 **`ft_itoa`**: Convierte entero a cadena.
* 🗺️ **`ft_strmapi`**: Aplica una función a cada carácter (nueva cadena).
* 📍 **`ft_striteri`**: Aplica una función a cada carácter (modificación).
* 📤 **`ft_putchar_fd`**: Escribe un carácter en un fd.
* 📜 **`ft_putstr_fd`**: Escribe una cadena en un fd.
* 🔚 **`ft_putendl_fd`**: Escribe una cadena + newline en un fd.
* 🔢 **`ft_putnbr_fd`**: Escribe un número en un fd.

### 🌟 Parte 3: Listas Enlazadas
* 🆕 **`ft_lstnew`** | 🔝 **`ft_lstadd_front`** | 📏 **`ft_lstsize`**
* 🔚 **`ft_lstlast`** | 🔜 **`ft_lstadd_back`** | 🗑️ **`ft_lstdelone`**
* 🧹 **`ft_lstclear`** | 🔄 **`ft_lstiter`** | 🗺️ **`ft_lstmap`**

---

## 📋 Descripción Detallada de la Librería
La `libft` se organiza en tres pilares:
1. **Gestión de Memoria**: Manipulación de bloques `void *` y reserva dinámica segura con `malloc`.
2. **Procesamiento de Strings**: Tratamiento avanzado de texto y conversiones (ASCII-Entero).
3. **Estructuras de Datos**: Implementación de listas simplemente enlazadas para colecciones dinámicas.

---

## ⚙️ Instrucciones

### Compilación
El proyecto incluye un **Makefile** con las reglas estándar de 42:
```bash
make        # Compila la librería libft.a
make clean  # Elimina archivos objeto (.o)
make fclean # Elimina objetos y la librería (.a)
make re     # Recompila todo desde cero
```

### Ejecución de Prueba
Para probar la librería, crea un archivo `main.c` e inclúyela:
```c
#include "libft.h"
#include <stdio.h>

int main(void) {
    char *str = "42 Barcelona";
    printf("Longitud: %zu\n", ft_strlen(str));
    return (0);
}
```
Luego compila con: `cc main.c libft.a && ./a.out`

---

## 📚 Recursos

### Referencias
* [Man de Linux](https://man7.org): Documentación oficial de la `libc`.
* [Norminette](https://github.com/42school/norminette): Reglas de estilo de 42.

### Uso de Inteligencia Artificial
En este proyecto se ha utilizado IA para:
* **Clarificación de conceptos**: Entender el solapamiento de memoria para `ft_memmove`.
* **Generación de Casos de Prueba**: Identificación de valores límite en `ft_atoi` e `ft_split`.
* **Formateo**: Estructuración técnica de este archivo `README.md`.

