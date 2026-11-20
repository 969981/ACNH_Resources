
uint FUN_03f2eb0c(long param_1)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0 && *(int *)(param_1 + 0x20) == 1) {
    return 0;
  }
  if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
    DataMemoryBarrier(2,3);
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != 0) {
      iVar1 = *(int *)(lVar3 + 0x108);
      if (iVar1 != 6) {
        if (iVar1 == 1) goto LAB_03f2eb60;
        if (iVar1 != 0) {
          return 0;
        }
      }
      if (*(int *)(lVar3 + 0x10) == 7) {
        return 0;
      }
    }
  }
LAB_03f2eb60:
  if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (*(long *)(param_1 + 0x10) != 0) {
      uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
      uVar2 = 0;
      if (uVar4 < 0x10) {
        uVar2 = 0x9200U >> (ulong)(uVar4 & 0x1f) & 1;
      }
    }
  }
  if (*(int *)(param_1 + 0xc) < 5) {
    uVar4 = 0;
  }
  else {
    uVar4 = (uint)(*(int *)(param_1 + 0xc) < 0xf);
  }
  return uVar2 | uVar4;
}

