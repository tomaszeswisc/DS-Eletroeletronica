<div align="center">

# ⚡ Laboratório de Eletroeletrônica & Sistemas Embarcados

### Arduino • Wokwi • PlatformIO • Visual Studio Code

**Uma coleção de circuitos, códigos e experimentos para aprender eletrônica programável na prática.**

[![Arduino](https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![Wokwi](https://img.shields.io/badge/Wokwi-7323DC?style=for-the-badge&logo=simulink&logoColor=white)](https://wokwi.com/)
[![PlatformIO](https://img.shields.io/badge/PlatformIO-F5822A?style=for-the-badge&logo=platformio&logoColor=white)](https://platformio.org/)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![VS Code](https://img.shields.io/badge/VS_Code-007ACC?style=for-the-badge&logo=visualstudiocode&logoColor=white)](https://code.visualstudio.com/)

[📂 Explorar projetos](#-catálogo-de-projetos) · [🚀 Como executar](#-como-executar) · [🧩 Estrutura](#-estrutura-dos-projetos) · [👨‍💻 Autor](#-autor)

</div>

---

## 🔎 Sobre o laboratório

Este repositório reúne **projetos práticos de eletroeletrônica e programação embarcada**, combinando lógica de programação, esquemas virtuais e código para microcontroladores. Os circuitos são representados em arquivos `diagram.json` do **Wokwi**; os exemplos examinados utilizam a placa **Arduino Uno** e a organização de projetos **PlatformIO**, que pode ser usada no **Visual Studio Code**.

> 🎯 **Objetivo:** transformar conceitos de entradas, saídas, sensores e atuadores em experimentos reproduzíveis, com código e ligações elétricas para estudo.

## 🧠 O que você encontra aqui

| Área | Componentes e conceitos |
| :-- | :-- |
| 💡 Saídas digitais | LEDs, resistores, acionamento e sinalização |
| 🎛️ Entradas | Pushbuttons e potenciômetros |
| 📏 Sensoriamento | Ultrassônico HC-SR04 e sensor de luminosidade |
| 🔊 Sinalização sonora | Buzzer e geração de tons |
| ⚙️ Atuadores | Servomotores e controle eletrônico |
| 👨‍💻 Código | Programação Arduino em C/C++ com PlatformIO |

---

## 📚 Catálogo de projetos

Os nomes abaixo seguem **as pastas existentes no repositório**. A classificação se baseia nos componentes identificados nos arquivos `diagram.json` e **não implica que todos os projetos tenham sido testados fisicamente**.

### 💡 LEDs, botões e sinalização

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Projeto-0` | Arduino Uno, LED, resistor | [📁 Código e circuito](Projects/Projeto-0) |
| `Q-7` | Arduino Uno, LED, resistor | [📁 Código e circuito](Projects/Q-7) |
| `Projeto-3` | Arduino Uno, LEDs, botões, buzzer | [📁 Código e circuito](Projects/Projeto-3) |
| `Projeto-4` | Arduino Uno, quatro LEDs, quatro botões e buzzer | [📁 Código e circuito](Projects/Projeto-4) |

### 🎚️ Entradas analógicas e luminosidade

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Q-4` | Arduino Uno, potenciômetro | [📁 Código e circuito](Projects/Q-4) |
| `Q-5` | Arduino Uno, fotoresistor | [📁 Código e circuito](Projects/Q-5) |
| `Pratica-1` | Arduino Uno, potenciômetro, LEDs e resistores | [📁 Código e circuito](Projects/Pratica-1) |
| `Projeto-1A` | Arduino Uno, potenciômetro, LEDs e resistores | [📁 Código e circuito](Projects/Projeto-1A) |
| `Projeto-1AB` | Arduino Uno, potenciômetro, LEDs e buzzer | [📁 Código e circuito](Projects/Projeto-1AB) |

### 📏 Ultrassom e automação

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Projeto-2` | Arduino Uno, HC-SR04, LEDs e buzzer | [📁 Código e circuito](Projects/Projeto-2) |
| `Projeto-2A` | Arduino Uno, HC-SR04, LEDs e buzzer | [📁 Código e circuito](Projects/Projeto-2A) |
| `Projeto-6E` | Arduino Uno, servo, HC-SR04, LEDs e buzzer | [📁 Código e circuito](Projects/Projeto-6E) |
| `Projeto-6F` | Arduino Uno, servo, HC-SR04, LEDs e buzzer | [📁 Código e circuito](Projects/Projeto-6F) |

### ⚙️ Atuadores

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Projeto-6` | Arduino Uno e servomotor | [📁 Código e circuito](Projects/Projeto-6) |

> 🔍 **Exemplo para explorar primeiro:** [Projeto-4](Projects/Projeto-4/diagram.json) mostra o circuito no Wokwi; [código C++](Projects/Projeto-4/src/main.cpp) contém a lógica para LEDs, botões e buzzer; [configuração PlatformIO](Projects/Projeto-4/platformio.ini) seleciona Arduino Uno.

---

## 🚀 Como executar

### Opção A — Visual Studio Code + PlatformIO

1. Instale o [Visual Studio Code](https://code.visualstudio.com/) e a extensão [PlatformIO IDE](https://platformio.org/install/ide?install=vscode).
2. Clone o repositório:

```bash
git clone https://github.com/tomaszeswisc/DS-Eletroeletronica.git
```

3. No VS Code, abra **uma pasta individual** dentro de `Projects/` que contenha `platformio.ini`, por exemplo `Projects/Projeto-4`.
4. Abra `src/main.cpp` para estudar ou adaptar o código.
5. Execute **PlatformIO: Build** para compilar; para placa física compatível, conecte-a e use **PlatformIO: Upload** após conferir o circuito.

### Opção B — Simulação Wokwi

1. Abra [Wokwi](https://wokwi.com/) ou utilize a extensão [Wokwi para VS Code](https://docs.wokwi.com/vscode/getting-started).
2. Inspecione o arquivo `diagram.json` da pasta do projeto para identificar componentes e ligações.
3. Utilize a integração Wokwi apropriada para simular o circuito. **A presença do arquivo `diagram.json` por si só não garante que a simulação local esteja configurada**; algumas configurações podem exigir ajustes conforme a extensão usada.

## 🧩 Estrutura dos projetos

```text
DS-Eletroeletronica/
├── README.md                 # Este catálogo
└── Projects/
    ├── Projeto-4/
    │   ├── diagram.json      # Circuito Wokwi
    │   ├── platformio.ini    # Ambiente Arduino Uno
    │   └── src/
    │       └── main.cpp      # Programa em C++
    ├── Projeto-2/
    ├── Projeto-6E/
    ├── Pratica-1/
    └── ...                   # Demais experimentos
```

## ✅ Boas práticas sugeridas

- Documentar objetivo, entradas, saídas e funcionamento em cada projeto.
- Identificar versão da placa, sensores, resistores e pinos utilizados.
- Incluir capturas dos circuitos e vídeos curtos das simulações.
- Testar compilação e registrar requisitos antes de declarar um experimento como concluído.
- Não publicar credenciais ou arquivos locais privados.

## 👨‍💻 Autor

**Hilton Elias** — Desenvolvimento de sistemas, automação, eletrônica, robótica e tecnologia educacional.

[![GitHub](https://img.shields.io/badge/GitHub-tomaszeswisc-181717?logo=github)](https://github.com/tomaszeswisc)

---

<div align="center">

**⚡ Aprender eletrônica é transformar ideias em circuitos que funcionam.**

*Do primeiro LED aos sistemas com sensores e atuadores.*

</div>
