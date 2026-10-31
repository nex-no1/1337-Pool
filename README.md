<div align="center">

# 1337_PISCINE_ARCHIVE

### *The crucible — 4 weeks of C, Shell, and zero-compromise peer learning.*

<br/>

<img src="https://github.com/user-attachments/assets/37d076c7-93c3-4778-bf09-2348866b72d8" alt="Piscine Grind" width="280">

<br/><br/>

[![Campus](https://img.shields.io/badge/Campus-1337_MED-000000?style=for-the-badge&logo=42&logoColor=white)](#)
[![Network](https://img.shields.io/badge/Network-42_Network-blueviolet?style=for-the-badge)](#)
[![Language: C](https://img.shields.io/badge/Language-C-00599C?style=for-the-badge&logo=c&logoColor=white)](#)
[![Shell](https://img.shields.io/badge/Shell-Bash%20%2F%20Zsh-4EAA25?style=for-the-badge&logo=gnu-bash&logoColor=white)](#)
[![Norminette](https://img.shields.io/badge/Norminette-Passing-00D26A?style=for-the-badge)](#)
[![Status](https://img.shields.io/badge/Piscine-Admitted-brightgreen?style=for-the-badge)](#)

<br/>

<p align="center">
  <b>Complete personal archive of the 42 / 1337 Coding School selection Piscine.</b><br/>
  Source code, iterative exercises, algorithm challenges, and official project subject PDFs.
</p>

</div>

---

## 📌 Overview

The **Piscine** is an intensive, 28-day deep dive into imperative programming, terminal mastery, and low-level computer science. With zero teacher instruction, learning is driven entirely through peer evaluations, man pages, trial-and-error, and strict automated grading (Moulinette).

This repository contains all my validated exercises across the C modules (**C 00 $\rightarrow$ C 09**), Shell scripts, official subject PDFs, and authentic Moulinette grades.

> [!WARNING]
> **Academic Integrity & Peer Defense:**
> Every function, pointer operation, and recursion pattern in this archive was written and defended during peer reviews. If you are currently in a Piscine, **do not copy-paste code**. 
> 
> Moulinette checks for plagiarism, and cheating on code you cannot explain line-by-line during evaluations or 8-hour weekend exams will get you disqualified. Use this strictly as a reference to verify logic after you have built your own solution.

---

## ⚠️ Repository Notes & Integrity Status

```diff
+ C 00 through C 09: Complete, validated exercises and subject specifications
+ Shell 01: Scripts and terminal automation pipeline intact
+ Official PDFs: Subject manuals included in each module directory
! Shell 00: Files missing locally due to a workstation wipe/migration (Subject PDF & 100% grade record preserved)
```

> [!NOTE]
> **Shell 00 Artifacts:** The submission files for Shell 00 were lost during a machine wipe/migration, but the official subject PDF remains available in the folder, and the module scored **100%**.

---

## 📂 Curriculum, Grades & Exercise Index

<details open>
<summary><b>1. Unix & Terminal Scripting (Shell)</b> (Click to collapse)</summary>

| Module | Core Concepts | Grade | Status |
| :--- | :--- | :---: | :---: |
| **Shell 00** | Filesystem traversal, permissions (`chmod`), hard/sym links, tar archives, SSH | **100%** | ⚠️ *Files missing* |
| **Shell 01** | Grep/sed pipelines, environment variables, user/group filters, MAC addresses | **70%** | ✅ *Complete* |

</details>

<details open>
<summary><b>2. Core C Curriculum (C 00 $\rightarrow$ C 09)</b> (Click to collapse)</summary>

| Module | Focus & Core Mechanics | Key Functions / Topics | Grade |
| :--- | :--- | :--- | :---: |
| **C 00** | Basic C syntax, standard output via `write()`, loops, character tables | `ft_putchar`, `ft_print_alphabet`, `ft_print_comb`, `ft_putnbr` | **100%** |
| **C 01** | Pointers, addresses, dereferencing, pointer-to-pointer, array traversal | `ft_ft`, `ft_swap`, `ft_div_mod`, `ft_rev_int_tab`, `ft_sort_int_tab` | **100%** |
| **C 02** | String manipulation, ASCII bounds checking, memory safety | `ft_strcpy`, `ft_strncpy`, `ft_str_is_alpha`, `ft_strupcase`, `ft_strlcpy` | **100%** |
| **C 03** | String concatenation, searching, and boundary-checked comparisons | `ft_strcmp`, `ft_strncmp`, `ft_strcat`, `ft_strncat`, `ft_strstr` | **100%** |
| **C 04** | Base conversions, string-to-integer parsing, radix printing | `ft_strlen`, `ft_putstr`, `ft_atoi`, `ft_putnbr_base`, `ft_atoi_base` | **100%** |
| **C 05** | Iteration vs. recursion, mathematical algorithms, prime sieves | Factorials, powers, Fibonacci sequences, square roots, next primes | **80%** |
| **C 06** | Program arguments handling (`argc`, `argv`), lexical argument sorting | `ft_print_program_name`, `ft_print_params`, `ft_sort_params` | **100%** |
| **C 07** | Heap memory allocation (`malloc`, `free`), dynamic array slicing | `ft_strdup`, `ft_range`, `ft_ultimate_range`, `ft_strjoin`, `ft_split` | **60%** |
| **C 08** | Header files (`.h`), macro definitions, structures (`typedef struct`) | `ft.h`, `ft_boolean.h`, `ft_abs.h`, `ft_point.h`, `ft_strs_to_tab` | **100%** |
| **C 09** | Build automation (`Makefile`), static library archiving (`libft.a`) | Custom `Makefile` rules (`all`, `clean`, `fclean`, `re`), archive headers | **100%** |

</details>

---

## 🛠️ Compilation & Testing Guide

Every C module compiles with strict flags under the 42 Norminette standard:

```bash
# Compile any exercise with standard flags
cc -Wall -Wextra -Werror ex00/ft_putchar.c main.c -o test

# Run address sanitizer for memory leak & heap out-of-bounds auditing
cc -Wall -Wextra -Werror -fsanitize=address -g3 ex03/ft_strjoin.c main.c -o test_leaks

# Run Norminette check across all source files
norminette -R CheckForbiddenSourceHeader */*.c */*.h
```

---

<div align="center">

Archived by **[nex-no1](https://github.com/nex-no1)** · 1337 MED (42 Network)

</div>
