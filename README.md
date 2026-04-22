_Este proyecto ha sido creado como parte del currículo de 42 por joaqumar_

# 📚 Libft - @42Barcelona

Mi propia biblioteca de C: una colección de funciones esenciales de la `libc` recreadas desde cero, junto con utilidades adicionales para el manejo de memoria, strings y listas.

---

## 🛠️ Funciones Implementadas

### 🔹 Parte 1: Funciones de la Libc
Recreación de las funciones estándar para el manejo de caracteres, memoria y cadenas.


| Categoría | Funciones |
| :--- | :--- |
| **🔤 Caracteres** | `ft_isalpha` • `ft_isdigit` • `ft_isalnum` • `ft_isascii` • `ft_isprint` • `ft_toupper` • `ft_tolower` |
| **🧠 Memoria** | `ft_memset` • `ft_bzero` • `ft_memcpy` • `ft_memmove` • `ft_memchr` • `ft_memcmp` • `ft_calloc` |
| **🧵 Strings** | `ft_strlen` • `ft_strlcpy` • `ft_strlcat` • `ft_strchr` • `ft_strrchr` • `ft_strncmp` • `ft_strnstr` • `ft_strdup` |
| **🔢 Conversión** | `ft_atoi` |

---

### 🔸 Parte 2: Funciones Adicionales
Funciones útiles que no forman parte de la biblioteca estándar de C o están optimizadas para el uso en 42.

*   ✂️ **`ft_substr`**: Crea una subcadena a partir de una cadena principal.
*   🔗 **`ft_strjoin`**: Une dos cadenas en una nueva reserva de memoria.
*   🧹 **`ft_strtrim`**: Elimina caracteres específicos al principio y al final de una cadena.
*   🧩 **`ft_split`**: Divide una cadena en un array de strings usando un delimitador.
*   🔢 **`ft_itoa`**: Convierte un número entero en una cadena de caracteres.
*   ⚙️ **`ft_strmapi`**: Aplica una función a cada carácter (creando una nueva cadena).
*   🛠️ **`ft_striteri`**: Aplica una función a cada carácter (modificando la original).
*   🖥️ **`ft_putchar_fd`**: Escribe un carácter en un descriptor de archivo dado.
*   📜 **`ft_putstr_fd`**: Escribe una cadena en un descriptor de archivo dado.
*   🔚 **`ft_putendl_fd`**: Escribe una cadena con salto de línea en un FD.
*   🔢 **`ft_putnbr_fd`**: Escribe un número entero en un descriptor de archivo dado.

---

### 🏗️ Parte 3: Listas Enlazadas
Funciones para manipular la estructura `t_list`, fundamental para la gestión dinámica de datos.

*   🆕 **`ft_lstnew`**: Crea un nuevo elemento de lista.
*   🔝 **`ft_lstadd_front`**: Añade un elemento al principio de la lista.
*   📏 **`ft_lstsize`**: Cuenta el número de elementos de la lista.
*   🏁 **`ft_lstlast`**: Devuelve el último elemento de la lista.
*   🔙 **`ft_lstadd_back`**: Añade un elemento al final de la lista.
*   🗑️ **`ft_lstdelone`**: Elimina un elemento de la lista y libera su memoria.
*   🧹 **`ft_lstclear`**: Elimina y libera toda la lista.
*   🔄 **`ft_lstiter`**: Itera la lista y aplica una función a cada contenido.
*   🗺️ **`ft_lstmap`**: Crea una nueva lista tras aplicar una función a cada nodo.

---

## 🚀 Uso y Compilación

1. **Clonar el repositorio:**
   ```bash
   git clone https://github.com
   ```

2. **Compilar la biblioteca:**
   ```bash
   make        # Genera libft.a con funciones básicas
   make bonus  # Incluye las funciones de listas enlazadas
   ```

3. **Limpieza:**
   ```bash
   make clean  # Borra los archivos .o
   make fclean # Borra los .o y el archivo libft.a
   ```

---
Creado por joaqumar (42) 🚀

