
void FUN_0049e2c0(long param_1)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x18) = iVar1;
  if (0x400 < iVar1) {
    FUN_0043a4c0(*(long *)(param_1 + 0x28),*(long *)(param_1 + 0x28) + (long)iVar1,
                 *(int *)(param_1 + 0x30) - iVar1);
    lVar2 = (long)*(int *)(param_1 + 0x30) - (long)*(int *)(param_1 + 0x18);
    if (*(int *)(param_1 + 0x18) != 0) {
      *(int *)(param_1 + 0x30) = (int)lVar2;
    }
    *(undefined1 *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
    iVar1 = *(int *)(param_1 + 0x18);
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) - (long)iVar1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) - iVar1;
  }
  return;
}

