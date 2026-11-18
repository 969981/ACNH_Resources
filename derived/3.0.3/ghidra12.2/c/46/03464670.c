
void FUN_03464670(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [255];
  undefined1 local_45;
  undefined **local_40;
  undefined4 local_38;
  
  if (*(uint *)(param_1 + 0x18) != 0) {
    if (param_2 < *(uint *)(param_1 + 0x18)) {
      param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
      lVar3 = param_1 + 8;
      uVar4 = param_2 + 1;
      uVar1 = uVar4 & 3;
      if (2 < param_2) {
        uVar4 = uVar4 & 0xfffffffc;
        do {
          uVar4 = uVar4 - 4;
          lVar3 = *(long *)(*(long *)(*(long *)(*(long *)(lVar3 + 8) + 8) + 8) + 8);
        } while (uVar4 != 0);
      }
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        lVar3 = *(long *)(lVar3 + 8);
      }
    }
    else {
      lVar3 = 0;
    }
    if ((((lVar3 != 0) && (lVar3 = lVar3 - *(int *)(param_1 + 0x1c), lVar3 != 0)) &&
        (*(long **)(lVar3 + 0x1b0) != (long *)0x0)) &&
       (uVar2 = (**(code **)(**(long **)(lVar3 + 0x1b0) + 0x60))(), (uVar2 & 1) != 0)) {
      local_45 = 0;
      local_148 = 0x100;
      puStack_150 = local_144;
      local_144[0] = 0;
      plVar5 = *(long **)(lVar3 + 0x1d0);
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      local_40 = &PTR_LAB_04a3ee98;
      local_38 = 1;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_40);
      (**(code **)(plVar5[3] + 0x30))(&local_158,plVar5[1]);
      plVar5 = *(long **)(lVar3 + 0x1b0);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x30))(plVar5,0);
      }
    }
  }
  return;
}

