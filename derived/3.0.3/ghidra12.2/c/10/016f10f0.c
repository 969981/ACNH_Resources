
uint FUN_016f10f0(float *param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  char cVar16;
  ushort uVar17;
  float *pfVar18;
  float *pfVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_104;
  undefined4 uStack_100;
  float local_fc;
  ulong local_f8;
  float local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined *local_d0;
  uint local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  uint uStack_b0;
  float local_ac;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 local_98;
  float local_90;
  
  pfVar19 = param_1 + 3;
  local_98 = *(undefined8 *)pfVar19;
  local_90 = param_1[5];
  pfVar18 = (float *)&local_98;
  if (param_2 != (float *)0x0) {
    pfVar18 = param_2;
  }
  FUN_006f0400(*pfVar19 - *param_1,param_1[5] - param_1[2]);
  fVar22 = *pfVar19;
  fVar25 = (float)(int)param_1[5] / 5.0;
  fVar24 = (float)(int)((int)fVar25 - (uint)(param_1[5] < 0.0) & 0xfffffffe) * 5.0;
  fVar27 = fVar24 + 5.0;
  uVar23 = FUN_016e026c(0,pfVar19,0,0);
  local_c0 = (undefined *)
             CONCAT44(uVar23,(float)(int)((int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0) &
                                         0xfffffffe) * 5.0 + 5.0);
  local_b8._0_4_ = fVar27;
  fVar22 = (float)FUN_016f27e0(&local_c0);
  uVar9 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  uVar13 = uVar9 & 0xfffffffe;
  uVar10 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  uVar4 = uVar10 & 0xfffffffe;
  uVar5 = (int)((float)(int)*pfVar19 / 5.0) - (uint)(*pfVar19 < 0.0) & 0xfffffffe;
  uVar6 = (int)((float)(int)param_1[5] / 5.0) - (uint)(param_1[5] < 0.0) & 0xfffffffe;
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_b8);
  if ((uVar13 == uVar5) &&
     (local_b8 = (undefined *)CONCAT44(local_b8._4_4_,(float)local_b8), uVar4 == uVar6)) {
    uVar7 = uVar9 | 1;
    uVar8 = uVar10 | 1;
    local_c0 = PTR_DAT_04bbc1a0 + 0x10;
    local_a8 = PTR_DAT_04bb2010 + 0x10;
    uStack_b0 = uVar13;
    if ((int)uVar7 <= (int)uVar13) {
      uStack_b0 = uVar7;
    }
    local_a0 = uVar13;
    if ((int)uVar13 <= (int)uVar7) {
      local_a0 = uVar7;
    }
    local_ac = (float)uVar4;
    if ((int)uVar8 <= (int)uVar4) {
      local_ac = (float)uVar8;
    }
    uStack_9c = uVar4;
    if ((int)uVar4 <= (int)uVar8) {
      uStack_9c = uVar8;
    }
    local_b8 = local_a8;
    if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
       (lVar14 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar14 == 0)) goto LAB_016f138c;
    uVar15 = FUN_009721a0(lVar14,&local_c0,0);
    if ((uVar15 & 1) == 0) goto LAB_016f138c;
    fVar24 = param_1[3];
    fVar25 = (float)(int)param_1[5] / 5.0;
    fVar22 = (float)(int)((int)fVar25 - (uint)(param_1[5] < 0.0) & 0xfffffffe) * 5.0;
    fVar27 = fVar22 + 5.0;
    uVar23 = FUN_016e026c(0,pfVar19,0,0);
    local_e8 = (undefined *)
               CONCAT44(uVar23,(float)(int)((int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) &
                                           0xfffffffe) * 5.0 + 5.0);
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,fVar27);
    fVar24 = (float)FUN_016f27e0(&local_e8);
