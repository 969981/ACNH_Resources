
void FUN_024607a0(long param_1,float *param_2)

{
  float *pfVar1;
  long lVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  byte bVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_f0;
  float fStack_ec;
  undefined4 local_e8;
  float fStack_e4;
  float local_c0;
  float fStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  float local_a8;
  float local_a4;
  undefined8 local_a0;
  undefined4 local_98;
  float fStack_94;
  undefined2 local_90;
  undefined4 local_8e;
  undefined1 local_8a;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_7c;
  undefined2 local_74;
  
  fVar19 = param_2[7];
  fVar24 = param_2[2];
  fVar21 = *param_2;
  local_b8._4_4_ = param_2[4];
  local_a4 = param_2[5];
  fStack_94 = param_2[6];
  uVar3 = *(undefined2 *)((long)param_2 + 0xe);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)fVar19 >> 0x14) & 0xff0));
  fVar18 = (float)((uint)fVar19 & 0xffffff) * 5.9604645e-08;
  iVar16 = (int)(param_2[1] * 4.0);
  local_b8._0_4_ = *pfVar1 + fVar18 * pfVar1[1];
  fVar25 = local_b8._4_4_ * 999.99994;
  fVar23 = fStack_94 * 999.99994;
  if (0x7ffe < iVar16) {
    iVar16 = 0x7fff;
  }
  if (iVar16 < -0x7fff) {
    iVar16 = -0x8000;
  }
  local_c0 = pfVar1[2] + fVar18 * pfVar1[3];
  fStack_bc = (float)local_b8 * 0.0;
  local_b8._0_4_ = (float)local_b8 + 0.0;
  iVar15 = (int)(local_a4 * 4.0);
  local_a0 = (undefined8 *)CONCAT44(local_c0 * 0.0,-(pfVar1[1] * fVar18) - *pfVar1);
  local_b0 = (undefined8 *)CONCAT44(fStack_bc * 0.0 + 1.0,local_c0 * 0.0);
  if (0x7ffe < iVar15) {
    iVar15 = 0x7fff;
  }
  if (iVar15 < -0x7fff) {
    iVar15 = -0x8000;
  }
  local_a8 = fStack_bc;
  local_98 = local_c0;
  FUN_007535b4(&local_f0,&local_c0);
  fVar18 = *param_2;
  fVar20 = param_2[1];
  fVar22 = param_2[2];
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  puVar11 = PTR_DAT_04bb4f78;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(int *)(param_1 + 0x1986) = (int)(fVar24 * 999.99994);
  *(int *)(param_1 + 0x1992) = (int)fVar23;
  *(int *)(param_1 + 0x1980) = (int)(fVar21 * 999.99994);
  *(short *)(param_1 + 0x1984) = (short)iVar16;
  *(undefined2 *)(param_1 + 0x198a) = uVar3;
  *(short *)(param_1 + 0x1990) = (short)iVar15;
  *(short *)(param_1 + 0x1996) = (short)((uint)fVar19 >> 0x10);
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(bool *)(param_1 + 0x1998) =
       fStack_e4 + fVar20 * fStack_ec + fVar18 * local_f0 + fVar22 * local_e8 < 0.0;
  lVar2 = *(long *)puVar11 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar2 = *(long *)puVar11 + 0x20;
  }
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  *(int *)(param_1 + 0x198c) = (int)fVar25;
  *(undefined8 *)(lVar2 + 0x420) = 0x100000000;
  *(undefined4 *)(lVar2 + 0x4c0) = 0;
  uVar13 = (ulong)local_a0 >> 0x18;
  uVar10 = SUB41(local_98,0);
  local_a0 = (undefined8 *)CONCAT53((uint5)uVar13 & 0xff,0x10101);
  local_98 = (float)(uint)CONCAT21(0x100,uVar10);
  bVar14 = *(byte *)(param_1 + 0x1ee8);
  local_b0 = (undefined8 *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(undefined4)local_b0);
  local_a8 = 4.34403e-44;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  local_b0 = (undefined8 *)CONCAT71(local_b0._1_7_,bVar14);
  fStack_ec = (float)(int)*(short *)(param_1 + 0x1990) * 0.25;
  local_f0 = (float)*(int *)(param_1 + 0x198c) * 0.001;
  local_e8 = (float)*(int *)(param_1 + 0x1992) * 0.001;
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,local_e8);
  local_c0 = local_f0;
  fStack_bc = fStack_ec;
  lVar12 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar12 + 0x2d0) + 0xf0))(lVar12 + 0x2d0);
  local_98 = (float)CONCAT31(local_98._1_3_,1);
  local_b8 = (undefined *)CONCAT44(0x40000000,(float)local_b8);
  local_a4 = 12.5;
  uVar13 = FUN_0251fad0(&local_c0,0);
  if ((((uVar13 & 1) == 0) && (uVar13 = FUN_016efacc(0x40a00000,&local_f0), (uVar13 & 1) == 0)) &&
     ((*(byte *)(param_1 + 0x17d6) >> 6 & 1) == 0)) {
    fVar19 = (float)*(int *)(param_1 + 0x198c) * 0.001;
    fVar21 = (float)*(int *)(param_1 + 0x1992) * 0.001;
    fVar25 = fVar19 + -4.8500004;
    fVar24 = fVar21 + -4.8500004;
    fVar19 = fVar19 + 4.8500004;
    fVar21 = fVar21 + 4.8500004;
    fVar23 = *(float *)(*(long *)(param_1 + 0x68) + 0x278);
    fVar18 = *(float *)(*(long *)(param_1 + 0x68) + 0x280);
    iVar15 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    fVar20 = fVar23 + -2.1825001;
    fVar25 = fVar18 + -2.1825001;
    iVar4 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
    iVar5 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    iVar6 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    iVar16 = iVar15;
    if (iVar5 <= iVar15) {
      iVar16 = iVar5;
    }
    if (iVar15 <= iVar5) {
      iVar15 = iVar5;
    }
    iVar5 = iVar4;
    if (iVar6 <= iVar4) {
      iVar5 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    iVar6 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
    iVar7 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    fVar23 = fVar23 + 2.1825001;
    fVar18 = fVar18 + 2.1825001;
    iVar8 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
    iVar9 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
    local_98 = (float)iVar6;
    if (iVar8 <= iVar6) {
      local_98 = (float)iVar8;
    }
    if (iVar6 <= iVar8) {
      iVar6 = iVar8;
    }
    fStack_94 = (float)iVar7;
    if (iVar9 <= iVar7) {
      fStack_94 = (float)iVar9;
    }
    if (iVar7 <= iVar9) {
      iVar7 = iVar9;
    }
    if (iVar16 <= (int)local_98) {
      local_98 = (float)iVar16;
    }
    if (iVar5 <= (int)fStack_94) {
      fStack_94 = (float)iVar5;
    }
    if (iVar6 <= iVar15) {
      iVar6 = iVar15;
    }
    if (iVar7 <= iVar4) {
      iVar7 = iVar4;
    }
    local_a8 = local_98;
    if (iVar6 <= (int)local_98) {
      local_a8 = (float)iVar6;
    }
    if ((int)local_98 <= iVar6) {
      local_98 = (float)iVar6;
    }
    local_a4 = fStack_94;
    if (iVar7 <= (int)fStack_94) {
      local_a4 = (float)iVar7;
    }
    if ((int)fStack_94 <= iVar7) {
      fStack_94 = (float)iVar7;
    }
    bVar14 = *(byte *)(param_1 + 0x1ee8);
    uVar3 = *(undefined2 *)PTR_DAT_04bb6298;
    uVar17 = (uint)bVar14;
    if (7 < uVar17) {
      uVar17 = 0xffffffff;
    }
    *(uint *)(lVar2 + 0x4d4) = uVar17;
    if (bVar14 < 8) {
      *(byte *)(lVar2 + 0x4d8) = bVar14;
    }
    local_b8 = PTR_DAT_04bbc1a0;
    local_8a = 0;
    *(undefined1 *)(lVar2 + 0x4d9) = 1;
    local_88 = 0xffffffffffffffff;
    local_b8 = local_b8 + 0x10;
    local_90 = 0xff01;
    local_80 = 0;
    local_c0 = (float)CONCAT22(local_c0._2_2_,uVar3);
    local_8e = 0x100;
    local_a0 = &DAT_048f9750;
    local_b0 = &DAT_048f9750;
    local_7c = 0x41200000;
    local_74 = 0xff00;
    if (*(int *)(lVar2 + 0x4d0) == 0x15) {
      local_90 = 0x1401;
    }
    local_e8._0_3_ = CONCAT12(2,(undefined2)local_e8);
    uVar13 = FUN_023016c0(lVar2 + 0x4c8,&local_c0,&local_f0);
    if ((uVar13 & 1) != 0) {
      local_c0 = 3.92364e-43;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
      lVar2 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar2 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar2,0x118);
    }
  }
  return;
}

