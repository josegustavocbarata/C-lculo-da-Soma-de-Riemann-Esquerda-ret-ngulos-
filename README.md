# Calculo-da-Soma-de-Riemann-Esquerda-retangulos-
Resumo: Código em Python, voltado para o cálculo de integrais definidas através de sua partição em retângulos, dentro de um intervalo definido e utilizando um número "n" de partições.

Instalação: Para utilizar o projeto, é necessário estar instalada alguma versão do Python no seu computador (você pode baixá-la no site python.org, lembre-se também de permitir a opção "Add python.exe to path" ao fazer o download). Após isso, caso você utilize o Visual Studio Code (VSCode), é necessário instalar somente o pacote, em 'extensions', chamado Python, que a própria Microsoft disponibiliza dentro do aplicativo.

Como usar a soma de Riemann: Dentro da função chamada de 'equacao' está a f(x) que o código irá obedecer, ao lado do 'return' você pode inserir a equação que será calculada, no caso o código segue normalmente o padrão algébrico comum, em que a utilização de parêntesis indica a a "prioridade" de uma soma, subtração e etc.; 

Por exemplo: "return 3*x**2 + (x-2)*2 - 5" (irá retornar uma equação: 3 que multiplica X elevado a 2, adionado a 2 que multiplica (X-2), que é subtraído por 5).

Regras para seguir ao escrever a equação dentro da função 'equacao', ou qualquer outra que você queira utilizar dentro desse código:

- o código utiliza como variável o 'x' (minúsculo)
- se quiser utilizar log em uma base n: math.log (x, n)
- se quiser utilizar log na base 10: math.log10 (x) 
- se quiser utilizar exponenciação usar: numero ** expoente, ex.: 10 ** 2 (10 elevado a 2)
- se quiser utilizar raiz: raiz (numero, base da raiz)
- funções trigonometricas em radianos: math.sin (numero), math.cos (numero), math.tan (numero)
- funções hiperbólicas trigonometricas em radianos: math.asin (numero), math.acos (numero), math.atan (numero)
- OBS: caso utilize uma fracao, coloque parêntesis para evitar quaisquer erros de interpretação da equação, ou se você utilizar uma constante sobre a outra, opte por utilizar o resultado dela diretamente no código 
- Para utilizar pi, use 'math.pi', para utilizar e, use 'math.e'.
