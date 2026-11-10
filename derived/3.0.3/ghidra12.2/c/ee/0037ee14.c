
undefined4 FUN_0037ee14(long param_1)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  
  uVar5 = 0;
  if ((*(byte *)(param_1 + 0x60) >> 2 & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0xa8) + 0xc;
    uVar3 = *(uint *)(*(long *)(param_1 + 0xa8) + 0x10);
    piVar2 = (int *)(lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4) + uVar3));
    if ((*piVar2 == 0x15) && (bVar4 = *(byte *)((long)piVar2 + 6), -1 < (char)bVar4)) {
      uVar5 = *(undefined4 *)
               (lVar1 + (ulong)(*(int *)(lVar1 + (ulong)uVar3 + 4 + (ulong)bVar4 * 4) + uVar3) + 8);
    }
  }
  return uVar5;
}

