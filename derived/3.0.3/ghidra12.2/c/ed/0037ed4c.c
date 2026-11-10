
undefined8 FUN_0037ed4c(long param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
    if (((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 6), -1 < (char)bVar4)) &&
       ((*(byte *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4) + uVar3) +
                  4) & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

