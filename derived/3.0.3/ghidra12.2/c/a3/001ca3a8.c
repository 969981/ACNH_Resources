
void FUN_001ca3a8(long *param_1,uint param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (*(int *)((long)param_1 + 0x11c) == 0) {
    *(uint *)((long)param_1 + 0x11c) = param_2;
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  }
  else {
    uVar1 = (**(code **)(*param_1 + 0x58))(param_1);
  }
  if (((uVar1 & 1) == 0) && (uVar1 = (**(code **)(*param_1 + 0x60))(param_1), (uVar1 & 1) == 0)) {
    if ((*(uint *)((long)param_1 + 0x114) | 2) == 3) {
                    /* WARNING: Could not recover jumptable at 0x001ca4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xb0))(param_1,0);
      return;
    }
    return;
  }
  FUN_00187aac();
  if ((9 < param_2) || ((1 << (ulong)(param_2 & 0x1f) & 0x20cU) == 0)) {
    FUN_001ca4c0(param_1);
  }
  (**(code **)(*param_1 + 0xb0))(param_1,4);
  FUN_001c4420(param_1);
  plVar2 = (long *)param_1[0x10];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1,param_2);
  }
  (**(code **)(*param_1 + 0xa0))(param_1);
  FUN_001ca708(param_1[1],param_1);
  return;
}

