
void FUN_01e2b514(long param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  ushort uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  short sVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined8 *puVar22;
  long lVar23;
  int *piVar24;
  ushort *puVar25;
  undefined4 *puVar26;
  uint *puVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  undefined8 local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  
  puVar27 = (uint *)(param_2 + 0xc);
  uVar17 = *puVar27;
  if (((uVar17 < 10) && ((&DAT_053fee41)[(ulong)uVar17 * 0xba0] != '\0')) &&
     ((&DAT_053fede8)[(ulong)uVar17 * 0x174] != 0)) {
    uVar17 = *(uint *)((&DAT_053fede8)[(ulong)uVar17 * 0x174] + 4);
  }
  else {
    uVar17 = 0x22;
  }
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  uVar20 = FUN_02b67a30(&local_90);
  if (((uVar20 & 1) == 0) ||
     (uVar20 = FUN_02664820((ulong)local_90 & 0xffffffff), (uVar20 & 1) == 0)) goto LAB_01e2b9d0;
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  uVar20 = FUN_02b67a30(&local_90,*puVar27);
  if (((uVar20 & 1) != 0) &&
     (uVar20 = FUN_02664300((ulong)local_90 & 0xffffffff), (uVar20 & 1) != 0)) {
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "FinishiPC1Prologue";
    uVar20 = FUN_0273f0a0(&local_90);
    if ((uVar20 & 1) == 0) goto LAB_01e2b9d0;
  }
  if ((uVar17 < 0x22) && ((1L << ((ulong)uVar17 & 0x3f) & 0x20403c000U) != 0)) {
    if ((param_5 & 1) != 0) {
      *(undefined1 *)(param_2 + 300) = 0;
      *(undefined4 *)(param_2 + 0x120) = 1;
      return;
    }
    iVar15 = *(int *)(param_2 + 0x48);
    iVar19 = *(int *)(param_2 + 0x40);
    if (iVar19 <= iVar15) {
      if (0 < iVar15) {
        iVar4 = 0;
        if (*(int *)(param_2 + 0x44) + 1 < iVar19) {
          iVar4 = *(int *)(param_2 + 0x44) + 1;
        }
        *(int *)(param_2 + 0x44) = iVar4;
        *(int *)(param_2 + 0x48) = iVar15 + -1;
        iVar15 = iVar15 + -1;
      }
      if (iVar19 <= iVar15) {
        return;
      }
    }
    *(int *)(param_2 + 0x48) = iVar15 + 1;
    iVar15 = *(int *)(param_2 + 0x44) + iVar15;
    iVar4 = 0;
    if (iVar19 <= iVar15) {
      iVar4 = iVar19;
    }
    puVar22 = (undefined8 *)(*(long *)(param_2 + 0x38) + (long)(iVar15 - iVar4) * 0x14);
    *(undefined2 *)(puVar22 + 2) = 0;
    *puVar22 = 0;
    puVar22[1] = 1;
    return;
  }
  local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
  uVar20 = FUN_02b67a30(&local_90,*puVar27);
  if (((uVar20 & 1) != 0) &&
     (uVar20 = FUN_02664300((ulong)local_90 & 0xffffffff), (uVar20 & 1) != 0)) {
    lVar23 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x70);
    if (lVar23 != 0) {
      fVar28 = *(float *)(lVar23 + 0x108) + -0.5;
      fVar32 = 0.0;
      if (0.0 <= fVar28) {
        fVar32 = fVar28;
      }
      fVar28 = *(float *)(lVar23 + 0x104) + fVar32 * 2.0;
      fVar32 = 1.0;
      if (fVar28 <= 1.0) {
        fVar32 = fVar28;
      }
      fVar29 = 0.0;
      if (0.0 <= fVar28) {
        fVar29 = fVar32;
      }
      if (0.5 <= fVar29) goto LAB_01e2b720;
    }
    uVar20 = FUN_021e6fa0();
    if ((uVar20 & 1) == 0) goto LAB_01e2b9d0;
  }
