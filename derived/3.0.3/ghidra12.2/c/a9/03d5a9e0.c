
undefined8 FUN_03d5a9e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x38) != param_1 + 0x30) {
    lVar1 = (long)*(int *)(param_1 + 0x44);
    lVar2 = *(long *)(param_1 + 0x38) - lVar1;
    do {
      if (*(int *)(*(long *)(lVar2 + 0x10) + 4) != 0) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != (param_1 + 0x30) - lVar1);
  }
  if (*(long *)(param_1 + 0x50) != param_1 + 0x48) {
    lVar1 = (long)*(int *)(param_1 + 0x5c);
    lVar2 = *(long *)(param_1 + 0x50) - lVar1;
    do {
      if (**(int **)(lVar2 + 0x10) != 0) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != (param_1 + 0x48) - lVar1);
  }
  if (*(long *)(param_1 + 0x68) != param_1 + 0x60) {
    lVar1 = (long)*(int *)(param_1 + 0x74);
    lVar2 = *(long *)(param_1 + 0x68) - lVar1;
    do {
      if (((uint)*(byte *)(lVar2 + 0x18) < *(uint *)(*(long *)(lVar2 + 0x10) + 8)) ||
         (DataMemoryBarrier(2,3), **(int **)(lVar2 + 0x10) != 0)) {
        return 0;
      }
      lVar2 = *(long *)(lVar2 + lVar1 + 8) - lVar1;
    } while (lVar2 != (param_1 + 0x60) - lVar1);
  }
  return 1;
}

