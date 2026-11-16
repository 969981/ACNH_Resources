
void FUN_028a9830(long param_1,long param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  void *pvVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 local_16d8;
  undefined2 local_16d0;
  undefined1 local_16ce;
  undefined1 local_16cd;
  undefined4 local_16cc;
  undefined8 local_16c8;
  undefined4 local_16c0;
  undefined4 local_16bc;
  uint local_16b8;
  uint uStack_16b4;
  uint local_16b0;
  uint uStack_16ac;
  undefined **local_16a8;
  uint *apuStack_16a0 [234];
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  undefined **local_f38;
  undefined4 local_f30;
  undefined4 local_f2c;
  undefined8 local_f28;
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  uint local_7c8;
  uint local_7c4;
  undefined8 local_7c0;
  undefined8 *local_7b8;
  undefined4 local_7b0;
  undefined1 local_7ac [31];
  undefined1 local_78d;
  
  local_7c4 = param_3;
  local_7c8 = nn::time::GetDayOfWeek
                        ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                         (int)*(char *)(param_2 + 0x13));
  puVar9 = PTR_DAT_04bc0068;
  puVar8 = PTR_DAT_04bb43c0;
  lVar19 = 0;
  lVar20 = *(long *)PTR_DAT_04bb43c0;
  ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  do {
    lVar21 = param_1 + (ulong)local_7c8 * 0x200;
    if (6 < local_7c8) {
      lVar21 = param_1;
    }
    puVar2 = (undefined4 *)(lVar21 + lVar19);
    uVar10 = FUN_0277d6c4(puVar2);
    lVar21 = *(long *)puVar8;
    if (lVar21 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_f30 = *puVar2;
        local_f2c = puVar2[1];
        local_f28 = 0;
        local_f38 = ppuVar1;
        uVar10 = FUN_0277d6c4(&local_f30);
        lVar20 = *(long *)puVar8;
        if (lVar20 == 0) {
LAB_028a9a2c:
          uVar16 = 0;
        }
        else {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar10) ||
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_028a9a2c;
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar10 = FUN_0277d6c4(puVar2);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          lVar20 = *(long *)puVar8;
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar10) ||
             (puVar17 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar10 * 8),
             puVar17 == (uint *)0x0)) goto LAB_028a9a2c;
          uVar10 = *puVar17;
          uVar16 = 0;
          if ((uVar10 != 0) && (puVar17 != (uint *)(ulong)uVar10)) {
            puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar10);
            uVar16 = 0;
            if (*puVar18 != 0) {
              uVar10 = puVar18[1];
              if ((uVar10 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar18 + lVar21 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar21 != 0) {
                  uVar16 = 0;
                  if ((ulong)uVar10 != 0) {
                    uVar16 = (uint)((ulong)((long)puVar17 - lVar21) / (ulong)uVar10);
                  }
                  if (*puVar18 <= uVar16) {
                    uVar16 = 0xffffffff;
                  }
                  if ((uVar16 < *(uint *)puVar9) &&
                     (uVar16 = (uint)*(ushort *)(*(long *)(puVar9 + 8) + (long)(int)uVar16 * 2),
                     uVar16 < 0x13e)) goto LAB_028a9a30;
                }
              }
              goto LAB_028a9a2c;
            }
          }
        }
