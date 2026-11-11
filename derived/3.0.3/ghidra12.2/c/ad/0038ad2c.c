
void FUN_0038ad2c(undefined4 param_1,long param_2,int param_3)

{
  if (param_3 == 1) {
    *(undefined4 *)(*(long *)(param_2 + 0x150) + 4) = param_1;
    *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
    return;
  }
  if (param_3 == 0) {
    **(undefined4 **)(param_2 + 0x150) = param_1;
  }
  *(ushort *)(param_2 + 0x114) = *(ushort *)(param_2 + 0x114) | 4;
  return;
}

