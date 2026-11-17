
void FUN_02fe13fc(long param_1)

{
  long *plVar1;
  undefined *local_30;
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x18);
  if (plVar1 != (long *)0x0) {
    local_30 = PTR_DAT_04bc0cb8 + 0x10;
    local_28 = 7;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_30);
    (**(code **)(plVar1[3] + 0x88))(plVar1[1],0);
  }
  return;
}

