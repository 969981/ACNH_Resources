
void FUN_02fe14f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_50;
  undefined4 local_48;
  
  FUN_02fe1784(param_1,param_2,0);
  plVar2 = *(long **)(param_1 + 0x10);
  *(undefined1 *)(param_1 + 0x68) = 1;
  puVar1 = PTR_DAT_04bc0cb8;
  if (plVar2 != (long *)0x0) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],0);
  }
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_1 + 0x28);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_1 + 0x30);
  if (plVar2 != (long *)0x0) {
    local_48 = 7;
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 != (long *)0x0) {
      local_48 = 0xb;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 200))(plVar2[1],param_1 + 0x3c);
    }
  }
  plVar2 = *(long **)(param_1 + 0x48);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
  }
  plVar2 = *(long **)(param_1 + 0x50);
  if (plVar2 != (long *)0x0) {
    local_48 = 7;
    local_50 = puVar1 + 0x10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0x88))(plVar2[1],1);
    plVar2 = *(long **)(param_1 + 0x50);
    if (plVar2 != (long *)0x0) {
      local_48 = 0xb;
      local_50 = puVar1 + 0x10;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 200))(plVar2[1],param_1 + 0x5c);
    }
  }
  return;
}

