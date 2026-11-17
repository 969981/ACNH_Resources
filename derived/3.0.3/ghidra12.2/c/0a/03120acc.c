
undefined8 FUN_03120acc(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined **local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x1068);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = param_1 + 0x250;
  uVar2 = *(uint *)(lVar5 + (ulong)param_2 * 0x1f8 + 0x68);
  if (uVar2 == 0xffffffff) {
    plVar6 = *(long **)(lVar5 + (ulong)param_2 * 0x1f8 + 8);
    if (plVar6 != (long *)0x0) {
      local_40 = &PTR_LAB_04a3ee98;
      local_38 = 0x1f;
      (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,lVar4 + 0x1bf38);
    }
    **(undefined1 **)(lVar5 + (ulong)param_2 * 0x1f8 + 0x18) = 0;
  }
  else if (uVar2 < 0x10e) {
    lVar4 = lVar4 + (ulong)uVar2 * 0x1a8;
    if (*(int *)(lVar4 + 0x1a8) == 2) {
      lVar5 = lVar5 + (ulong)param_2 * 0x1f8;
      lVar1 = lVar5 + 0x1b8;
      uVar3 = FUN_03463a4c(lVar4 + 8,lVar4 + 0x150,lVar1);
      plVar6 = *(long **)(lVar5 + 8);
      if ((uVar3 & 1) != 0) {
        if (plVar6 != (long *)0x0) {
          local_40 = (undefined **)(PTR_DAT_04bc0cb8 + 0x10);
          local_38 = 0x1f;
          (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
          (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,lVar1);
        }
        return 1;
      }
      if (plVar6 != (long *)0x0) {
        lVar4 = *(long *)(param_1 + 0x1068);
        local_40 = &PTR_LAB_04a3ee98;
        local_38 = 0x1f;
        (**(code **)(*plVar6 + 0x18))(plVar6,&local_40);
        (**(code **)(plVar6[3] + 0x208))(plVar6[1],0,0,lVar4 + 0x1bf38);
      }
    }
  }
  return 0;
}

