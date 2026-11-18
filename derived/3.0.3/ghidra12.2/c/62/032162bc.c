
void FUN_032162bc(long param_1,ulong param_2,uint param_3)

{
  undefined **ppuVar1;
  bool bVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  undefined **local_40;
  undefined4 local_38;
  
  if (param_1 != 0) {
    bVar2 = (param_2 & 1) == 0;
    uVar3 = (ulong)(1 < *(uint *)(param_1 + 0x2e8));
    if (bVar2) {
      uVar3 = (ulong)(2 < *(uint *)(param_1 + 0x2e8)) << 1;
    }
    uVar4 = 1;
    if (!bVar2) {
      uVar4 = 2;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x2f0) + uVar3 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      if ((param_3 & 1) == 0) {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 7;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
        (**(code **)(plVar5[3] + 0x1c0))(plVar5[1]);
      }
      else {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
        (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
      }
    }
    if (*(uint *)(param_1 + 0x2e8) <= uVar4) {
      uVar4 = 0;
    }
    plVar5 = *(long **)(*(long *)(param_1 + 0x2f0) + (ulong)uVar4 * 8);
    if ((plVar5 != (long *)0x0) && (plVar5[1] != 0)) {
      ppuVar1 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
      local_38 = 3;
      local_40 = ppuVar1;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      uVar3 = (**(code **)(plVar5[3] + 0x50))(plVar5[1]);
      if ((uVar3 & 1) != 0) {
        local_38 = 2;
        local_40 = ppuVar1;
        (**(code **)(*plVar5 + 0x18))(plVar5,&local_40);
        (**(code **)(plVar5[3] + 0x38))(plVar5[1],0);
      }
    }
  }
  return;
}