LAB_016f229c:
    uVar13 = 0;
    *pfVar18 = fVar24;
    pfVar18 = (float *)&local_98;
    if (param_2 != (float *)0x0) {
      pfVar18 = param_2;
    }
    pfVar18[1] = fVar22;
    pfVar18[2] = fVar25;
    goto LAB_016f237c;
  }
LAB_016f138c:
  puVar3 = PTR_DAT_04bbc1a0;
  if (uVar13 != uVar5) {
    if (uVar4 != uVar6) goto LAB_016f1bb4;
    if ((int)uVar13 < (int)uVar5) {
      uVar5 = uVar13 + 2;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      local_c8 = uVar5;
      local_e8 = puVar3;
      local_e0 = puVar1;
      local_d0 = puVar1;
      local_c0 = puVar3;
      local_a8 = puVar1;
      local_b8 = puVar1;
      if (lVar14 != 0) {
        local_d8 = uVar13;
        uStack_d4 = uVar4;
        local_c4 = uVar4;
        uStack_b0 = uVar13;
        local_ac = (float)uVar4;
        local_a0 = uVar13;
        uStack_9c = uVar4;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1668;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f1668:
      uVar6 = uVar9 | 1;
      uStack_d4 = uVar10 | 1;
      local_d8 = uVar13;
      if ((int)uVar6 <= (int)uVar13) {
        local_d8 = uVar6;
      }
      local_c8 = uVar13;
      if ((int)uVar13 <= (int)uVar6) {
        local_c8 = uVar6;
      }
      if (lVar14 != 0) {
        local_e8 = puVar3;
        local_e0 = puVar1;
        local_d0 = puVar1;
        local_c4 = uStack_d4;
        local_c0 = puVar3;
        uStack_b0 = uVar13;
        local_ac = (float)uStack_d4;
        local_a8 = puVar1;
        local_a0 = uVar13;
        uStack_9c = uStack_d4;
        local_b8 = puVar1;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f16ec;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f16ec:
      local_c8 = uVar6;
      if ((int)uVar6 <= (int)uVar5) {
        local_c8 = uVar5;
      }
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_d8 = uVar6;
      if ((int)uVar5 <= (int)uVar6) {
        local_d8 = uVar5;
      }
      local_c0 = puVar3;
      local_a8 = puVar1;
      if (lVar14 != 0) {
        local_e8 = puVar3;
        local_e0 = puVar1;
        uStack_d4 = uVar4;
        local_d0 = puVar1;
        local_c4 = uVar4;
        uStack_b0 = uVar6;
        local_ac = (float)uVar4;
        local_a0 = uVar6;
        uStack_9c = uVar4;
        local_b8 = puVar1;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1780;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f1780:
      local_d8 = uVar6;
      local_c8 = uVar6;
      local_c0 = puVar3;
      local_a8 = puVar1;
    }
    else {
      if ((int)uVar13 <= (int)uVar5) goto LAB_016f1bb4;
      uVar5 = uVar13 - 1;
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      local_d8 = uVar5;
      local_e8 = puVar3;
      local_e0 = puVar1;
      local_d0 = puVar1;
      local_c0 = puVar3;
      local_a8 = puVar1;
      local_b8 = puVar1;
      if (lVar14 != 0) {
        uStack_d4 = uVar4;
        local_c8 = uVar13;
        local_c4 = uVar4;
        uStack_b0 = uVar13;
        local_ac = (float)uVar4;
        local_a0 = uVar13;
        uStack_9c = uVar4;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1a1c;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f1a1c:
      uStack_d4 = uVar10 | 1;
      if (lVar14 != 0) {
        local_e8 = puVar3;
        local_e0 = puVar1;
        local_d8 = uVar5;
        local_d0 = puVar1;
        local_c8 = uVar13;
        local_c4 = uStack_d4;
        local_c0 = puVar3;
        uStack_b0 = uVar13;
        local_ac = (float)uStack_d4;
        local_a8 = puVar1;
        local_a0 = uVar13;
        uStack_9c = uStack_d4;
        local_b8 = puVar1;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1a90;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f1a90:
      uStack_b0 = uVar9 | 1;
      uVar13 = uStack_b0;
      if ((int)uVar5 <= (int)uStack_b0) {
        uVar13 = uVar5;
      }
      uVar6 = uStack_b0;
      if ((int)uStack_b0 <= (int)uVar5) {
        uVar6 = uVar5;
      }
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_d8 = uVar13;
      local_c8 = uVar6;
      local_c0 = puVar3;
      local_a8 = puVar1;
      if (lVar14 != 0) {
        local_e8 = puVar3;
        local_e0 = puVar1;
        uStack_d4 = uVar4;
        local_d0 = puVar1;
        local_c4 = uVar4;
        local_ac = (float)uVar4;
        local_a0 = uStack_b0;
        uStack_9c = uVar4;
        local_b8 = puVar1;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1b28;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f1b28:
      local_d8 = uVar13;
      local_c8 = uVar6;
      local_c0 = puVar3;
      local_a8 = puVar1;
    }
    uVar6 = local_d8;
    uVar5 = local_c8;
    puVar3 = local_c0;
    puVar1 = local_a8;
    uVar7 = uVar10 | 1;
    uVar4 = uVar10 | 1;
    goto joined_r0x016f196c;
  }
  if ((int)uVar6 < (int)uVar4) {
    uVar5 = uVar4 - 1;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb27c8;
    local_e8 = puVar1;
    local_e0 = puVar2;
    uStack_d4 = uVar5;
    local_d0 = puVar2;
    local_c0 = puVar1;
    local_a8 = puVar2;
    local_b8 = puVar2;
    if (lVar14 == 0) {
LAB_016f1438:
      uVar9 = uVar9 | 1;
      local_d8 = uVar9;
      local_c8 = uVar9;
      local_a0 = uVar9;
      uStack_b0 = uVar9;
      if (lVar14 != 0) {
        local_e8 = puVar1;
        local_e0 = puVar2;
        uStack_d4 = uVar5;
        local_d0 = puVar2;
        local_c4 = uVar4;
        local_c0 = puVar1;
        local_ac = (float)uVar4;
        local_a8 = puVar2;
        uStack_9c = uVar4;
        local_b8 = puVar2;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f14ac;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f15a0;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f14ac:
      uVar10 = uVar10 | 1;
      puVar3 = puVar3 + 0x10;
      uVar4 = uVar10;
      if ((int)uVar5 <= (int)uVar10) {
        uVar4 = uVar5;
      }
      uVar6 = uVar10;
      if ((int)uVar10 <= (int)uVar5) {
        uVar6 = uVar5;
      }
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      uStack_9c = uVar10;
      local_ac = (float)uVar10;
      local_e8 = puVar3;
      local_e0 = puVar1;
      uStack_d4 = uVar4;
      local_d0 = puVar1;
      local_c4 = uVar6;
      local_c0 = puVar3;
      local_a8 = puVar1;
      local_b8 = puVar1;
      if (lVar14 != 0) {
        local_d8 = uVar13;
        local_c8 = uVar13;
        uStack_b0 = uVar13;
        local_a0 = uVar13;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f153c;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f15a0;
          lVar14 = *(long *)PTR_DAT_04bb27c8;
        }
      }
LAB_016f153c:
      local_e8 = puVar3;
      local_e0 = puVar1;
      local_d8 = uVar9;
      uStack_d4 = uVar4;
      local_d0 = puVar1;
      local_c8 = uVar9;
      local_c4 = uVar6;
      local_c0 = puVar3;
      uStack_b0 = uVar9;
      local_ac = (float)uVar10;
      local_a8 = puVar1;
      local_a0 = uVar9;
      uStack_9c = uVar10;
      local_b8 = puVar1;
      if (lVar14 != 0) {
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          if (((uVar15 & 1) != 0) || (lVar14 = *(long *)PTR_DAT_04bb27c8, lVar14 == 0))
          goto LAB_016f1bb4;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f15a0;
        }
      }
      goto LAB_016f1bb4;
    }
    local_d8 = uVar13;
    local_c8 = uVar13;
    local_c4 = uVar4;
    uStack_b0 = uVar13;
    local_ac = (float)uVar4;
    local_a0 = uVar13;
    uStack_9c = uVar4;
    if (*(long *)(lVar14 + 0xa8) != 0) {
      uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1438;
    }
    if (*(long *)(lVar14 + 0xa8) == 0) goto LAB_016f1438;
    uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
    if ((uVar15 & 1) == 0) {
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      goto LAB_016f1438;
    }
LAB_016f15a0:
    *pfVar18 = fVar22;
    pfVar18 = (float *)&local_98;
    if (param_2 != (float *)0x0) {
      pfVar18 = param_2;
    }
  }
  else {
    if ((int)uVar6 <= (int)uVar4) goto LAB_016f1bb4;
    uVar5 = uVar4 + 2;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb27c8;
    local_e8 = puVar3;
    local_e0 = puVar1;
    local_d0 = puVar1;
    local_c4 = uVar5;
    local_c0 = puVar3;
    local_a8 = puVar1;
    local_b8 = puVar1;
    if (lVar14 != 0) {
      local_d8 = uVar13;
      uStack_d4 = uVar4;
      local_c8 = uVar13;
      uStack_b0 = uVar13;
      local_ac = (float)uVar4;
      local_a0 = uVar13;
      uStack_9c = uVar4;
      if (*(long *)(lVar14 + 0xa8) != 0) {
        uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
        lVar14 = *(long *)PTR_DAT_04bb27c8;
        if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f1840;
      }
      if (*(long *)(lVar14 + 0xa8) != 0) {
        uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
        if ((uVar15 & 1) != 0) goto LAB_016f1b90;
        lVar14 = *(long *)PTR_DAT_04bb27c8;
      }
    }
LAB_016f1840:
    uVar6 = uVar9 | 1;
    if (lVar14 == 0) {
LAB_016f18b4:
      local_ac = (float)(uVar10 | 1);
      uVar4 = (uint)local_ac;
      if ((int)uVar5 <= (int)local_ac) {
        uVar4 = uVar5;
      }
      uVar7 = (uint)local_ac;
      if ((int)local_ac <= (int)uVar5) {
        uVar7 = uVar5;
      }
      puVar3 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      uVar5 = uVar6;
      if (lVar14 != 0) {
        local_e8 = puVar3;
        local_e0 = puVar1;
        local_d8 = uVar13;
        uStack_d4 = uVar4;
        local_d0 = puVar1;
        local_c8 = uVar13;
        local_c4 = uVar7;
        local_c0 = puVar3;
        uStack_b0 = uVar13;
        local_a8 = puVar1;
        local_a0 = uVar13;
        uStack_9c = (uint)local_ac;
        local_b8 = puVar1;
        if (*(long *)(lVar14 + 0xa8) == 0) {
LAB_016f1928:
          if (*(long *)(lVar14 + 0xa8) != 0) {
            uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
            if ((uVar15 & 1) != 0) goto LAB_016f1b90;
            lVar14 = *(long *)PTR_DAT_04bb27c8;
          }
        }
        else {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if ((uVar15 & 1) == 0) {
            if (lVar14 != 0) goto LAB_016f1928;
          }
        }
      }
joined_r0x016f196c:
      uStack_d4 = uVar4;
      local_c4 = uVar7;
      local_e0 = puVar1;
      local_e8 = puVar3;
      local_c8 = uVar5;
      local_d8 = uVar6;
      local_ac = (float)(uVar10 | 1);
      uStack_b0 = uVar9 | 1;
      local_d0 = local_e0;
      local_c0 = local_e8;
      local_a8 = local_e0;
      local_a0 = uStack_b0;
      uStack_9c = (uint)local_ac;
      local_b8 = local_e0;
      if (lVar14 != 0) {
        local_ac = (float)(uVar10 | 1);
        uStack_b0 = uVar9 | 1;
        local_a0 = uStack_b0;
        uStack_9c = (uint)local_ac;
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
          if (((uVar15 & 1) != 0) || (lVar14 = *(long *)PTR_DAT_04bb27c8, lVar14 == 0))
          goto LAB_016f1bb4;
        }
        if (*(long *)(lVar14 + 0xa8) != 0) {
          uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
          if ((uVar15 & 1) != 0) goto LAB_016f1b90;
        }
      }
LAB_016f1bb4:
      if (*(char *)(param_1 + 7) == '\0') {
LAB_016f1d7c:
        if (*(char *)((long)param_1 + 0x1b) != '\0') {
          local_e8 = *(undefined **)pfVar19;
          local_f0 = param_1[2];
          local_b8._4_4_ = param_1[3];
          fVar25 = *param_1;
          local_c0 = *(undefined **)param_1;
          uStack_b0 = 0;
          local_f8 = (ulong)(uint)local_b8._4_4_;
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,param_1[5]);
          local_a8._1_7_ =
               (undefined7)
               (((ulong)CONCAT11((char)((ulong)local_a8 >> 0x38),
                                 *(undefined1 *)((long)param_1 + 0x1e)) << 0x30) >> 8);
          local_a8 = (undefined *)CONCAT71(local_a8._1_7_,*(undefined1 *)(param_1 + 6));
          local_b8._0_4_ = local_f0;
          local_ac = local_f0;
          uVar15 = FUN_016f10f0(&local_c0,&local_e8);
          if ((uVar15 & 1) == 0) {
LAB_016f1f8c:
            local_f8 = *(ulong *)pfVar19;
            fVar27 = *param_1;
            local_c0 = *(undefined **)param_1;
            uStack_100 = 0;
            fVar24 = param_1[5];
            uStack_b0 = 0;
            fVar22 = param_1[2];
            local_f0 = param_1[5];
            local_a8._1_7_ =
                 (undefined7)
                 (((ulong)CONCAT11((char)((ulong)local_a8 >> 0x38),
                                   *(undefined1 *)((long)param_1 + 0x1e)) << 0x30) >> 8);
            local_a8 = (undefined *)CONCAT71(local_a8._1_7_,*(undefined1 *)(param_1 + 6));
            local_104 = fVar27;
            local_fc = fVar24;
            local_b8._0_4_ = fVar22;
            local_b8._4_4_ = fVar27;
            local_ac = fVar24;
            uVar15 = FUN_016f10f0(&local_c0,&local_f8);
            if ((uVar15 & 1) != 0) {
              if (*(char *)(param_1 + 6) == '\0') {
LAB_016f2370:
                cVar16 = *(char *)(param_1 + 7);
                goto joined_r0x016f2130;
              }
              local_ac = param_1[5];
              local_c0 = (undefined *)(ulong)(uint)fVar27;
              local_b8._4_4_ = (float)*(undefined8 *)(param_1 + 3);
              uStack_b0 = (uint)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20);
              local_a8._0_7_ = CONCAT16(*(undefined1 *)((long)param_1 + 0x1e),1);
              local_b8._0_4_ = fVar24;
              uVar15 = FUN_016f10f0(&local_c0,&local_f8);
              if ((uVar15 & 1) != 0) {
                fVar24 = (float)FUN_016e026c(0,&local_104,0,0);
                lVar14 = *(long *)PTR_DAT_04bb2720;
                if (lVar14 == 0) {
                  puVar21 = &DAT_055c04a0;
                }
                else {
                  puVar21 = &DAT_055c04a0;
                  if (*(long *)(lVar14 + 0x330) != 0) {
                    puVar21 = (undefined8 *)
                              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338))
                    ;
                    iVar12 = FUN_006bd550(*puVar21,0);
                    puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
                    if (iVar12 != 0x758f7eaf) {
                      puVar21 = &DAT_055c04a0;
                    }
                  }
                }
                uVar15 = (ulong)local_c0;
                if (DAT_055c1b60 != &DAT_055c1b58) {
                  uVar17 = 0;
                  puVar20 = DAT_055c1b60;
                  do {
                    if (*(int *)(puVar20 + -1) == *(int *)(puVar21 + 7)) {
                      if (uVar17 != 0xffff) goto LAB_016f21c4;
                      break;
                    }
                    puVar20 = (undefined8 *)puVar20[1];
                    uVar17 = uVar17 + 1;
                  } while (puVar20 != &DAT_055c1b58);
                }
                uVar17 = 0;
LAB_016f21c4:
                local_c0._0_4_ = (uint)uVar17;
                local_c0._5_3_ = SUB83(uVar15,5);
                local_c0._0_5_ = CONCAT14(1,(uint)local_c0);
                fVar22 = (float)FUN_016e06d0(&local_104,0,0,&local_c0,0);
                if (*(short *)PTR_DAT_04bb6298 != -1) {
                  local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x19);
                }
                fVar24 = fVar24 - fVar22;
                fVar22 = 0.1;
                fVar27 = -fVar24;
                if (0.0 <= fVar24) {
                  fVar27 = fVar24;
                }
                if (fVar27 <= 0.1) {
                  cVar16 = *(char *)(param_1 + 7);
                  if ((cVar16 == '\0') || (*(char *)(param_1 + 6) == '\0')) goto joined_r0x016f2130;
                  fVar24 = (float)FUN_016e026c(0,param_1,0,0);
                  fVar22 = (float)FUN_016e026c(0,pfVar19,0,0);
                  fVar24 = fVar24 - fVar22;
                  fVar22 = -fVar24;
                  if (0.0 <= fVar24) {
                    fVar22 = fVar24;
                  }
                  if (10.0 < fVar22) goto LAB_016f1d54;
                  goto LAB_016f2370;
                }
                local_f0 = local_fc;
                local_f8 = CONCAT44(uStack_100,local_104);
              }
            }
            local_e8._0_4_ = (float)FUN_016f27e0(&local_e8);
            local_e0 = (undefined *)CONCAT44(local_e0._4_4_,fVar25);
            local_e8._4_4_ = fVar22;
            fVar24 = (float)FUN_016f27e0(&local_f8);
            uVar13 = 0;
            if (fVar22 < local_e8._4_4_) {
              pfVar19 = (float *)&local_98;
              if (param_2 != (float *)0x0) {
                pfVar19 = param_2;
              }
              *pfVar18 = (float)local_e8;
              pfVar19[1] = local_e8._4_4_;
              pfVar19[2] = local_e0._0_4_;
              goto LAB_016f237c;
            }
            if (local_e8._4_4_ < fVar22) goto LAB_016f229c;
            pfVar19 = (float *)&local_98;
            if (param_2 != (float *)0x0) {
              pfVar19 = param_2;
            }
            fVar28 = *param_1 - (float)local_e8;
            fVar29 = param_1[2] - local_e0._0_4_;
            fVar27 = *param_1 - fVar24;
            fVar26 = param_1[2] - fVar25;
            bVar11 = SQRT(fVar26 * fVar26 + fVar27 * fVar27) <=
                     SQRT(fVar29 * fVar29 + fVar28 * fVar28);
            if (bVar11) {
              local_e8._4_4_ = fVar22;
              local_e8._0_4_ = fVar24;
            }
            *pfVar18 = (float)local_e8;
            if (bVar11) {
              local_e0._0_4_ = fVar25;
            }
            pfVar19[1] = local_e8._4_4_;
            goto LAB_016f2310;
          }
          if (*(char *)(param_1 + 6) != '\0') {
            local_ac = param_1[5];
            local_c0 = (undefined *)local_f8;
            local_b8._0_4_ = local_f0;
            local_b8._4_4_ = (float)*(undefined8 *)(param_1 + 3);
            uStack_b0 = (uint)((ulong)*(undefined8 *)(param_1 + 3) >> 0x20);
            local_a8._0_7_ = CONCAT16(*(undefined1 *)((long)param_1 + 0x1e),1);
            uVar15 = FUN_016f10f0(&local_c0,&local_e8);
            if ((uVar15 & 1) != 0) {
              fVar22 = (float)FUN_016e026c(0,&local_f8,0,0);
              lVar14 = *(long *)PTR_DAT_04bb2720;
              if (lVar14 == 0) {
                puVar21 = &DAT_055c04a0;
              }
              else {
                puVar21 = &DAT_055c04a0;
                if (*(long *)(lVar14 + 0x330) != 0) {
                  puVar21 = (undefined8 *)
                            (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                      (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
                  iVar12 = FUN_006bd550(*puVar21,0);
                  puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
                  if (iVar12 != 0x758f7eaf) {
                    puVar21 = &DAT_055c04a0;
                  }
                }
              }
              uVar15 = (ulong)local_c0;
              if (DAT_055c1b60 != &DAT_055c1b58) {
                uVar17 = 0;
                puVar20 = DAT_055c1b60;
                do {
                  if (*(int *)(puVar20 + -1) == *(int *)(puVar21 + 7)) {
                    if (uVar17 != 0xffff) goto LAB_016f1f04;
                    break;
                  }
                  puVar20 = (undefined8 *)puVar20[1];
                  uVar17 = uVar17 + 1;
                } while (puVar20 != &DAT_055c1b58);
              }
              uVar17 = 0;
LAB_016f1f04:
              local_c0._0_4_ = (uint)uVar17;
              local_c0._5_3_ = SUB83(uVar15,5);
              local_c0._0_5_ = CONCAT14(1,(uint)local_c0);
              fVar24 = (float)FUN_016e06d0(&local_f8,0,0,&local_c0,0);
              if (*(short *)PTR_DAT_04bb6298 != -1) {
                local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x19);
              }
              fVar22 = fVar22 - fVar24;
              fVar24 = -fVar22;
              if (0.0 <= fVar22) {
                fVar24 = fVar22;
              }
              if (fVar24 <= 0.1) {
                cVar16 = *(char *)(param_1 + 7);
                if ((cVar16 != '\0') && (*(char *)(param_1 + 6) != '\0')) {
                  fVar24 = (float)FUN_016e026c(0,param_1,0,0);
                  fVar22 = (float)FUN_016e026c(0,pfVar19,0,0);
                  fVar24 = fVar24 - fVar22;
                  fVar22 = -fVar24;
                  if (0.0 <= fVar24) {
                    fVar22 = fVar24;
                  }
                  if (10.0 < fVar22) {
                    pfVar19 = (float *)&local_98;
                    if (param_2 != (float *)0x0) {
                      pfVar19 = param_2;
                    }
                    *pfVar18 = param_1[3];
                    pfVar19[1] = param_1[4];
                    pfVar19[2] = param_1[5];
                  }
                  goto LAB_016f212c;
                }
                goto joined_r0x016f2130;
              }
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,local_f0);
              local_e8 = (undefined *)local_f8;
            }
            goto LAB_016f1f8c;
          }
LAB_016f212c:
          cVar16 = *(char *)(param_1 + 7);
joined_r0x016f2130:
          if (cVar16 != '\0') {
            uVar15 = FUN_016f23b0(param_1,pfVar18,0);
            uVar13 = 0;
            if ((uVar15 & 1) != 0) {
              uVar13 = FUN_016f23b0(param_1,pfVar18,1);
            }
            goto LAB_016f237c;
          }
        }
LAB_016f2378:
        uVar13 = 1;
      }
      else {
        fVar22 = (float)FUN_016e026c(0,pfVar19,0,0);
        lVar14 = *(long *)PTR_DAT_04bb2720;
        if (lVar14 == 0) {
          puVar21 = &DAT_055c04a0;
        }
        else {
          puVar21 = &DAT_055c04a0;
          if (*(long *)(lVar14 + 0x330) != 0) {
            puVar21 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
            iVar12 = FUN_006bd550(*puVar21,0);
            puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar12 != 0x758f7eaf) {
              puVar21 = &DAT_055c04a0;
            }
          }
        }
        puVar3 = local_c0;
        if (DAT_055c1b60 != &DAT_055c1b58) {
          uVar17 = 0;
          puVar20 = DAT_055c1b60;
          do {
            if (*(int *)(puVar20 + -1) == *(int *)(puVar21 + 7)) {
              if (uVar17 != 0xffff) goto LAB_016f1c94;
              break;
            }
            puVar20 = (undefined8 *)puVar20[1];
            uVar17 = uVar17 + 1;
          } while (puVar20 != &DAT_055c1b58);
        }
        uVar17 = 0;
LAB_016f1c94:
        local_c0._0_4_ = (uint)uVar17;
        local_c0._5_3_ = SUB83(puVar3,5);
        local_c0._0_5_ = CONCAT14(1,(uint)local_c0);
        fVar24 = (float)FUN_016e06d0(pfVar19,0,0,&local_c0,0);
        if (*(short *)PTR_DAT_04bb6298 != -1) {
          local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x19);
        }
        fVar22 = fVar22 - fVar24;
        fVar24 = -fVar22;
        if (0.0 <= fVar22) {
          fVar24 = fVar22;
        }
        if (fVar24 <= 0.1) goto LAB_016f1d7c;
        fVar24 = (float)FUN_016e026c(0,param_1,0,0);
        fVar22 = (float)FUN_016e026c(0,pfVar19,0,0);
        fVar24 = fVar24 - fVar22;
        fVar22 = -fVar24;
        if (0.0 <= fVar24) {
          fVar22 = fVar24;
        }
        if (fVar22 <= 10.0) goto LAB_016f2378;
