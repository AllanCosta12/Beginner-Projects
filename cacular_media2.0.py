
def calcular_media(n1,n2,n3,n4):
    soma = n1+n2+n3+n4
    media = soma / 4
    return media

n1 = float(input('Digite a primeira nota ->'))
n2 = float(input('Digite a segunda nota ->'))
n3 = float(input('Digite a terceira nota ->'))
n4 = float(input('Digite a quarta nota ->'))

media_calculada = calcular_media(n1,n2,n3,n4)

if media_calculada >= 8:
    print ('a media do aluno e',media_calculada, 'ele foi aprovado e esta de parabens')
elif media_calculada >= 6:
    print ('a media do aluno e',media_calculada, 'e ele foi aprovado')
else:
    print ('A media do aluno e', media_calculada, 'e ele foi reprovado')