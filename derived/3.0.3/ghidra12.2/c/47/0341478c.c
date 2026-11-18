
void FUN_0341478c(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined **local_30;
  undefined4 local_28;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (-1 < (int)uVar1) {
    if (*(uint *)(param_2 + 0x2e8) <= uVar1) {
      uVar1 = 0;
    }
    plVar4 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)uVar1 * 8);
    if ((param_3 & 1) == 0) {
      local_30 = &PTR_LAB_04aa7fe0;
      local_28 = 0xb;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
      uVar2 = (**(code **)(plVar4[3] + 0xd0))(plVar4[1]);
      if ((uVar2 & 1) != 0) {
        return;
      }
      local_30 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_28 = 6;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
      puVar3 = (undefined8 *)(plVar4[3] + 0x1b8);
    }
    else {
      local_30 = &PTR_LAB_04aa7fe0;
      local_28 = 0xc;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
      uVar2 = (**(code **)(plVar4[3] + 0xe0))(plVar4[1]);
      if ((uVar2 & 1) != 0) {
        return;
      }
      local_30 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
      local_28 = 7;
      (**(code **)(*plVar4 + 0x18))(plVar4,&local_30);
      puVar3 = (undefined8 *)(plVar4[3] + 0x1c0);
    }
    (*(code *)*puVar3)(plVar4[1]);
  }
  return;
}

