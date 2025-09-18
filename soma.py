import math

def raiz (b, n):
    return b**(1/n)
    
def teste1 (x):
    return 1/raiz(x, 2) #Limites: 1, 4
    
def teste2 (x):
    return x**2 + 1 #Limites: 0, 1
    
def teste3 (x):
    return math.cos(x) #Limites: math.pi/2, math.pi
    
def teste4 (x):
    return x**3 - 3*x #Limites: -1, 1
    
def teste5 (x):
    return 5*(math.e**x) #Limites: Ln2, 3 resp: 90,42

def soma_riemann (a, z, n):
    base = (z-a)/n
    area=0

    for i in range (0, n-1):
       xi = a + base*i
       area += equacao(xi)

    return area*base



def equacao (x):
    return 2

a=math.log(2, math.e)   #Limite inferior
z=3   #Limite superior
n=1000  #Numero de particoes

print    ("O resultado é: ", soma_riemann (a, z, n))
