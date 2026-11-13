
void FUN_0118c494(long param_1,long param_2)

{
  long lVar1;
  
  if (**(int **)(param_1 + 0x18) == *(int *)(param_2 + 4)) {
    **(undefined1 **)(param_1 + 8) = 1;
    lVar1 = *(long *)(param_1 + 0x10);
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(param_2 + 0x28);
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(param_2 + 0x2c);
  }
  return;
}

