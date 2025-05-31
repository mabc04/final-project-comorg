Title: Buffer Overflow Exploit Using Custom Assembly Shellcode

Description:
This project demonstrates a buffer overflow exploit where assembly shellcode is injected into a vulnerable C program. The shellcode spawns a shell by overwriting the return address to redirect execution.

Files:
- vuln_game.c: The vulnerable program
- shellcode.asm: Custom shellcode to launch /bin/sh
- exploit_input.py: Python script to create the payload
- input.txt: Exploit payload
- README.txt: This document

Tools Used:
- NASM
- GCC (with protections disabled)
- GDB (for address finding)
