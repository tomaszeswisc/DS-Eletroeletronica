# Projeto-1AB — Laboratório Arduino

> Documentação baseada nos arquivos reais deste projeto. A compilação e a simulação ainda não foram confirmadas.

## Objetivo

Analisar as ligações e o comportamento programado deste experimento com Arduino Uno, relacionando os componentes ao código C/C++.

## Componentes do diagrama

- arduino-uno: 1
- potentiometer: 1
- led: 8
- resistor: 9
- buzzer: 1

**Total:** 20 componentes e 30 conexões declaradas.

## Recursos encontrados no código

- leitura analógica
- saída digital
- sinal sonoro
- controle de servomotor
- monitor serial

## Arquivos para estudo

- [Diagrama Wokwi](diagram.json)
- [Código Arduino](src/main.cpp)
- [Configuração PlatformIO](platformio.ini)

## Como estudar

1. Abra a pasta deste projeto no VS Code com PlatformIO.
2. Compare os componentes e as ligações de `diagram.json` com os pinos declarados em `src/main.cpp`.
3. Execute a compilação pelo PlatformIO e abra a simulação Wokwi, se estiver configurada.
4. Observe entradas, saídas e respostas do circuito.
5. Registre resultados e proponha uma alteração simples no código.

**Atividade:** explique o papel de cada componente e o funcionamento do `setup()` e do `loop()`.

[← Voltar ao catálogo](../../README.md)
