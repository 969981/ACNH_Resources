
undefined8 FUN_003cb0d8(long param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  if (((param_2[1] == 0 || param_2[2] == 0) || 0x1f < *(int *)(param_2 + 4)) || param_2[6] == 0) {
    return 0;
  }
  *(undefined8 *)(param_1 + 0x1d8) = param_2[5];
  *(undefined8 *)(param_1 + 0x1e0) = param_2[6];
  uVar1 = FUN_003cafa0(param_1,param_1 + 8,param_1 + 0x1c8,param_2);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  FUN_003cb07c(param_1,*param_2);
  if (*(int *)((long)param_2 + 0x1c) != 0) {
    FUN_003cb094(param_1,*(undefined4 *)(param_2 + 3));
  }
  *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(param_2 + 4);
  FUN_003cb0a0(param_1);
  return 1;
}

