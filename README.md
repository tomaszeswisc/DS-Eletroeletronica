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
| `Projeto-0` | Arduino Uno, LED, resistor | [📁 Pasta](Projects/Projeto-0) · [🔌 Circuito](Projects/Projeto-0/diagram.json) · [💻 Código](Projects/Projeto-0/src/main.cpp) |
| `Q-7` | Arduino Uno, LED, resistor | [📁 Pasta](Projects/Q-7) · [🔌 Circuito](Projects/Q-7/diagram.json) · [💻 Código](Projects/Q-7/src/main.cpp) |
| `Projeto-3` | Arduino Uno, LEDs, botões, buzzer | [📁 Pasta](Projects/Projeto-3) · [🔌 Circuito](Projects/Projeto-3/diagram.json) · [💻 Código](Projects/Projeto-3/src/main.cpp) |
| `Projeto-4` | Arduino Uno, quatro LEDs, quatro botões e buzzer | [📁 Pasta](Projects/Projeto-4) · [🔌 Circuito](Projects/Projeto-4/diagram.json) · [💻 Código](Projects/Projeto-4/src/main.cpp) |

### 🎚️ Entradas analógicas e luminosidade

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Q-4` | Arduino Uno, potenciômetro | [📁 Pasta](Projects/Q-4) · [🔌 Circuito](Projects/Q-4/diagram.json) · [💻 Código](Projects/Q-4/src/main.cpp) |
| `Q-5` | Arduino Uno, fotoresistor | [📁 Pasta](Projects/Q-5) · [🔌 Circuito](Projects/Q-5/diagram.json) · [💻 Código](Projects/Q-5/src/main.cpp) |
| `Pratica-1` | Arduino Uno, potenciômetro, LEDs e resistores | [📁 Pasta](Projects/Pratica-1) · [🔌 Circuito](Projects/Pratica-1/diagram.json) · [💻 Código](Projects/Pratica-1/src/main.cpp) |
| `Projeto-1A` | Arduino Uno, potenciômetro, LEDs e resistores | [📁 Pasta](Projects/Projeto-1A) · [🔌 Circuito](Projects/Projeto-1A/diagram.json) · [💻 Código](Projects/Projeto-1A/src/main.cpp) |
| `Projeto-1AB` | Arduino Uno, potenciômetro, LEDs e buzzer | [📁 Pasta](Projects/Projeto-1AB) · [🔌 Circuito](Projects/Projeto-1AB/diagram.json) · [💻 Código](Projects/Projeto-1AB/src/main.cpp) |

### 📏 Ultrassom e automação

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Projeto-2` | Arduino Uno, HC-SR04, LEDs e buzzer | [📁 Pasta](Projects/Projeto-2) · [🔌 Circuito](Projects/Projeto-2/diagram.json) · [💻 Código](Projects/Projeto-2/src/main.cpp) |
| `Projeto-2A` | Arduino Uno, HC-SR04, LEDs e buzzer | [📁 Pasta](Projects/Projeto-2A) · [🔌 Circuito](Projects/Projeto-2A/diagram.json) · [💻 Código](Projects/Projeto-2A/src/main.cpp) |
| `Projeto-6E` | Arduino Uno, servo, HC-SR04, LEDs e buzzer | [📁 Pasta](Projects/Projeto-6E) · [🔌 Circuito](Projects/Projeto-6E/diagram.json) · [💻 Código](Projects/Projeto-6E/src/main.cpp) |
| `Projeto-6F` | Arduino Uno, servo, HC-SR04, LEDs e buzzer | [📁 Pasta](Projects/Projeto-6F) · [🔌 Circuito](Projects/Projeto-6F/diagram.json) · [💻 Código](Projects/Projeto-6F/src/main.cpp) |

### ⚙️ Atuadores

| Projeto | Componentes identificados | Abrir |
| :-- | :-- | :-- |
| `Projeto-6` | Arduino Uno e servomotor | [📁 Pasta](Projects/Projeto-6) · [🔌 Circuito](Projects/Projeto-6/diagram.json) · [💻 Código](Projects/Projeto-6/src/main.cpp) |

> 🔍 **Exemplo para explorar primeiro:** [Projeto-4](Projects/Projeto-4/diagram.json) mostra o circuito no Wokwi; [código C++](Projects/Projeto-4/src/main.cpp) contém a lógica para LEDs, botões e buzzer; [configuração PlatformIO](Projects/Projeto-4/platformio.ini) seleciona Arduino Uno.

---

## 🔍 Visão geral dos circuitos

Os números abaixo foram extraídos diretamente dos arquivos `diagram.json` presentes no repositório. Eles indicam **componentes declarados** e **conexões desenhadas**, não certificam que a simulação ou o circuito físico tenha sido testado.

| Projeto | Componentes | Conexões | Arquivo Wokwi |
|:--|--:|--:|:--|
| [Projeto-0](Projects/Projeto-0) | 3 | 2 | [Abrir diagram.json](Projects/Projeto-0/diagram.json) |
| [Q-7](Projects/Q-7) | 3 | 3 | [Abrir diagram.json](Projects/Q-7/diagram.json) |
| [Projeto-3](Projects/Projeto-3) | 23 | 34 | [Abrir diagram.json](Projects/Projeto-3/diagram.json) |
| [Projeto-4](Projects/Projeto-4) | 15 | 23 | [Abrir diagram.json](Projects/Projeto-4/diagram.json) |
| [Q-4](Projects/Q-4) | 2 | 3 | [Abrir diagram.json](Projects/Q-4/diagram.json) |
| [Q-5](Projects/Q-5) | 2 | 3 | [Abrir diagram.json](Projects/Q-5/diagram.json) |
| [Pratica-1](Projects/Pratica-1) | 18 | 27 | [Abrir diagram.json](Projects/Pratica-1/diagram.json) |
| [Projeto-1A](Projects/Projeto-1A) | 18 | 27 | [Abrir diagram.json](Projects/Projeto-1A/diagram.json) |
| [Projeto-1AB](Projects/Projeto-1AB) | 20 | 30 | [Abrir diagram.json](Projects/Projeto-1AB/diagram.json) |
| [Projeto-2](Projects/Projeto-2) | 19 | 30 | [Abrir diagram.json](Projects/Projeto-2/diagram.json) |
| [Projeto-2A](Projects/Projeto-2A) | 19 | 30 | [Abrir diagram.json](Projects/Projeto-2A/diagram.json) |
| [Projeto-6E](Projects/Projeto-6E) | 10 | 19 | [Abrir diagram.json](Projects/Projeto-6E/diagram.json) |
| [Projeto-6F](Projects/Projeto-6F) | 10 | 19 | [Abrir diagram.json](Projects/Projeto-6F/diagram.json) |
| [Projeto-6](Projects/Projeto-6) | 2 | 3 | [Abrir diagram.json](Projects/Projeto-6/diagram.json) |

> 🖼️ **Capturas de tela reais ainda pendentes:** use o Wokwi no VS Code para abrir cada diagrama e salvar uma captura fiel antes de adicionar imagens ao catálogo.

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
