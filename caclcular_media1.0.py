def calcular_media(n1,n2,n3,n4):     
    soma = n1 + n2 + n3 + n4
    media = soma / 4
    return media

n1 = float(input('Digite a primeira nota ->'))
n2 = float(input('Digite a segunda nota ->'))
n3 = float(input('Digite a primeira nota ->'))
n4 = float(input('Digite a segunda nota ->'))


media_calculada = calcular_media(n1,n2,n3,n4)
print (media_calculada)
