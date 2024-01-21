Uma rede neural é um modelo computacional inspirado no funcionamento do cérebro humano, projetado para realizar tarefas específicas de aprendizado e reconhecimento de padrões. Ela é composta por unidades chamadas neurônios, organizadas em camadas: camadas de entrada, camadas ocultas e camadas de saída.

Funcionamento matemático de uma rede neural:
img

Entrada (Input):

Os dados de entrada são representados como um vetor de características.
Cada entrada é multiplicada por um peso correspondente, um parâmetro ajustável que a rede aprende durante o treinamento.
Somatório Ponderado (Weighted Sum):

Os produtos das entradas pelos pesos são somados para gerar um valor de ativação para cada neurônio na camada seguinte.
Expresso matematicamente como uma soma ponderada: \[ z = \sum_{i=1}^{n} (w_i \cdot x_i) + b \] é o viés.
Função de Ativação:

Após o somatório ponderado, é aplicada uma função de ativação para introduzir não linearidades na rede.
Funções comuns incluem a função sigmoide, tangente hiperbólica (tanh) e a unidade linear retificada (ReLU).
Camadas Ocultas (Hidden Layers):

As camadas entre a entrada e a saída são chamadas de camadas ocultas.
Cada camada oculta realiza o processo de somatório ponderado e aplicação da função de ativação.
Saída (Output):

A camada de saída produz o resultado final da rede neural.
A saída pode ser usada para classificação, regressão ou outras tarefas, dependendo do problema.
Treinamento:

Envolve ajustar pesos e viés para minimizar a diferença entre saídas previstas e reais.
Feito por retropropagação (backpropagation), onde o gradiente da função de perda em relação aos parâmetros é calculado e usado para ajustar os pesos.
Explicações extras:
Neurônios e Camadas:

Neurônios são unidades básicas organizadas em camadas: entrada, ocultas e saída.
Conexões e Pesos:

Conexões representam ponderações entre neurônios; pesos são ajustados durante o treinamento.
Função de Ativação:

Introduz não linearidade; exemplos incluem Sigmoid, tanh e ReLU.
Feedforward:

Fluxo de dados da entrada para a saída, passando pelas camadas ocultas.
Treinamento:

Função de Custo mede a diferença entre saídas previstas e reais.
Algoritmo de Otimização ajusta pesos para minimizar a função de custo.
Retropropagação calcula gradientes e ajusta pesos.
Épocas e Lotes:

Época completa percorre todos os exemplos de treinamento.
Lotes: Treinamento em grupos de exemplos.
Esses são os conceitos básicos do funcionamento de uma rede neural. O treinamento envolve repetir o processo de feedforward, cálculo de custo, retropropagação e ajuste de pesos até que a rede atinja o desempenho desejado.