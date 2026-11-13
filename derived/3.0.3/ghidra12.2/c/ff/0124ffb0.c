
int FUN_0124ffb0(long param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  iVar2 = 1;
  if (iVar1 - 0x12U < 6) {
    iVar2 = (*(uint *)(param_1 + 0xc) >> 5 & 7) + 1;
  }
  return iVar2;
}

