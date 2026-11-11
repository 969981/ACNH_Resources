
void FUN_004c2eb0(long *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 *puVar11;
  undefined1 auVar12 [16];
  undefined **local_118;
  long lStack_110;
  undefined **local_108;
  long lStack_100;
  undefined **local_f8;
  long local_f0;
  ulong local_e8;
  
  FUN_00427270(param_2);
  lVar8 = *(long *)(param_2 + 8);
  if (lVar8 != 0) {
    *(int *)((long)param_1 + 0x9c) = (int)param_1[8];
    FUN_004225b0(&local_f8);
    FUN_00427570(lVar8,&local_f8,0,0);
    plVar9 = (long *)*param_1;
    lStack_100 = (long)local_f8 + (long)(int)local_f0 + -1;
    local_108 = local_f8;
    uVar3 = FUN_00427340(lVar8);
    uVar4 = (**(code **)(*plVar9 + 8))(plVar9,&local_108,uVar3);
    uVar7 = *(uint *)(param_1 + 8);
    if (uVar7 == (*(uint *)((long)param_1 + 0x44) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 7,8);
      uVar7 = *(uint *)(param_1 + 8);
    }
    *(undefined8 *)(param_1[7] + (long)(int)uVar7 * 8) = uVar4;
    *(uint *)(param_1 + 8) = uVar7 + 1;
    *(undefined1 *)((long)param_1 + 0x99) = 1;
    FUN_00422550(&local_f8);
  }
  auVar12 = FUN_0044f1d0(param_2);
  puVar1 = PTR_DAT_048607b8;
  puVar6 = auVar12._8_8_;
  puVar5 = auVar12._0_8_;
  if (puVar5 != puVar6) {
    if ((param_3 & 1) == 0) {
      do {
        uVar10 = FUN_004290b0(puVar5);
        if ((uVar10 & 1) == 0) {
          uVar4 = FUN_00427b40(puVar5);
          FUN_004297c0(&local_108,uVar4);
          local_f0 = *param_1;
          local_f8 = &PTR_LAB_04868750;
          lVar8 = FUN_004cb4f0(&local_f8,&local_108,*puVar5,1);
          if (lVar8 != 0) {
            uVar7 = *(uint *)(param_1 + 6);
            if (uVar7 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
              FUN_00426990(puVar1,param_1 + 5,8);
              uVar7 = *(uint *)(param_1 + 6);
            }
            *(uint *)(param_1 + 6) = uVar7 + 1;
            *(long *)(param_1[5] + (long)(int)uVar7 * 8) = lVar8;
          }
        }
        puVar5 = puVar5 + 1;
      } while (puVar6 != puVar5);
    }
    else {
      do {
        uVar4 = FUN_00427b40(puVar5);
        FUN_004297c0(&local_108,uVar4);
        local_f0 = *param_1;
        local_f8 = &PTR_LAB_04868750;
        lVar8 = FUN_004cb4f0(&local_f8,&local_108,*puVar5,1);
        if (lVar8 != 0) {
          uVar7 = *(uint *)(param_1 + 6);
          if (uVar7 == (*(uint *)((long)param_1 + 0x34) & 0x3fffffff)) {
            FUN_00426990(puVar1,param_1 + 5,8);
            uVar7 = *(uint *)(param_1 + 6);
          }
          *(uint *)(param_1 + 6) = uVar7 + 1;
          *(long *)(param_1[5] + (long)(int)uVar7 * 8) = lVar8;
        }
        puVar5 = puVar5 + 1;
      } while (puVar6 != puVar5);
    }
  }
  puVar5 = (undefined8 *)FUN_004270a0(param_2);
  puVar1 = PTR_DAT_048607b8;
  if ((puVar5 != (undefined8 *)0x0) && (*(short *)(puVar5 + 1) != 0)) {
    uVar10 = 0;
    puVar6 = puVar5;
    do {
      puVar11 = puVar6 + 2;
      if (*(char *)puVar6[3] == 't') {
        lStack_100 = *param_1;
        local_108 = &PTR_LAB_04868750;
        FUN_004225b0(&local_f8);
        FUN_00427570(*puVar11,&local_f8,0,0);
        lStack_110 = (long)local_f8 + (long)(int)local_f0 + -1;
        local_118 = local_f8;
        uVar4 = FUN_004cb4f0(&local_108,&local_118,*puVar11,1);
        FUN_004297c0(&local_118,puVar6[3] + 1);
        uVar7 = *(uint *)(param_1 + 0xe);
        if (uVar7 == (*(uint *)((long)param_1 + 0x74) & 0x3fffffff)) {
          FUN_00426990(puVar1,param_1 + 0xd,0x28);
          uVar7 = *(uint *)(param_1 + 0xe);
        }
        lVar8 = param_1[0xd] + (long)(int)uVar7 * 0x28;
        FUN_0043bd90(lVar8,local_118,lStack_110);
        *(undefined1 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 8) = uVar4;
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(uint *)(param_1 + 0xe) = uVar7 + 1;
        FUN_00422550(&local_f8);
      }
      else {
        FUN_004297c0(&local_f8,(char *)puVar6[3] + 1);
        uVar7 = *(uint *)(param_1 + 0xe);
        uVar4 = *puVar11;
        if (uVar7 == (*(uint *)((long)param_1 + 0x74) & 0x3fffffff)) {
          FUN_00426990(puVar1,param_1 + 0xd,0x28);
          uVar7 = *(uint *)(param_1 + 0xe);
        }
        lVar8 = param_1[0xd] + (long)(int)uVar7 * 0x28;
        FUN_0043bd90(lVar8,local_f8,local_f0);
        *(undefined8 *)(lVar8 + 8) = 0;
        *(undefined8 *)(lVar8 + 0x10) = uVar4;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined1 *)(lVar8 + 0x20) = 1;
        *(uint *)(param_1 + 0xe) = uVar7 + 1;
      }
      uVar10 = uVar10 + 1;
      puVar6 = puVar11;
    } while (uVar10 < *(ushort *)(puVar5 + 1));
  }
  FUN_00427bc0(&local_f8,param_2,&DAT_04c159a0);
  ppuVar2 = local_f8;
  if ((local_e8 & 1) != 0) {
    FUN_0043dd50(local_e8 & 0xfffffffffffffffe);
  }
  puVar1 = PTR_DAT_048607b8;
  if (ppuVar2 != (undefined **)0x0) {
    puVar5 = (undefined8 *)*ppuVar2;
    puVar6 = (undefined8 *)ppuVar2[1];
    if (puVar5 != puVar6) {
      do {
        local_f0 = *param_1;
        local_f8 = &PTR_LAB_04868750;
        FUN_004297c0(&local_108,*puVar5);
        uVar4 = FUN_004cb4f0(&local_f8,&local_108,puVar5[1],1);
        FUN_004297c0(&local_108,*puVar5);
        uVar7 = *(uint *)(param_1 + 0x10);
        if (uVar7 == (*(uint *)((long)param_1 + 0x84) & 0x3fffffff)) {
          FUN_00426990(puVar1,param_1 + 0xf,0x28);
          uVar7 = *(uint *)(param_1 + 0x10);
        }
        lVar8 = param_1[0xf] + (long)(int)uVar7 * 0x28;
        FUN_0043bd90(lVar8,local_108,lStack_100);
        puVar5 = puVar5 + 2;
        *(undefined1 *)(lVar8 + 0x20) = 0;
        *(undefined8 *)(lVar8 + 0x10) = 0;
        *(undefined8 *)(lVar8 + 0x18) = 0;
        *(undefined8 *)(lVar8 + 8) = uVar4;
        *(uint *)(param_1 + 0x10) = uVar7 + 1;
      } while (puVar5 != puVar6);
    }
  }
  return;
}

