
bool FUN_03d7dee4(long param_1,undefined8 param_2,undefined4 param_3)

{
  long *plVar1;
  long lVar2;
  undefined *local_50;
  undefined4 local_48;
  
  plVar1 = *(long **)(param_1 + 0x48);
  lVar2 = plVar1[1];
  if (lVar2 != 0) {
    local_50 = PTR_DAT_04bc0878 + 0x10;
    local_48 = 9;
    (**(code **)(*plVar1 + 0x18))(plVar1,&local_50);
    (**(code **)(plVar1[3] + 0x5e0))(plVar1[1],param_2,param_3);
    FUN_03d7dd80(param_1);
  }
  return lVar2 != 0;
}

