
bool FUN_03412cc8(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 < 0x10e) {
    lVar1 = param_1 + 8 + (ulong)param_2 * 0x1a8;
    if (*(int *)(lVar1 + 0x1a0) != 0) {
      lVar2 = param_1 + 8 + (ulong)param_2 * 0x1a8;
      **(undefined1 **)(lVar2 + 0x60) = 0;
      *(undefined1 *)(lVar2 + 0xf0) = 0;
      if (((*(int *)(lVar2 + 0x100) != 1) && ((*(byte *)(lVar2 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar2 + 0x140) == -1)) {
        *(undefined4 *)(lVar2 + 0x140) = 1;
      }
      *(undefined4 *)(lVar1 + 0x1a0) = 0;
    }
  }
  return param_2 < 0x10e;
}

