
void FUN_028791b0(short *param_1)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  short *psVar4;
  short *psVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  void *pvVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint *puVar21;
  uint *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  undefined8 uVar26;
  undefined8 local_17b8;
  uint local_17b0;
  int iStack_17ac;
  undefined8 local_17a8;
  undefined8 local_17a0;
  uint *local_1798;
  undefined **local_16a8;
  undefined8 *apuStack_16a0 [234];
  uint local_f4c;
  uint local_f48;
  uint local_f44;
  int local_f40;
  undefined **local_f38;
  undefined1 auStack_f30 [1876];
  uint local_7dc;
  uint local_7d8;
  uint local_7d4;
  int local_7d0;
  undefined8 local_7c8;
  char *local_7c0;
  undefined8 local_70;
  
  ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
  local_f38 = ppuVar1;
  memset(auStack_f30,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7dc = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_7d8 = (local_7dc ^ local_7dc >> 0x1e) * 0x6c078965 + 2;
  local_7d4 = (local_7d8 ^ local_7d8 >> 0x1e) * 0x6c078965 + 3;
  local_7d0 = (local_7d4 ^ local_7d4 >> 0x1e) * 0x6c078965 + 4;
  pvVar14 = (void *)FUN_01a451fc(&local_f38);
  memset(pvVar14,0,0x754);
  local_7c8 = (undefined **)CONCAT44(local_7c8._4_4_,0x4f);
  local_16a8 = &PTR_FUN_049ff448;
  apuStack_16a0[0] = &local_7c8;
  FUN_008a1ba0(&local_f38,&local_16a8);
  local_16a8 = ppuVar1;
  memset(apuStack_16a0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_f4c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_f48 = (local_f4c ^ local_f4c >> 0x1e) * 0x6c078965 + 2;
  local_f44 = (local_f48 ^ local_f48 >> 0x1e) * 0x6c078965 + 3;
  local_f40 = (local_f44 ^ local_f44 >> 0x1e) * 0x6c078965 + 4;
  pvVar14 = (void *)FUN_01a451fc(&local_16a8);
  memset(pvVar14,0,0x754);
  local_17a8 = (undefined *)CONCAT44(local_17a8._4_4_,0x66);
  local_7c8 = &PTR_FUN_049ff4e8;
  local_7c0 = (char *)&local_17a8;
  FUN_008a1ba0(&local_16a8,&local_7c8);
  pvVar14 = (void *)(*(code *)local_f38[3])(&local_f38);
  lVar15 = (*(code *)local_16a8[4])(&local_16a8);
  for (lVar19 = 0;
      *(uint *)((long)&local_7c8 + lVar19) =
           *(uint *)(lVar15 + lVar19) & *(uint *)((long)pvVar14 + lVar19), lVar19 != 0x750;
      lVar19 = lVar19 + 8) {
    *(uint *)((long)&local_7c8 + lVar19 + 4) =
         *(uint *)(lVar15 + lVar19 + 4) & *(uint *)((long)pvVar14 + lVar19 + 4);
  }
  memcpy(pvVar14,&local_7c8,0x754);
  puVar2 = PTR_DAT_04bb32f0;
  lVar19 = *(long *)PTR_DAT_04bb32e8;
  *(uint *)((long)pvVar14 + 0x750) = *(uint *)((long)pvVar14 + 0x750) & 0xffffff;
  local_7c0 = "Halloween";
  uVar23 = *(ulong *)(lVar19 + 0x4060);
  uVar26 = *(undefined8 *)puVar2;
  local_7c8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  uVar24 = uVar23 >> 0x10;
  uVar25 = uVar23 >> 0x18;
  uVar16 = uVar23 & 0xffffffff;
  cVar8 = (char)(uVar23 >> 0x20);
  uVar18 = uVar25 & 0xffffffff;
  uVar17 = uVar24 & 0xffffffff;
  local_17b8 = uVar23;
  if (cVar8 < '\x05') {
    lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_17b8);
    local_17a8 = (undefined *)(lVar19 + -0x15180);
    uVar16 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_17a8);
    uVar17 = uVar16 >> 0x10;
    uVar18 = uVar16 >> 0x18;
    local_17b8 = uVar16;
  }
  uVar9 = local_17b8 >> 0x30;
  local_17b8._0_6_ = CONCAT24(5,(uint)local_17b8);
  local_17b8 = CONCAT26((short)uVar9,(undefined6)local_17b8) & 0xff00ffffffffffff;
  uVar16 = FUN_0087a8f0(uVar26,&local_7c8,uVar16,uVar17,uVar18,0);
  if ((uVar16 & 1) == 0) {
    uVar26 = *(undefined8 *)puVar2;
    local_17a8 = PTR_DAT_04bb2020 + 0x10;
    local_17a0 = "Halloween";
    local_70 = uVar23;
    if (cVar8 < '\x05') {
      lVar19 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
      local_17b8 = lVar19 - 0x15180;
      local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_17b8);
      uVar23 = local_70 & 0xffffffff;
      uVar24 = local_70 >> 0x10;
      uVar25 = local_70 >> 0x18;
    }
    uVar16 = local_70;
    local_70._7_1_ = SUB81(uVar16,7);
    local_70._0_7_ = (uint7)CONCAT24(5,(undefined4)local_70);
    uVar16 = FUN_0087b260(uVar26,&local_17a8,uVar23 & 0xffffffff,uVar24 & 0xffffffff,
                          uVar25 & 0xffffffff,0);
    if ((uVar16 & 1) != 0) goto LAB_028794cc;
  }
  else {
LAB_028794cc:
    local_7c8 = (undefined **)0x33ab;
    FUN_0277d4ac(&local_7c8);
    if (*param_1 == -2) {
      lVar19 = 0;
LAB_028797e4:
      *(undefined4 *)(param_1 + lVar19 * 4) = (undefined4)local_7c8;
      *(undefined4 *)(param_1 + lVar19 * 4 + 2) = local_7c8._4_4_;
    }
    else {
      if (param_1[4] == -2) {
        lVar19 = 1;
        goto LAB_028797e4;
      }
      if (param_1[8] == -2) {
        lVar19 = 2;
        goto LAB_028797e4;
      }
      if (param_1[0xc] == -2) {
        lVar19 = 3;
        goto LAB_028797e4;
      }
      if (param_1[0x10] == -2) {
        lVar19 = 4;
        goto LAB_028797e4;
      }
      if (param_1[0x14] == -2) {
        lVar19 = 5;
        goto LAB_028797e4;
      }
      if (param_1[0x18] == -2) {
        lVar19 = 6;
        goto LAB_028797e4;
      }
      if (param_1[0x1c] == -2) {
        lVar19 = 7;
        goto LAB_028797e4;
      }
      if (param_1[0x20] == -2) {
        lVar19 = 8;
        goto LAB_028797e4;
      }
      if (param_1[0x24] == -2) {
        lVar19 = 9;
        goto LAB_028797e4;
      }
      if (param_1[0x28] == -2) {
        lVar19 = 10;
        goto LAB_028797e4;
      }
      if (param_1[0x2c] == -2) {
        lVar19 = 0xb;
        goto LAB_028797e4;
      }
      if (param_1[0x30] == -2) {
        lVar19 = 0xc;
        goto LAB_028797e4;
      }
      if (param_1[0x34] == -2) {
        lVar19 = 0xd;
        goto LAB_028797e4;
      }
      if (param_1[0x38] == -2) {
        lVar19 = 0xe;
        goto LAB_028797e4;
      }
      if (param_1[0x3c] == -2) {
        lVar19 = 0xf;
        goto LAB_028797e4;
      }
      if (param_1[0x40] == -2) {
        lVar19 = 0x10;
        goto LAB_028797e4;
      }
      if (param_1[0x44] == -2) {
        lVar19 = 0x11;
        goto LAB_028797e4;
      }
      if (param_1[0x48] == -2) {
        lVar19 = 0x12;
        goto LAB_028797e4;
      }
      if (param_1[0x4c] == -2) {
        lVar19 = 0x13;
        goto LAB_028797e4;
      }
      if (param_1[0x50] == -2) {
        lVar19 = 0x14;
        goto LAB_028797e4;
      }
      if (param_1[0x54] == -2) {
        lVar19 = 0x15;
        goto LAB_028797e4;
      }
      if (param_1[0x58] == -2) {
        lVar19 = 0x16;
        goto LAB_028797e4;
      }
      if (param_1[0x5c] == -2) {
        lVar19 = 0x17;
        goto LAB_028797e4;
      }
      if (param_1[0x60] == -2) {
        lVar19 = 0x18;
        goto LAB_028797e4;
      }
      if (param_1[100] == -2) {
        lVar19 = 0x19;
        goto LAB_028797e4;
      }
      if (param_1[0x68] == -2) {
        lVar19 = 0x1a;
        goto LAB_028797e4;
      }
      if (param_1[0x6c] == -2) {
        lVar19 = 0x1b;
        goto LAB_028797e4;
      }
      if (param_1[0x70] == -2) {
        lVar19 = 0x1c;
        goto LAB_028797e4;
      }
      if (param_1[0x74] == -2) {
        lVar19 = 0x1d;
        goto LAB_028797e4;
      }
      if (param_1[0x78] == -2) {
        lVar19 = 0x1e;
        goto LAB_028797e4;
      }
      if (param_1[0x7c] == -2) {
        lVar19 = 0x1f;
        goto LAB_028797e4;
      }
    }
    lVar19 = (*(code *)local_f38[3])(&local_f38);
    uVar11 = FUN_0277d6c4(&local_7c8);
    if ((uVar11 >> 3 & 0x1fff) < 0x753) {
      lVar15 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
      *(uint *)(lVar19 + lVar15) =
           *(uint *)(lVar19 + lVar15) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
    }
  }
  lVar19 = *(long *)PTR_DAT_04bb46b0;
  if (lVar19 == 0) {
LAB_02879898:
    lVar19 = 0;
  }
  else {
    puVar20 = *(undefined8 **)(lVar19 + 0x10);
    if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
      lVar15 = (**(code **)(*(long *)*puVar20 + 0x38))();
      lVar19 = 0;
      if (lVar15 != 0) {
        lVar19 = lVar15 + 0x70;
      }
    }
    else {
      if (puVar20 == (undefined8 *)0x0) goto LAB_02879898;
      lVar19 = 0;
      if ((long *)puVar20[0x26] != (long *)0x0) {
        lVar19 = (**(code **)(*(long *)puVar20[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar19 + 0x1bcf98) == (long *)0x0) ||
     (puVar20 = (undefined8 *)**(long **)(lVar19 + 0x1bcf98), puVar20 == (undefined8 *)0x0)) {
    FUN_010eee58(&local_7c8,*(long *)(lVar19 + 0x1bcf80) + *(long *)(lVar19 + 0x1bcf78));
  }
  else {
    uVar16 = (**(code **)*puVar20)();
    FUN_010eee58(&local_7c8,*(long *)(lVar19 + 0x1bcf80) + *(long *)(lVar19 + 0x1bcf78));
    if ((((uVar16 & 1) != 0) && (*(long *)(lVar19 + 0x1bcf98) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x1bcf98) + 8), puVar20 != (undefined8 *)0x0))
    {
      (**(code **)*puVar20)();
    }
  }
  puVar10 = PTR_DAT_04bb43c0;
  uVar11 = 0;
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar19 = *(long *)puVar10;
    puVar3 = (undefined2 *)((long)&local_7c8 + ((long)((ulong)uVar11 << 0x20) >> 0x1d));
    uVar12 = FUN_0277d6c4(puVar3);
    lVar15 = *(long *)puVar10;
    if (lVar15 != 0) {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        local_17a8 = puVar2;
        local_1798 = (uint *)0x0;
        local_17a0._0_4_ =
             CONCAT22(*(undefined2 *)((long)&local_7c8 + (long)(int)uVar11 * 8 + 2),*puVar3);
        local_17a0 = (char *)CONCAT44(*(undefined4 *)((long)&local_7c8 + (long)(int)uVar11 * 8 + 4),
                                      (uint)local_17a0);
        uVar12 = FUN_0277d6c4(&local_17a0);
        if (*(long *)puVar10 == 0) {
LAB_02879ad4:
          local_17b8 = CONCAT44(local_17b8._4_4_,0x4f);
          uVar12 = 0xbc;
        }
        else {
          lVar19 = *(long *)(lVar15 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar12) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_02879ad4;
          lVar19 = *(long *)PTR_DAT_04bc0428;
          uVar12 = FUN_0277d6c4(puVar3);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar12) ||
             (puVar21 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8),
             puVar21 == (uint *)0x0)) goto LAB_02879ad4;
          uVar12 = 0;
          local_17b8 = CONCAT44(local_17b8._4_4_,0x4f);
          uVar6 = *puVar21;
          local_1798 = puVar21;
          if ((uVar6 != 0) && (puVar21 != (uint *)(ulong)uVar6)) {
            puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar6);
            uVar12 = 0;
            if (*puVar22 != 0) {
              uVar12 = puVar22[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                lVar19 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar19 = 0x1c;
                }
                lVar19 = (long)puVar22 + lVar19 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar19 != 0) {
                  uVar6 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar6 = (uint)((ulong)((long)puVar21 - lVar19) / (ulong)uVar12);
                  }
                  if (*puVar22 <= uVar6) {
                    uVar6 = 0xffffffff;
                  }
                  if ((uVar6 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar12 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar6 * 2),
                     uVar12 < 0xbd)) goto LAB_02879ae0;
                }
              }
              uVar12 = 0;
            }
          }
        }
