
/* WARNING: Removing unreachable block (ram,0x024ae724) */

void FUN_024ae568(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  undefined2 uVar9;
  bool bVar10;
  int iVar11;
  long lVar12;
  float *pfVar13;
  ulong uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  int iVar21;
  float local_9c;
  float local_98;
  float local_94;
  
  bVar4 = *(byte *)(param_1 + 0x1916);
  if (4 < bVar4) {
    bVar4 = 0;
  }
  bVar10 = *(char *)(param_1 + 0x1917) != '\0';
  cVar5 = *(char *)(param_1 + 0x1918);
  lVar12 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x1380) + 0xf0))(lVar12 + 0x1380);
  local_98 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
  puVar2 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar2 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_9c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
  local_94 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
  FUN_03eb4b60(*pfVar13 * 0.6,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_9c);
  sVar6 = *(short *)(param_1 + 0x1904);
  fVar18 = (float)*(int *)(param_1 + 0x1900) * 0.001;
  fVar17 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  iVar11 = FUN_006f0400(fVar18 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                        fVar17 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
  lVar12 = FUN_0251e98c(1);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x13b0) + 0xf0))(lVar12 + 0x13b0);
  fVar19 = *pfVar13;
  if ((*(int *)(param_1 + 0x178) != 0) ||
     (local_9c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
    plVar3 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar3 = *(long **)(param_1 + 0x4c8);
    }
    lVar12 = (**(code **)(*plVar3 + 0x148))();
    iVar21 = iVar11 - *(int *)(lVar12 + 4);
    iVar20 = iVar11;
    if (0xb60b5e < iVar21 + 0x5b05afU) {
      iVar8 = 0x15555560;
      iVar20 = -0x15555560;
      iVar21 = (int)(fVar19 * 0.6 * (float)iVar21);
      if (iVar21 < 1) {
        iVar8 = -0x5b05b0;
      }
      else {
        iVar20 = 0x5b05b0;
      }
      iVar1 = iVar21;
      if (iVar8 <= iVar21) {
        iVar1 = iVar8;
      }
      if (iVar20 <= iVar21) {
        iVar20 = iVar1;
      }
      iVar20 = iVar20 + *(int *)(lVar12 + 4);
    }
    *(int *)(lVar12 + 4) = iVar20;
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
  }
  iVar21 = *(int *)(param_1 + 0x190a);
  sVar7 = *(short *)(param_1 + 0x190e);
  iVar20 = *(int *)(param_1 + 0x1910);
  uVar15 = (uint)*(byte *)(param_1 + 0x1ee8);
  lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar15 * 0x740;
  if (7 < uVar15) {
    lVar12 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  *(undefined4 *)(lVar12 + 0x11c) = 2;
  local_9c = (float)FUN_01392d64(lVar12 + 0x1c0);
  *(float *)(lVar12 + 0x118) = local_9c;
  *(int *)(lVar12 + 0x1b8) = *(int *)(lVar12 + 0x1b8) + 1;
  if (local_9c != 4.2039e-45) {
    if (local_9c == 1.4013e-45) {
      fVar19 = (float)(int)sVar6 * 0.25;
      local_98 = (float)(int)sVar7 * 0.25;
      local_9c = (float)iVar21 * 0.001;
      local_94 = (float)iVar20 * 0.001;
      uVar9 = (undefined2)((uint)iVar11 >> 0x10);
      if (bVar4 == 2) {
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
        local_98 = (float)FUN_016e026c(0,&local_9c,0,0);
        lVar12 = *(long *)(param_1 + 0x68);
        *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar12 + 0x278) * 999.99994);
        iVar11 = (int)(*(float *)(lVar12 + 0x27c) * 4.0);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_1 + 0x1984) = (short)iVar11;
        *(int *)(param_1 + 0x1986) = (int)(*(float *)(lVar12 + 0x280) * 999.99994);
        *(int *)(param_1 + 0x1990) = (int)(fVar17 * 999.99994);
        iVar20 = (int)(local_98 * 4.0);
        *(int *)(param_1 + 0x198a) = (int)(fVar18 * 999.99994);
        iVar11 = (int)(fVar19 * 4.0);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_1 + 0x198e) = (short)iVar11;
        *(int *)(param_1 + 0x1994) = (int)(local_9c * 999.99994);
        if (0x7ffe < iVar20) {
          iVar20 = 0x7fff;
        }
        if (iVar20 < -0x7fff) {
          iVar20 = -0x8000;
        }
        *(short *)(param_1 + 0x1998) = (short)iVar20;
        *(int *)(param_1 + 0x199a) = (int)(local_94 * 999.99994);
        *(undefined2 *)(param_1 + 0x199e) = uVar9;
        *(undefined1 *)(param_1 + 0x19a3) = 0;
        *(bool *)(param_1 + 0x19a0) = bVar10;
        *(bool *)(param_1 + 0x19a1) = cVar5 != '\0';
        *(undefined1 *)(param_1 + 0x19a2) = 0;
        local_9c = 7.9874e-44;
      }
      else {
        if (bVar4 != 1) {
          return;
        }
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
        fVar16 = (float)FUN_016e026c(0,&local_9c,0,0);
        lVar12 = *(long *)(param_1 + 0x68);
        iVar20 = (int)(fVar19 * 4.0);
        *(int *)(param_1 + 0x1980) = (int)(*(float *)(lVar12 + 0x278) * 999.99994);
        iVar11 = (int)(*(float *)(lVar12 + 0x27c) * 4.0);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_1 + 0x1984) = (short)iVar11;
        if (0x7ffe < iVar20) {
          iVar20 = 0x7fff;
        }
        fVar19 = *(float *)(lVar12 + 0x280);
        *(bool *)(param_1 + 0x19a3) = bVar10;
        *(undefined1 *)(param_1 + 0x19a2) = 0;
        if (iVar20 < -0x7fff) {
          iVar20 = -0x8000;
        }
        *(short *)(param_1 + 0x198e) = (short)iVar20;
        *(int *)(param_1 + 0x198a) = (int)(fVar18 * 999.99994);
        *(int *)(param_1 + 0x1990) = (int)(fVar17 * 999.99994);
        *(int *)(param_1 + 0x1994) = (int)(local_9c * 999.99994);
        iVar11 = (int)(fVar16 * 4.0);
        *(int *)(param_1 + 0x1986) = (int)(fVar19 * 999.99994);
        if (0x7ffe < iVar11) {
          iVar11 = 0x7fff;
        }
        if (iVar11 < -0x7fff) {
          iVar11 = -0x8000;
        }
        *(short *)(param_1 + 0x1998) = (short)iVar11;
        *(int *)(param_1 + 0x199a) = (int)(local_94 * 999.99994);
        *(undefined2 *)(param_1 + 0x199e) = uVar9;
        *(undefined2 *)(param_1 + 0x19a0) = uVar9;
        local_9c = 7.84727e-44;
      }
      if ((uint)local_9c < 0x149) {
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
        lVar12 = 0;
        if (*(long *)(param_1 + 0x70) != 0) {
          lVar12 = *(long *)(param_1 + 0x70) + 0x278;
        }
        FUN_03ebb160(lVar12,local_9c);
      }
    }
    else {
      uVar14 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
      if ((uVar14 & 1) == 0) {
        local_94 = 0.0;
        local_9c = 8.40779e-45;
        local_98 = (float)CONCAT31(local_98._1_3_,1);
        FUN_02374e74(param_1,&local_9c);
      }
    }
  }
  return;
}