LAB_01e2b720:
  puVar12 = PTR_DAT_04bb2020;
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_98 = "NnpcHouseBuiltToday";
  iVar15 = FUN_027490f0(*puVar27,&local_a0);
  puVar13 = PTR_DAT_04bb32f0;
  if (((iVar15 == 0) || (uVar16 = FUN_00883550(*(undefined8 *)PTR_DAT_04bb32f0), uVar16 < 2)) ||
     (uVar16 = FUN_00883068(*(undefined8 *)puVar13), uVar16 < 2)) {
LAB_01e2b79c:
    lVar23 = FUN_0265c2a0(*puVar27);
    if (lVar23 != 0) {
      if ((*(long **)(lVar23 + 0x28) == (long *)0x0) ||
         (puVar22 = (undefined8 *)**(long **)(lVar23 + 0x28), puVar22 == (undefined8 *)0x0)) {
        cVar5 = *(char *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8) + 0x1267a);
      }
      else {
        uVar20 = (**(code **)*puVar22)();
        cVar5 = *(char *)(*(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8) + 0x1267a);
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar23 + 0x28) != 0)) &&
           (puVar22 = *(undefined8 **)(*(long *)(lVar23 + 0x28) + 8), puVar22 != (undefined8 *)0x0))
        {
          (**(code **)*puVar22)();
        }
      }
      if (cVar5 == '\x02') goto LAB_01e2b830;
    }
    uVar20 = FUN_021eb720(puVar27);
    puVar13 = PTR_DAT_04bb27d0;
    if ((uVar20 & 1) != 0) goto LAB_01e2b830;
    lVar23 = *(long *)(*(long *)PTR_DAT_04bb27d0 + 0x10);
    if (((lVar23 != 0) && ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) & 0xfffffffe) == 2)) &&
       ((*(int *)(lVar23 + 0x3e4) == 1 && (uVar17 == 0x1b)))) {
LAB_01e2b9d0:
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
      goto LAB_01e2b9d4;
    }
    if (uVar17 - 2 < 2) {
      if (((*(long *)PTR_DAT_04bb27c0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb27c0 + 0x5e8) == 1))
         && (uVar17 = *puVar27, uVar17 < 10)) {
        local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar17);
        lVar23 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar17 * 0x15;
        if (0x6c < uVar17) {
          lVar23 = *(long *)PTR_DAT_04bb4760;
        }
        uVar1 = (ushort)*(byte *)(lVar23 + 4) | (*(byte *)(lVar23 + 5) & 3) << 8;
        if (0x1ff < uVar1) {
          uVar1 = uVar1 | 0xfc00;
        }
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x6622bd46) {
          puVar25 = (ushort *)PTR_DAT_04bbdeb0;
        }
        else {
          puVar25 = (ushort *)PTR_DAT_04bb6298;
        }
        if (uVar1 == *puVar25) {
          return;
        }
      }
      goto LAB_01e2b9d0;
    }
    if (uVar17 == 1) {
      if (*(int *)(param_2 + 0x48) < 1) {
        piVar24 = (int *)PTR_DAT_04bc15a0;
      }
      else {
        iVar19 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
        iVar15 = 0;
        if (*(int *)(param_2 + 0x40) <= iVar19) {
          iVar15 = *(int *)(param_2 + 0x40);
        }
        piVar24 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar19 - iVar15) * 0x14 + 8);
      }
      if (*piVar24 == 1) {
        return;
      }
    }
    if (*(int *)(param_2 + 0x1d8) != 2) {
      ppuVar21 = (undefined **)(param_2 + 0x1d8);
      param_3 = 0;
      goto LAB_01e2b9e8;
    }
    local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
    bVar6 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    if (bVar6 < 5) {
      local_a4 = 5;
    }
    else if (bVar6 < 8) {
      local_a4 = 0;
    }
    else if (bVar6 < 0xc) {
      local_a4 = 1;
    }
    else if (bVar6 < 0x10) {
      local_a4 = 2;
    }
    else {
      local_a4 = 3;
      if (0x12 < bVar6) {
        local_a4 = 4;
      }
    }
    iVar15 = FUN_0265b0d0(1);
    uVar17 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
    local_a8 = 2;
    if ((uVar17 & 0xfffffffd) != 5) {
      local_a8 = (uint)(3 < uVar17);
    }
    piVar24 = &DAT_04178c8c + (ulong)local_a8 * 0x12;
    if (2 < local_a8) {
      piVar24 = &DAT_04178c8c;
    }
    piVar2 = piVar24 + (ulong)local_a4 * 3;
    if (5 < local_a4) {
      piVar2 = piVar24;
    }
    iVar19 = *piVar2;
    puVar26 = &DAT_04178c8c + (ulong)local_a8 * 0x12;
    if (2 < local_a8) {
      puVar26 = &DAT_04178c8c;
    }
    puVar3 = puVar26 + (ulong)local_a4 * 3;
    if (5 < local_a4) {
      puVar3 = puVar26;
    }
    iVar4 = puVar3[1];
    bVar6 = *(byte *)(**(long **)puVar13 + 0x476);
    uVar20 = FUN_021e6ce0();
    puVar13 = PTR_DAT_04bb32f0;
    if ((uVar20 & 1) == 0) {
      fVar32 = (float)(iVar19 * iVar15) / 10.0;
      fVar28 = (float)(iVar4 * iVar15) / 10.0;
      pcStack_88 = "Countdown";
      local_90 = puVar12 + 0x10;
      uVar20 = FUN_0087c154(*(undefined8 *)PTR_DAT_04bb32f0,&local_90);
      if ((uVar20 & 1) != 0) {
        fVar29 = 0.6;
        if ((char)*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) < '\x13') {
          fVar29 = -1.0;
        }
        fVar30 = 0.7;
        if (0xffffffed < *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x17) {
          fVar30 = fVar29;
        }
        if (fVar30 < 0.0) goto LAB_01e2bcf4;
        local_90 = puVar12 + 0x10;
        pcStack_88 = "CountdownFieldNpc";
        sVar14 = FUN_02196ed0(puVar27,&local_90);
        bVar11 = false;
        bVar8 = true;
LAB_01e2bbec:
        bVar7 = sVar14 != 0;
        fVar32 = (float)(int)(fVar30 * (float)iVar15 + 0.5);
        fVar28 = (float)iVar15 - fVar32;
        bVar10 = true;
        goto LAB_01e2bd08;
      }
      pcStack_88 = "Fireworks";
      local_90 = puVar12 + 0x10;
      uVar20 = FUN_0087c154(*(undefined8 *)puVar13,&local_90);
      if ((uVar20 & 1) != 0) {
        fVar29 = 0.7;
        if (*(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) != '\x11') {
          fVar29 = -1.0;
        }
        fVar30 = 0.8;
        if (*(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) < '\x12') {
          fVar30 = fVar29;
        }
        if (0.0 <= fVar30) {
          local_90 = puVar12 + 0x10;
          pcStack_88 = "FireworksFieldNpc";
          sVar14 = FUN_02196ed0(puVar27,&local_90);
          if ((sVar14 == 0) && (-1 < DAT_0540762c)) goto LAB_01e2b830;
          bVar8 = false;
          bVar11 = true;
          goto LAB_01e2bbec;
        }
LAB_01e2bcf4:
        bVar11 = false;
        bVar7 = false;
        bVar8 = false;
        bVar10 = false;
        goto LAB_01e2bd08;
      }
      uVar20 = FUN_021e6fa0();
      if (((uVar20 & 1) == 0) || (iVar15 = FUN_021b8d90(&DAT_053fe348), iVar15 < 1))
      goto LAB_01e2bcf4;
      uVar18 = FUN_021b8c00(&DAT_053fe348,puVar27);
      local_a0 = (undefined *)(CONCAT44(local_a0._4_4_,uVar18) & 0xffffffff00000001);
    }
    else {
      bVar11 = false;
      iVar19 = iVar15 + 3;
      if (-1 < iVar15) {
        iVar19 = iVar15;
      }
      bVar7 = false;
      bVar8 = false;
      fVar28 = (float)(iVar19 >> 2);
      bVar10 = true;
      fVar32 = (float)iVar15 - fVar28;
LAB_01e2bd08:
      if (DAT_05454074 == *puVar27 || DAT_05454078 == *puVar27) {
        bVar7 = true;
      }
      bVar9 = bVar10;
      if (1 < bVar6) {
        fVar29 = fVar32 + -5.0;
        if (0.0 < fVar29) {
          iVar15 = FUN_0208f030(param_1 + 0x580);
          fVar32 = 5.0 - (float)iVar15;
          fVar28 = fVar28 + fVar29 + (float)iVar15;
        }
        bVar9 = true;
      }
      local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000);
      local_ac = 0;
      FUN_01e2e494(&local_90,&local_ac);
      if (*(int *)(param_2 + 0x48) < 1) {
        piVar24 = (int *)PTR_DAT_04bc15a0;
      }
      else {
        iVar19 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
        iVar15 = 0;
        if (*(int *)(param_2 + 0x40) <= iVar19) {
          iVar15 = *(int *)(param_2 + 0x40);
        }
        piVar24 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar19 - iVar15) * 0x14 + 8);
      }
      iVar15 = *piVar24;
      local_b0 = iVar15;
      if (iVar15 == 2) {
        if (!bVar7) {
          fVar29 = 0.0;
          if (0.0 <= fVar28 - (float)local_ac) {
            fVar29 = fVar28 - (float)local_ac;
          }
          fVar30 = 0.0;
          if (0.0 <= fVar32 - (float)(int)local_90) {
            fVar30 = fVar32 - (float)(int)local_90;
          }
          puVar27 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar16 = puVar27[3];
          uVar17 = *puVar27 ^ *puVar27 << 0xb;
          *puVar27 = puVar27[1];
          puVar27[1] = puVar27[2];
          uVar17 = uVar17 >> 8 ^ uVar16 >> 0x13 ^ uVar17 ^ uVar16;
          puVar27[2] = uVar16;
          puVar27[3] = uVar17;
          if (fVar30 <= (fVar29 + fVar30) * ((float)(uVar17 >> 9 | 0x3f800000) + -1.0)) {
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
            if (!bVar10) goto LAB_01e2bfb4;
LAB_01e2bfa0:
            if (fVar28 <= (float)local_ac) {
LAB_01e2bfb0:
              local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
            }
            goto LAB_01e2bfb4;
          }
        }
        local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
        if (bVar9) {
          if (fVar32 <= (float)(int)local_90) {
LAB_01e2bedc:
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
          }
        }
      }
      else {
        iVar19 = (int)local_90;
        fVar29 = fVar32;
        if (iVar15 != 0) {
          iVar19 = local_ac;
          fVar29 = fVar28;
        }
        fVar30 = (float)iVar19;
        if (fVar29 <= fVar30) {
          if (bVar8) {
            if (fVar29 != fVar30) {
LAB_01e2bec8:
              bVar7 = (bool)(bVar7 ^ 1);
              if (fVar32 <= (float)(int)local_90) {
                bVar7 = true;
              }
              if (!bVar7) goto LAB_01e2bfb0;
              goto LAB_01e2bedc;
            }
          }
          else {
            if (!bVar11) {
              iVar19 = FUN_01e37a70(param_2,&local_b0);
              if ((iVar15 == 0) || (!bVar7)) {
                fVar29 = ((fVar30 - fVar29) / fVar29) * 0.9;
                fVar30 = (4.0 - (float)iVar19) / 3.0 + 1.0;
                fVar29 = (float)NEON_fminnm(fVar29 + fVar29 + 0.1,0x3f800000);
                if (fVar30 <= 1.0) {
                  fVar30 = 1.0;
                }
                fVar31 = (float)FUN_016b28a8();
                if (fVar29 * fVar30 <= fVar31) {
                  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,local_b0);
                  goto LAB_01e2bfb4;
                }
              }
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,(uint)(iVar15 == 0));
              bVar8 = false;
              if (iVar15 != 0) {
                bVar8 = bVar9;
              }
              if (bVar8) {
                if (fVar32 <= (float)(int)local_90) goto LAB_01e2bedc;
              }
              bVar10 = (bool)(bVar10 ^ 1);
              if (iVar15 != 0) {
                bVar10 = true;
              }
              if (!bVar10) goto LAB_01e2bfa0;
              goto LAB_01e2bfb4;
            }
            if (fVar29 != fVar30) goto LAB_01e2bec8;
            if (!bVar7) goto LAB_01e2bedc;
          }
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,iVar15);
      }
    }
LAB_01e2bfb4:
    ppuVar21 = (undefined **)&local_a0;
  }
  else {
    local_90 = puVar12 + 0x10;
    pcStack_88 = "Easter";
    uVar16 = FUN_008841f4(*(undefined8 *)puVar13,&local_90);
    if ((uVar16 < 2) || (uVar20 = FUN_021e6fa0(), (uVar20 & 1) != 0)) goto LAB_01e2b79c;
LAB_01e2b830:
    local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
LAB_01e2b9d4:
    ppuVar21 = &local_90;
  }
  param_3 = param_3 & 1;
LAB_01e2b9e8:
  FUN_01e37980(param_2,ppuVar21,param_3,param_4 & 1,param_5 & 1);
  return;
}

