
void FUN_03f5ef94(long *param_1,ulong param_2,ulong param_3,undefined4 param_4)

{
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar1;
  
  uVar1 = param_1[(param_2 & 0xff) * 0x10 + (ulong)((uint)param_3 >> 0xc & 0xf) + 0x1004];
  if (99 < uVar1) {
    param_3 = param_3 & 0xfff;
LAB_03f5effc:
    *(char *)(uVar1 + param_3) = (char)param_4;
    return;
  }
  switch(uVar1) {
  case 1:
    if (((uint)param_3 >> 9 & 0x7f) < 0x11) {
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x28);
    break;
  case 7:
    if ((uint)(param_3 & 0xfff) < 0x800) {
      *(char *)(param_1[3] + (param_3 & 0xfff)) = (char)param_4;
      return;
    }
  default:
    *(int *)param_1[0x280f] = *(int *)param_1[0x280f] + 1;
    return;
  case 8:
    uVar1 = param_1[0x2809];
    param_3 = (ulong)*(uint *)(param_1 + 0x280c) & (param_3 & 0xffff | (param_2 & 3) << 0x10);
    goto LAB_03f5effc;
  case 9:
                    /* WARNING: Could not recover jumptable at 0x03f5f050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x18))();
    return;
  case 10:
    UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x03f5f064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_3 & 0xffffffff,param_4);
  return;
}

