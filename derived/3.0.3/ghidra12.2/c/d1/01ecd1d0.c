
void FUN_01ecd1d0(long param_1)

{
  int iVar1;
  ulong uVar2;
  
  FUN_01ea5580();
  uVar2 = (**(code **)(**(long **)(param_1 + 8) + 0x180))();
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = 0;
  if (0x36 < *(int *)(param_1 + 0x77b0)) {
    iVar1 = *(int *)(param_1 + 0x77b0);
  }
  FUN_020f087c(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),*(undefined4 *)(param_1 + 0xaf38),
               *(undefined1 *)(param_1 + 0xaf98),iVar1,*(undefined4 *)(param_1 + 0xaf58),
               param_1 + 0xaf6c,param_1 + 0xaf3c);
  return;
}

