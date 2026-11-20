
void FUN_03d670e0(long param_1)

{
  long *plVar1;
  undefined *local_30;
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x10);
  if (plVar1 != (long *)0x0) {
    local_30 = PTR_DAT_04bc4e68 + 0x10;
    local_28 = 6;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30);
    (**(code **)(plVar1[3] + 0x1b8))(plVar1[1]);
  }
  return;
}

