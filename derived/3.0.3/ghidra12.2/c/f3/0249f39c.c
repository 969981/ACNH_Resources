
void FUN_0249f39c(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  float local_5c;
  float fStack_58;
  float local_54;
  
  iVar11 = *(int *)(param_1 + 0x178);
  if (iVar11 == 1) {
    fStack_58 = (float)(int)*(short *)(param_1 + 0x18e9) * 0.25;
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_5c = (float)*(int *)(param_1 + 0x18e5) * 0.001;
    local_54 = (float)*(int *)(param_1 + 0x18eb) * 0.001;
    FUN_03eb4b60(0x3e4ccccd,0x41200000,0x3e4ccccc,puVar2 + 0x4f,&local_5c);
    if ((*(int *)(param_1 + 0x178) != 0) ||
       (local_5c = 1.4013e-44, (*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0)) {
      iVar11 = (uint)*(ushort *)(param_1 + 0x18ef) * 0x10000;
      plVar3 = &DAT_054e9a58;
      if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
        plVar3 = *(long **)(param_1 + 0x4c8);
      }
      lVar6 = (**(code **)(*plVar3 + 0x148))();
      iVar5 = iVar11 - *(int *)(lVar6 + 4);
      if (0xb60b5e < iVar5 + 0x5b05afU) {
        iVar10 = (int)((float)iVar5 * 0.1666667);
        iVar5 = 0x10000000;
        if (iVar10 < 1) {
          iVar5 = -0x5b05b0;
        }
        iVar11 = -0x10000000;
        if (0 < iVar10) {
          iVar11 = 0x5b05b0;
        }
        iVar1 = iVar10;
        if (iVar5 <= iVar10) {
          iVar1 = iVar5;
        }
        if (iVar11 <= iVar10) {
          iVar11 = iVar1;
        }
        iVar11 = iVar11 + *(int *)(lVar6 + 4);
      }
      *(int *)(lVar6 + 4) = iVar11;
      iVar11 = *(int *)(param_1 + 0x178);
      goto LAB_0249f538;
    }
  }
  else {
LAB_0249f538:
    if (iVar11 != 0) {
      return;
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar6 == 0) || (*(int *)(lVar6 + 0x15c) == 0)) {
LAB_0249f598:
    if ((*(char *)(param_1 + 0x2264) == '\0') && (*(int *)(DAT_054f5738 + 0x11c4) == 0))
    goto LAB_0249f5b4;
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar4 = (byte *)(lVar6 + 0x158);
    }
    bVar13 = *(byte *)(param_1 + 0x1ee8);
    bVar12 = *pbVar4;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    if (bVar12 == bVar13) goto LAB_0249f598;
LAB_0249f5b4:
    if ((*(char *)(param_1 + 0x17ac) != '\0') ||
       (local_5c = 0.0, (*(uint *)(param_1 + 0xec8) & 1) == 0)) {
      if ((lVar6 == 0) || (*(int *)(lVar6 + 0x15c) == 0)) {
LAB_0249f62c:
        if ((*(char *)(param_1 + 0x2264) != '\0') || (*(int *)(DAT_054f5738 + 0x11c4) != 0))
        goto LAB_0249f648;
      }
      else {
        pbVar4 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar6 + 0x15c) != 0) {
          pbVar4 = (byte *)(lVar6 + 0x158);
        }
        bVar13 = *(byte *)(param_1 + 0x1ee8);
        bVar12 = *pbVar4;
        if (7 < bVar12) {
          bVar12 = 0xff;
        }
        if (7 < bVar13) {
          bVar13 = 0xff;
        }
        if (bVar12 == bVar13) goto LAB_0249f62c;
      }
      local_5c = 2.03188e-43;
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
      *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
      *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
      *(undefined8 *)(param_1 + 0x1890) = 0;
      *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
      *(undefined8 *)(param_1 + 0x1898) = 0;
      *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
      lVar6 = 0;
      if (*(long *)(param_1 + 0x70) != 0) {
        lVar6 = *(long *)(param_1 + 0x70) + 0x278;
      }
      goto LAB_0249f8e4;
    }
  }
LAB_0249f648:
  pfVar7 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar7 = (float *)(param_1 + 0xeec);
  }
  fVar15 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
  if (fVar15 < *pfVar7) {
    return;
  }
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
  fVar14 = *pfVar7;
  lVar6 = FUN_0251e98c(1);
  pfVar7 = (float *)(**(code **)(*(long *)(lVar6 + 0x120) + 0xf0))(lVar6 + 0x120);
  fVar14 = (fVar15 - *pfVar7) / (1.0 - fVar14);
  fVar15 = 0.9999;
  if (fVar14 <= 0.9999) {
    fVar15 = fVar14;
  }
  if (fVar14 < 0.0) {
    return;
  }
  if (fVar15 <= 0.0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x70);
  uVar8 = 0;
  lVar6 = 0;
  if (lVar9 != 0) {
    uVar8 = 0;
    if (*(uint *)(lVar9 + 0x280) < 0x149) {
      uVar8 = *(uint *)(lVar9 + 0x280);
    }
    lVar6 = lVar9 + 0x278;
  }
  if (uVar8 == 0xc) {
    return;
  }
  local_5c = 1.68156e-44;
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
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
LAB_0249f8e4:
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1880) = 0;
  FUN_03ebb160(lVar6,local_5c);
  return;
}

