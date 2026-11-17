
void FUN_0311ff40(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  float fVar3;
  undefined **local_50;
  undefined4 local_48;
  
  plVar2 = *(long **)(param_1 + 0x1018);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 1);
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
  }
  plVar2 = *(long **)(param_1 + 0x1020);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 8);
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
  }
  plVar2 = *(long **)(param_1 + 0x1030);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 3);
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
  }
  plVar2 = *(long **)(param_1 + 0x1028);
  if (plVar2 != (long *)0x0) {
    bVar1 = *(byte *)(param_2 + 7);
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
  }
  return;
}

