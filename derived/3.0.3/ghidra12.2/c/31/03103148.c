
void FUN_03103148(long param_1)

{
  long lVar1;
  long *plVar2;
  undefined *local_40;
  undefined4 local_38;
  
  lVar1 = *(long *)(param_1 + 0x2b0);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x2b8);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  lVar1 = *(long *)(param_1 + 0x2c0);
  if ((lVar1 != 0) && (plVar2 = *(long **)(lVar1 + 0x48), plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc0878 + 0x10;
    local_38 = 9;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x5e0))(plVar2[1],PTR_DAT_04bb2da0,0);
    FUN_03d7dd80(lVar1);
  }
  return;
}

