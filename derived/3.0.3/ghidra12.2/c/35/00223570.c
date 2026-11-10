
void FUN_00223570(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00221300(param_2);
  if ((uVar1 & 1) == 0) {
    uVar1 = FUN_0022131c(param_2);
    if ((uVar1 & 1) != 0) {
      FUN_00223acc(*(undefined8 *)(param_1 + 0x80),param_2);
      return;
    }
  }
  else {
    uVar1 = FUN_00223730(param_1,*(int *)(param_1 + 0x14) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_00223704(param_1,*(int *)(param_1 + 0x14) + param_2);
      return;
    }
    uVar1 = FUN_00223730(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
    if ((uVar1 & 1) != 0) {
      FUN_00223704(param_1 + 0x18,*(int *)(param_1 + 0x2c) + param_2);
      return;
    }
  }
  return;
}

