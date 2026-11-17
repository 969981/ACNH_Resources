
void FUN_02ac5de8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2d8);
  if ((lVar1 == 0) || (*(char *)(lVar1 + 0x540) == '\0')) {
    return;
  }
  if (-1 < *(int *)(lVar1 + 0x14)) {
    if (*(int *)(lVar1 + 0x20) != *(int *)(lVar1 + 0x14)) {
      FUN_03ebb160(lVar1 + 0x18);
    }
    *(undefined4 *)(lVar1 + 0x14) = 0xffffffff;
  }
  FUN_03ebb268(lVar1 + 0x18);
  return;
}

