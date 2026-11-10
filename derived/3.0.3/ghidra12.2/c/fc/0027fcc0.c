
void FUN_0027fcc0(long param_1,char param_2,undefined1 param_3)

{
  ulong uVar1;
  
  if ((ulong)*(ushort *)(param_1 + 0xa0) != 0) {
    uVar1 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0xb0) + uVar1) == param_2) {
        *(undefined1 *)(*(long *)(param_1 + 0xe8) + uVar1) = param_3;
        return;
      }
      uVar1 = uVar1 + 1;
    } while (*(ushort *)(param_1 + 0xa0) != uVar1);
  }
  return;
}

