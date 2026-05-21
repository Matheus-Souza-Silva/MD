# 📐 Matemática Discreta (MD)

Repositório de estudos e exercícios da disciplina **Matemática Discreta**, contendo implementações práticas em linguagem C desenvolvidas ao longo do semestre. O projeto aborda problemas matemáticos fundamentais por meio da programação, combinando conceitos teóricos da matemática discreta com aplicações práticas em algoritmos computacionais.

---

## 🗂️ Estrutura do Repositório

- **MD/**
  - `fatorial/` — Programa para cálculo de fatorial de números inteiros
    - `main.c` — Código-fonte principal
    - `Makefile.win` — Arquivo de configuração de compilação (Windows / Dev-C++)
  - `semaforos/` — Simulação de semáforo veicular e de pedestres no terminal
    - `semaforos.c` — Código-fonte com temporização e cores ANSI

---

## 🛠️ Tecnologias

- **Linguagem:** C (padrão ANSI/C99)
- **Compilação:** GCC / MinGW
- **Ambiente:** Windows / Linux / macOS (com suporte a cores ANSI no terminal)

---

## 📖 Conteúdo Programático

### Programas Desenvolvidos

| Programa | Descrição | Conceitos Abordados |
|----------|-----------|---------------------|
| **Fatorial** | Calcula o fatorial de um número inteiro entre 0 e 6, utilizando o tipo `long long` para armazenar o resultado | Laços de repetição, acumuladores, tipagem numérica, validação de entrada |
| **Semáforo** | Simulação interativa de uma interseção semafórica com temporização realista, faixa de pedestres e alternância entre vias principal e secundária | Temporização com `sleep()`, limpeza de tela, funções condicionais, compatibilidade cross-platform (`_WIN32` / `unistd.h`), cores ANSI |

---

## 🚀 Como Compilar e Executar

### Requisitos
- Compilador C (GCC recomendado)
- Terminal que suporte cores ANSI (recomendado)

### Compilação

```bash
# Fatorial
gcc fatorial/main.c -o fatorial
./fatorial

# Semáforo
gcc semaforos/semaforos.c -o semaforo
./semaforo
```

No Windows, o programa detecta automaticamente o ambiente e utiliza `Sleep()` e `system("cls")`; no Linux/macOS, utiliza `sleep()` e `system("clear")`.

---

## 💡 Destaques de Implementação

- **Validação de Entrada:** O programa de fatorial restringe a entrada ao intervalo 0–6, evitando overflow do tipo `long long` e exibindo mensagem de erro para valores inválidos
- **Compatibilidade Cross-Platform:** O simulador de semáforo utiliza diretivas de pré-processamento (`#ifdef _WIN32`) para detectar o sistema operacional e adaptar as funções de temporização e limpeza de tela
- **Interface Visual:** Utilização de sequências de escape ANSI (`\033[1;31m` para vermelho, `\033[1;32m` para verde, `\033[1;33m` para amarelo) para simular as cores reais de um semáforo
- **Configuração de Locale:** Suporte a UTF-8 e caracteres acentuados no console, com configuração automática para Windows e Linux

---

## 📌 Observações

- Os programas são independentes e autocontidos, cada um em sua respectiva pasta
- O código do semáforo foi desenvolvido como desafio proposto pelo professor, com a restrição de que o semáforo da via principal deveria permanecer fechado por no máximo 60 segundos, enquanto o restante do sistema opera com tempos realistas
- Os arquivos `.exe` e `.o` presentes no repositório são artefatos de compilação local e podem ser ignorados

---

## 👨‍💻 Autor

- **Matheus Souza Silva**
- Repositório acadêmico para a disciplina de Matemática Discreta — UCB

---

📅 Última atualização: 09/2025
