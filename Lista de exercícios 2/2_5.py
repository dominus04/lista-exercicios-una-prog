salario = float(input("Digite o salário atual do funcionário: "))
aumento = float(input("Digite o percentual de aumento: "))

salario_final = salario + (salario * aumento/100)

print("O salário final será %.2f" %salario_final)