LAB_028a9a30:
        local_16a8 = (undefined **)CONCAT44(local_16a8._4_4_,uVar16);
        lVar21 = lVar20;
        if (uVar16 == local_7c4) {
          return;
        }
      }
    }
    lVar20 = lVar21;
    lVar19 = lVar19 + 8;
  } while (lVar19 != 0x200);
  ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f38 = ppuVar1;
  memset(&local_f30,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_7dc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar11,0,0x754);
  apuStack_16a0[0] = &local_7c4;
  local_16a8 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_f38,&local_16a8);
  local_16a8 = ppuVar1;
  memset(apuStack_16a0,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_f4c = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
  local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
  pvVar11 = (void *)(*(code *)local_16a8[3])(&local_16a8);
  memset(pvVar11,0,0x754);
  local_16d8 = (undefined *)((ulong)local_16d8._4_4_ << 0x20);
  local_7c0 = &PTR_FUN_049ff448;
  local_7b8 = &local_16d8;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  local_7c0 = &PTR_FUN_049ff448;
  local_16d8 = (undefined *)CONCAT44(local_16d8._4_4_,0x45);
  local_7b8 = &local_16d8;
  FUN_008a1ba0(&local_16a8,&local_7c0);
  pvVar11 = (void *)(*(code *)local_f38[3])(&local_f38);
  lVar20 = (*(code *)local_16a8[4])(&local_16a8);
  for (lVar19 = 0;
      *(uint *)(local_7ac + lVar19 + -0x14) =
           *(uint *)(lVar20 + lVar19) & *(uint *)((long)pvVar11 + lVar19), lVar19 != 0x750;
      lVar19 = lVar19 + 8) {
    *(uint *)(local_7ac + lVar19 + -0x10) =
         *(uint *)(lVar20 + lVar19 + 4) & *(uint *)((long)pvVar11 + lVar19 + 4);
  }
  memcpy(pvVar11,&local_7c0,0x754);
  lVar19 = *(long *)puVar8;
  *(uint *)((long)pvVar11 + 0x750) = *(uint *)((long)pvVar11 + 0x750) & 0xffffff;
  uVar10 = FUN_0277d6c4(param_1 + 0x16d0);
  if (*(long *)puVar8 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar19 = (*(code *)local_f38[3])(&local_f38);
      uVar10 = FUN_0277d6c4(param_1 + 0x16d0);
      if ((uVar10 >> 3 & 0x1fff) < 0x753) {
        lVar20 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
        *(uint *)(lVar19 + lVar20) =
             *(uint *)(lVar19 + lVar20) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar19 = *(long *)puVar8;
  uVar10 = FUN_0277d6c4(param_1 + 0x16d8);
  if (*(long *)puVar8 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar19 = (*(code *)local_f38[3])(&local_f38);
      uVar10 = FUN_0277d6c4(param_1 + 0x16d8);
      if ((uVar10 >> 3 & 0x1fff) < 0x753) {
        lVar20 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
        *(uint *)(lVar19 + lVar20) =
             *(uint *)(lVar19 + lVar20) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar19 = *(long *)puVar8;
  uVar10 = FUN_0277d6c4(param_1 + 0x16e0);
  if (*(long *)puVar8 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar19 = (*(code *)local_f38[3])(&local_f38);
      uVar10 = FUN_0277d6c4(param_1 + 0x16e0);
      if ((uVar10 >> 3 & 0x1fff) < 0x753) {
        lVar20 = (ulong)((uVar10 & 0xffff) >> 5) * 4;
        *(uint *)(lVar19 + lVar20) =
             *(uint *)(lVar19 + lVar20) & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  puVar17 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar10 = *puVar17 ^ *puVar17 << 0xb;
  uVar3 = puVar17[3];
  *puVar17 = puVar17[1];
  puVar17[1] = puVar17[2];
  uVar16 = uVar10 ^ uVar3;
  uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar16;
  puVar17[2] = uVar3;
  puVar17[3] = uVar10;
  uVar10 = (uVar10 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
  uVar16 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  uVar3 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
  uVar6 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  local_16b8 = uVar10;
  uStack_16b4 = uVar16;
  local_16b0 = uVar3;
  uStack_16ac = uVar6;
  lVar20 = (*(code *)local_f38[4])(&local_f38);
  lVar19 = 0;
  iVar14 = 0;
  do {
    puVar17 = (uint *)(lVar20 + lVar19);
    lVar19 = lVar19 + 4;
    uVar15 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
    uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
    uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
    uVar15 = uVar15 + (uVar15 >> 8);
    iVar14 = (uVar15 + (uVar15 >> 0x10) & 0x3f) + iVar14;
  } while (lVar19 != 0x754);
  if (iVar14 == 0) {
    local_16c0 = *(undefined4 *)PTR_DAT_04bb37e0;
    local_16bc = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  }
  else {
    lVar20 = (*(code *)local_f38[4])(&local_f38);
    lVar19 = 0;
    uVar15 = 0;
    do {
      puVar17 = (uint *)(lVar20 + lVar19);
      lVar19 = lVar19 + 4;
      uVar7 = *puVar17 - (*puVar17 >> 1 & 0x55555555);
      uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
      uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
      uVar7 = uVar7 + (uVar7 >> 8);
      uVar15 = (uVar7 + (uVar7 >> 0x10) & 0x3f) + uVar15;
    } while (lVar19 != 0x754);
    uVar10 = uVar10 ^ uVar10 * 0x800;
    uStack_16ac = uVar10 >> 8 ^ uVar6 >> 0x13 ^ uVar10 ^ uVar6;
    local_16b8 = uVar16;
    uStack_16b4 = uVar3;
    local_16b0 = uVar6;
    FUN_00889f80(&local_16c0,&local_f38,(int)((ulong)uStack_16ac * (ulong)uVar15 >> 0x20) + 1);
    FUN_01a4c66c(&local_16b8,&local_16c0);
  }
  lVar19 = *(long *)puVar8;
  uVar10 = FUN_0277d6c4(&local_16c0);
  if (*(long *)puVar8 == 0) {
    return;
  }
  lVar19 = *(long *)(lVar19 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
  if (*(uint *)(lVar19 + 0x1d8) <= uVar10) {
    return;
  }
  if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x13) & 3) == 0) {
    FUN_01af1d20(&local_16c0,0);
  }
  lVar19 = param_1 + (ulong)local_7c8 * 0x200;
  if (6 < local_7c8) {
    lVar19 = param_1;
  }
  *(undefined2 *)(lVar19 + 0x10) = (undefined2)local_16c0;
  *(undefined1 *)(lVar19 + 0x12) = local_16c0._2_1_;
  *(undefined1 *)(lVar19 + 0x13) = local_16c0._3_1_;
  *(undefined4 *)(lVar19 + 0x14) = local_16bc;
  lVar19 = param_1 + 0xe00 + (ulong)local_7c8 * 0x100;
  if (6 < local_7c8) {
    lVar19 = param_1 + 0xe00;
  }
  *(undefined4 *)(lVar19 + 8) = 1;
  lVar19 = param_1 + 0x1500 + (ulong)local_7c8 * 0x40;
  if (6 < local_7c8) {
    lVar19 = param_1 + 0x1500;
  }
  *(undefined1 *)(lVar19 + 2) = 1;
  *(undefined2 *)(param_1 + 0x16d0) = *(undefined2 *)(param_1 + 0x16d8);
  *(undefined2 *)(param_1 + 0x16d2) = *(undefined2 *)(param_1 + 0x16da);
  *(undefined4 *)(param_1 + 0x16d4) = *(undefined4 *)(param_1 + 0x16dc);
  uVar5 = *(undefined2 *)(param_1 + 0x16e0);
  *(undefined2 *)(param_1 + 0x16e0) = (undefined2)local_16c0;
  *(undefined2 *)(param_1 + 0x16d8) = uVar5;
  uVar5 = *(undefined2 *)(param_1 + 0x16e2);
  *(undefined1 *)(param_1 + 0x16e2) = local_16c0._2_1_;
  *(undefined1 *)(param_1 + 0x16e3) = local_16c0._3_1_;
  *(undefined2 *)(param_1 + 0x16da) = uVar5;
  uVar4 = *(undefined4 *)(param_1 + 0x16e4);
  *(undefined4 *)(param_1 + 0x16e4) = local_16bc;
  *(undefined4 *)(param_1 + 0x16dc) = uVar4;
  lVar19 = *(long *)puVar8;
  local_16d0 = (undefined2)local_16c0;
  local_16ce = local_16c0._2_1_;
  local_16cd = local_16c0._3_1_;
  local_16cc = local_16bc;
  local_16c8 = 0;
  local_16d8 = PTR_DAT_04bc0510 + 0x10;
  uVar10 = FUN_0277d6c4(&local_16d0);
  puVar17 = (uint *)0x0;
  if (*(long *)puVar8 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
      puVar17 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
        lVar19 = *(long *)PTR_DAT_04bc0428;
        uVar10 = FUN_0277d6c4(&local_16c0);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if (*(uint *)(lVar19 + 0x1d8) <= uVar10) goto LAB_028aa130;
        puVar17 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8);
      }
    }
    else {
LAB_028aa130:
      puVar17 = (uint *)0x0;
    }
  }
  local_78d = 0;
  local_7b8 = (undefined8 *)local_7ac;
  local_7ac[0] = 0;
  local_7b0 = 0x20;
  local_7c0 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
  if (local_7c8 < 7) {
    puVar12 = *(undefined8 **)(PTR_s_Sunday_04bc3898 + (ulong)local_7c8 * 8 + 0x40);
  }
  else {
    puVar12 = &DAT_0407ebb1;
  }
  if (puVar17 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar16 = *puVar17;
    uVar10 = 0;
    if ((uVar16 != 0) && (puVar17 != (uint *)(ulong)uVar16)) {
      puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar16);
      uVar10 = 0;
      if (*puVar18 != 0) {
        uVar10 = puVar18[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar19 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar18 + lVar19 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar19 != 0) {
            uVar16 = 0;
            if ((ulong)uVar10 != 0) {
              uVar16 = (uint)((ulong)((long)puVar17 - lVar19) / (ulong)uVar10);
            }
            if (*puVar18 <= uVar16) {
              uVar16 = 0xffffffff;
            }
            if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2),
               uVar10 < 0xbd)) goto LAB_028aa224;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_028aa224:
  if (uVar10 < 0xbd) {
    puVar13 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar10 * 8 + 0x830);
  }
  else {
    puVar13 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_7c0,"Shop.Zakka.%s.%s",puVar12,puVar13);
  return;
}

