
void FUN_004bbd90(long param_1,long param_2,ulong param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar10;
  long *plVar9;
  undefined1 auVar11 [16];
  long local_48 [9];
  
  while( true ) {
    param_5 = param_5 & 0xffffffff;
    uVar8 = param_4 & 0xffffffff;
    uVar7 = param_3 & 0xffffffff;
    lVar3 = FUN_00427270(param_2,param_2,param_3,param_4);
    if (((lVar3 != 0) && (uVar4 = FUN_00428440(param_2), (uVar4 & 0x1f) == 7)) &&
       (uVar1 = FUN_004274f0(param_2), (uVar1 >> 5 & 1) == 0)) {
      local_48[0] = param_2;
      lVar3 = FUN_004ba320((long *)(param_1 + 0x198),local_48);
      uVar5 = 0;
      if (lVar3 != 0) {
        uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x198) + (long)*(int *)(lVar3 + 4) * 0x10 + 8);
      }
      thunk_FUN_004c0f40(uVar5,uVar7,uVar8,param_5);
      return;
    }
    uVar4 = FUN_00428440(param_2);
    if (((uVar4 & 0x1f) == 7) && (uVar1 = FUN_004274f0(param_2), (uVar1 >> 5 & 1) != 0)) {
      if (*(long *)(param_2 + 8) != 0) {
        FUN_004bbd90(param_1,*(long *)(param_2 + 8),uVar7,uVar8,param_5);
      }
      auVar11 = FUN_00428010(param_2);
      if (auVar11._0_8_ == auVar11._8_8_) {
        return;
      }
      plVar9 = auVar11._0_8_;
      do {
        plVar10 = plVar9 + 1;
        uVar5 = *(undefined8 *)(*plVar9 + 8);
        uVar2 = FUN_00429050(plVar9);
        FUN_004bbd90(param_1,uVar5,uVar7,uVar2,param_5);
        plVar9 = plVar10;
      } while (auVar11._8_8_ != plVar10);
      return;
    }
    uVar4 = FUN_00428440(param_2);
    if ((uVar4 & 0x1f) != 8) {
      return;
    }
    lVar3 = FUN_00426d90(param_2);
    if (lVar3 == 0) {
      return;
    }
    puVar6 = (ulong *)FUN_00426e90(param_2,1);
    if (puVar6 == (ulong *)0x0) {
      return;
    }
    param_5 = *puVar6 >> 8;
    if ((int)(*puVar6 >> 8) == 0) break;
    param_2 = lVar3;
    param_3 = uVar7;
    param_4 = uVar8;
  }
  return;
}

