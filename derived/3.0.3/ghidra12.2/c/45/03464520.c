
void FUN_03464520(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
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
    if ((((lVar3 != 0) &&
         (plVar5 = (long *)(lVar3 - *(int *)(param_1 + 0x1c)), plVar5 != (long *)0x0)) &&
        ((long *)plVar5[0x36] != (long *)0x0)) &&
       (uVar2 = (**(code **)(*(long *)plVar5[0x36] + 0x58))(), (uVar2 & 1) != 0)) {
      local_45 = 0;
      local_148 = 0x100;
      puStack_150 = local_144;
      local_144[0] = 0;
      plVar6 = (long *)plVar5[0x3a];
      local_158 = PTR_DAT_04bb21f8 + 0x10;
      local_40 = &PTR_LAB_04a3ee98;
      local_38 = 1;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_40);
      (**(code **)(plVar6[3] + 0x30))(&local_158,plVar6[1]);
      plVar6 = (long *)plVar5[0x36];
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6,0);
        (**(code **)(*plVar5 + 0xa8))(plVar5);
      }
    }
  }
  return;
}

