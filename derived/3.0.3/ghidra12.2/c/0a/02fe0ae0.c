
void FUN_02fe0ae0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  undefined *local_50;
  undefined4 local_48;
  
  puVar1 = PTR_DAT_04bc0cb8;
  plVar2 = *(long **)(param_1 + 0x18);
  if (plVar2 != (long *)0x0) {
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0xb8))(plVar2[1],param_2);
  }
  plVar2 = *(long **)(param_1 + 0x38);
  if (plVar2 != (long *)0x0) {
    local_50 = puVar1 + 0x10;
    local_48 = 10;
    (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
    (**(code **)(plVar2[3] + 0xb8))(plVar2[1],param_2);
  }
  return;
}

