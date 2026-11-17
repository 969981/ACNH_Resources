
void FUN_030c3c2c(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  float fVar3;
  undefined **local_50;
  undefined4 local_48;
  
  bVar1 = *(byte *)(param_2 + 1);
  plVar2 = *(long **)(param_1 + 0x458);
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    plVar2 = *(long **)(param_1 + 0x458);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
    else {
      local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_48 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
    }
  }
  bVar1 = *(byte *)(param_2 + 8);
  plVar2 = *(long **)(param_1 + 0x460);
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    plVar2 = *(long **)(param_1 + 0x460);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
    else {
      local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_48 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
    }
  }
  bVar1 = *(byte *)(param_2 + 3);
  plVar2 = *(long **)(param_1 + 0x468);
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    plVar2 = *(long **)(param_1 + 0x468);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
    else {
      local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_48 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
    }
  }
  bVar1 = *(byte *)(param_2 + 7);
  plVar2 = *(long **)(param_1 + 0x470);
  if ((plVar2 != (long *)0x0) && (plVar2[1] != 0)) {
    local_50 = &PTR_LAB_04aa7fe0;
    local_48 = 9;
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_50);
    fVar3 = (float)(**(code **)(plVar2[3] + 0xb0))(plVar2[1]);
    plVar2 = *(long **)(param_1 + 0x470);
    if ((float)bVar1 <= fVar3) {
      local_50 = &PTR_LAB_04aa7fe0;
      local_48 = 0x14;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x158))((float)bVar1,plVar2[1]);
    }
    else {
      local_50 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_48 = 6;
      (**(code **)(*plVar2 + 0x18))(plVar2,&local_50);
      (**(code **)(plVar2[3] + 0x1b8))(plVar2[1]);
    }
  }
  return;
}

