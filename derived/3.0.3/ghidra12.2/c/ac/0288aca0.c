
void FUN_0288aca0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  ushort uVar9;
  undefined *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  void *__s;
  long lVar14;
  undefined8 *puVar15;
  uint *puVar16;
  uint *puVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  undefined *local_940;
  undefined1 *puStack_938;
  undefined4 local_930;
  undefined1 local_92c [31];
  undefined1 local_90d;
  undefined *local_908;
  undefined2 local_900;
  undefined1 local_8fe;
  undefined1 local_8fd;
  undefined4 local_8fc;
  uint *local_8f8;
  undefined2 local_8f0;
  undefined1 local_8ee;
  undefined1 local_8ed;
  undefined4 local_8ec;
  undefined8 local_8e8;
  undefined8 local_8e0;
  uint local_7e8;
  uint local_7e4;
  uint local_7e0;
  int local_7dc;
  undefined *local_7d8;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined8 local_7c8;
  uint local_7c;
  uint local_78;
  uint local_74;
  int local_70;
  
  if (*(char *)(param_2 + 0x12) != '\n') {
    return;
  }
  nn::time::GetDayOfWeek((int)*(short *)(param_2 + 0x10),10,(int)*(char *)(param_2 + 0x13));
  puVar10 = PTR_DAT_04bb43c0;
  lVar18 = 0;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  do {
    puVar3 = (undefined4 *)(param_1 + lVar18);
    uVar11 = FUN_0277d6c4(puVar3);
    lVar21 = *(long *)puVar10;
    if (lVar21 == 0) {
      lVar19 = 0;
    }
    else {
      lVar19 = *(long *)(lVar19 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        local_7d0 = *puVar3;
        local_7cc = puVar3[1];
        local_7c8 = 0;
        local_7d8 = puVar1;
        uVar11 = FUN_0277d6c4(&local_7d0);
        lVar19 = *(long *)puVar10;
        if (lVar19 != 0) {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar21 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(puVar3);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
            lVar19 = *(long *)puVar10;
            if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
               (((puVar16 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar16 != (uint *)0x0 && (uVar11 = *puVar16, uVar11 != 0)) &&
                (puVar16 != (uint *)(ulong)uVar11)))) {
              puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar11);
              if (((*puVar17 != 0) && (uVar11 = puVar17[1], uVar11 != 0)) &&
                 ((ulong)(ushort)puVar17[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar17 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar17 + lVar21 + (ulong)(ushort)puVar17[2] * 8;
                if (lVar21 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar16 - lVar21) / (ulong)uVar11);
                  }
                  if (*puVar17 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if (((uVar13 < *(uint *)PTR_DAT_04bc0068) &&
                      (uVar9 = *(ushort *)(*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar13 * 2),
                      uVar9 < 0x13e)) && (uVar9 == 0x5b)) {
                    return;
                  }
                }
              }
            }
          }
        }
      }
      else {
        lVar19 = lVar21;
      }
    }
    lVar18 = lVar18 + 8;
  } while (lVar18 != 0x100);
  local_7d8 = PTR_DAT_04bbfe60 + 0x10;
  memset(&local_7d0,0,0x754);
  uVar11 = nn::os::GetSystemTick();
  local_7c = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  local_78 = (local_7c ^ local_7c >> 0x1e) * 0x6c078965 + 2;
  local_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 3;
  local_70 = (local_74 ^ local_74 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_7d8);
  memset(__s,0,0x754);
  local_8e0 = &local_940;
  local_940 = (undefined *)CONCAT44(local_940._4_4_,0x5b);
  local_8e8 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_7d8,&local_8e8);
  lVar19 = *(long *)puVar10;
  lVar18 = param_1 + 0x100;
  uVar11 = FUN_0277d6c4(lVar18);
  if (*(long *)puVar10 != 0) {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar19 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
      uVar11 = FUN_0277d6c4(lVar18);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar21 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar19 + lVar21) =
             *(uint *)(lVar19 + lVar21) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar21 = *(long *)puVar10;
  lVar19 = param_1 + 0x108;
  uVar11 = FUN_0277d6c4(lVar19);
  if (*(long *)puVar10 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
      lVar21 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
      uVar11 = FUN_0277d6c4(lVar19);
      if ((uVar11 >> 3 & 0x1fff) < 0x753) {
        lVar14 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
        *(uint *)(lVar21 + lVar14) =
             *(uint *)(lVar21 + lVar14) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
      }
    }
  }
  lVar14 = (**(code **)(local_7d8 + 0x20))(&local_7d8);
  lVar21 = 0;
  uVar11 = 0;
  do {
    puVar16 = (uint *)(lVar14 + lVar21);
    lVar21 = lVar21 + 4;
    uVar13 = *puVar16 - (*puVar16 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    uVar11 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + uVar11;
  } while (lVar21 != 0x754);
  if (uVar11 < 2) {
    lVar21 = *(long *)puVar10;
    uVar11 = FUN_0277d6c4(lVar18);
    if (*(long *)puVar10 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        FUN_0277dedc(lVar18);
        lVar21 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
        uVar11 = FUN_0277d6c4(lVar18);
        if ((uVar11 >> 3 & 0x1fff) < 0x753) {
          lVar18 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
          *(uint *)(lVar21 + lVar18) = *(uint *)(lVar21 + lVar18) | 1 << (ulong)(uVar11 & 0x1f);
        }
      }
    }
    lVar18 = *(long *)puVar10;
    uVar11 = FUN_0277d6c4(lVar19);
    if (*(long *)puVar10 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar18 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        FUN_0277dedc(lVar19);
        lVar18 = (**(code **)(local_7d8 + 0x18))(&local_7d8);
        uVar11 = FUN_0277d6c4(lVar19);
        if ((uVar11 >> 3 & 0x1fff) < 0x753) {
          lVar19 = (ulong)((uVar11 & 0xffff) >> 5) * 4;
          *(uint *)(lVar18 + lVar19) = *(uint *)(lVar18 + lVar19) | 1 << (ulong)(uVar11 & 0x1f);
        }
      }
    }
  }
  puVar16 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar11 = *puVar16 ^ *puVar16 << 0xb;
  uVar4 = puVar16[3];
  *puVar16 = puVar16[1];
  puVar16[1] = puVar16[2];
  uVar13 = uVar11 ^ uVar4;
  uVar11 = uVar11 >> 8 ^ uVar4 >> 0x13 ^ uVar13;
  puVar16[2] = uVar4;
  puVar16[3] = uVar11;
  local_7e8 = (uVar11 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
  local_7e4 = (local_7e8 ^ local_7e8 >> 0x1e) * 0x6c078965 + 2;
  local_7e0 = (local_7e4 ^ local_7e4 >> 0x1e) * 0x6c078965 + 3;
  local_7dc = (local_7e0 ^ local_7e0 >> 0x1e) * 0x6c078965 + 4;
  FUN_02690004(&local_8e8);
  iVar12 = FUN_01a4cc70(&local_7e8,&local_8e8,&local_7d8,2,0,0,PTR_FUN_04bb67e0,0);
  uVar11 = iVar12 - 1;
  uVar20 = (ulong)uVar11;
  if (iVar12 < 1) {
    return;
  }
  uVar8 = (undefined2)local_8e8;
  uVar6 = local_8e8._2_1_;
  uVar7 = local_8e8._3_1_;
  uVar5 = local_8e8._4_4_;
  if (0x1e < uVar11) {
    uVar11 = 0x1f;
  }
  local_8f0 = (undefined2)local_8e8;
  lVar18 = *(long *)puVar10;
  local_8ee = local_8e8._2_1_;
  local_8ed = local_8e8._3_1_;
  local_8ec = local_8e8._4_4_;
  uVar13 = FUN_0277d6c4(&local_8f0);
  if (*(long *)puVar10 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if ((uVar13 < *(uint *)(lVar18 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
      FUN_0288b980(param_1,&local_8f0);
      lVar18 = *(long *)puVar10;
      local_900 = uVar8;
      local_8fe = uVar6;
      local_8fd = uVar7;
      local_908 = PTR_DAT_04bc0510 + 0x10;
      local_8fc = uVar5;
      local_8f8 = (uint *)0x0;
      uVar13 = FUN_0277d6c4(&local_900);
      puVar16 = (uint *)0x0;
      if (*(long *)puVar10 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if (uVar13 < *(uint *)(lVar18 + 0x1d8)) {
          puVar16 = (uint *)0x0;
          if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8) != 0) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar13 = FUN_0277d6c4(&local_8f0);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if (*(uint *)(lVar18 + 0x1d8) <= uVar13) goto LAB_0288b3b8;
            puVar16 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8);
            if (puVar16 != (uint *)0x0) {
              local_8f8 = puVar16;
            }
          }
        }
        else {
LAB_0288b3b8:
          puVar16 = (uint *)0x0;
        }
      }
      *(undefined2 *)(param_1 + 0x100) = uVar8;
      *(undefined1 *)(param_1 + 0x102) = uVar6;
      *(undefined1 *)(param_1 + 0x103) = uVar7;
      *(undefined4 *)(param_1 + 0x104) = uVar5;
      local_930 = 0x20;
      local_90d = 0;
      local_92c[0] = 0;
      local_940 = PTR_DAT_04bb2028 + 0x10;
      if (puVar16 == (uint *)0x0) {
        uVar13 = 0xbc;
      }
      else {
        uVar4 = *puVar16;
        uVar13 = 0;
        if ((uVar4 != 0) && (puVar16 != (uint *)(ulong)uVar4)) {
          puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar4);
          uVar13 = 0;
          if (*puVar17 != 0) {
            uVar13 = puVar17[1];
            if ((uVar13 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
              lVar18 = 0xc;
              if (*(char *)((long)puVar17 + 10) != '\0') {
                lVar18 = 0x1c;
              }
              lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
              if (lVar18 != 0) {
                uVar4 = 0;
                if ((ulong)uVar13 != 0) {
                  uVar4 = (uint)((ulong)((long)puVar16 - lVar18) / (ulong)uVar13);
                }
                if (*puVar17 <= uVar4) {
                  uVar4 = 0xffffffff;
                }
                if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar13 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                   uVar13 < 0xbd)) goto LAB_0288b488;
              }
            }
            uVar13 = 0;
          }
        }
      }
