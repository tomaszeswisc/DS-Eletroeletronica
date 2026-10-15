# Projeto-4 — LEDs, botões e buzzer

**Projeto educacional com Arduino Uno, Wokwi e PlatformIO.**

## Objetivo

Quatro botões controlam LEDs e tons associados. O código usa INPUT_PULLUP e detecta acionamento em LOW.

## Arquivos

- [Circuito Wokwi](diagram.json) — componentes e ligações declaradas.
- [Código C++](src/main.cpp) — comportamento programado.
- [Configuração PlatformIO](platformio.ini) — parâmetros de compilação.

## Componentes no diagrama

Consulte o arquivo `diagram.json` para identificar pinos e conexões. O diagrama é a referência visual do circuito; confira a correspondência com `src/main.cpp`.

## Ligações ou parâmetros no código

`leds[] = {2,3,4,5}; botoes[] = {6,7,8,9}; BUZZER = 10`

## Roteiro de estudo

1. Abra o projeto no VS Code com PlatformIO e extensão Wokwi.
2. Examine `diagram.json` e compare seus componentes com o código.
3. Compile o projeto e, quando o ambiente estiver configurado, execute a simulação.
4. Observe o LED correspondente ao botão pressionado e o tom do buzzer.
5. Registre diferenças entre o resultado observado e o comportamento esperado.

> **Estado de validação:** documentação baseada nos arquivos presentes no GitHub. Compilação, simulação e teste em placa física ainda não foram confirmados.

[← Catálogo completo](../../README.md)
