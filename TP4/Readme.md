# Sintaxis y Semántica de los Lenguajes - 2021
## Trabajo Práctico n° 4 - BISON para reconocimiento de estructuras de frase

### Enunciado
Implementar en C un programa que permita reconocer expresiones, declaraciones de variables, declaraciones de funciones, sentencias de distintos tipos y definiciones de funciones. El mismo deberá tomar un archivo de texto como entrada (archivo fuente .c) y dar como salida en pantalla un reporte de las variables declaradas indicando tipo de dato correspondiente, funciones declaradas, tipos sentencias encontradas indicando en todos los casos el número de línea que corresponda. Deberá indicarse aquellas secuencias que no pertenezcan a ninguna categoría léxica o estructuras que no sean válidas sintácticamente. Para desarrollar dicho programa deberá utilizar LEX/FLEX combinado con YACC/BISON para la generación del código C.

Las gramáticas pueden ser extraídas del volumen 1 del apunte de la cátedra, en varios casos pueden empezar implementando las producciones más sencillas y luego ir agregando complejidad. 

La entrega de este trabajo práctico no es obligatoria, su fecha límite para consulta, entrega y revisión es el día Domingo 17 de Octubre. Luego de esa fecha, no se aceptarán más trabajos, y toda consulta referida quedará para la defensa final que será en el mes de noviembre.

El entorno de programación queda a criterio de cada grupo de trabajo (Eclipse, Dev, Codeblocks, Visual Studio Code ). Se recomienda un IDE que esté integrado con Git para poder realizar el trabajo en equipo de una forma más práctica.

Formará parte de la entrega, como mínimo, el archivo fuente (.c) y el archivo ejecutable (.exe). Todo debe estar en el repositorio GitHub.

La entrega será a través del repositorio de GitHub en la carpeta correspondiente a cada TP.

Las consultas podrán ser respondidas a través Discord. Es importante que los utilices para compartir sus dudas con el resto de los compañeros.