LAB_0288b488:
      if (uVar13 < 0xbd) {
        puVar15 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar13 * 8 + 0x830);
      }
      else {
        puVar15 = &DAT_0407ebb1;
      }
      puStack_938 = local_92c;
      FUN_038d1270(&local_940,"Shop.Shoes.%s",puVar15);
    }
  }
  if (uVar11 == 0) {
    return;
  }
  uVar8 = (undefined2)local_8e0;
  uVar6 = local_8e0._2_1_;
  local_8f0 = (undefined2)local_8e0;
  uVar7 = local_8e0._3_1_;
  uVar5 = local_8e0._4_4_;
  lVar18 = *(long *)puVar10;
  local_8ee = local_8e0._2_1_;
  local_8ed = local_8e0._3_1_;
  local_8ec = local_8e0._4_4_;
  uVar13 = FUN_0277d6c4(&local_8f0);
  if (*(long *)puVar10 == 0) goto LAB_0288b6f4;
  lVar18 = *(long *)(lVar18 + 0x57e58);
  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
  if ((*(uint *)(lVar18 + 0x1d8) <= uVar13) ||
     (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0288b6f4;
  FUN_0288b980(param_1,&local_8f0);
  lVar18 = *(long *)puVar10;
  local_900 = uVar8;
  local_8fe = uVar6;
  local_8fd = uVar7;
  local_908 = PTR_DAT_04bc0510 + 0x10;
  local_8fc = uVar5;
  local_8f8 = (uint *)0x0;
  uVar13 = FUN_0277d6c4(&local_900);
  puVar16 = (uint *)0x0;
  if (*(long *)puVar10 != 0) {
    lVar18 = *(long *)(lVar18 + 0x57e58);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
    if (uVar13 < *(uint *)(lVar18 + 0x1d8)) {
      puVar16 = (uint *)0x0;
      if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8) != 0) {
        lVar18 = *(long *)PTR_DAT_04bc0428;
        uVar13 = FUN_0277d6c4(&local_8f0);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if (*(uint *)(lVar18 + 0x1d8) <= uVar13) goto LAB_0288b5e8;
        puVar16 = *(uint **)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar13 * 8);
        if (puVar16 != (uint *)0x0) {
          local_8f8 = puVar16;
        }
      }
    }
    else {
LAB_0288b5e8:
      puVar16 = (uint *)0x0;
    }
  }
  *(undefined2 *)(param_1 + 0x108) = uVar8;
  *(undefined1 *)(param_1 + 0x10a) = uVar6;
  *(undefined1 *)(param_1 + 0x10b) = uVar7;
  *(undefined4 *)(param_1 + 0x10c) = uVar5;
  local_930 = 0x20;
  local_90d = 0;
  local_92c[0] = 0;
  local_940 = PTR_DAT_04bb2028 + 0x10;
  if (puVar16 == (uint *)0x0) {
    uVar13 = 0xbc;
  }
  else {
    uVar4 = *puVar16;
    uVar13 = 0;
    if ((uVar4 != 0) && (puVar16 != (uint *)(ulong)uVar4)) {
      puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar4);
      uVar13 = 0;
      if (*puVar17 != 0) {
        uVar13 = puVar17[1];
        if ((uVar13 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar18 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar17 + lVar18 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar18 != 0) {
            uVar4 = 0;
            if ((ulong)uVar13 != 0) {
              uVar4 = (uint)((ulong)((long)puVar16 - lVar18) / (ulong)uVar13);
            }
            if (*puVar17 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar13 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
               uVar13 < 0xbd)) goto LAB_0288b6b8;
          }
        }
        uVar13 = 0;
      }
    }
  }
