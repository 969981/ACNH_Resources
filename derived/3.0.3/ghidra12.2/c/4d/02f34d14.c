
void FUN_02f34d14(long param_1)

{
  long lVar1;
  
  if (*(int *)(param_1 + 0x1b4) == 0) {
    lVar1 = *(long *)(param_1 + 0x210);
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(lVar1 + 600) = 0;
    *(undefined8 *)(lVar1 + 0x260) = 0;
    *(undefined4 *)(lVar1 + 0x268) = 0;
    *(undefined1 *)(lVar1 + 0x290) = 0;
    *(undefined1 *)(lVar1 + 0x2a0) = 0;
    FUN_03125a4c(lVar1,0);
  }
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 1;
  }
  return;
}

