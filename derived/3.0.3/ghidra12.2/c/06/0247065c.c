
/* WARNING: Removing unreachable block (ram,0x024707b0) */

void FUN_0247065c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  char cVar5;
  short sVar6;
  bool bVar7;
  bool bVar8;
  undefined4 uVar9;
  float *pfVar10;
  long lVar11;
  byte bVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int local_6c;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  undefined1 local_58;
  undefined4 local_54;
  
  iVar13 = *(int *)(param_1 + 0x1900);
  iVar16 = *(int *)(param_1 + 0x1906);
  sVar6 = *(short *)(param_1 + 0x1904);
  cVar5 = '\0';
  if (*(char *)(param_1 + 0x3a5) != '\0') {
    uVar9 = (**(code **)(*(long *)(param_1 + 0x390) + (ulong)*(byte *)(param_1 + 0x3a4) * 8))
                      (param_1 + 0x390);
    cVar5 = *(char *)(param_1 + 0x3a5);
    *(undefined4 *)(param_1 + 0x398) = uVar9;
  }
  bVar12 = *(byte *)(param_1 + 0x1ee8);
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_6c = CONCAT31(local_6c._1_3_,bVar12);
  iVar4 = *(int *)(param_1 + 0x3a0);
  if (cVar5 == '\0') {
    fVar21 = 0.0;
  }
  else {
    fVar21 = 1.0;
    if ((iVar4 != 0) && (*(int *)(param_1 + 0x398) < iVar4)) {
      fVar14 = (float)*(int *)(param_1 + 0x398) / (float)iVar4;
      fVar17 = 1.0;
      if (fVar14 <= 1.0) {
        fVar17 = fVar14;
      }
      fVar21 = 0.0;
      if (0.0 <= fVar14) {
        fVar21 = fVar17;
      }
    }
  }
  local_58 = 1;
  local_5c = fVar21 * 0.7 + 0.3;
  local_68 = (float)iVar13 * 0.001;
  fStack_64 = (float)(int)sVar6 * 0.25;
  local_60 = (float)iVar16 * 0.001;
  FUN_016fa230(*(undefined4 *)(param_1 + 0x388),&local_6c,*(undefined4 *)(param_1 + 0x230),1);
  fVar21 = -20.0;
  if ((*(long *)PTR_DAT_04bb2200 != 0) &&
     (lVar11 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x50), lVar11 != 0)) {
    local_6c = 0;
    lVar11 = *(long *)(lVar11 + 0x118);
    if (lVar11 != 0) {
      lVar11 = *(long *)(lVar11 + 0x280);
      fVar21 = 0.0;
      if ((lVar11 != 0) && (lVar11 = *(long *)(lVar11 + 8), lVar11 != 0)) {
        pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x488) + 0xf0))(lVar11 + 0x488);
        fVar21 = *pfVar10;
      }
      lVar11 = FUN_0251e98c(1);
      pfVar10 = (float *)(**(code **)(*(long *)(lVar11 + 0x1560) + 0xf0))(lVar11 + 0x1560);
      fVar21 = fVar21 + *pfVar10;
    }
  }
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  *(float *)((long)puVar2 + 0x27c) = fVar21;
  if (*(int *)(param_1 + 0x178) == 0) {
    lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
    if (7 < *(byte *)(param_1 + 0x1ee8)) {
      lVar11 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined4 *)(lVar11 + 0x424) = 2;
    local_6c = FUN_01392d64(lVar11 + 0x4c8);
    *(int *)(lVar11 + 0x420) = local_6c;
    *(int *)(lVar11 + 0x4c0) = *(int *)(lVar11 + 0x4c0) + 1;
    if (local_6c == 3) {
      FUN_0231b3c0(param_1,6,0);
      return;
    }
    if (local_6c == 1) {
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(int *)(param_1 + 0x1980) = (int)((float)*(int *)(param_1 + 0x1900) * 0.001 * 999.99994);
      iVar13 = (int)((float)(int)*(short *)(param_1 + 0x1904) * 0.25 * 4.0);
      if (0x7ffe < iVar13) {
        iVar13 = 0x7fff;
      }
      if (iVar13 < -0x7fff) {
        iVar13 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar13;
      *(int *)(param_1 + 0x1986) = (int)((float)*(int *)(param_1 + 0x1906) * 0.001 * 999.99994);
      *(undefined2 *)(param_1 + 0x198a) = *(undefined2 *)(param_1 + 0x190a);
      *(undefined1 *)(param_1 + 0x198c) = 1;
      *(bool *)(param_1 + 0x198d) = *(char *)(param_1 + 0x190d) != '\0';
      local_6c = 0x100;
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
    }
    else {
      local_6c = 0xf6;
      *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
      *(undefined8 *)(param_1 + 0x18c0) = 0;
      *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
      *(undefined8 *)(param_1 + 0x18c8) = 0;
      *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
      *(undefined8 *)(param_1 + 0x18d0) = 0;
      *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
      *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
      *(undefined8 *)(param_1 + 0x18a0) = 0;
      *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
      *(undefined8 *)(param_1 + 0x18a8) = 0;
      *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
      *(undefined8 *)(param_1 + 0x18b0) = 0;
      *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
      *(undefined8 *)(param_1 + 0x18b8) = 0;
      *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
      *(undefined8 *)(param_1 + 0x1880) = 0;
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1888) = 0;
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar11 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar11 = *(long *)(param_1 + 0x70) + 0x278;
      }
    }
    FUN_03ebb160(lVar11,local_6c);
    return;
  }
  FUN_0231b3c0(param_1,6,0);
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  fVar21 = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  fVar17 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  fVar15 = *(float *)(puVar2 + 0x4f);
  fVar14 = *(float *)(puVar2 + 0x50);
  bVar7 = false;
  if ((fVar15 == fVar21) && (bVar7 = false, !NAN(fVar14) && !NAN(fVar17))) {
    bVar7 = fVar14 == fVar17;
  }
  if (bVar7) {
    fVar21 = fVar15;
    fVar17 = fVar14;
  }
  else {
    fVar19 = fVar15 - fVar21;
    fVar20 = fVar14 - fVar17;
    fVar18 = SQRT(fVar19 * fVar19 + 0.0 + fVar20 * fVar20);
    if (0.19999999 <= fVar18) {
      fVar18 = fVar18 * 0.2;
      bVar7 = false;
      bVar8 = true;
      if (-1.1920929e-07 <= fVar18) {
        bVar7 = false;
        bVar8 = true;
        if (!NAN(fVar18)) {
          bVar7 = fVar18 == 1.1920929e-07;
          bVar8 = 1.1920929e-07 <= fVar18;
        }
      }
      if (!(!bVar8 || bVar7)) {
        fVar19 = fVar19 * 0.2;
        fVar21 = 10.0;
        fVar20 = fVar20 * 0.2;
        if ((10.0 < fVar18) || (fVar21 = 0.19999999, fVar18 < 0.19999999)) {
          fVar19 = fVar19 * (fVar21 / fVar18);
          fVar20 = fVar20 * (fVar21 / fVar18);
        }
        fVar21 = fVar15 - fVar19;
        fVar17 = fVar14 - fVar20;
      }
    }
  }
  *(float *)(puVar2 + 0x4f) = fVar21;
  *(float *)(puVar2 + 0x50) = fVar17;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_54 = 10;
    local_6c = 10;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) != 0) {
      return;
    }
  }
  iVar13 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
  plVar3 = &DAT_054e9a58;
  if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
    plVar3 = *(long **)(param_1 + 0x4c8);
  }
  lVar11 = (**(code **)(*plVar3 + 0x148))();
  iVar16 = iVar13 - *(int *)(lVar11 + 4);
  if (0xb60b5e < iVar16 + 0x5b05afU) {
    iVar4 = 0x15555560;
    iVar13 = -0x15555560;
    iVar16 = (int)((float)iVar16 * 0.2);
    if (iVar16 < 1) {
      iVar4 = -0x5b05b0;
    }
    else {
      iVar13 = 0x5b05b0;
    }
    iVar1 = iVar16;
    if (iVar4 <= iVar16) {
      iVar1 = iVar4;
    }
    if (iVar13 <= iVar16) {
      iVar13 = iVar1;
    }
    iVar13 = iVar13 + *(int *)(lVar11 + 4);
  }
  *(int *)(lVar11 + 4) = iVar13;
  return;
}

