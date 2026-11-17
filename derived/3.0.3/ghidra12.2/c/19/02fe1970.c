
void FUN_02fe1970(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *local_50;
  undefined4 local_48;
  
  puVar2 = PTR_DAT_04bc0cb8;
  plVar3 = *(long **)(param_1 + 0x10);
  local_48 = 8;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_50 = puVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  (**(code **)(plVar3[3] + 0x98))(plVar3[1],param_1 + 0x80);
  plVar3 = *(long **)(param_1 + 0x10);
  local_48 = 7;
  local_50 = puVar1;
  (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
  (**(code **)(plVar3[3] + 0x88))(plVar3[1],1);
  *(undefined1 *)(param_1 + 0x68) = 1;
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    local_48 = 7;
    local_50 = puVar1;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
    (**(code **)(plVar3[3] + 0x88))(plVar3[1],1);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 != (long *)0x0) {
    local_50 = puVar2 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_50);
    (**(code **)(plVar3[3] + 0x88))(plVar3[1],0);
  }
  return;
}

