
undefined1 FUN_024b1140(long param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  float *pfVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  uint *puVar13;
  int iVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_c4;
  float fStack_c0;
  float local_bc;
  undefined *local_b8;
  short local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined8 local_a8;
  short local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  short local_94 [2];
  undefined1 local_90;
  float local_8c;
  float fStack_88;
  float local_84;
  
  puVar2 = PTR_DAT_04bb43c0;
  if (((*(int *)(param_1 + 0x178) != 0) || (*(long *)(param_1 + 0x60) == 0)) ||
     (lVar10 = *(long *)(*(long *)(param_1 + 0x60) + 0x1480), *(char *)(lVar10 + 0xee) == '\0')) {
    return 0;
  }
  lVar10 = lVar10 + ((ulong)*(uint *)(lVar10 + 0x10) & 1) * 0x20;
  local_b0 = *(short *)(lVar10 + 0x14);
  local_ae = *(undefined1 *)(lVar10 + 0x16);
  local_ad = *(undefined1 *)(lVar10 + 0x17);
  local_ac = *(undefined4 *)(lVar10 + 0x18);
  if (local_b0 == -2) {
    return 0;
  }
  local_b8 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = 0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  local_9c = local_b0;
  local_9a = local_ae;
  local_99 = local_ad;
  local_98 = local_ac;
  uVar4 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar2 == 0) {
LAB_024b1330:
    local_8c = 2.63444e-43;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_024b1330;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(&local_9c);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar4) ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8),
       puVar11 == (uint *)0x0)) goto LAB_024b1330;
    uVar4 = *puVar11;
    local_8c = 0.0;
    if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
      puVar13 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
      local_8c = 0.0;
      if (*puVar13 != 0) {
        uVar4 = puVar13[1];
        if ((uVar4 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar13 + lVar10 + (ulong)(ushort)puVar13[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar4 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar4);
            }
            if (*puVar13 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_8c = (float)(uint)*(ushort *)
                                         (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
               (uint)local_8c < 0xbd)) goto LAB_024b1334;
          }
        }
        local_8c = 0.0;
      }
    }
  }
LAB_024b1334:
  if (local_8c != 3.36312e-44) {
    return 0;
  }
  pfVar6 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  fVar15 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x68) + 0x2b4));
  fVar16 = sinf(fVar15 * 1.4629181e-09);
  fVar15 = cosf(fVar15 * 1.4629181e-09);
  fVar19 = fVar16 * 0.0;
  local_8c = *pfVar6 + fVar19 * 0.0 + fVar15 * 0.0 + (fVar16 + 0.0) * 29.9;
  fStack_88 = pfVar6[1] + (fVar19 * 0.0 + 1.0) * 0.0 + fVar15 * 0.0 * 0.0 + fVar19 * 29.9;
  local_84 = (fVar15 * 0.0 * 0.0 - fVar16 * 0.0) + fVar15 * 29.9 + pfVar6[2];
  fVar15 = (float)FUN_016e37dc(&local_8c);
  local_c4 = local_8c;
  local_bc = local_84;
  if ((param_2 & 1) != 0) {
    return 1;
  }
  fStack_c0 = fVar15;
  pfVar6 = (float *)(**(code **)(**(long **)(param_1 + 0x68) + 0xf8))();
  if (fVar15 < pfVar6[1] + 0.6) {
    uVar7 = FUN_024b5340(&local_c4);
    puVar2 = PTR_DAT_04bb2720;
    if ((uVar7 & 1) != 0) {
      fVar18 = local_c4 - *pfVar6;
      fVar20 = local_bc - pfVar6[2];
      fVar19 = SQRT(fVar18 * fVar18 + 0.0 + fVar20 * fVar20);
      fVar17 = 1.0 / fVar19;
      fVar16 = fVar20;
      fVar15 = fVar18;
      if (0.0 < fVar19) {
        fVar16 = fVar20 * fVar17;
        fVar15 = fVar18 * fVar17;
      }
      fVar21 = 0.0;
      if (0.0 < fVar19) {
        fVar21 = fVar17 * 0.0 * 5.0;
      }
      iVar9 = (int)(SQRT(fVar20 * fVar20 + fVar18 * fVar18) / 5.0);
      if (iVar9 < 2) {
        fVar19 = 2.08793e-43;
      }
      else {
        fVar17 = pfVar6[1];
        iVar14 = 0;
        fVar19 = 2.08793e-43;
        do {
          fVar18 = (float)iVar14;
          lVar10 = *(long *)puVar2;
          local_8c = fVar15 * 5.0 * fVar18 + *pfVar6;
          fStack_88 = fVar17 + fVar21 * fVar18;
          local_84 = fVar16 * 5.0 * fVar18 + pfVar6[2];
          if ((lVar10 == 0) || (*(long *)(lVar10 + 0x330) == 0)) {
            puVar8 = &DAT_055c04a0;
          }
          else {
            puVar8 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
            iVar5 = FUN_006bd550(*puVar8,0);
            puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar5 != 0x758f7eaf) {
              puVar8 = &DAT_055c04a0;
            }
          }
          if (DAT_055c1b60 != &DAT_055c1b58) {
            local_94[0] = 0;
            puVar12 = DAT_055c1b60;
            do {
              if (*(int *)(puVar12 + -1) == *(int *)(puVar8 + 7)) {
                if (local_94[0] != -1) goto LAB_024b15c4;
                break;
              }
              puVar12 = (undefined8 *)puVar12[1];
              local_94[0] = local_94[0] + 1;
            } while (puVar12 != &DAT_055c1b58);
          }
          local_94[0] = 0;
LAB_024b15c4:
          local_94[1] = 0;
          local_90 = 1;
          fVar18 = (float)FUN_016e06d0(0,&local_8c,0,0,local_94,0);
          fVar17 = pfVar6[1];
          if (10.0 < fVar18 - fVar17) goto LAB_024b160c;
          bVar3 = iVar14 != iVar9 + -2;
          iVar14 = iVar14 + 1;
        } while (bVar3);
      }
      goto LAB_024b1610;
    }
  }
LAB_024b160c:
  fVar19 = 2.10195e-43;
LAB_024b1610:
  if (0x148 < (uint)fVar19) {
    return 1;
  }
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
  lVar10 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar10 = *(long *)(param_1 + 0x70) + 0x278;
  }
  local_8c = fVar19;
  FUN_03ebb160(lVar10,fVar19);
  return 1;
}

