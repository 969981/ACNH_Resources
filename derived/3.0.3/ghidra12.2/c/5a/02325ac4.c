
/* WARNING: Removing unreachable block (ram,0x02325c40) */
/* WARNING: Removing unreachable block (ram,0x02325d30) */

undefined8 FUN_02325ac4(long param_1)

{
  byte *pbVar1;
  bool bVar2;
  int iVar3;
  undefined2 *puVar4;
  ulong uVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte bVar12;
  byte bVar13;
  float fVar14;
  float fVar15;
  
  iVar3 = FUN_016f5c40();
  if (*(long *)(param_1 + 0x298) == 0) {
    puVar4 = &DAT_05586008;
  }
  else {
    lVar10 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
    puVar4 = (undefined2 *)(lVar10 + ((ulong)*(uint *)(lVar10 + 0x10) & 1) * 0x20 + 0x14);
  }
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
    bVar2 = true;
  }
  else {
    pbVar1 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    bVar13 = *(byte *)(param_1 + 0x1ee8);
    bVar12 = *pbVar1;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    bVar2 = bVar12 == bVar13;
  }
  uVar5 = FUN_016e7304(puVar4,bVar2,*(long *)(param_1 + 0x68) + 0x278);
  if (((uVar5 & 1) != 0) && (iVar3 != 0)) {
    lVar10 = *(long *)(param_1 + 0x68);
    uVar6 = (*(code *)DAT_053f6ff8[2])(&DAT_053f6ff8);
    if (((uVar6 & 1) == 0) ||
       (uVar6 = (*(code *)*DAT_053f6ff8)(&DAT_053f6ff8,lVar10 + 0x278,lVar10 + 0x2b0),
       (uVar6 & 1) == 0)) goto LAB_02325bd4;
    goto LAB_02325ec0;
  }
LAB_02325bd4:
  if (((*(char *)(param_1 + 0x17ac) == '\0') && ((*(uint *)(param_1 + 0xed0) & 1) != 0)) &&
     (uVar6 = FUN_023ddd7c(param_1,0), (uVar6 & 1) != 0)) {
LAB_02325e44:
    uVar8 = 1;
  }
  else {
    if ((uVar5 & 1) != 0) {
      if (iVar3 == 0x14) {
        if ((*(int *)(param_1 + 0x13d8) != 0) && (*(int *)(param_1 + 0x178) == 0)) {
          lVar11 = *(long *)(param_1 + 0x70);
          uVar9 = 0;
          lVar10 = 0;
          if (lVar11 != 0) {
            uVar9 = 0;
            if (*(uint *)(lVar11 + 0x280) < 0x149) {
              uVar9 = *(uint *)(lVar11 + 0x280);
            }
            lVar10 = lVar11 + 0x278;
          }
          if (uVar9 != 0xa0) {
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
            FUN_03ebb160(lVar10,0xa0);
          }
          goto LAB_02325e44;
        }
      }
      else if ((iVar3 == 0xb) && (*(int *)(param_1 + 0x13d8) != 0)) {
        pfVar7 = (float *)PTR_DAT_04bc3038;
        if (*(char *)(param_1 + 0x12f8) != '\0') {
          pfVar7 = (float *)(param_1 + 0xeec);
        }
        fVar15 = SQRT(pfVar7[1] * pfVar7[1] + *pfVar7 * *pfVar7);
        lVar10 = FUN_0251e98c(1);
        pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x120) + 0xf0))(lVar10 + 0x120);
        if (*pfVar7 <= fVar15) {
          lVar10 = FUN_0251e98c(1);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x120) + 0xf0))(lVar10 + 0x120);
          fVar14 = *pfVar7;
          lVar10 = FUN_0251e98c(1);
          pfVar7 = (float *)(**(code **)(*(long *)(lVar10 + 0x120) + 0xf0))(lVar10 + 0x120);
          fVar14 = (fVar15 - *pfVar7) / (1.0 - fVar14);
          fVar15 = 0.9999;
          if (fVar14 <= 0.9999) {
            fVar15 = fVar14;
          }
          if ((0.0 <= fVar14) && (0.0 < fVar15)) goto LAB_02325ec0;
        }
        if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
LAB_02325ce8:
          if ((*(char *)(param_1 + 0x2264) != '\0') || (*(int *)(DAT_054f5738 + 0x11c4) != 0))
          goto LAB_02325ec0;
        }
        else {
          pbVar1 = PTR_DAT_04bb32e0;
          if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
            pbVar1 = (byte *)(DAT_04cd19d8 + 0x158);
          }
          bVar13 = *(byte *)(param_1 + 0x1ee8);
          bVar12 = *pbVar1;
          if (7 < bVar12) {
            bVar12 = 0xff;
          }
          if (7 < bVar13) {
            bVar13 = 0xff;
          }
          if (bVar12 == bVar13) goto LAB_02325ce8;
        }
        uVar5 = FUN_0249ebcc(param_1,0);
        if ((uVar5 & 1) != 0) goto LAB_02325e44;
      }
    }
LAB_02325ec0:
    uVar8 = 0;
  }
  return uVar8;
}

