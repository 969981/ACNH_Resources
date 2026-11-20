
void FUN_03d7ebd0(long param_1)

{
  long *plVar1;
  undefined *local_30;
  undefined4 local_28;
  
  plVar1 = *(long **)(param_1 + 0x200);
  local_30 = PTR_DAT_04bc0cb8 + 0x10;
  local_28 = 0x27;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_30);
  (**(code **)(plVar1[3] + 0x290))(param_1 + 0x2b0,plVar1[1]);
  return;
}

