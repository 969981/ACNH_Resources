
void FUN_02a069d0(long param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  float *pfVar5;
  undefined4 uVar6;
  float fVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float fVar21;
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  undefined8 local_e0;
  undefined4 local_d8 [2];
  float *local_d0;
  float local_c8 [7];
  undefined4 local_ac;
  
  uVar16 = *param_2;
  uVar17 = param_2[2];
  uVar14 = param_2[4];
  uVar1 = param_2[1];
  uVar2 = param_2[3];
  uVar3 = param_2[5];
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar11 = 0;
    do {
      FUN_03b77298(param_1 + 0x14d8);
      FUN_03b77298(param_1 + 0x1500);
      FUN_03b77298(param_1 + 0x1528);
      FUN_03b77298(param_1 + 0x1550);
      FUN_03b77298(param_1 + 0x1578);
      iVar11 = iVar11 + 1;
    } while (iVar11 < *(int *)(param_1 + 0x18));
  }
  FUN_03b77298(param_1 + 0x15f0);
  FUN_03b77298(param_1 + 0x1618);
  FUN_03b77298(param_1 + 0x1640);
  *(undefined8 *)(param_1 + 0x15dc) = 0x7f7fffff7f7fffff;
  lVar8 = 0;
  if (DAT_05aebb78 != 0) {
    lVar8 = *(long *)(DAT_05aebb78 + 0x20);
  }
  lVar9 = *(long *)(lVar8 + 0x28);
  if (lVar9 == lVar8 + 0x20) {
    uVar19 = 0;
    fVar15 = -3.4028235e+38;
    fVar7 = 3.4028235e+38;
    fVar20 = 3.4028235e+38;
    fVar12 = 3.4028235e+38;
    fVar21 = 3.4028235e+38;
  }
  else {
    uVar19 = 0;
    lVar10 = lVar9 + -0x1b8;
    fVar15 = -3.4028235e+38;
    fVar20 = 3.4028235e+38;
    fVar18 = -3.4028235e+38;
    fVar12 = 3.4028235e+38;
    fVar21 = 3.4028235e+38;
    do {
      local_e0 = 0;
      local_d8[0] = 1;
      local_d0 = local_c8;
      local_c8[0] = 0.0;
      local_c8[1] = 0.0;
      local_e8 = 1.0;
      local_e4 = 0.0;
      local_c8[2] = 0.0;
      local_c8[3] = 0.0;
      local_c8[4] = 0.0;
      local_c8[5] = 0.0;
      local_f0 = 0;
      FUN_02a07990(param_1 + 0x20,local_d8,(long)&local_e0 + 4,&local_e0,&local_e4,&local_e8,
                   (long)&local_f0 + 4,&local_f0);
      pfVar5 = local_d0;
      local_ac = 0;
      *(undefined4 *)(param_1 + 0x14f8) = uVar1;
      if (*(float *)(param_1 + 0x14e4) != *local_d0) {
        FUN_03b773d4(0,*local_d0,uVar16,param_1 + 0x14d8);
      }
      *(undefined4 *)(param_1 + 0x14c0) = *(undefined4 *)(param_1 + 0x14e0);
      *(undefined4 *)(param_1 + 0x1520) = uVar1;
      if (*(float *)(param_1 + 0x150c) != pfVar5[1]) {
        FUN_03b773d4(local_ac,pfVar5[1],uVar16,param_1 + 0x1500);
      }
      *(undefined4 *)(param_1 + 0x14c4) = *(undefined4 *)(param_1 + 0x1508);
      *(undefined4 *)(param_1 + 0x1548) = uVar1;
      if (*(float *)(param_1 + 0x1534) != pfVar5[2]) {
        FUN_03b773d4(local_ac,pfVar5[2],uVar16,param_1 + 0x1528);
      }
      *(undefined4 *)(param_1 + 0x14c8) = *(undefined4 *)(param_1 + 0x1530);
      *(undefined4 *)(param_1 + 0x1570) = uVar1;
      if (*(float *)(param_1 + 0x155c) != pfVar5[3]) {
        FUN_03b773d4(local_ac,pfVar5[3],uVar16,param_1 + 0x1550);
      }
      *(undefined4 *)(param_1 + 0x14cc) = *(undefined4 *)(param_1 + 0x1558);
      *(undefined4 *)(param_1 + 0x1598) = uVar1;
      if (*(float *)(param_1 + 0x1584) != pfVar5[4]) {
        FUN_03b773d4(local_ac,pfVar5[4],uVar16,param_1 + 0x1578);
      }
      *(undefined4 *)(param_1 + 0x14d0) = *(undefined4 *)(param_1 + 0x1580);
      if (local_e0._4_4_ <= fVar20) {
        fVar20 = local_e0._4_4_;
      }
      if ((float)local_e0 <= fVar12) {
        fVar12 = (float)local_e0;
      }
      if (local_e4 <= fVar21) {
        fVar21 = local_e4;
      }
      if (fVar15 <= local_e8) {
        fVar15 = local_e8;
      }
      uVar6 = (undefined4)local_f0;
      fVar7 = local_f0._4_4_;
      if (local_f0._4_4_ <= fVar18) {
        uVar6 = uVar19;
        fVar7 = fVar18;
      }
      fVar18 = fVar7;
      uVar19 = uVar6;
      fVar4 = *(float *)(param_1 + 0x15dc);
      if (*(float *)(lVar10 + 0x58) <= *(float *)(param_1 + 0x15dc)) {
        fVar4 = *(float *)(lVar10 + 0x58);
      }
      *(float *)(param_1 + 0x15dc) = fVar4;
      fVar13 = *(float *)(lVar10 + 0x5c);
      *(float *)(param_1 + 0x1698) = local_f0._4_4_;
      fVar7 = *(float *)(param_1 + 0x15e0);
      if (fVar13 <= *(float *)(param_1 + 0x15e0)) {
        fVar7 = fVar13;
      }
      *(float *)(param_1 + 0x15e0) = fVar7;
      lVar9 = *(long *)(lVar9 + 8);
      lVar10 = lVar9 + -0x1b8;
    } while (lVar10 != lVar8 + -0x198);
    if (fVar4 != 3.4028235e+38) goto LAB_02a06d98;
  }
  *(undefined4 *)(param_1 + 0x15dc) = 0;
