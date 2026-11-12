
void nnMain(void)

{
  ulong uVar1;
  
  uVar1 = fpcr;
  fpcr = uVar1 | 0x1000000;
  DAT_05aec788 = &PTR_PTR_04c47c08;
  FUN_03c0fb20();
  return;
}

