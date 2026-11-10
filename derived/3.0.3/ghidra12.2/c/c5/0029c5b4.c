
void FUN_0029c5b4(long param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if (param_2 != 2) goto LAB_0029c634;
  if (*(long *)(param_1 + 0x20) == 0) {
    if (*(long *)(param_1 + 0x30) != 0) {
      uVar2 = FUN_002212e4();
      goto joined_r0x0029c614;
    }
  }
  else {
    uVar1 = FUN_002212e4();
    uVar2 = uVar1;
    if ((*(long *)(param_1 + 0x30) != 0) && (uVar2 = FUN_002212e4(), (uVar1 & 1) != 0)) {
      return;
    }
joined_r0x0029c614:
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  uVar2 = FUN_002212e4(*(undefined8 *)(param_1 + 0x38));
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0xd8) - 2U < 6) {
    return;
  }
LAB_0029c634:
  if (*(code **)(param_1 + 0xa0) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0029c654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0xa0))(param_2,param_3,*(undefined8 *)(param_1 + 0xa8));
  return;
}

