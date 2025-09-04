<!-- ===================== BANNER ===================== -->
<p align="center">
  <img src="https://raw.githubusercontent.com/NanoHtz/Assets/main/ft_printf/banner.svg" alt="ft_printf banner">
</p>

<p align="center"><i>🖨️ ft_printf (42 Cursus) — Reimplementación de printf: parser de formatos, flags, anchura, precisión y conversiones cspdiuxX%%. Librería estática lista para enlazar.</i></p>

---

## Índice
- [Resumen](#resumen)
- [¿Para qué?](#para-que)
- [Explicación](#explicacion)
- [Compilación](#compilacion)
- [Uso](#uso)
- [Salida esperada y pruebas](#salida)

---
<a id="resumen"></a>
## ✅ Resumen del proyecto<br>

**ft_printf** es una versión propia de `printf(3)` que imprime en `stdout` usando `write(2)`.  
Incluye parsing de la cadena de formato, manejo de **flags**, **anchura**, **precisión** y **conversiones**:

- **Conversiones**: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`  
- **Flags**: `-` (alinear a la izquierda), `0` (relleno con ceros), `#` (forma alternativa en hex), ` ` (espacio), `+` (signo)  
- **Anchura**: número entero (p. ej. `8`)  
- **Precisión**: `.` seguido de entero (p. ej. `.5`)

Salida: **número de caracteres impresos** (como `printf`), o `-1` si ocurre un error de escritura.

---

<a id="para-que"></a>
## 🧩 ¿Para qué?

**¿Qué se aprende?**
- **Diseño de parsers**: tokenizar especificadores de formato y mapearlos a una estructura.
- **Formateo numérico**: base 10/16, signo, cero a la izquierda, prefijos `0x/0X`, mayúsculas/minúsculas.
- **Gestión de flags en conflicto**: prioridad entre `-`, `0`, precisión, `+` y ` `.
- **Buffers y E/S**: minimizar llamadas a `write(2)`, conteo exacto de caracteres y manejo de errores.
- **API y modularidad**: arquitectura por conversión, helpers reutilizables y Makefile robusto.

---

<a id="explicacion"></a>
<details>
  <summary><h3>📝 Explicación</h3></summary>

### 🗂️ Estructura (sugerida)

