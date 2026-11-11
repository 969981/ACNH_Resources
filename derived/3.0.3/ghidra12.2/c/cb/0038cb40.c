
ulong FUN_0038cb40(undefined8 param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0;
  FUN_0034fb50(&local_40);
  local_40 = CONCAT44(param_2,(int)param_3);
  lVar1 = FUN_00347a58(param_1,&local_40);
  return (param_3 + lVar1) - 1U & -lVar1;
}