LAB_0288b6b8:
  if (uVar13 < 0xbd) {
    puVar15 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar13 * 8 + 0x830);
  }
  else {
    puVar15 = &DAT_0407ebb1;
  }
  puStack_938 = local_92c;
  FUN_038d1270(&local_940,"Shop.Shoes.%s",puVar15);
LAB_0288b6f4:
  if (uVar11 != 1) {
    if (0x1e < uVar20) {
      uVar20 = 0x1f;
    }
    uVar11 = 2;
    lVar18 = uVar20 - 1;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    lVar19 = *(long *)puVar10;
    do {
      lVar21 = (long)((ulong)uVar11 << 0x20) >> 0x1d;
      uVar8 = *(undefined2 *)((long)&local_8e8 + lVar21);
      uVar6 = *(undefined1 *)((long)&local_8e8 + lVar21 + 2);
      uVar7 = *(undefined1 *)((long)&local_8e8 + lVar21 + 3);
      uVar5 = *(undefined4 *)((long)&local_8e8 + lVar21 + 4);
      local_8f0 = uVar8;
      local_8ee = uVar6;
      local_8ed = uVar7;
      local_8ec = uVar5;
      uVar13 = FUN_0277d6c4(&local_8f0);
      lVar21 = *(long *)puVar10;
      if (lVar21 != 0) {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if ((uVar13 < *(uint *)(lVar19 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
          FUN_0288b980(param_1,&local_8f0);
          lVar19 = *(long *)puVar10;
          local_8f8 = (uint *)0x0;
          local_908 = puVar1;
          local_900 = uVar8;
          local_8fe = uVar6;
          local_8fd = uVar7;
          local_8fc = uVar5;
          uVar13 = FUN_0277d6c4(&local_900);
          puVar16 = (uint *)0x0;
          if (*(long *)puVar10 != 0) {
            lVar19 = *(long *)(lVar19 + 0x57e58);
            uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
            if (uVar13 < *(uint *)(lVar19 + 0x1d8)) {
              puVar16 = (uint *)0x0;
              if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) != 0) {
                lVar19 = *(long *)PTR_DAT_04bc0428;
                uVar13 = FUN_0277d6c4(&local_8f0);
                uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if (*(uint *)(lVar19 + 0x1d8) <= uVar13) goto LAB_0288b898;
                puVar16 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8);
              }
            }
            else {
LAB_0288b898:
              puVar16 = (uint *)0x0;
            }
          }
          local_90d = 0;
          local_930 = 0x20;
          local_92c[0] = 0;
          if (puVar16 == (uint *)0x0) {
            uVar13 = 0xbc;
          }
          else {
            uVar4 = *puVar16;
            uVar13 = 0;
            if ((uVar4 != 0) && (puVar16 != (uint *)(ulong)uVar4)) {
              puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar4);
              uVar13 = 0;
              if (*puVar17 != 0) {
                uVar13 = puVar17[1];
                if ((uVar13 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
                  lVar19 = 0xc;
                  if (*(char *)((long)puVar17 + 10) != '\0') {
                    lVar19 = 0x1c;
                  }
                  lVar19 = (long)puVar17 + lVar19 + (ulong)(ushort)puVar17[2] * 8;
                  if (lVar19 != 0) {
                    uVar4 = 0;
                    if ((ulong)uVar13 != 0) {
                      uVar4 = (uint)((ulong)((long)puVar16 - lVar19) / (ulong)uVar13);
                    }
                    if (*puVar17 <= uVar4) {
                      uVar4 = 0xffffffff;
                    }
                    if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar13 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2),
                       uVar13 < 0xbd)) goto LAB_0288b950;
                  }
                }
                uVar13 = 0;
              }
            }
          }
LAB_0288b950:
          puVar15 = &DAT_0407ebb1;
          if (uVar13 < 0xbd) {
            puVar15 = *(undefined8 **)(PTR_DAT_04bb8f90 + (ulong)uVar13 * 8 + 0x830);
          }
          local_940 = puVar2;
          puStack_938 = local_92c;
          FUN_038d1270(&local_940,"Shop.Shoes.%s",puVar15);
          lVar21 = *(long *)puVar10;
        }
      }
      uVar11 = uVar11 + 1;
      lVar18 = lVar18 + -1;
      lVar19 = lVar21;
    } while (lVar18 != 0);
  }
  return;
}

