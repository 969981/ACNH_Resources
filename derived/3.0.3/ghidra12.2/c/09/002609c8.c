
void FUN_002609c8(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  (**(code **)(*param_1 + 0x38))();
  param_1[0xe] = 0;
  if (*(int *)((long)param_1 + 100) != 0) {
    lVar1 = FUN_0026c894(DAT_04c603c8);
    if (lVar1 != 0) {
      uVar2 = FUN_0026c894(DAT_04c603c8);
      FUN_002840f0(uVar2,*(undefined4 *)((long)param_1 + 100));
    }
    *(undefined4 *)((long)param_1 + 100) = 0;
  }
  param_1[0xb] = 0;
  if ((int *)param_1[0xd] != (int *)0x0) {
    if (2 < *(int *)param_1[0xd] - 2U) {
      FUN_00221064();
    }
    param_1[0xd] = 0;
  }
  uVar3 = FUN_002212e4(param_1);
  if ((uVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00260a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,0);
  return;
}

