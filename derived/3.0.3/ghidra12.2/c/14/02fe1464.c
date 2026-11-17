
void FUN_02fe1464(undefined4 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *local_40;
  undefined4 local_38;
  
  plVar1 = *(long **)(param_2 + 0x18);
  if (plVar1 != (long *)0x0) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_40);
    (**(code **)(plVar1[3] + 0x88))(plVar1[1],1);
  }
  FUN_02fe1278(param_1,param_2,param_3);
  return;
}

