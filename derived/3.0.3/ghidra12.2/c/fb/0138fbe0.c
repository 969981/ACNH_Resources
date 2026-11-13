
undefined8 FUN_0138fbe0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x10) == param_1 + 8) {
    return 0;
  }
  lVar2 = (long)*(int *)(param_1 + 0x1c);
  lVar1 = *(long *)(param_1 + 0x10) - lVar2;
  while ((*(int *)(lVar1 + 0x1c) != 0x1a || ((*(ushort *)(lVar1 + 0x3f8) & 0x29) == 0))) {
    lVar1 = *(long *)(lVar1 + lVar2 + 8) - lVar2;
    if (lVar1 == (param_1 + 8) - lVar2) {
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(lVar1 + 0x38);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(lVar1 + 0x3c);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(lVar1 + 0x48);
  *(undefined4 *)(param_2 + 0x24) = *(undefined4 *)(lVar1 + 0x4c);
  return 1;
}

