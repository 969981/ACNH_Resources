
void FUN_0247cd4c(long param_1)

{
  byte *pbVar1;
  int iVar2;
  undefined8 *puVar3;
  long *plVar4;
  byte bVar5;
  short sVar6;
  int iVar7;
  undefined8 uVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_90;
  float fStack_8c;
  float local_88;
  undefined1 local_84;
  undefined4 local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  
  sVar6 = *(short *)(param_1 + 0x1904);
  fStack_78 = (float)(int)*(short *)(param_1 + 0x190e) * 0.25;
  fVar15 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  local_7c = (float)*(int *)(param_1 + 0x190a) * 0.001;
  local_74 = (float)*(int *)(param_1 + 0x1910) * 0.001;
  fVar14 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  puVar3 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar3 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*pfVar11 * 0.6,0x41200000,0x3e4ccccc,puVar3 + 0x4f,&local_7c);
  iVar9 = FUN_006f0400(fVar15 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar14 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar16 = *pfVar11;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_90 = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar4 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar4 + 0x148))();
    iVar13 = iVar9 - *(int *)(lVar10 + 4);
    if (0xb60b5e < iVar13 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar9 = -0x15555560;
      iVar13 = (int)(fVar16 * 0.6 * (float)iVar13);
      if (iVar13 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar9 = 0x5b05b0;
      }
      iVar2 = iVar13;
      if (iVar7 <= iVar13) {
        iVar2 = iVar7;
      }
      if (iVar9 <= iVar13) {
        iVar9 = iVar2;
      }
      iVar9 = iVar9 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar9;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
  if (7 < *pbVar1) {
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar10 + 0xc) = 2;
  local_90 = (float)FUN_01392d64(lVar10 + 0xb0);
  *(float *)(lVar10 + 8) = local_90;
  *(int *)(lVar10 + 0xa8) = *(int *)(lVar10 + 0xa8) + 1;
  if (local_90 == 4.2039e-45) {
    return;
  }
  if (local_90 == 1.4013e-45) {
    fVar16 = (float)(int)sVar6 * 0.25;
    if (*(int *)(lVar10 + 0x104) != 9) {
      if (*(int *)(lVar10 + 0x104) - 10U < 4) {
        if ((*(byte *)(lVar10 + 0x10c) & 1) != 0) {
          FUN_02373e70(param_1,6,1);
          return;
        }
        local_80 = 1;
      }
      else {
        local_80 = 0;
      }
      local_84 = 1;
      local_90 = fVar15;
      fStack_8c = fVar16;
      local_88 = fVar14;
      FUN_02473fc8(param_1,&local_90);
      return;
    }
    if ((*(byte *)(lVar10 + 0x10c) & 1) == 0) {
      FUN_0252d8f0(&local_90,pbVar1);
      bVar5 = *(byte *)(lVar10 + 0x10c);
      uVar8 = CONCAT44(fStack_8c,local_90);
      if ((bVar5 >> 1 & 1) == 0) {
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffbffff;
      }
      else {
        *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x40000;
        FUN_02549a64(pbVar1);
      }
      *(undefined8 *)(param_1 + 0x1990) = 0;
      iVar9 = (int)(fVar16 * 4.0);
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(char *)(param_1 + 0x1993) = (char)((bVar5 & 2) >> 1);
      *(undefined8 *)(param_1 + 0x198a) = uVar8;
      local_90 = 9.80909e-44;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      *(int *)(param_1 + 0x1980) = (int)(fVar15 * 999.99994);
      if (0x7ffe < iVar9) {
        iVar9 = 0x7fff;
      }
      if (iVar9 < -0x7fff) {
        iVar9 = -0x8000;
      }
      *(short *)(param_1 + 0x1984) = (short)iVar9;
      *(int *)(param_1 + 0x1986) = (int)(fVar14 * 999.99994);
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
      lVar10 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar10 = *(long *)(param_1 + 0x70) + 0x278;
      }
      FUN_03ebb160(lVar10,0x46);
      return;
    }
  }
  uVar12 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
  if ((uVar12 & 1) == 0) {
    local_88 = 0.0;
    local_90 = 8.40779e-45;
    fStack_8c = (float)CONCAT31(fStack_8c._1_3_,1);
    FUN_02374e74(param_1,&local_90);
  }
  return;
}

