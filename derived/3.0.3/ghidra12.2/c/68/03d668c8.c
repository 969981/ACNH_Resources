
void FUN_03d668c8(long *param_1)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1[6] == 0) &&
     (((long *)param_1[0x36] == (long *)0x0 ||
      (uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x90))(), (uVar1 & 1) == 0)))) {
    (**(code **)(*param_1 + 0xa8))(param_1);
  }
  if ((long *)param_1[0x36] == (long *)0x0) {
    lVar2 = 0x16;
  }
  else {
    uVar1 = (**(code **)(*(long *)param_1[0x36] + 0x90))();
    lVar2 = 0x18;
    if ((uVar1 & 1) == 0) {
      lVar2 = 0x16;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x03d66948. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + lVar2 * 8))(param_1);
  return;
}

