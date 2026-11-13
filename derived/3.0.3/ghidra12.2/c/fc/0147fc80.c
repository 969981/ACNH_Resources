
undefined8 FUN_0147fc80(long param_1,int param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  
  bVar1 = false;
  if (*(long *)(param_1 + 0x70) != 0) {
    bVar1 = *(int *)(*(long *)(param_1 + 0x70) + 0x280) == 8;
  }
  uVar2 = 0;
  if ((!bVar1) && (1 < *(int *)(param_1 + 0x900) - 3U)) {
    local_24 = param_2;
    if (param_2 == 3) {
      FUN_0147ff0c(param_1,PTR_DAT_04bb2cf0);
      uVar2 = 4;
    }
    else {
      if (param_2 != 2) {
        if (param_2 == 1) {
          local_28 = 1;
          FUN_0147fd80(param_1,&DAT_051dcf4c,&local_28);
          FUN_0147d8f0(param_1,3,0,0);
          return 1;
        }
        return 0;
      }
      local_2c = 3;
      FUN_0147fd80(param_1,&DAT_051dcf4c,&local_2c);
      uVar2 = 3;
    }
    FUN_0147d8f0(param_1,uVar2,0,0);
    uVar2 = 1;
  }
  return uVar2;
}

