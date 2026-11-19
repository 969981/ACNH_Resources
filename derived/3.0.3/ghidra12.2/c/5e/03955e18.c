
void FUN_03955e18(long *param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x39) = *(undefined4 *)(param_2 + 0xc);
  if ((int)param_1[0x14] != *(int *)(param_2 + 0x10)) {
    (**(code **)(*param_1 + 0x60))(param_1,param_2);
  }
  FUN_03955fe0(0,param_1,0,param_2 + (ulong)*(uint *)(param_2 + 0x14) + 0x30,0);
  return;
}

