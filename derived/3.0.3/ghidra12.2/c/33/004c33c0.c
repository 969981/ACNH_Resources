
void FUN_004c33c0(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined1 auVar15 [16];
  undefined **local_118;
  long lStack_110;
  undefined **local_108;
  long lStack_100;
  undefined **local_f8;
  long local_f0;
  
  FUN_00427270(param_2);
  lVar9 = *(long *)(param_2 + 8);
  if (lVar9 != 0) {
    *(int *)((long)param_1 + 0x9c) = (int)param_1[8];
    FUN_004225b0(&local_f8);
    FUN_00427570(lVar9,&local_f8,0,0);
    plVar11 = (long *)*param_1;
    lStack_100 = (long)local_f8 + (long)(int)local_f0 + -1;
    local_108 = local_f8;
    uVar2 = FUN_00427340(lVar9);
    uVar3 = (**(code **)(*plVar11 + 8))(plVar11,&local_108,uVar2);
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 7,8);
      uVar7 = *(uint *)(param_1 + 8);
    }
    *(undefined8 *)(param_1[7] + (long)(int)uVar7 * 8) = uVar3;
    *(uint *)(param_1 + 8) = uVar7 + 1;
    *(undefined1 *)((long)param_1 + 0x99) = 1;
    FUN_00422550(&local_f8);
  }
  auVar15 = FUN_0044f1d0(param_2);
  puVar1 = PTR_DAT_048607b8;
  puVar6 = auVar15._8_8_;
  puVar4 = auVar15._0_8_;
  if (puVar4 != puVar6) {
    if ((param_3 & 1) == 0) {
      do {
        uVar13 = FUN_004290b0(puVar4);
        if ((uVar13 & 1) == 0) {
          uVar3 = FUN_00427b40(puVar4);
          FUN_004297c0(&local_108,uVar3);
          local_f0 = *param_1;
          local_f8 = &PTR_LAB_04868750;
          lVar9 = FUN_004cb4f0(&local_f8,&local_108,*puVar4,1);
          if (lVar9 != 0) {
            uVar7 = *(uint *)(param_1 + 6);
            if (uVar7 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
              FUN_00426990(puVar1,param_1 + 5,8);
              uVar7 = *(uint *)(param_1 + 6);
            }
            *(uint *)(param_1 + 6) = uVar7 + 1;
            *(long *)(param_1[5] + (long)(int)uVar7 * 8) = lVar9;
          }
        }
        puVar4 = puVar4 + 1;
      } while (puVar6 != puVar4);
    }
    else {
      do {
        uVar3 = FUN_00427b40(puVar4);
        FUN_004297c0(&local_108,uVar3);
        local_f0 = *param_1;
        local_f8 = &PTR_LAB_04868750;
        lVar9 = FUN_004cb4f0(&local_f8,&local_108,*puVar4,1);
        if (lVar9 != 0) {
          uVar7 = *(uint *)(param_1 + 6);
          if (uVar7 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
            FUN_00426990(puVar1,param_1 + 5,8);
            uVar7 = *(uint *)(param_1 + 6);
          }
          *(uint *)(param_1 + 6) = uVar7 + 1;
          *(long *)(param_1[5] + (long)(int)uVar7 * 8) = lVar9;
        }
        puVar4 = puVar4 + 1;
      } while (puVar6 != puVar4);
    }
  }
  puVar4 = (undefined8 *)FUN_004270a0(param_2);
  puVar1 = PTR_DAT_048607b8;
  if ((puVar4 != (undefined8 *)0x0) && (*(short *)(puVar4 + 1) != 0)) {
    uVar13 = 0;
    puVar6 = puVar4;
    do {
      puVar14 = puVar6 + 2;
      uVar7 = *(uint *)(param_1 + 0xe);
      if (uVar7 == (*(uint *)((long)param_1 + 0x74) & 0x3fffffff)) {
        FUN_00426990(puVar1,param_1 + 0xd,0x28);
        uVar7 = *(uint *)(param_1 + 0xe);
      }
      lVar9 = param_1[0xd];
      puVar5 = (undefined8 *)(lVar9 + (long)(int)uVar7 * 0x28);
      lVar10 = (long)(int)uVar7;
      *(uint *)(param_1 + 0xe) = uVar7 + 1;
      *(undefined1 *)(puVar5 + 4) = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *puVar5 = 0;
      puVar5[1] = 0;
      FUN_0043be70(puVar5,puVar6[3] + 1);
      if (*(char *)puVar6[3] == 't') {
        lStack_100 = *param_1;
        local_108 = &PTR_LAB_04868750;
        FUN_004225b0(&local_f8);
        FUN_00427570(*puVar14,&local_f8,0,0);
        lStack_110 = (long)local_f8 + (long)(int)local_f0 + -1;
        local_118 = local_f8;
        uVar3 = FUN_004cb4f0(&local_108,&local_118,*puVar14,1);
        lVar8 = lVar9 + lVar10 * 0x28;
        lVar12 = *(long *)(lVar8 + 8);
        *(undefined8 *)(lVar8 + 8) = uVar3;
        if (lVar12 != 0) {
          FUN_004ca7b0(lVar12);
          FUN_00438870(lVar12,0x28);
        }
        *(undefined8 *)(lVar9 + lVar10 * 0x28 + 0x10) = 0;
        FUN_00422550(&local_f8);
      }
      else {
        lVar9 = lVar9 + lVar10 * 0x28;
        uVar3 = *puVar14;
        lVar10 = *(long *)(lVar9 + 8);
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined8 *)(lVar9 + 0x10) = uVar3;
        *(undefined1 *)(lVar9 + 0x20) = 1;
        if (lVar10 != 0) {
          FUN_004ca7b0(lVar10);
          FUN_00438870(lVar10,0x28);
        }
      }
      uVar13 = uVar13 + 1;
      puVar6 = puVar14;
    } while (uVar13 < *(ushort *)(puVar4 + 1));
  }
  return;
}

