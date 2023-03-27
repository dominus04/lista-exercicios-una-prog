boleto1 = float(input("Digite o valor do primeiro boleto: "))
boleto2 = float(input("Digite o valor do segundo boleto: "))
boleto3 = float(input("Digite o valor do terceiro boleto: "))
boleto4 = float(input("Digite o valor do quarto boleto: "))

salario = float(input("Digite o valor do seu salário bruto: "))

salario_liquido = salario - (salario* 0.14)

total = boleto1 + boleto2 + boleto3 + boleto4

saldo = salario_liquido - total

print("O total das suas contas é igual a: " + str(total))
if saldo < 0:
    print("Você ficará devendo " + str(saldo) + " reais.")
else:
    print("Seu saldo final após o pagamento será: " + str(saldo))