LAB_02a06d98:
  if (fVar7 == 3.4028235e+38) {
    *(undefined4 *)(param_1 + 0x15e0) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c8) = uVar19;
  *(undefined4 *)(param_1 + 0x1610) = uVar2;
  fVar7 = 0.0;
  if (fVar21 != 3.4028235e+38) {
    fVar7 = fVar21;
  }
  fVar21 = 0.0;
  if (fVar12 != 3.4028235e+38) {
    fVar21 = fVar12;
  }
  fVar12 = 0.0;
  if (fVar20 != 3.4028235e+38) {
    fVar12 = fVar20;
  }
  if (*(float *)(param_1 + 0x15fc) != fVar12) {
    FUN_03b773d4(fVar12,uVar17,param_1 + 0x15f0);
  }
  *(undefined4 *)(param_1 + 0x1638) = uVar3;
  *(undefined4 *)(param_1 + 0x15cc) = *(undefined4 *)(param_1 + 0x15f8);
  if (*(float *)(param_1 + 0x1624) != fVar21) {
    FUN_03b773d4(fVar21,uVar14,param_1 + 0x1618);
  }
  *(undefined4 *)(param_1 + 0x1660) = uVar3;
  *(undefined4 *)(param_1 + 0x15d0) = *(undefined4 *)(param_1 + 0x1620);
  if (*(float *)(param_1 + 0x164c) != fVar7) {
    FUN_03b773d4(fVar7,uVar14,param_1 + 0x1640);
  }
  *(undefined1 *)(param_1 + 0x1688) = 0;
  *(undefined4 *)(param_1 + 0x15d4) = *(undefined4 *)(param_1 + 0x1648);
  fVar7 = 1.0;
  if (fVar15 != -3.4028235e+38) {
    fVar7 = fVar15;
  }
  *(float *)(param_1 + 0x15d8) = fVar7;
  return;
}

