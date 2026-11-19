
void FUN_03c26b50(undefined8 *param_1,long *param_2,undefined4 *param_3)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_40;
  long lStack_38;
  undefined8 local_18;
  
  plVar3 = (long *)*param_1;
  local_18 = 0;
  (**(code **)(*param_2 + 0x18))(param_2);
  lStack_38 = param_2[1];
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if (((*PTR_DAT_04bb2868 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb2868), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb2860 = PTR_DAT_04bb2870 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb2868);
  }
  uVar2 = (**(code **)*plVar3)(plVar3,PTR_DAT_04bb2860);
  if ((uVar2 & 1) == 0) {
    plVar3 = (long *)0x0;
  }
  (**(code **)(*plVar3 + 0x30))(plVar3,&local_40,&local_18);
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_18._4_4_;
  }
  return;
}

