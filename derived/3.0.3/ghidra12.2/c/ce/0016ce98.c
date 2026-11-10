
undefined8 FUN_0016ce98(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x988);
  if (uVar4 == 0xffffffff) {
    uVar4 = *(uint *)(param_1 + 0x9a0);
  }
  lVar3 = *(long *)(param_1 + 0x908);
  if (lVar3 != 0) {
    do {
      if ((ulong)(*(long *)(param_1 + 0x8f0) + lVar3) <= (ulong)uVar4) {
        return 0;
      }
      lVar3 = *(long *)(*(long *)(param_1 + 0x8c0) + 0x98);
      uVar2 = FUN_0016ce30(param_1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
      *(long *)(param_1 + 0x8c0) = lVar3;
      puVar1 = (undefined8 *)(param_1 + 0x8c8);
      if (lVar3 != 0) {
        puVar1 = (undefined8 *)(lVar3 + 0x90);
      }
      *puVar1 = 0;
      lVar3 = *(long *)(param_1 + 0x908) + -1;
      *(long *)(param_1 + 0x908) = lVar3;
    } while (lVar3 != 0);
  }
  return 0;
}

