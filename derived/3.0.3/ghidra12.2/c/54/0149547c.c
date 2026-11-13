
ulong FUN_0149547c(long param_1,uint *param_2)

{
  ulong uVar1;
  long *plVar2;
  uint uVar3;
  
  plVar2 = (long *)(param_1 + 0x38);
  uVar3 = *(uint *)(param_1 + 8);
  uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
  if ((uVar1 & 1) != 0) {
    uVar1 = (**(code **)(*plVar2 + 0x10))(plVar2);
    if (((uVar1 & 1) != 0) && (*param_2 < 0x17)) {
                    /* WARNING: Could not recover jumptable at 0x014954ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)*plVar2)(plVar2,param_2);
      return uVar1;
    }
    uVar3 = *(uint *)(param_1 + 8);
  }
  return (ulong)uVar3;
}

