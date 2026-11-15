
undefined8 FUN_023ce578(long param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined8 *puVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_e8 [8];
  undefined8 *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  float local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  int iStack_94;
  undefined8 *local_90;
  int local_88;
  int iStack_84;
  undefined2 local_80;
  undefined4 local_7e;
  undefined1 local_7a;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_6c;
  undefined2 local_64;
  
  if (*(long *)(param_1 + 0x70) == 0) {
    if (*(int *)(param_1 + 0x178) == 1) {
      return 0;
    }
  }
  else if (*(int *)(*(long *)(param_1 + 0x70) + 0x280) - 0x10aU < 3 ||
           *(int *)(param_1 + 0x178) == 1) {
    return 0;
  }
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  uVar7 = FUN_02582d8c(pbVar1,1);
  puVar5 = PTR_DAT_04bb4fb8;
  if (7 < uVar7) {
    return 0;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0') {
    return 0;
  }
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) == '\0') {
    return 0;
  }
  uVar7 = FUN_02582d8c(pbVar1,1);
  if (7 < uVar7) {
    return 0;
  }
  if (*(char *)(*(long *)puVar5 + (ulong)uVar7 * 0x13f0 + 0x13d4) == '\0') {
    return 0;
  }
  lVar11 = *(long *)puVar5 + (ulong)uVar7 * 0x13f0;
  if (*(int *)(lVar11 + 0x4f8) == 0) {
    return 0;
  }
  fVar20 = *(float *)(lVar11 + 0x50c) + -4.0;
  fVar17 = *(float *)(lVar11 + 0x50c) + 4.0;
  fVar19 = *(float *)(lVar11 + 0x514) + -4.0;
  fVar18 = *(float *)(lVar11 + 0x514) + 4.0;
  iVar13 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar14 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar10 = iVar13;
  if (iVar14 <= iVar13) {
    iVar10 = iVar14;
  }
  if (iVar13 <= iVar14) {
    iVar13 = iVar14;
  }
  iVar15 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar14 = iVar8;
  if (iVar15 <= iVar8) {
    iVar14 = iVar15;
  }
  if (iVar8 <= iVar15) {
    iVar8 = iVar15;
  }
  uVar7 = *(int *)(lVar11 + 0x51c) + 0x20000000U >> 0x1e;
  iVar15 = iVar8;
  switch(uVar7) {
  case 0:
    iVar15 = iVar8 + 1;
    if (iVar15 <= iVar14) {
      iVar14 = iVar8 + 1;
    }
    break;
  case 1:
    if (iVar13 + 1 <= iVar10) {
      iVar10 = iVar13 + 1;
    }
    iVar13 = iVar13 + 1;
    break;
  case 2:
    iVar14 = iVar14 + -1;
    if (iVar8 <= iVar14) {
      iVar8 = iVar14;
    }
    iVar15 = iVar8;
    break;
  case 3:
    iVar10 = iVar10 + -1;
    if (iVar13 <= iVar10) {
      iVar13 = iVar10;
    }
  }
  local_c0 = &DAT_048f9750;
  local_b8 = 0;
  iVar8 = iVar15;
  iVar12 = iVar10;
  switch(uVar7) {
  case 0:
    break;
  case 1:
    iVar8 = iVar14;
    iVar12 = iVar13;
    break;
  case 2:
  case 3:
    iVar8 = iVar14;
    break;
  default:
    goto switchD_023ce7d4_default;
  }
  local_b8 = CONCAT44(iVar8,iVar12);
switchD_023ce7d4_default:
  local_c8 = 0.0;
  local_d0 = 0;
  local_b0 = PTR_DAT_04bbfe68 + 0x10;
  local_a8 = (undefined *)((ulong)local_a8._4_4_ << 0x20);
  if (DAT_05aed670 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar8 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  local_a8 = (undefined *)CONCAT44(*(undefined4 *)(puVar16 + 7),(undefined4)local_a8);
  uVar6 = FUN_017baf44();
  local_a0 = (undefined8 *)(CONCAT71(local_a0._1_7_,uVar6) & 0xffffffffffffff01);
  local_e0 = &DAT_048f9750;
  uStack_d8 = 0;
  FUN_01a50448(auStack_e8,&local_b0,0,&local_c0,&local_e0,&local_d0);
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    fVar17 = -500.0;
  }
  else {
    fVar17 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_d0,0);
  }
  fVar19 = fVar17 - *(float *)(lVar11 + 0x510);
  fVar18 = -fVar19;
  if (0.0 <= fVar19) {
    fVar18 = fVar19;
  }
  if (fVar18 < 1.0) {
    lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
    if (7 < *pbVar1) {
      lVar2 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined8 *)(lVar2 + 0x420) = 0x100000000;
    *(undefined4 *)(lVar2 + 0x4c0) = 0;
    bVar3 = *pbVar1;
    uVar4 = *(undefined2 *)PTR_DAT_04bb6298;
    uVar7 = (uint)bVar3;
    if (7 < uVar7) {
      uVar7 = 0xffffffff;
    }
    *(uint *)(lVar2 + 0x4d4) = uVar7;
    if (bVar3 < 8) {
      *(byte *)(lVar2 + 0x4d8) = bVar3;
    }
    puVar5 = PTR_DAT_04bbc1a0;
    local_7a = 0;
    *(undefined1 *)(lVar2 + 0x4d9) = 1;
    local_78 = 0xffffffffffffffff;
    local_b0 = (undefined *)CONCAT62(local_b0._2_6_,uVar4);
    local_70 = 0;
    local_a8 = puVar5 + 0x10;
    local_90 = &DAT_048f9750;
    local_6c = 0x41200000;
    local_7e = 0x100;
    local_a0 = &DAT_048f9750;
    local_64 = 0xff00;
    local_80 = 0xff00;
    if (*(int *)(lVar2 + 0x4d0) == 0x15) {
      local_80 = 0x1400;
    }
    uStack_d8._0_3_ = CONCAT12(2,(undefined2)uStack_d8);
    local_98 = iVar10;
    iStack_94 = iVar14;
    local_88 = iVar13;
    iStack_84 = iVar15;
    local_d0._4_4_ = fVar17;
    uVar9 = FUN_023016c0(lVar2 + 0x4c8,&local_b0,&local_e0);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar11 + 0x50c) * 999.99994);
      iVar10 = (int)(*(float *)(lVar11 + 0x510) * 4.0);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar10;
      *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar11 + 0x514) * 999.99994);
      *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(lVar11 + 0x51e);
      iVar10 = (int)(local_d0._4_4_ * 4.0);
      *(int *)(param_1 + 0x198c) = (int)((float)local_d0 * 999.99994);
      if (0x7ffe < iVar10) {
        iVar10 = 0x7fff;
      }
      if (iVar10 < -0x7fff) {
        iVar10 = -0x8000;
      }
      *(short *)(param_1 + 0x1990) = (short)iVar10;
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,0x10a);
      *(int *)(param_1 + 0x1992) = (int)(local_c8 * 999.99994);
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
      lVar11 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar11 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar11,0x10a);
      return 1;
    }
  }
  return 0;
}