LAB_016f1d54:
        pfVar19 = (float *)&local_98;
        if (param_2 != (float *)0x0) {
          pfVar19 = param_2;
        }
        *pfVar18 = param_1[3];
        pfVar19[1] = param_1[4];
        local_e0._0_4_ = param_1[5];
LAB_016f2310:
        uVar13 = 0;
        pfVar19[2] = local_e0._0_4_;
      }
      goto LAB_016f237c;
    }
    local_e8 = puVar3;
    local_e0 = puVar1;
    local_d8 = uVar6;
    uStack_d4 = uVar4;
    local_d0 = puVar1;
    local_c8 = uVar6;
    local_c4 = uVar5;
    local_c0 = puVar3;
    uStack_b0 = uVar6;
    local_ac = (float)uVar4;
    local_a8 = puVar1;
    local_a0 = uVar6;
    uStack_9c = uVar4;
    local_b8 = puVar1;
    if (*(long *)(lVar14 + 0xa8) != 0) {
      uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_c0,0);
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      if (((uVar15 & 1) != 0) || (lVar14 == 0)) goto LAB_016f18b4;
    }
    if (*(long *)(lVar14 + 0xa8) == 0) goto LAB_016f18b4;
    uVar15 = FUN_009721a0(*(long *)(lVar14 + 0xa8),&local_e8,0);
    if ((uVar15 & 1) == 0) {
      lVar14 = *(long *)PTR_DAT_04bb27c8;
      goto LAB_016f18b4;
    }
LAB_016f1b90:
    *pfVar18 = fVar22;
    pfVar18 = (float *)&local_98;
    if (param_2 != (float *)0x0) {
      pfVar18 = param_2;
    }
  }
  uVar13 = 0;
  pfVar18[1] = fVar24;
  pfVar18[2] = fVar25;
LAB_016f237c:
  return uVar13 & 1;
}

