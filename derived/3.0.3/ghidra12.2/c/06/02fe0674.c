
void FUN_02fe0674(undefined4 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_04bc0cb8;
  plVar2 = *(long **)(param_2 + 0x10);
  if (plVar2 != (long *)0x0) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  FUN_02fe0890(param_1,param_2,param_3);
  plVar2 = *(long **)(param_2 + 0x18);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_2 + 0x20);
  if (plVar2 != (long *)0x0) {
    local_48 = 7;
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
    plVar2 = *(long **)(param_2 + 0x20);
    if (plVar2 != (long *)0x0) {
      local_48 = 0xb;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 200))(plVar2[1],param_2 + 0x2c);
    }
  }
  plVar2 = *(long **)(param_2 + 0x38);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_2 + 0x40);
  if (plVar2 != (long *)0x0) {
    local_48 = 7;
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
    plVar2 = *(long **)(param_2 + 0x40);
    if (plVar2 != (long *)0x0) {
      local_48 = 0xb;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 200))(plVar2[1],param_2 + 0x4c);
    }
  }
  return;
}

