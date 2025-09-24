<!-- ===================== BANNER ===================== -->
<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/ft_printf/banner.svg" alt="ft_printf banner">
</p>

<p align="center"><i>🖨️ ft_printf — Reimplementación de printf: parser de formatos, flags, anchura, precisión y conversiones cspdiuxX%%. Librería estática lista para enlazar.</i></p>

<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/100.png" alt="ft_printf nota" height="120">
</p>


## Índice
- [Resumen](#resumen)
- [¿Para qué?](#para-que)
- [Explicación](#explicacion)
- [Compilación](#compilacion)
- [Pruebas](#pruebas)
---
<a id="resumen"></a>
## ✅ Resumen del proyecto<br>

**ft_printf** es una versión propia de `printf` que imprime en `stdout` usando `write`.  

- **Conversiones**: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`  

Salida: **número de caracteres impresos** (como `printf`), o `-1` si ocurre un error de escritura.
> Este proyecto sigue la **Norma oficial de 42** para estilo en C (Norminette).
> En todos los proyectos de 42, el uso de la gran mayoria de bibliotecas esta prohibido, siendo nuestro propio desarrollo libft el sustituto de las funciones básicas. 
> - Código legible.  
> - Funciones pequeñas (<25 líneas),
> - 4 parámetros por función,
> - Nombres claros en `snake_case` y en inglés.
> - 1 responsabilidad por función.
>  - Variables declaradas al inicio del bloque(maximo 4 por función).  


---

<a id="para-que"></a>
## 🧩 ¿Para qué?

**¿Qué se aprende?**
- **Diseño de parsers**: tokenizar especificadores de formato y mapearlos a una estructura.
---

<a id="explicacion"></a>

  <summary><h3>📝 Explicación</h3></summary>
🧭 Flujo general

Recorrer la cadena de formato.

Si aparece %, comprueba el siguiente elemento y llama a la funcion de conversion.
<br>
Sumar al contador global la cantidad escrita.

🔢 Conversiones soportadas
```text
%c → carácter (como unsigned char del int)
%s → string (NULL → "(null)")
%p → puntero (0 → "(nil)")
%d/%i → entero con signo
%u → entero sin signo
%x/%X → hexadecimal minúscula/mayúscula
%% → un % literal
```


### 🛠️ Compilación
<a id="compilacion"></a>
⬇️ Descarga
```bash
git clone https://github.com/NanoHtz/ft_printf.git
```
🏗️ Compilación (Necesitas integrar la libft: https://github.com/NanoHtz/Libft)
```bash
make         # compila libftprintf.a (mandatory)
make bonus   # si has separado flags/extra como bonus, los añade a la librería
make clean   # elimina .o
make fclean  # elimina .o y libftprintf.a
make re      # recompila desde cero
```
<a id="pruebas"></a>
🏗️ Pruebas
<br>
Tendria especial cuidado con el uso de %, concretamente si estan seguidos.
<br>
Paras las pruebas recomiendo el uso de este tester:
<br>
https://github.com/Tripouille/printfTester




