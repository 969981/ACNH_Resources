
/* WARNING: Removing unreachable block (ram,0x02488ca4) */

void FUN_02488b04(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  float *pfVar11;
  ulong uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float local_8c;
  float local_88;
  float local_84;
  
  bVar4 = *(byte *)(param_1 + 0x1916);
  if (4 < bVar4) {
    bVar4 = 0;
  }
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x1380) + 0xf0))(lVar10 + 0x1380);
  local_88 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_8c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_84 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  FUN_03eb4b60(*pfVar11 * 0.6,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_8c);
  sVar5 = *(short *)(param_1 + 0x1904);
  fVar18 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar17 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  iVar9 = FUN_006f0400(fVar18 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                       fVar17 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar10 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar10 + 0x13b0) + 0xf0))(lVar10 + 0x13b0);
  fVar20 = *pfVar11;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_8c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar10 = (**(code **)(*plVar3 + 0x148))();
    iVar21 = iVar9 - *(int *)(lVar10 + 4);
    iVar19 = iVar9;
    if (0xb60b5e < iVar21 + 0x5b05afU) {
      iVar7 = 0x15555560;
      iVar19 = -0x15555560;
      iVar21 = (int)(fVar20 * 0.6 * (float)iVar21);
      if (iVar21 < 1) {
        iVar7 = -0x5b05b0;
      }
      else {
        iVar19 = 0x5b05b0;
      }
      iVar1 = iVar21;
      if (iVar7 <= iVar21) {
        iVar1 = iVar7;
      }
      if (iVar19 <= iVar21) {
        iVar19 = iVar1;
      }
      iVar19 = iVar19 + *(int *)(lVar10 + 4);
    }
    *(int *)(lVar10 + 4) = iVar19;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  iVar21 = *(int *)(param_1 + 0x190a);
  sVar6 = *(short *)(param_1 + 0x190e);
  iVar19 = *(int *)(param_1 + 0x1910);
  uVar13 = (uint)*(byte *)(param_1 + 0x1ee8);
  lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar13 * 0x740;
  if (7 < uVar13) {
    lVar10 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar10 + 0x11c) = 2;
  local_8c = (float)FUN_01392d64(lVar10 + 0x1c0);
  *(float *)(lVar10 + 0x118) = local_8c;
  *(int *)(lVar10 + 0x1b8) = *(int *)(lVar10 + 0x1b8) + 1;
  if (local_8c != 4.2039e-45) {
    if (local_8c == 1.4013e-45) {
      fVar16 = (float)(int)sVar5 * 0.25;
      fVar14 = (float)(int)sVar6 * 0.25;
      fVar15 = (float)iVar21 * 0.001;
      fVar20 = (float)iVar19 * 0.001;
      uVar8 = (undefined2)((uint)iVar9 >> 0x10);
      if (bVar4 == 2) {
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
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(int *)(param_1 + 0x1980) = (int)(fVar18 * 999.99994);
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        *(short *)(param_1 + 0x1984) = (short)iVar9;
        *(int *)(param_1 + 0x1986) = (int)(fVar17 * 999.99994);
        *(int *)(param_1 + 0x198a) = (int)(fVar15 * 999.99994);
        iVar9 = (int)(fVar14 * 4.0);
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        *(short *)(param_1 + 0x198e) = (short)iVar9;
        *(int *)(param_1 + 0x1990) = (int)(fVar20 * 999.99994);
        *(undefined2 *)(param_1 + 0x1994) = uVar8;
        *(undefined1 *)(param_1 + 0x1996) = 2;
        local_8c = 1.89175e-43;
      }
      else {
        if (bVar4 != 1) {
          return;
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
        *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
        *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
        *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
        *(int *)(param_1 + 0x1980) = (int)(fVar18 * 999.99994);
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        *(short *)(param_1 + 0x1984) = (short)iVar9;
        *(int *)(param_1 + 0x1986) = (int)(fVar17 * 999.99994);
        *(int *)(param_1 + 0x198a) = (int)(fVar15 * 999.99994);
        iVar9 = (int)(fVar14 * 4.0);
        if (0x7ffe < iVar9) {
          iVar9 = 0x7fff;
        }
        if (iVar9 < -0x7fff) {
          iVar9 = -0x8000;
        }
        *(short *)(param_1 + 0x198e) = (short)iVar9;
        *(int *)(param_1 + 0x1990) = (int)(fVar20 * 999.99994);
        *(undefined2 *)(param_1 + 0x1994) = uVar8;
        *(undefined1 *)(param_1 + 0x1996) = 1;
        local_8c = 1.87774e-43;
      }
      if ((uint)local_8c < 0x149) {
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
        FUN_03ebb160(lVar10,local_8c);
      }
    }
    else {
      uVar12 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
      if ((uVar12 & 1) == 0) {
        local_84 = 0.0;
        local_8c = 8.40779e-45;
        local_88 = (float)CONCAT31(local_88._1_3_,1);
        FUN_02374e74(param_1,&local_8c);
      }
    }
  }
  return;
}

