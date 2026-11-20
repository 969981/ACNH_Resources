
void FUN_04002440(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)UndefinedInstructionException(0x8002,0x4002440);
  (*pcVar1)();
}

