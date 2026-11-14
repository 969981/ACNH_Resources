
void FUN_01beb660(long param_1)

{
  long *plVar1;
  undefined *local_30;
  undefined4 local_28;
  
  if (param_1 != 0) {
    plVar1 = *(long **)(param_1 + 0x48);
    if (plVar1[1] != 0) {
      local_30 = PTR_DAT_04bc0878 + 0x10;
      local_28 = 9;
      (**(code **)(*plVar1 + 0x18))(plVar1,&local_30);
      (**(code **)(plVar1[3] + 0x5e0))(plVar1[1],PTR_DAT_04bb2da0,0);
      FUN_03d7dd80(param_1);
    }
  }
  return;
}

