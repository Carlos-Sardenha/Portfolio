import pyautogui
import time
import pandas as pd

# Carrega os dados do arquivo Excel
df = pd.read_excel('ex01_excel.xlsx')

# Assumindo que os números estão na primeira coluna do Excel
numeros = df.iloc[:, 0].tolist()

# Defina as coordenadas
x = 362
y = 450

# Abre o Excel (certifique-se de que a planilha está aberta e ativa)
time.sleep(5)  # Tempo para você posicionar o Excel

# Itera sobre os números na ordem inversa
for numero in reversed(numeros):
    # Clica nas coordenadas
    pyautogui.click(x, y)
    time.sleep(0.5)  # Espera meio segundo para garantir que o clique foi registrado
    
    # Digita o número
    pyautogui.write(str(numero))
    time.sleep(0.5)  # Espera meio segundo após digitar

    # Simula o pressionamento da tecla "Enter" para passar para a próxima célula
    pyautogui.press('enter')

    # Espera 6 segundos antes de continuar
    time.sleep(6)
