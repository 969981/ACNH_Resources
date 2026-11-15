
/* WARNING: Removing unreachable block (ram,0x024bf4cc) */

void FUN_024bf31c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float fStack_ac;
  int local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined1 local_94;
  undefined1 local_90 [8];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_38;
  
  sVar5 = *(short *)(param_1 + 0x1904);
  local_38 = 0xfffe;
  fVar15 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar14 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  FUN_0277d4ac(&local_38);
  local_38 = *(undefined8 *)(param_1 + 0x1917);
  cVar4 = *(char *)(param_1 + 0x191f);
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x1380) + 0xf0))(lVar9 + 0x1380);
  local_bc = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_c0 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_b8 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  FUN_03eb4b60(*pfVar10 * 0.6,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_c0);
  iVar8 = FUN_006f0400(fVar15 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar14 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar9 = FUN_0251e98c(1);
  pfVar10 = (float *)(**(code **)(*(long *)(lVar9 + 0x13b0) + 0xf0))(lVar9 + 0x13b0);
  fVar17 = *pfVar10;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_88 = 10;
    local_c0 = 1.4013e-44;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) goto LAB_024bf56c;
  }
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar9 = (**(code **)(*plVar3 + 0x148))();
  iVar12 = iVar8 - *(int *)(lVar9 + 4);
  iVar13 = iVar8;
  if (0xb60b5e < iVar12 + 0x5b05afU) {
    iVar6 = 0x15555560;
    iVar13 = -0x15555560;
    iVar12 = (int)(fVar17 * 0.6 * (float)iVar12);
    if (iVar12 < 1) {
      iVar6 = -0x5b05b0;
    }
    else {
      iVar13 = 0x5b05b0;
    }
    iVar1 = iVar12;
    if (iVar6 <= iVar12) {
      iVar1 = iVar6;
    }
    if (iVar13 <= iVar12) {
      iVar13 = iVar1;
    }
    iVar13 = iVar13 + *(int *)(lVar9 + 4);
  }
  *(int *)(lVar9 + 4) = iVar13;
  if (*(int *)(param_1 + 0x178) != 0) {
    return;
  }
LAB_024bf56c:
  fVar17 = (float)(int)sVar5 * 0.25;
  fVar19 = (float)*(int *)(param_1 + 0x190a) * 0.001;
  fVar18 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
  if (7 < *(byte *)(param_1 + 0x1ee8)) {
    lVar9 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  fVar16 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  if (cVar4 == '\0') {
    iVar13 = *(int *)(param_1 + 0x6f4);
    *(undefined4 *)(lVar9 + 0x24c) = 2;
    local_c0 = (float)FUN_01392d64(lVar9 + 0x2f0);
    *(float *)(lVar9 + 0x248) = local_c0;
    *(int *)(lVar9 + 0x2e8) = *(int *)(lVar9 + 0x2e8) + 1;
    if (local_c0 == 4.2039e-45) {
      return;
    }
    if (local_c0 == 1.4013e-45) {
      local_b0 = fVar18;
      fStack_ac = fVar16;
      local_a8 = iVar8;
      switch(iVar13) {
      case 0:
      case 7:
        local_a4 = CONCAT71(local_a4._1_7_,iVar13 == 7);
        local_c0 = fVar15;
        local_bc = fVar17;
        local_b8 = fVar14;
        local_b4 = fVar19;
        FUN_024c01e8(param_1,&local_c0);
        return;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
        goto switchD_024bf814_caseD_1;
      case 8:
        local_94 = 0;
        local_9c = *(undefined4 *)PTR_DAT_04bb37e0;
        uStack_98 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_a4 = 0;
        local_c0 = fVar15;
        local_bc = fVar17;
        local_b8 = fVar14;
        local_b4 = fVar19;
        FUN_024bf968(param_1,&local_c0);
        return;
      default:
        return;
      case 0xb:
      case 0xc:
      case 0xd:
        local_b4 = (float)CONCAT31(local_b4._1_3_,1);
        local_b0 = 2.8026e-45;
        local_c0 = fVar15;
        local_bc = fVar17;
        local_b8 = fVar14;
        FUN_02473fc8(param_1,&local_c0);
        return;
      }
    }
  }
  else {
    *(undefined4 *)(lVar9 + 0x35c) = 2;
    local_c0 = (float)FUN_01392d64(lVar9 + 0x400);
    uVar7 = local_38;
    *(float *)(lVar9 + 0x358) = local_c0;
    *(int *)(lVar9 + 0x3f8) = *(int *)(lVar9 + 0x3f8) + 1;
    if (local_c0 == 4.2039e-45) {
      return;
    }
    if (local_c0 == 1.4013e-45) {
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      local_c0 = fVar19;
      local_bc = fVar18;
      local_b8 = fVar16;
      local_bc = (float)FUN_016e026c(0,&local_c0,0,0);
      iVar13 = (int)(fVar17 * 4.0);
      *(int *)(param_1 + 0x1980) = (int)(fVar15 * 999.99994);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar13;
      *(int *)(param_1 + 0x1986) = (int)(fVar14 * 999.99994);
      *(int *)(param_1 + 0x198a) = (int)(local_c0 * 999.99994);
      iVar13 = (int)(local_bc * 4.0);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x198e) = (short)iVar13;
      *(short *)(param_1 + 0x1994) = (short)((uint)iVar8 >> 0x10);
      *(int *)(param_1 + 0x1990) = (int)(local_b8 * 999.99994);
      *(undefined1 *)(param_1 + 0x1997) = 0;
      local_88 = 3;
      *(undefined8 *)(param_1 + 0x1998) = uVar7;
      *(undefined1 *)(param_1 + 0x1996) = 3;
      *(undefined1 *)(param_1 + 0x19a1) = 1;
      local_c0 = 7.42688e-44;
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
      lVar9 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar9 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar9,0x35);
      return;
    }
    *(undefined4 *)(param_1 + 0x21b8) = 6;
  }
  FUN_02373ee0(param_1,3,1,1);
  return;
switchD_024bf814_caseD_1:
  local_88 = *(undefined4 *)(lVar9 + 0x330);
  uStack_84 = *(undefined4 *)(lVar9 + 0x334);
  FUN_024bcb3c(local_90,&local_88);
  uVar11 = FUN_0243c730(param_1);
  if (((uVar11 & 1) == 0) && (uVar11 = FUN_0277db54(local_90), (uVar11 & 1) != 0)) {
    local_c0 = fVar15;
    local_bc = fVar17;
    local_b8 = fVar14;
    local_b4 = fVar19;
    FUN_024bfb68(param_1,&local_c0);
    return;
  }
  local_c0 = fVar15;
  local_bc = fVar17;
  local_b8 = fVar14;
  local_b4 = fVar19;
  FUN_024bfe84(param_1,&local_c0);
  return;
}

