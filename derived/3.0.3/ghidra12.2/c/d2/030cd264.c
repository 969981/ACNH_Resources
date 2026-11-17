
void FUN_030cd264(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  undefined *local_40;
  undefined4 local_38;
  
  puVar2 = PTR_DAT_04bc0cb8;
  plVar3 = *(long **)(param_1 + 0x378);
  lVar1 = param_1 + 0x3a0;
  if (plVar3 != (long *)0x0) {
    local_40 = PTR_DAT_04bc0cb8 + 0x10;
    local_38 = 0x1f;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,lVar1);
  }
  plVar3 = *(long **)(param_1 + 0x380);
  if (plVar3 != (long *)0x0) {
    local_40 = puVar2 + 0x10;
    local_38 = 0x1f;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,lVar1);
  }
  plVar3 = *(long **)(param_1 + 0x388);
  if (plVar3 != (long *)0x0) {
    local_40 = puVar2 + 0x10;
    local_38 = 0x1f;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,lVar1);
  }
  plVar3 = *(long **)(param_1 + 0x390);
  if (plVar3 != (long *)0x0) {
    local_40 = puVar2 + 0x10;
    local_38 = 0x1f;
    (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
    (**(code **)(plVar3[3] + 0x208))(plVar3[1],0,0,lVar1);
  }
  return;
}

