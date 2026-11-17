
void FUN_030d0db4(long param_1)

{
  long *plVar1;
  undefined *local_30;
  undefined4 local_28;
  
  FUN_03d66690();
  plVar1 = *(long **)(param_1 + 0x378);
  local_30 = PTR_DAT_04bc0cb8 + 0x10;
  local_28 = 0x1f;
  (**(code **)(*plVar1 + 0x20))(plVar1,&local_30);
  (**(code **)(plVar1[3] + 0x210))(param_1 + 0x3a0,plVar1[1],0,0);
  return;
}

