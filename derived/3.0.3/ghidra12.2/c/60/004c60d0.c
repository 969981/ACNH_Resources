
undefined8 * FUN_004c60d0(long *param_1,long *param_2,int param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  ulong local_398;
  long lStack_390;
  undefined8 local_358;
  ulong local_350;
  ulong uStack_348;
  ulong local_2c0;
  undefined8 local_2b8;
  ulong local_250;
  long local_228;
  undefined8 local_1d0;
  long *local_1b0;
  ulong *local_90;
  undefined8 local_88;
  ulong *local_80;
  undefined8 local_78;
  ulong local_70 [2];
  
  local_70[0] = 0;
  iVar6 = 0;
  if (param_3 != -1) {
    iVar6 = param_3;
  }
  if (*param_2 == param_2[1]) {
    FUN_004225b0(&local_2c0);
    uVar17 = FUN_00427570(param_4,&local_2c0,0,0);
    FUN_0043be70(local_70,uVar17);
    plVar14 = param_1 + 0x25;
    uVar4 = FUN_00427340(param_4);
    uVar5 = FUN_0047c5a0(plVar14,local_70);
    if (*(uint *)(param_1 + 0x26) == uVar5) {
      uVar13 = uVar5;
      if ((*(uint *)((long)param_1 + 0x134) & 0x3fffffff) == uVar5) {
        FUN_00426990(PTR_DAT_048607b8,plVar14,0x10);
        uVar13 = *(uint *)(param_1 + 0x26);
      }
      lVar7 = param_1[0x25] + (long)(int)uVar13 * 0x10;
      FUN_0043bd50(lVar7,local_70);
      *(undefined4 *)(lVar7 + 8) = uVar4;
      *(uint *)(param_1 + 0x26) = uVar13 + 1;
    }
    iVar6 = *(int *)(*plVar14 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
    FUN_00422550(&local_2c0);
  }
  else {
    FUN_0043bf00(local_70);
    plVar14 = (long *)param_1[0x23];
    FUN_0043bd90(&local_2c0,*param_2,param_2[1]);
    lVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,local_2c0 & 0xfffffffffffffffe);
    FUN_0043be10(&local_2c0);
    if (lVar7 != 0) {
      pcVar8 = (char *)FUN_00427270(lVar7);
      iVar3 = strcmp(pcVar8,"hkHalf16");
      if (iVar3 != 0) {
        pcVar8 = (char *)FUN_00427270(lVar7);
        iVar3 = strcmp(pcVar8,"hkPropertyBag");
        if ((iVar3 != 0) && (uVar9 = FUN_00428440(lVar7), (uVar9 & 0x1f) != 7)) {
          puVar15 = (undefined8 *)0x0;
          goto LAB_004c6624;
        }
      }
    }
  }
  uVar9 = local_70[0] & 0xfffffffffffffffe;
  iVar3 = FUN_0043c110(local_70);
  local_2b8 = uVar9 + (long)iVar3;
  local_2c0 = uVar9;
  local_350 = FUN_0047b100(param_1[0x22],&local_2c0,iVar6);
  plVar14 = param_1 + 0xd;
  local_398 = 0xffffffffffffffff;
  puVar10 = (ulong *)FUN_004706d0(plVar14,&local_350,&local_398);
  uVar9 = *puVar10;
  if ((((int)uVar9 < 0) || ((int)uVar9 == 0x50000000)) ||
     (puVar15 = *(undefined8 **)
                 (param_1[0xb] +
                 (-(uVar9 >> 0x1f & 1) & 0xfffffff800000000 | (uVar9 & 0xffffffff) << 3)),
     puVar15 == (undefined8 *)0x0)) {
    uVar9 = local_70[0] & 0xfffffffffffffffe;
    iVar3 = FUN_0043c110(local_70);
    local_2b8 = uVar9 + (long)iVar3;
    local_2c0 = uVar9;
    lVar7 = FUN_00429910(&local_2c0,0x3c,0);
    puVar2 = PTR_DAT_048607b8;
    local_80 = (ulong *)0x0;
    local_78 = 0x8000000000000000;
    FUN_00426990(PTR_DAT_048607b8,&local_80,8);
    iVar3 = (uint)local_78 + 1;
    FUN_0043bd50(local_80 + (int)(uint)local_78,local_70);
    local_78 = CONCAT44(local_78._4_4_,iVar3);
    local_90 = (ulong *)0x0;
    local_88 = 0x8000000000000000;
    lVar16 = param_1[0x22];
    uVar9 = local_70[0] & 0xfffffffffffffffe;
    iVar3 = FUN_0043c110(local_70);
    local_2b8 = uVar9 + (long)iVar3;
    local_2c0 = uVar9;
    uVar9 = FUN_0047b100(lVar16,&local_2c0,iVar6);
    if ((uint)local_88 == (local_88._4_4_ & 0x3fffffff)) {
      FUN_00426990(puVar2,&local_90,8);
    }
    local_90[(int)local_88] = uVar9;
    local_88 = CONCAT44(local_88._4_4_,(int)local_88 + 1);
    FUN_00451ea0(&local_2c0);
    FUN_00452230(&local_2c0,param_1);
    FUN_004225d0(&local_350,*local_80 & 0xfffffffffffffffe);
    FUN_0043bce0(&local_398,local_350,0xffffffff);
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 == (*(uint *)((long)param_1 + 0x84) & 0x3fffffff)) {
      FUN_00426990(puVar2,param_1 + 0xf,8);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    *(ulong *)(param_1[0xf] + (long)(int)uVar5 * 8) = local_398;
    local_398 = 0;
    *(uint *)(param_1 + 0x10) = uVar5 + 1;
    FUN_0043be10(&local_398);
    FUN_00452270(&local_2c0,
                 *(ulong *)(param_1[0xf] + (long)(int)param_1[0x10] * 8 + -8) & 0xfffffffffffffffe,0
                );
    local_1b0 = param_1 + 0x11;
    local_228 = (long)iVar6;
    uVar11 = local_250 | 0x80010;
    if (lVar7 != 0) {
      local_1d0 = 0;
      uVar11 = local_250 | 0x88010;
    }
    local_250 = uVar11;
    iVar3 = FUN_004535f0(&local_2c0,param_1,&local_358);
    if (iVar3 < 0) {
      if (DAT_04c717f8 != '\0') {
        FUN_00444bc0(&local_398,&DAT_04c717a8,1);
        lVar7 = FUN_004446b0(&local_398,"Failed to allocate type from builder",&DAT_0413df78);
        *(char **)(lVar7 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
        ;
        *(undefined8 *)(lVar7 + 0x30) = 0x68a;
        FUN_00444c00(&local_398);
      }
      uVar17 = 0;
      bVar1 = false;
    }
    else {
      uVar11 = FUN_00428440(local_358);
      if ((uVar11 & 0x1f) != 7) {
        local_358 = 0;
      }
      bVar1 = true;
      uVar17 = local_358;
    }
    FUN_00422550(&local_350);
    FUN_00451fa0(&local_2c0);
    if (bVar1) {
      puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x78,0);
      *puVar15 = uVar17;
      puVar15[1] = param_4;
      *(int *)(puVar15 + 2) = iVar6;
      *(undefined4 *)((long)puVar15 + 0x14) = 0;
      puVar15[3] = param_1;
      puVar15[4] = 0;
      *(undefined4 *)(puVar15 + 0xd) = 1;
      puVar15[0xe] = uVar9;
      puVar15[5] = 0x8000000000000000;
      puVar15[6] = 0;
      puVar15[7] = 0x8000000000000000;
      puVar15[8] = 0;
      puVar15[9] = 0x8000000000000000;
      puVar15[10] = 0;
      puVar15[0xb] = 0x8000000000000000;
      puVar15[0xc] = 0;
      uVar5 = *(uint *)(param_1 + 0xc);
      uVar9 = (ulong)(int)uVar5;
      if (uVar5 == (*(uint *)((long)param_1 + 100) & 0x3fffffff)) {
        FUN_00426990(puVar2,param_1 + 0xb,8);
        uVar5 = *(uint *)(param_1 + 0xc);
      }
      *(undefined8 **)(param_1[0xb] + (long)(int)uVar5 * 8) = puVar15;
      *(uint *)(param_1 + 0xc) = uVar5 + 1;
      local_2c0 = *local_90;
      local_350 = uVar9;
      FUN_00470440(plVar14,puVar2,&local_2c0,&local_350);
      lVar7 = param_1[0x22];
      uVar11 = local_70[0] & 0xfffffffffffffffe;
      iVar3 = FUN_0043c110(local_70);
      local_2b8 = uVar11 + (long)iVar3;
      local_2c0 = uVar11;
      lVar7 = FUN_0047a840(lVar7,&local_2c0,iVar6);
      local_2c0 = 0;
      local_2b8._0_4_ = 0;
      local_2b8._4_4_ = 0x80000000;
      if (lVar7 != 0) goto LAB_004c66e0;
      lVar16 = param_1[0x22];
      uVar11 = local_70[0] & 0xfffffffffffffffe;
      iVar3 = FUN_0043c110(local_70);
      uStack_348 = uVar11 + (long)iVar3;
      local_350 = uVar11;
      while ((lVar7 = FUN_0047a610(lVar16,&local_350,iVar6), lVar7 != 0 &&
             (*(char *)(lVar7 + 0x34) == '\0'))) {
LAB_004c66e0:
        if ((uint)local_2b8 == (local_2b8._4_4_ & 0x3fffffff)) {
          FUN_00426990(puVar2,&local_2c0,8);
        }
        uVar5 = (uint)local_2b8 + 1;
        *(long *)(local_2c0 + (long)(int)(uint)local_2b8 * 8) = lVar7;
        lVar16 = (long)*(int *)(lVar7 + 0x30);
        local_2b8._0_4_ = uVar5;
        if (0 < *(int *)(lVar7 + 0x30)) {
          lVar18 = lVar16 << 4;
          do {
            lVar12 = *(long *)(lVar7 + 0x28) + lVar18;
            if (((*(char *)(lVar12 + -0x10) == '\a') &&
                (lVar12 = *(long *)(lVar12 + -8), lVar12 != 0)) &&
               (lVar12 = FUN_004c60d0(param_1,lVar12,*(undefined4 *)(lVar12 + 0x10),0),
               uVar5 = local_2b8._4_4_, lVar12 == 0)) {
              puVar15 = (undefined8 *)0x0;
              local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
              if ((int)uVar5 < 0) goto LAB_004c6650;
              goto LAB_004c68ec;
            }
            lVar16 = lVar16 + -1;
            lVar18 = lVar18 + -0x10;
          } while (0 < lVar16);
        }
        local_350 = *(ulong *)(lVar7 + 0x10);
        uStack_348 = *(ulong *)(lVar7 + 0x18);
        if ((local_350 != uStack_348) && (uVar11 = local_70[0] & 0xfffffffffffffffe, uVar11 != 0)) {
          iVar6 = FUN_0043c110(local_70);
          lStack_390 = uVar11 + (long)iVar6;
          local_398 = uVar11;
          uVar11 = FUN_00429cb0(&local_350,&local_398);
          if ((uVar11 & 1) == 0) {
            FUN_0043bf00(local_70,*(undefined8 *)(lVar7 + 0x10),*(undefined8 *)(lVar7 + 0x18));
            if ((uint)local_78 == (local_78._4_4_ & 0x3fffffff)) {
              FUN_00426990(puVar2,&local_80,8);
            }
            iVar6 = (int)local_78;
            FUN_0043bd50(local_80 + iVar6,local_70);
            local_78 = CONCAT44(local_78._4_4_,iVar6 + 1);
          }
        }
        local_350 = *(ulong *)(lVar7 + 0x10);
        uStack_348 = *(ulong *)(lVar7 + 0x18);
        if (local_350 != uStack_348) {
          uVar11 = FUN_0047b100(param_1[0x22],&local_350,*(undefined4 *)(lVar7 + 0x24));
          if ((uint)local_88 == (local_88._4_4_ & 0x3fffffff)) {
            FUN_00426990(puVar2,&local_90,8);
          }
          local_90[(int)(uint)local_88] = uVar11;
          local_88 = CONCAT44(local_88._4_4_,(uint)local_88 + 1);
          local_350 = *(ulong *)(lVar7 + 0x10);
          uStack_348 = *(ulong *)(lVar7 + 0x18);
        }
        lVar16 = param_1[0x22];
        iVar6 = *(int *)(lVar7 + 0x24);
      }
      if (0 < (int)(uint)local_88) {
        lVar7 = 0;
        do {
          local_350 = local_90[lVar7];
          local_398 = uVar9;
          FUN_00470440(plVar14,puVar2,&local_350,&local_398);
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)(uint)local_88);
      }
      if (0 < (int)(uint)local_2b8) {
        lVar7 = 0;
        do {
          FUN_004c8ed0(puVar15,*(undefined8 *)(local_2c0 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar7 < (int)(uint)local_2b8);
      }
      uVar5 = local_2b8._4_4_;
      local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
      if (-1 < (int)uVar5) {
LAB_004c68ec:
        if (local_2c0 != 0) {
          FUN_00421f90(puVar2,local_2c0,8,uVar5 & 0x3fffffff);
        }
      }
    }
    else {
      puVar15 = (undefined8 *)0x0;
    }
LAB_004c6650:
    lVar7 = local_88;
    uVar5 = local_88._4_4_;
    local_88 = (ulong)local_88._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_90 != (ulong *)0x0)) {
      FUN_00421f90(puVar2,local_90,8,uVar5 & 0x3fffffff);
    }
    if (0 < (int)(uint)local_78) {
      puVar10 = local_80 + (int)(uint)local_78;
      iVar6 = (uint)local_78;
      do {
        puVar10 = puVar10 + -1;
        FUN_0043be10(puVar10);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    lVar7 = local_78;
    uVar5 = local_78._4_4_;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_80 != (ulong *)0x0)) {
      FUN_00421f90(puVar2,local_80,8,uVar5 & 0x3fffffff);
    }
  }
LAB_004c6624:
  FUN_0043be10(local_70);
  return puVar15;
}

