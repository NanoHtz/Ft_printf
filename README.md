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

**ft_printf** es una versión propia de `printf` que imprime en `stdout` usando `write`.  

- **Conversiones**: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, `%%`  

Salida: **número de caracteres impresos** (como `printf`), o `-1` si ocurre un error de escritura.

---

<a id="para-que"></a>
## 🧩 ¿Para qué?

**¿Qué se aprende?**
- **Diseño de parsers**: tokenizar especificadores de formato y mapearlos a una estructura.
- **Formateo numérico**: base 10/16, signo, cero a la izquierda, prefijos `0x/0X`, mayúsculas/minúsculas.
---

<a id="explicacion"></a>
<details>
  <summary><h3>📝 Explicación</h3></summary>
🧭 Flujo general

Recorrer la cadena de formato.

Si aparece %, comprueba el siguiente elemento y llama a la funcion de conversion.
Sumar al contador global la cantidad escrita; si write devuelve -1, propagar error..

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
</details>

