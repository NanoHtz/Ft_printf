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

Si aparece %, parsear flags → width → precision → type y llenar t_fmt.

Llamar a la función de conversión según type.

Cada conversión compone la representación (signo/prefijo, dígitos, rellenos) y la imprime con helpers (write + padding).

Sumar al contador global la cantidad escrita; si write devuelve -1, propagar error.

🧩 Reglas clave de flags & precisión

- gana a 0: si - está activo → padding con espacios a la derecha; ignorar 0.

Precisión en enteros (d i u x X) desactiva el 0-padding: se usa 0 interno solo para llegar a la precisión.

+ gana a (espacio). Si ambos están, mostrar + para positivos.

# en x/X añade 0x/0X solo si el valor ≠ 0.

%.0d con valor 0 → cadena vacía (no imprime dígitos).

%s con prec >= 0 corta la cadena a prec. Con s == NULL imprimir "(null)" (o política equivalente).

%p imprime 0x + hex minúscula; para puntero nulo suele ser "(nil)".

🔢 Conversiones soportadas

%c → carácter (como unsigned char del int)

%s → string (NULL → "(null)")

%p → puntero (0 → "(nil)")

%d/%i → entero con signo

%u → entero sin signo

%x/%X → hexadecimal minúscula/mayúscula

%% → un % literal

⏱️ Complejidad

Parsing: O(n) con n = len(formato).

Cada conversión es O(k) con k = longitud del argumento formateado.

⚠️ Limitaciones típicas (subject estándar)

No se implementan flotantes (%f, %e, %g…), * dinámico, ni longitudes (hh, ll, etc.), salvo que se indique lo contrario.

Sin soporte de locales, ni wchar_t/UTF-8 específico.

</details>

