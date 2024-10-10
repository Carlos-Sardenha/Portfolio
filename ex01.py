import pyautogui
import time
import pandas as pd

# Criação de uma lista de números sequenciais
numeros = list(range(1, 101))  # Altere 101 para o número desejado de números

# Defina as coordenadas
x = 362
y = 450

# Abre o Excel (certifique-se de que a planilha está aberta e ativa)
time.sleep(5)  # Tempo para você posicionar o Excel

for numero in numeros:
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
