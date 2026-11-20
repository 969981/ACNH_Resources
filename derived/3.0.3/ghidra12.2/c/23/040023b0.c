
void FUN_040023b0(void)

{
  code *pcVar1;
  
  if (PTR_FUN_04c57928 == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)UndefinedInstructionException(0x8002,0x4002420);
    (*pcVar1)();
  }
  (*(code *)PTR_FUN_04c57928)();
  return;
}

