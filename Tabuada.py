n = int(input('Digite qual a tubuada que deseja ->'))                   #Entrada e conversao do numero que iremos fazer a tabuada  /  Entry and conversion of the number that we will make the multiplication table
nvzs = int(input('Digite ate que numero quer que va a tabuada ->'))        #informando ate que numero a tabuada vai  /  informing the number of times tables

vzs = 0              #atribuindo 0 na variavel de controle  /  assigning 0 to the control variable

for vzs in range (nvzs+1):          #loop for
    print (n,'X',vzs,'=', n*vzs)       #imprimindo texto e dados e o resultado  /  printing text and data and the result