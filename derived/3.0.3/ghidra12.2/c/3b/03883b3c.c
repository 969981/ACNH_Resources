
void FUN_03883b3c(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xa0))();
  if ((((uVar1 & 1) != 0) && (uVar1 = (**(code **)(*param_1 + 600))(param_1), (uVar1 & 1) != 0)) &&
     (0 < *(int *)(*(long *)(DAT_05ae6a60 + 8) + 0x40))) {
    *(undefined1 *)(param_1 + 0x1e) = 1;
  }
  return;
}

