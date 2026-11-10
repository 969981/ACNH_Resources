
uint FUN_0017203c(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0xfffffe02;
  }
  iVar1 = FUN_0016cfc4();
  if (iVar1 == 0) {
    if ((*(byte *)(param_2 + 0xe5) >> 1 & 1) == 0) {
      if ((*(char *)(param_1 + 0x9aa) == '\0') || (*(int *)(param_2 + 0xdc) != 4)) {
        uVar2 = 0xfffffe07;
      }
      else {
        uVar2 = (int)((uint)*(byte *)(param_1 + 0x9ab) << 0x1c) >> 0x1f & 0xfffffdfc;
      }
    }
    else {
      uVar2 = 0xfffffe00;
    }
  }
  else {
    uVar2 = 0xfffffdee;
  }
  return uVar2;
}

