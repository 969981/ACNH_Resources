
void FUN_03112260(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  float fVar3;
  undefined *local_40;
  undefined4 local_38;
  
  puVar1 = PTR_DAT_04bc4f00;
  plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x260);
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 7;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_40);
    fVar3 = (float)(**(code **)(plVar2[3] + 0x90))(plVar2[1]);
    if ((fVar3 == 1.0) &&
       ((plVar2 = *(long **)(*(long *)(param_1 + 0x210) + 0x260), plVar2 != (long *)0x0 &&
        (plVar2[1] != 0)))) {
      local_40 = puVar1 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_40);
      (**(code **)(plVar2[3] + 0x158))(0,plVar2[1]);
    }
  }
  return;
}

