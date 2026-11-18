
ushort FUN_03738210(long param_1,short param_2)

{
  long lVar1;
  long lVar2;
  
  if ((param_2 != -1) && (*(int *)(param_1 + 0xe0) != 0)) {
    lVar1 = 0;
    lVar2 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      if (*(short *)(*(long *)(*(long *)(param_1 + 0xe8) + lVar1 * 8) + 0x38) == param_2) {
        return *(ushort *)(*(long *)(*(long *)(param_1 + 0xe8) + lVar1 * 8) + 0x114) >> 5 & 1;
      }
      lVar1 = lVar1 + 1;
      lVar2 = lVar2 + -8;
    } while (lVar2 != 0);
  }
  return 0;
}