LAB_02879ae0:
        local_70 = CONCAT44(local_70._4_4_,uVar12);
        if (uVar12 == (uint)local_17b8) {
          lVar19 = (*(code *)local_f38[3])(&local_f38);
          uVar12 = FUN_0277d6c4(puVar3);
          if ((uVar12 >> 3 & 0x1fff) < 0x753) {
            lVar15 = (ulong)((uVar12 & 0xffff) >> 5) * 4;
            *(uint *)(lVar19 + lVar15) =
                 *(uint *)(lVar19 + lVar15) & (1 << (ulong)(uVar12 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x20);
  lVar15 = (*(code *)local_f38[4])(&local_f38);
  lVar19 = 0;
  uVar11 = 0;
  do {
    puVar21 = (uint *)(lVar15 + lVar19);
    lVar19 = lVar19 + 4;
    uVar12 = *puVar21 - (*puVar21 >> 1 & 0x55555555);
    uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
    uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
    uVar12 = uVar12 + (uVar12 >> 8);
    uVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar11;
  } while (lVar19 != 0x754);
  if (1 < uVar11) {
    local_17a8 = PTR_DAT_04bb2020 + 0x10;
    local_17a0 = "CommuneSloDonation";
    iVar13 = FUN_0273ea30(&local_17a8);
    puVar2 = PTR_DAT_04bb39d8;
    if (iVar13 == 2) {
      FUN_02690004(&local_17a8);
      puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar2);
      uVar6 = puVar21[3];
      uVar11 = *puVar21 ^ *puVar21 << 0xb;
      *puVar21 = puVar21[1];
      puVar21[1] = puVar21[2];
      uVar12 = uVar11 ^ uVar6;
      uVar11 = uVar11 >> 8 ^ uVar6 >> 0x13 ^ uVar12;
      puVar21[2] = uVar6;
      puVar21[3] = uVar11;
      uVar11 = (uVar11 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
      uVar12 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
      local_17b8 = CONCAT44(uVar12,uVar11);
      local_17b0 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
      iStack_17ac = (local_17b0 ^ local_17b0 >> 0x1e) * 0x6c078965 + 4;
      FUN_01a4cc70(&local_17b8,&local_17a8,&local_f38,2,0,0,PTR_FUN_04bb67e0,0);
      uVar11 = 0;
      lVar19 = *(long *)puVar10;
      do {
        psVar5 = (short *)((long)&local_17a8 + ((long)((ulong)uVar11 << 0x20) >> 0x1d));
        uVar12 = FUN_0277d6c4(psVar5);
        lVar15 = *(long *)puVar10;
        if (lVar15 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            if (*param_1 == -2) {
              lVar19 = 0;
            }
            else if (param_1[4] == -2) {
              lVar19 = 1;
            }
            else if (param_1[8] == -2) {
              lVar19 = 2;
            }
            else if (param_1[0xc] == -2) {
              lVar19 = 3;
            }
            else if (param_1[0x10] == -2) {
              lVar19 = 4;
            }
            else if (param_1[0x14] == -2) {
              lVar19 = 5;
            }
            else if (param_1[0x18] == -2) {
              lVar19 = 6;
            }
            else if (param_1[0x1c] == -2) {
              lVar19 = 7;
            }
            else if (param_1[0x20] == -2) {
              lVar19 = 8;
            }
            else if (param_1[0x24] == -2) {
              lVar19 = 9;
            }
            else if (param_1[0x28] == -2) {
              lVar19 = 10;
            }
            else if (param_1[0x2c] == -2) {
              lVar19 = 0xb;
            }
            else if (param_1[0x30] == -2) {
              lVar19 = 0xc;
            }
            else if (param_1[0x34] == -2) {
              lVar19 = 0xd;
            }
            else if (param_1[0x38] == -2) {
              lVar19 = 0xe;
            }
            else if (param_1[0x3c] == -2) {
              lVar19 = 0xf;
            }
            else if (param_1[0x40] == -2) {
              lVar19 = 0x10;
            }
            else if (param_1[0x44] == -2) {
              lVar19 = 0x11;
            }
            else if (param_1[0x48] == -2) {
              lVar19 = 0x12;
            }
            else if (param_1[0x4c] == -2) {
              lVar19 = 0x13;
            }
            else if (param_1[0x50] == -2) {
              lVar19 = 0x14;
            }
            else if (param_1[0x54] == -2) {
              lVar19 = 0x15;
            }
            else if (param_1[0x58] == -2) {
              lVar19 = 0x16;
            }
            else if (param_1[0x5c] == -2) {
              lVar19 = 0x17;
            }
            else if (param_1[0x60] == -2) {
              lVar19 = 0x18;
            }
            else if (param_1[100] == -2) {
              lVar19 = 0x19;
            }
            else if (param_1[0x68] == -2) {
              lVar19 = 0x1a;
            }
            else if (param_1[0x6c] == -2) {
              lVar19 = 0x1b;
            }
            else if (param_1[0x70] == -2) {
              lVar19 = 0x1c;
            }
            else if (param_1[0x74] == -2) {
              lVar19 = 0x1d;
            }
            else if (param_1[0x78] == -2) {
              lVar19 = 0x1e;
            }
            else {
              if (param_1[0x7c] != -2) goto LAB_02879ce4;
              lVar19 = 0x1f;
            }
            psVar4 = param_1 + lVar19 * 4;
            *psVar4 = *psVar5;
            uVar7 = *(undefined4 *)((long)&local_17a8 + (long)(int)uVar11 * 8 + 4);
            psVar4[1] = *(short *)((long)&local_17a8 + (long)(int)uVar11 * 8 + 2);
            *(undefined4 *)(psVar4 + 2) = uVar7;
          }
        }
LAB_02879ce4:
        uVar11 = uVar11 + 1;
        lVar19 = lVar15;
        if (uVar11 == 0x20) {
          return;
        }
      } while( true );
    }
    puVar21 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar11 = *puVar21 ^ *puVar21 << 0xb;
    uVar6 = puVar21[3];
    *puVar21 = puVar21[1];
    puVar21[1] = puVar21[2];
    uVar12 = uVar11 ^ uVar6;
    uVar11 = uVar11 >> 8 ^ uVar6 >> 0x13 ^ uVar12;
    puVar21[2] = uVar6;
    puVar21[3] = uVar11;
    local_17a8._0_4_ = (uVar11 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
    local_17a8._4_4_ = ((uint)local_17a8 ^ (uint)local_17a8 >> 0x1e) * 0x6c078965 + 2;
    local_17a0._0_4_ = (local_17a8._4_4_ ^ local_17a8._4_4_ >> 0x1e) * 0x6c078965 + 3;
    local_17a0._4_4_ = ((uint)local_17a0 ^ (uint)local_17a0 >> 0x1e) * 0x6c078965 + 4;
    lVar15 = (*(code *)local_f38[4])(&local_f38);
    lVar19 = 0;
    iVar13 = 0;
    do {
      puVar21 = (uint *)(lVar15 + lVar19);
      lVar19 = lVar19 + 4;
      uVar11 = *puVar21 - (*puVar21 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar13 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar13;
    } while (lVar19 != 0x754);
    if (iVar13 == 0) {
      local_17b8 = *(ulong *)PTR_DAT_04bb37e0;
    }
    else {
      lVar15 = (*(code *)local_f38[4])(&local_f38);
      lVar19 = 0;
      uVar11 = 0;
      do {
        puVar21 = (uint *)(lVar15 + lVar19);
        lVar19 = lVar19 + 4;
        uVar12 = *puVar21 - (*puVar21 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar11;
      } while (lVar19 != 0x754);
      uVar12 = (uint)local_17a8 ^ (uint)local_17a8 << 0xb;
      local_17a8 = (undefined *)CONCAT44((uint)local_17a0,local_17a8._4_4_);
      uVar12 = uVar12 >> 8 ^ local_17a0._4_4_ >> 0x13 ^ uVar12 ^ local_17a0._4_4_;
      local_17a0 = (char *)CONCAT44(uVar12,local_17a0._4_4_);
      FUN_00889f80(&local_17b8,&local_f38,(int)((ulong)uVar12 * (ulong)uVar11 >> 0x20) + 1);
      FUN_01a4c66c(&local_17a8,&local_17b8);
    }
    if (*param_1 == -2) {
      lVar19 = 0;
    }
    else if (param_1[4] == -2) {
      lVar19 = 1;
    }
    else if (param_1[8] == -2) {
      lVar19 = 2;
    }
    else if (param_1[0xc] == -2) {
      lVar19 = 3;
    }
    else if (param_1[0x10] == -2) {
      lVar19 = 4;
    }
    else if (param_1[0x14] == -2) {
      lVar19 = 5;
    }
    else if (param_1[0x18] == -2) {
      lVar19 = 6;
    }
    else if (param_1[0x1c] == -2) {
      lVar19 = 7;
    }
    else if (param_1[0x20] == -2) {
      lVar19 = 8;
    }
    else if (param_1[0x24] == -2) {
      lVar19 = 9;
    }
    else if (param_1[0x28] == -2) {
      lVar19 = 10;
    }
    else if (param_1[0x2c] == -2) {
      lVar19 = 0xb;
    }
    else if (param_1[0x30] == -2) {
      lVar19 = 0xc;
    }
    else if (param_1[0x34] == -2) {
      lVar19 = 0xd;
    }
    else if (param_1[0x38] == -2) {
      lVar19 = 0xe;
    }
    else if (param_1[0x3c] == -2) {
      lVar19 = 0xf;
    }
    else if (param_1[0x40] == -2) {
      lVar19 = 0x10;
    }
    else if (param_1[0x44] == -2) {
      lVar19 = 0x11;
    }
    else if (param_1[0x48] == -2) {
      lVar19 = 0x12;
    }
    else if (param_1[0x4c] == -2) {
      lVar19 = 0x13;
    }
    else if (param_1[0x50] == -2) {
      lVar19 = 0x14;
    }
    else if (param_1[0x54] == -2) {
      lVar19 = 0x15;
    }
    else if (param_1[0x58] == -2) {
      lVar19 = 0x16;
    }
    else if (param_1[0x5c] == -2) {
      lVar19 = 0x17;
    }
    else if (param_1[0x60] == -2) {
      lVar19 = 0x18;
    }
    else if (param_1[100] == -2) {
      lVar19 = 0x19;
    }
    else if (param_1[0x68] == -2) {
      lVar19 = 0x1a;
    }
    else if (param_1[0x6c] == -2) {
      lVar19 = 0x1b;
    }
    else if (param_1[0x70] == -2) {
      lVar19 = 0x1c;
    }
    else if (param_1[0x74] == -2) {
      lVar19 = 0x1d;
    }
    else if (param_1[0x78] == -2) {
      lVar19 = 0x1e;
    }
    else {
      if (param_1[0x7c] != -2) {
        return;
      }
      lVar19 = 0x1f;
    }
    local_17a8._0_4_ = (uint)local_17b8;
    local_17a8._4_4_ = local_17b8._4_4_;
    goto LAB_0287aae0;
  }
  local_17a8 = (undefined *)0xa59;
  FUN_0277d4ac(&local_17a8);
  if (*param_1 == -2) {
    lVar19 = 0;
LAB_0287a774:
    *(uint *)(param_1 + lVar19 * 4) = (uint)local_17a8;
    *(uint *)(param_1 + lVar19 * 4 + 2) = local_17a8._4_4_;
  }
  else {
    if (param_1[4] == -2) {
      lVar19 = 1;
      goto LAB_0287a774;
    }
    if (param_1[8] == -2) {
      lVar19 = 2;
      goto LAB_0287a774;
    }
    if (param_1[0xc] == -2) {
      lVar19 = 3;
      goto LAB_0287a774;
    }
    if (param_1[0x10] == -2) {
      lVar19 = 4;
      goto LAB_0287a774;
    }
    if (param_1[0x14] == -2) {
      lVar19 = 5;
      goto LAB_0287a774;
    }
    if (param_1[0x18] == -2) {
      lVar19 = 6;
      goto LAB_0287a774;
    }
    if (param_1[0x1c] == -2) {
      lVar19 = 7;
      goto LAB_0287a774;
    }
    if (param_1[0x20] == -2) {
      lVar19 = 8;
      goto LAB_0287a774;
    }
    if (param_1[0x24] == -2) {
      lVar19 = 9;
      goto LAB_0287a774;
    }
    if (param_1[0x28] == -2) {
      lVar19 = 10;
      goto LAB_0287a774;
    }
    if (param_1[0x2c] == -2) {
      lVar19 = 0xb;
      goto LAB_0287a774;
    }
    if (param_1[0x30] == -2) {
      lVar19 = 0xc;
      goto LAB_0287a774;
    }
    if (param_1[0x34] == -2) {
      lVar19 = 0xd;
      goto LAB_0287a774;
    }
    if (param_1[0x38] == -2) {
      lVar19 = 0xe;
      goto LAB_0287a774;
    }
    if (param_1[0x3c] == -2) {
      lVar19 = 0xf;
      goto LAB_0287a774;
    }
    if (param_1[0x40] == -2) {
      lVar19 = 0x10;
      goto LAB_0287a774;
    }
    if (param_1[0x44] == -2) {
      lVar19 = 0x11;
      goto LAB_0287a774;
    }
    if (param_1[0x48] == -2) {
      lVar19 = 0x12;
      goto LAB_0287a774;
    }
    if (param_1[0x4c] == -2) {
      lVar19 = 0x13;
      goto LAB_0287a774;
    }
    if (param_1[0x50] == -2) {
      lVar19 = 0x14;
      goto LAB_0287a774;
    }
    if (param_1[0x54] == -2) {
      lVar19 = 0x15;
      goto LAB_0287a774;
    }
    if (param_1[0x58] == -2) {
      lVar19 = 0x16;
      goto LAB_0287a774;
    }
    if (param_1[0x5c] == -2) {
      lVar19 = 0x17;
      goto LAB_0287a774;
    }
    if (param_1[0x60] == -2) {
      lVar19 = 0x18;
      goto LAB_0287a774;
    }
    if (param_1[100] == -2) {
      lVar19 = 0x19;
      goto LAB_0287a774;
    }
    if (param_1[0x68] == -2) {
      lVar19 = 0x1a;
      goto LAB_0287a774;
    }
    if (param_1[0x6c] == -2) {
      lVar19 = 0x1b;
      goto LAB_0287a774;
    }
    if (param_1[0x70] == -2) {
      lVar19 = 0x1c;
      goto LAB_0287a774;
    }
    if (param_1[0x74] == -2) {
      lVar19 = 0x1d;
      goto LAB_0287a774;
    }
    if (param_1[0x78] == -2) {
      lVar19 = 0x1e;
      goto LAB_0287a774;
    }
    if (param_1[0x7c] == -2) {
      lVar19 = 0x1f;
      goto LAB_0287a774;
    }
  }
  local_17a8 = (undefined *)0xbd6;
  FUN_0277d4ac(&local_17a8);
  if (*param_1 == -2) {
    lVar19 = 0;
  }
  else if (param_1[4] == -2) {
    lVar19 = 1;
  }
  else if (param_1[8] == -2) {
    lVar19 = 2;
  }
  else if (param_1[0xc] == -2) {
    lVar19 = 3;
  }
  else if (param_1[0x10] == -2) {
    lVar19 = 4;
  }
  else if (param_1[0x14] == -2) {
    lVar19 = 5;
  }
  else if (param_1[0x18] == -2) {
    lVar19 = 6;
  }
  else if (param_1[0x1c] == -2) {
    lVar19 = 7;
  }
  else if (param_1[0x20] == -2) {
    lVar19 = 8;
  }
  else if (param_1[0x24] == -2) {
    lVar19 = 9;
  }
  else if (param_1[0x28] == -2) {
    lVar19 = 10;
  }
  else if (param_1[0x2c] == -2) {
    lVar19 = 0xb;
  }
  else if (param_1[0x30] == -2) {
    lVar19 = 0xc;
  }
  else if (param_1[0x34] == -2) {
    lVar19 = 0xd;
  }
  else if (param_1[0x38] == -2) {
    lVar19 = 0xe;
  }
  else if (param_1[0x3c] == -2) {
    lVar19 = 0xf;
  }
  else if (param_1[0x40] == -2) {
    lVar19 = 0x10;
  }
  else if (param_1[0x44] == -2) {
    lVar19 = 0x11;
  }
  else if (param_1[0x48] == -2) {
    lVar19 = 0x12;
  }
  else if (param_1[0x4c] == -2) {
    lVar19 = 0x13;
  }
  else if (param_1[0x50] == -2) {
    lVar19 = 0x14;
  }
  else if (param_1[0x54] == -2) {
    lVar19 = 0x15;
  }
  else if (param_1[0x58] == -2) {
    lVar19 = 0x16;
  }
  else if (param_1[0x5c] == -2) {
    lVar19 = 0x17;
  }
  else if (param_1[0x60] == -2) {
    lVar19 = 0x18;
  }
  else if (param_1[100] == -2) {
    lVar19 = 0x19;
  }
  else if (param_1[0x68] == -2) {
    lVar19 = 0x1a;
  }
  else if (param_1[0x6c] == -2) {
    lVar19 = 0x1b;
  }
  else if (param_1[0x70] == -2) {
    lVar19 = 0x1c;
  }
  else if (param_1[0x74] == -2) {
    lVar19 = 0x1d;
  }
  else if (param_1[0x78] == -2) {
    lVar19 = 0x1e;
  }
  else {
    if (param_1[0x7c] != -2) {
      return;
    }
    lVar19 = 0x1f;
  }
LAB_0287aae0:
  *(uint *)(param_1 + lVar19 * 4) = (uint)local_17a8;
  *(uint *)(param_1 + lVar19 * 4 + 2) = local_17a8._4_4_;
  return;
}

