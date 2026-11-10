
uint FUN_0016cfc4(long param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((*(byte *)(param_1 + 0x9ab) & 1) != 0) {
    return 1;
  }
  iVar1 = FUN_00170ee0();
  if (iVar1 == 0) {
    uVar2 = FUN_00171620(param_1);
    uVar2 = uVar2 ^ 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

