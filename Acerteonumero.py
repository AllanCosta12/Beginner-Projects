import random

random.seed()
n_sor = random.randint(1,100)

n_esc = int(input('Digite um numero ->'))

while (n_esc != n_sor):

    if n_esc < n_sor:
        print('O numero sorteado é maior')
    else:
        print('O numero sorteado é menor')

    n_esc = int(input('Digite um numero ->'))

else:
    print ('Numero correto')


