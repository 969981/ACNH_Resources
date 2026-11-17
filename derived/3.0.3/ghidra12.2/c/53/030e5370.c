
void FUN_030e5370(long param_1,uint param_2,uint param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  float fVar5;
  undefined *local_50;
  undefined4 local_48;
  
  plVar4 = *(long **)(param_1 + 0x208);
  *(uint *)(param_1 + 0x228) = param_2;
  if ((plVar4 != (long *)0x0) && (plVar4[1] != 0)) {
    puVar1 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 9;
    local_50 = puVar1;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_50);
    fVar5 = (float)(**(code **)(plVar4[3] + 0xb0))(plVar4[1]);
    plVar4 = *(long **)(param_1 + 0x208);
    if ((float)param_2 <= fVar5) {
      local_48 = 0x14;
      local_50 = puVar1;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      (**(code **)(plVar4[3] + 0x158))((float)param_2,plVar4[1]);
    }
    else {
      local_50 = PTR_DAT_04bc4e68 + 0x10;
      local_48 = 7;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
      (**(code **)(plVar4[3] + 0x1c0))(plVar4[1]);
    }
  }
  plVar4 = *(long **)(param_1 + 0x210);
  *(uint *)(param_1 + 0x230) = param_3;
  *(uint *)(param_1 + 0x22c) = param_3;
  if ((((plVar4 != (long *)0x0) && (plVar4[1] != 0 && param_3 < *(uint *)(param_1 + 0x218))) &&
      (plVar3 = *(long **)(*(long *)(param_1 + 0x220) + (long)(int)param_3 * 8),
      plVar3 != (long *)0x0)) && (plVar3[1] != 0)) {
    local_48 = 8;
    puVar1 = PTR_DAT_04bc0cb8 + 0x10;
    local_50 = puVar1;
    (**(code **)(*plVar3 + 0x20))(plVar3,&local_50);
    uVar2 = (**(code **)(plVar3[3] + 0xa0))(plVar3[1]);
    local_48 = 8;
    local_50 = puVar1;
    (**(code **)(*plVar4 + 0x18))(plVar4,&local_50);
    (**(code **)(plVar4[3] + 0x98))(plVar4[1],uVar2);
  }
  *(undefined1 *)(param_1 + 0x264) = 0;
  *(undefined4 *)(param_1 + 0x234) = 999;
  return;
}

