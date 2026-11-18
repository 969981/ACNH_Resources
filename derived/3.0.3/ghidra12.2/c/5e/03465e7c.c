
undefined8 FUN_03465e7c(long param_1,uint param_2)

{
  long lVar1;
  int *piVar2;
  
  if (param_2 < 0x40) {
    lVar1 = param_1 + 8 + (ulong)param_2 * 0x30;
    *(undefined1 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(lVar1 + 0x28) = 0;
    if ((*(byte *)(lVar1 + 4) & 1) != 0) {
      FUN_015d8190(*(undefined8 *)(DAT_05231900 + 0x140));
    }
    piVar2 = (int *)(param_1 + 8 + (ulong)param_2 * 0x30 + 0x20);
    if (*piVar2 != -1) {
      *piVar2 = -1;
      return 1;
    }
  }
  return 0;
}

