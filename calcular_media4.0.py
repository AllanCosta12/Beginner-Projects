
def calcular_media(soma):
    media = soma / 4
    return media
def verifica_aprovado(media_calculada):
    if media_calculada >= 8:
        print('a media do aluno e', media_calculada, 'ele foi aprovado e esta de parabens')
    elif media_calculada >= 6:
        print('a media do aluno e', media_calculada, 'e ele foi aprovado')
    else:
        print('A media do aluno e', media_calculada, 'e ele foi reprovado')
def entrada_notas():
    n1 = float(input('Digite a primeira nota ->'))
    n2 = float(input('Digite a segunda nota ->'))
    n3 = float(input('Digite a terceira nota ->'))
    n4 = float(input('Digite a quarta nota ->'))
    soma = n1+n2+n3+n4
    return soma

def cabecalho():
    print ('1 - Calcular media de um aluno')
    print ('2 - Comparar media vom outro aluno')
    print ('3 - Cancelar')

    op = int(input('Oque deseja realizar ->'))
    return op


op1 = cabecalho()

rep = 1

while (rep == 1):

    if (op1 == 1):

        soma1 = entrada_notas()
        media_calculada = calcular_media(soma1)
        verifica_aprovado(media_calculada)

        op1 = cabecalho()

    elif (op1 == 2):
        nota_aluno1 = media_calculada
        soma1 = entrada_notas()
        media_calculada = calcular_media(soma1)
        verifica_aprovado(media_calculada)

        if (nota_aluno1 > media_calculada):
            print ('A media do primeiro aluno foi melhor')
        elif (nota_aluno1 == media_calculada):
            print ('O desempenho doas alunos foram iguais')
        else:
            print ('A media do segundo aluno foi melhor')

        op1 = cabecalho()

    elif (op1 == 3):
        rep = 0

    else:
        print ('Digite uma opçao valida')