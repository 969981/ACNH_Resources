
void FUN_0351ff4c(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bc4e68;
  plVar2 = *(long **)(param_1 + 0x1d0c8);
  if (plVar2 != (long *)0x0) {
    local_40 = PTR_DAT_04bc4e68 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
  }
  plVar2 = *(long **)(param_1 + 0x1d0d0);
  if (plVar2 != (long *)0x0) {
    local_40 = puVar1 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
  }
  plVar2 = *(long **)(param_1 + 0x1d0b8);
  if (plVar2 != (long *)0x0) {
    local_40 = puVar1 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x1c0))(plVar2[1]);
  }
  plVar2 = *(long **)(param_1 + 0x1d0c0);
  if (plVar2 != (long *)0x0) {
    local_40 = puVar1 + 0x10;
    local_38 = 6;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
    (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
  }
  return;
}

