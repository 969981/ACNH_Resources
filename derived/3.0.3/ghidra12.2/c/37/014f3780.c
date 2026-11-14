
uint FUN_014f3780(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x270);
  if (lVar3 == param_1 + 0x268) {
    return 0;
  }
  iVar1 = *(int *)(param_1 + 0x27c);
  do {
    lVar3 = *(long *)(lVar3 + 8);
    uVar2 = FUN_014ecb48();
    if ((uVar2 & 1) != 0) break;
  } while (lVar3 - iVar1 != (param_1 + 0x268) - (long)iVar1);
  return uVar2 & 1;
}

