
undefined1 FUN_0027fbd0(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  
  if (*(short *)(param_1 + 0xe6) == 0) {
    return 0xfd;
  }
  lVar3 = 0;
  uVar2 = 0;
  do {
    lVar1 = FUN_002b43ec(*(long *)(param_1 + 0xa8) + lVar3);
    if (lVar1 == param_2) {
      return *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar2);
    }
    uVar2 = uVar2 + 1;
    lVar3 = lVar3 + 0x80;
  } while (uVar2 < *(ushort *)(param_1 + 0xe6));
  return 0xfd;
}

