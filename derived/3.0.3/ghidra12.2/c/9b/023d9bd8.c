
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_023d9bd8(long param_1,uint param_2)

{
  bool bVar1;
  undefined *puVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  undefined8 local_100;
  float local_f8;
  uint local_f4;
  float local_f0;
  float local_ec;
  undefined8 local_e8;
  float local_e0;
  int local_dc;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined2 uStack_d4;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  float local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  float local_48;
  float fStack_44;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    return 0;
  }
  lVar7 = FUN_0251e98c(1);
  pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x2d0) + 0xf0))(lVar7 + 0x2d0);
  fVar20 = *pfVar8;
  local_b0 = 0;
  local_a8 = 0;
  uVar9 = FUN_02495be4(param_1,&local_b0);
  if ((uVar9 & 1) != 0) {
    puVar10 = (undefined8 *)FUN_016e1014(&local_b0,0,0);
    local_100 = *puVar10;
    uVar9 = FUN_016e4d80(&local_100);
    if (((uVar9 & 1) != 0) || (uVar9 = FUN_016e4e3c(&local_100), (uVar9 & 1) != 0)) {
      FUN_0124c030(&local_c8,&local_100);
      iVar5 = FUN_0123db50(&local_c0,local_b8);
      if ((iVar5 == 0x21) || (iVar5 = FUN_0123db50(&local_c0,local_b8), iVar5 == 0x22)) {
        uVar6 = local_c0._2_1_ >> 2 & 7;
      }
      else {
        uVar6 = 0;
      }
      local_e8 = CONCAT44(local_e8._4_4_,uVar6);
      if ((uVar6 < 8) && ((1 << (ulong)uVar6 & 0xaaU) != 0)) {
        local_d8 = 1;
        uStack_d7 = 0;
        local_e8 = local_b0;
        uStack_d4 = DAT_05586008;
        uStack_d2 = DAT_0558600a;
        uStack_d1 = DAT_0558600b;
        local_d0 = DAT_0558600c;
        local_e0 = (float)local_a8;
        local_10c = _DAT_05586008;
        local_108 = DAT_0558600c;
        local_dc = local_a8._4_4_;
        FUN_016e49e4(&local_10c,&local_100,0);
        uStack_d4 = SUB42(local_10c,0);
        uStack_d2 = (undefined1)((uint)local_10c >> 0x10);
        uStack_d1 = (undefined1)((uint)local_10c >> 0x18);
        local_d0 = local_108;
        uVar9 = FUN_0249630c(param_1,&local_e8,param_2 & 1);
        if ((uVar9 & 1) != 0) {
          uVar6 = 1;
          goto LAB_023da464;
        }
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x68);
  iVar5 = *(int *)(lVar7 + 0x2b4);
  fVar17 = *(float *)(lVar7 + 0x278);
  fVar18 = *(float *)(lVar7 + 0x27c);
  fVar19 = *(float *)(lVar7 + 0x280);
  local_48 = _DAT_05586008;
  fStack_44 = DAT_0558600c;
  local_c8 = *(undefined8 *)(lVar7 + 0x278);
  local_c0 = *(float *)(lVar7 + 0x280);
  pfVar8 = (float *)FUN_016e1014(lVar7 + 0x278,&local_c8,0);
  iVar12 = (int)(float)local_c8;
  bVar3 = (float)local_c8 < 0.0;
  local_f0 = *pfVar8;
  bVar4 = local_c0 < 0.0;
  local_ec = pfVar8[1];
  iVar13 = (int)local_c0;
  uVar11 = FUN_016e026c(0,&local_c8,0,0);
  local_c8 = CONCAT44(uVar11,(float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar3 & 0xfffffffe) *
                             5.0 + 5.0);
  local_c0 = (float)(int)((int)((float)iVar13 / 5.0) - (uint)bVar4 & 0xfffffffe) * 5.0 + 5.0;
  uVar9 = FUN_016e4d80(&local_f0);
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_016e4e3c(&local_f0);
    bVar3 = false;
    local_f4 = 0;
    if ((uVar9 & 1) != 0) goto LAB_023d9ec4;
  }
  else {
LAB_023d9ec4:
    local_f4 = 0;
    FUN_0124c030(&local_e8,&local_f0);
    iVar12 = FUN_0123db50(&local_e0,
                          CONCAT17(uStack_d1,
                                   CONCAT16(uStack_d2,
                                            CONCAT24(uStack_d4,
                                                     CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)
                                                             )))));
    if ((iVar12 == 0x21) ||
       (iVar12 = FUN_0123db50(&local_e0,
                              CONCAT17(uStack_d1,
                                       CONCAT16(uStack_d2,
                                                CONCAT24(uStack_d4,
                                                         CONCAT22(uStack_d6,
                                                                  CONCAT11(uStack_d7,local_d8)))))),
       iVar12 == 0x22)) {
      local_f4 = (uint)local_e0 >> 0x12 & 7;
    }
    else {
      local_f4 = 0;
    }
    bVar3 = true;
  }
  puVar2 = PTR_DAT_04bb2d00;
  lVar7 = *(long *)(param_1 + 0x68);
  iVar5 = (int)(long)((float)(iVar5 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
  local_100 = *(undefined8 *)(lVar7 + 0x278);
  local_f8 = *(float *)(lVar7 + 0x280);
  pfVar8 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar7 + 0x2b4) >> 0x14) & 0xff0));
  fVar14 = (float)(*(uint *)(lVar7 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar8 + fVar14 * pfVar8[1];
  fVar14 = pfVar8[2] + fVar14 * pfVar8[3];
  fVar16 = fVar15 * 0.0;
  local_10c = *(float *)(lVar7 + 0x278) + fVar16 * 0.0 + fVar14 * 0.0 + (fVar15 + 0.0) * 10.0;
  local_108 = *(float *)(lVar7 + 0x27c) +
              (fVar16 * 0.0 + 1.0) * 0.0 + fVar14 * 0.0 * 0.0 + fVar16 * 10.0;
  local_104 = *(float *)(lVar7 + 0x280) + (fVar14 * 0.0 * 0.0 - fVar15 * 0.0) + fVar14 * 10.0;
  pfVar8 = (float *)FUN_016e1014(&local_10c,&local_100,0);
  iVar12 = (int)(float)local_100;
  bVar4 = (float)local_100 < 0.0;
  local_114 = *pfVar8;
  local_110 = pfVar8[1];
  fVar14 = (float)(int)((int)((float)(int)local_f8 / 5.0) - (uint)(local_f8 < 0.0) & 0xfffffffe);
  fVar15 = fVar14 * 5.0;
  fVar16 = fVar15 + 5.0;
  uVar11 = FUN_016e026c(0,&local_100,0,0);
  local_100 = CONCAT44(uVar11,(float)(int)((int)((float)iVar12 / 5.0) - (uint)bVar4 & 0xfffffffe) *
                              5.0 + 5.0);
  local_f8 = fVar16;
  uVar9 = FUN_016e4d80(&local_114);
  if ((uVar9 & 1) != 0) {
LAB_023da094:
    FUN_0124c030(&local_e8,&local_114);
    iVar12 = FUN_0123db50(&local_e0,
                          CONCAT17(uStack_d1,
                                   CONCAT16(uStack_d2,
                                            CONCAT24(uStack_d4,
                                                     CONCAT22(uStack_d6,CONCAT11(uStack_d7,local_d8)
                                                             )))));
    if ((iVar12 == 0x21) ||
       (iVar12 = FUN_0123db50(&local_e0,
                              CONCAT17(uStack_d1,
                                       CONCAT16(uStack_d2,
                                                CONCAT24(uStack_d4,
                                                         CONCAT22(uStack_d6,
                                                                  CONCAT11(uStack_d7,local_d8)))))),
       iVar12 == 0x22)) {
      local_118 = (uint)local_e0 >> 0x12 & 7;
    }
    else {
      local_118 = 0;
    }
    bVar4 = false;
    if (bVar3) goto LAB_023da0fc;
LAB_023da0e4:
    bVar3 = false;
    goto LAB_023da3c0;
  }
  uVar9 = FUN_016e4e3c(&local_114);
  local_118 = 0;
  if ((uVar9 & 1) != 0) goto LAB_023da094;
  bVar4 = true;
  if (!bVar3) goto LAB_023da0e4;
LAB_023da0fc:
  fVar14 = local_c0 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
  fVar15 = (float)local_c8;
  iVar12 = FUN_006f0400((float)local_c8 - *(float *)(*(long *)(param_1 + 0x68) + 0x278));
  bVar3 = false;
  if (6 < local_f4 - 1) goto switchD_023da150_caseD_2;
  uVar6 = iVar12 + 0x10000000U >> 0x1d;
  switch(local_f4) {
  case 1:
    if (uVar6 == 1) {
LAB_023da18c:
      uVar9 = 0x20000000;
      break;
    }
    if (uVar6 == 5) goto LAB_023da1b4;
LAB_023da1ac:
    bVar3 = false;
  default:
    goto switchD_023da150_caseD_2;
  case 3:
    if (uVar6 != 3) {
      if (uVar6 != 7) goto LAB_023da1ac;
      goto LAB_023da1bc;
    }
LAB_023da1a4:
    uVar9 = 0x60000000;
    break;
  case 5:
    if (uVar6 != 5) {
      if (uVar6 != 1) goto LAB_023da1ac;
      goto LAB_023da18c;
    }
LAB_023da1b4:
    uVar9 = 0xa0000000;
    break;
  case 7:
    if (uVar6 != 7) {
      if (uVar6 != 3) goto LAB_023da1ac;
      goto LAB_023da1a4;
    }
LAB_023da1bc:
    uVar9 = 0xe0000000;
  }
  iVar5 = (int)uVar9;
  pfVar8 = (float *)(puVar2 + (uVar9 >> 0x18) * 0x10);
  bVar3 = true;
  fVar19 = *pfVar8 + pfVar8[1] * 0.0;
  local_48 = local_f0;
  fStack_44 = local_ec;
  fVar14 = pfVar8[2] + pfVar8[3] * 0.0;
  fVar18 = fVar19 * 0.0;
  fVar17 = (float)local_c8 + ((fVar18 * 0.0 + fVar14 * 0.0) - fVar20 * (fVar19 + 0.0));
  fVar18 = local_c8._4_4_ + (((fVar18 * 0.0 + 1.0) * 0.0 + fVar14 * 0.0 * 0.0) - fVar20 * fVar18);
  fVar19 = local_c0 + ((fVar14 * 0.0 * 0.0 - fVar19 * 0.0) - fVar20 * fVar14);
  fVar14 = local_c8._4_4_;
  fVar15 = local_c0;
switchD_023da150_caseD_2:
  switch(local_f4) {
  case 0:
    iVar5 = -0x80000000;
    break;
  default:
    if (bVar3) goto LAB_023da284;
    goto LAB_023da3c0;
  case 2:
    iVar5 = -0x40000000;
    break;
  case 4:
    iVar5 = 0;
    break;
  case 6:
    iVar5 = 0x40000000;
  }
  fVar17 = (float)local_c8;
  fVar18 = local_c8._4_4_;
  fVar19 = local_c0;
LAB_023da284:
  uVar6 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x10000000U >> 0x1d;
  local_e8 = CONCAT44(local_e8._4_4_,uVar6);
  if (uVar6 == iVar5 + 0x10000000U >> 0x1d) {
    local_48 = local_f0;
    fStack_44 = local_ec;
    bVar1 = true;
LAB_023da3cc:
    if (bVar1) {
      iVar12 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
LAB_023da3d8:
      local_10c = (float)(iVar12 + 0x10000000U >> 0x1d);
      local_100 = CONCAT44(local_100._4_4_,local_10c);
      local_f0 = (float)(iVar5 + 0x10000000U >> 0x1d);
      if (local_10c == local_f0) {
        local_e8 = CONCAT44(fVar18,fVar17);
        uStack_d7 = 0;
        local_c8._0_4_ = _DAT_05586008;
        local_c8._4_4_ = DAT_0558600c;
        local_e0 = fVar19;
        local_dc = iVar5;
        local_d8 = bVar3;
        FUN_016e49e4(&local_c8,&local_48,0);
        uStack_d4 = SUB42((float)local_c8,0);
        uStack_d2 = (undefined1)((uint)(float)local_c8 >> 0x10);
        uStack_d1 = (undefined1)((uint)(float)local_c8 >> 0x18);
        local_d0 = local_c8._4_4_;
        uVar6 = FUN_0249630c(param_1,&local_e8,param_2 & 1);
        goto LAB_023da464;
      }
    }
  }
  else {
LAB_023da3c0:
    bVar1 = false;
    if (bVar4) goto LAB_023da3cc;
    iVar12 = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4);
    if (6 < local_118) goto switchD_023da310_caseD_1;
    uVar6 = iVar12 + 0x20000000U >> 0x1e;
    switch(local_118) {
    case 0:
      if (uVar6 != 0) break;
      local_e8 = CONCAT44(local_e8._4_4_,0x80000000);
      fVar17 = (float)FUN_016e45b0(0x41200000,&local_100,&local_e8);
      iVar5 = 0;
      fVar18 = fVar14;
      fVar19 = fVar15;
LAB_023da3b0:
      local_48 = local_114;
      fStack_44 = local_110;
      goto LAB_023da3d8;
    case 2:
      if (uVar6 == 1) {
        iVar5 = 0x40000000;
        fVar17 = (float)local_100 + -10.0;
LAB_023da3a4:
        fVar18 = local_100._4_4_ + 0.0;
        fVar19 = local_f8 + 0.0;
        goto LAB_023da3b0;
      }
      break;
    case 4:
      if (uVar6 == 2) {
        iVar5 = -0x80000000;
        fVar17 = (float)local_100 + 0.0;
        fVar18 = local_100._4_4_ + 0.0;
        fVar19 = local_f8 + 10.0;
        goto LAB_023da3b0;
      }
      break;
    case 6:
      if (uVar6 == 3) {
        iVar5 = -0x40000000;
        fVar17 = (float)local_100 + 10.0;
        goto LAB_023da3a4;
      }
    }
  }
switchD_023da310_caseD_1:
  uVar6 = 0;
LAB_023da464:
  return uVar6 & 1;
}

