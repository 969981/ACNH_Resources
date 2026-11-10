
void FUN_00194148(long param_1,undefined8 param_2,uint param_3)

{
  long *plVar1;
  long *plVar2;
  
  if (*PTR_DAT_04bcbd30 == '\0') {
    FUN_0019eaa0(param_1,param_2,param_3 & 1);
    return;
  }
  plVar1 = (long *)(param_1 + 0xc0);
  (**(code **)(*plVar1 + 0x10))(plVar1);
  plVar2 = (long *)(param_1 + 0x30);
  (**(code **)(*plVar2 + 0x10))(plVar2);
  FUN_0019eaa0(param_1,param_2,param_3 & 1);
  (**(code **)(*plVar2 + 0x20))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x001941d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

