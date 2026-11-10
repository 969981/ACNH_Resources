
void FUN_002619d0(long *param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_002212e4();
  if (((uVar1 & 1) != 0) && (uVar1 = FUN_0022131c(param_1), (uVar1 & 1) != 0)) {
    *(undefined1 *)(param_1 + 9) = 1;
    do {
      FUN_00227860(param_1,2);
      uVar1 = FUN_002212e4(param_1);
    } while ((uVar1 & 1) != 0);
  }
  (**(code **)(*param_1 + 0x38))(param_1);
  if ((int *)param_1[0xb] != (int *)0x0) {
    if (2 < *(int *)param_1[0xb] - 2U) {
      FUN_00221064();
    }
    param_1[0xb] = 0;
  }
  return;
}

