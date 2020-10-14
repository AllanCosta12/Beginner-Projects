print ('----------CALCULADORA----------')
n1 = float(input('Digite o primeiro numero -> '))
n2 = float(input('Digite o segundo numero -> '))

op = input('Digite a operacao')

if op == '+':
    print ('O resultado da soma é', n1 + n2)

if op == '-':
    print ('o resultado da subtracao é', n1 - n2)

if op == '*':
    print ('O resultado da multiplicacao é', n1*n2)

if op == '/':
    print ('o resultado da divisao é', n1/n2)