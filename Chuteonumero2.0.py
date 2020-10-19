import random

random.seed()
n_sor = random.randint(1,10)
print (n_sor)

cont = 0
n_esc = int(input('Digite um numero ->'))
cont = 1
if n_esc != n_sor:
    print ('número incorreto')
    while (cont < 3):
        n_esc = int(input('Digite um número ->'))
        if n_esc == n_sor:
            print ('numero correto')
            cont = 3
        else:
            print ('numero incorreto')
        cont = cont + 1
else:
    print ('Numero correto')