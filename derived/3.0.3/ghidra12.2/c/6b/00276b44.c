
void FUN_00276b44(long *param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined4 local_48 [4];
  undefined8 local_38;
  undefined4 local_28;
  undefined1 local_24;
  
  plVar1 = (long *)FUN_002aaa54();
  local_28 = 0;
  local_24 = 0;
  local_48[0] = (**(code **)(*param_1 + 0x18))(param_1);
  lVar2 = (**(code **)(*plVar1 + 0x68))(plVar1,local_48,param_3,8,&local_28);
  if (lVar2 != 0) {
    local_38 = 5;
    FUN_00228480((ulong)&local_38 | 4,param_2);
    FUN_002a9f34(local_48,plVar1,&local_38);
  }
  return;
}

