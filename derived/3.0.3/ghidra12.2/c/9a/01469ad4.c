
void FUN_01469ad4(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = FUN_01432cf4(param_1,0);
  if ((((uVar2 & 1) == 0) || (uVar1 = (**(code **)(*param_1 + 0x198))(param_1), uVar1 < 4)) ||
     ((uVar2 = (**(code **)(*param_1 + 0x1b0))(param_1), (uVar2 & 1) != 0 &&
      ((int)param_1[0x50] == 3)))) {
    return;
  }
  FUN_03ebb160(param_1 + 0x4f,3);
                    /* WARNING: Could not recover jumptable at 0x01469b5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x218))(param_1,3,0);
  return;
}

