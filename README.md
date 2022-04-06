#### Gitignore
Es una herramienta imprescindible ya que nos va a permitir ignorar archivos o carpetas que no queremos que se suban a nuestro repositorio.

#### ¿Por qué es conveniente incluirlo?
Por que no todos los archivos y carpetas son necesarios de gestionar a partir del sistema de control de versiones.  

#### ¿Cuándo se debe hacer?
Cuando hay código que no necesitas enviar a Git, ya sea porque es privado para un desarrollador en concreto y no lo necesiten (o no deban) conocer el resto de las personas. 
Pueden ser también cuando archivos binarios con datos que no necesitas mantener en el control de versiones, como diagramas, instaladores de software, etc.

#### ¿Cómo configuraría el archivo .gitignore?
Para crear un archivo .gitignore local, se crea un archivo de texto y se le asigna el nombre ".gitignore" (incluir el . al principio). 
Luego, se edita este archivo según sea necesario.
Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.      
