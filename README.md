*This project has been created as part of the 42 curriculum by nfodere-*

# Push_Swap

## Descripción
El proyecto **push_swap** forma parte de 42 y tiene como objetivo diseñar un programa en C que ordene una lista de números enteros utilizando únicamente un conjunto limitado de operaciones sobre dos stacks: **A** y **B**. La dificultad radica en que no se puede usar directamente algoritmos clásicos de ordenación como `qsort` o `sort`, sino que se deben implementar operaciones básicas de manipulación de pilas (swap, push, rotate, reverse rotate...) y combinarlas de manera estratégica para conseguir el orden correcto con el menor número posible de movimientos.

## Instrucciones
Para compilar el proyecto **push_swap** basta con ubicarse en la carpeta del proyecto, abrirla en terminal y ejecutar el comando **make** ya que gracias al archivo **Makefile** todo el proceso está automatizado. Despues de eso, se creará un archivo llamado simplemente **push_swap** el cual después de ejecutar el comando **chmod +x push_swap** se convertirá en un ejecutable.
Para ejecutar **push_swap**, después de haber hecho lo anterior, basta con escribir en la línea de comandos estando en la misma carpeta que el ejecutable **./push_swap {números sin ordenar}** y el programa devolverá las operaciones que ha realizado, se puede combinar con **| wc -l** para ver el numero de operaciones que el programa ha realizado con los números que le has pasado.

## Recursos
Para crear mi **push_swap**, solo he usado como referencia la IA en algunos casos para resolver dudas y errores que me iban surgiendo.
