import math

def soma_riemann (f, a, z, n):
    base = (z-a)/n
    area=0

    for i in range (0, n-1):
       xi = a + base*i
       area += equacao(xi)

    return area*base



def equacao (x):
    return math.sin(x)

a=-math.pi
z=math.pi
n=100

print    ("O resultado é: ", soma_riemann (equacao, a, z, n))