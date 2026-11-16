
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028a8690(long param_1,long param_2)

{
  undefined **ppuVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  void *__s;
  uint uVar13;
  long lVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  short *psVar19;
  uint *puVar20;
  uint *puVar21;
  long lVar22;
  uint local_808;
  undefined *local_800;
  undefined1 auStack_7f8 [1876];
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_70;
  
  puVar7 = PTR_DAT_04bb46b0;
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
LAB_028a8710:
    lVar14 = 0;
  }
  else {
    puVar15 = *(undefined8 **)(lVar14 + 0x10);
    if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar15 + 0x38))();
      lVar14 = 0;
      if (lVar11 != 0) {
        lVar14 = lVar11 + 0x70;
      }
    }
    else {
      if (puVar15 == (undefined8 *)0x0) goto LAB_028a8710;
      lVar14 = 0;
      if ((long *)puVar15[0x26] != (long *)0x0) {
        lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar14 + 0x1a0b70) == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar15 = (undefined8 *)**(long **)(lVar14 + 0x1a0b70);
    uVar12 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      uVar12 = (**(code **)*puVar15)();
    }
  }
  uVar8 = *(uint *)(*(long *)(lVar14 + 0x1a0b58) + *(long *)(lVar14 + 0x1a0b50));
  if (3 < uVar8) {
    uVar8 = 0;
  }
  local_800 = (undefined *)CONCAT44(local_800._4_4_,uVar8);
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar14 + 0x1a0b70) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1a0b70) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  if ((int)uVar8 < 2) {
    return;
  }
  local_800 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_7f8,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_a4 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)FUN_01a451fc(&local_800);
  memset(__s,0,0x754);
  puVar15 = *(undefined8 **)(*(long *)puVar7 + 0x10);
  if ((*(byte *)(*(long *)puVar7 + 0x453) & 1) == 0) {
    lVar11 = (**(code **)(*(long *)*puVar15 + 0x38))();
    lVar14 = 0;
    if (lVar11 != 0) {
      lVar14 = lVar11 + 0x70;
    }
  }
  else {
    lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
  }
  plVar16 = *(long **)(lVar14 + 0x1bf260);
  if ((plVar16 == (long *)0x0) || (puVar15 = (undefined8 *)*plVar16, puVar15 == (undefined8 *)0x0))
  {
    local_808 = 0;
    lVar11 = *(long *)puVar7;
    if (lVar11 != 0) goto LAB_028a888c;
LAB_028a88d4:
    lVar11 = 0;
  }
  else {
    local_808 = (**(code **)*puVar15)();
    lVar11 = *(long *)puVar7;
    if (lVar11 == 0) goto LAB_028a88d4;
LAB_028a888c:
    puVar15 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar17 = (**(code **)(*(long *)*puVar15 + 0x38))();
      lVar11 = 0;
      if (lVar17 != 0) {
        lVar11 = lVar17 + 0x70;
      }
    }
    else {
      if (puVar15 == (undefined8 *)0x0) goto LAB_028a88d4;
      lVar11 = 0;
      if ((long *)puVar15[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar11 + 0x1a0b70) == (long *)0x0) {
    uVar12 = 0;
  }
  else {
    puVar15 = (undefined8 *)**(long **)(lVar11 + 0x1a0b70);
    uVar12 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      uVar12 = (**(code **)*puVar15)();
    }
  }
  uVar8 = *(uint *)(*(long *)(lVar11 + 0x1a0b58) + *(long *)(lVar11 + 0x1a0b50));
  if (3 < uVar8) {
    uVar8 = 0;
  }
  local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar8);
  if (((uVar12 & 1) != 0) && (*(long *)(lVar11 + 0x1a0b70) != 0)) {
    puVar15 = *(undefined8 **)(*(long *)(lVar11 + 0x1a0b70) + 8);
    uVar12 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      uVar12 = (**(code **)*puVar15)();
    }
  }
  if ((int)uVar8 < 3) {
LAB_028a89e8:
    local_70._0_4_ = 0x6a;
    local_90 = &PTR_FUN_049ff4e8;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    local_70._0_4_ = 0x69;
    local_90 = &PTR_FUN_049ff4e8;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    local_70._0_4_ = 0x6b;
    local_90 = &PTR_FUN_049ff4e8;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    local_70._0_4_ = 0x1a;
    local_90 = &PTR_FUN_049ff4e8;
    local_88 = &local_70;
    FUN_008a1ba0(&local_800,&local_90);
    if ((int)uVar8 < 3) goto LAB_028a8a74;
  }
  else {
    psVar19 = (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*psVar19 == 0) {
      local_70 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_70 >> 0x20) < '\x05') {
        lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
        local_90 = (undefined **)(lVar11 + -0x15180);
        uVar12 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_90);
        local_70 = uVar12;
      }
      psVar19 = (short *)&local_70;
      uVar6 = local_70 >> 0x30;
      local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
      local_70 = CONCAT26((short)uVar6,(undefined6)local_70) & 0xff00ffffffffffff;
    }
    local_90 = *(undefined ***)psVar19;
    iVar9 = FUN_028d4550(uVar12,&local_90);
    if (iVar9 == 0) goto LAB_028a89e8;
  }
  local_70._0_4_ = 0x1b;
  local_88 = &local_70;
  local_90 = &PTR_FUN_049ff4e8;
  FUN_008a1ba0(&local_800,&local_90);
LAB_028a8a74:
  uVar8 = nn::time::GetDayOfWeek
                    ((int)*(short *)(param_2 + 0x10),(int)*(char *)(param_2 + 0x12),
                     (int)*(char *)(param_2 + 0x13));
  puVar7 = PTR_DAT_04bb43c0;
  lVar11 = 0;
  ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  do {
    lVar18 = param_1 + (ulong)uVar8 * 0x200;
    if (6 < uVar8) {
      lVar18 = param_1;
    }
    puVar15 = (undefined8 *)(lVar18 + lVar11);
    uVar10 = FUN_0277d6c4(puVar15);
    lVar22 = *(long *)puVar7;
    lVar18 = lVar22;
    if (lVar22 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
        local_88 = (undefined8 *)*puVar15;
        local_80 = 0;
        local_90 = ppuVar1;
        uVar10 = FUN_0277d6c4(&local_88);
        lVar18 = *(long *)puVar7;
        if (lVar18 != 0) {
          lVar17 = *(long *)(lVar22 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(puVar15);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            lVar18 = *(long *)puVar7;
            if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
               (((puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
                 puVar20 != (uint *)0x0 && (uVar10 = *puVar20, uVar10 != 0)) &&
                (puVar20 != (uint *)(ulong)uVar10)))) {
              puVar21 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
              if (*puVar21 != 0) {
                uVar10 = puVar21[1];
                if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar17 != 0) {
                    uVar2 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar2 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                    }
                    if (*puVar21 <= uVar2) {
                      uVar2 = 0xffffffff;
                    }
                    if ((uVar2 < DAT_05327190) &&
                       (*(short *)(DAT_05327198 + (long)(int)uVar2 * 2) == 0x69)) goto LAB_028a8fd8;
                  }
                }
                if (*puVar21 != 0) {
                  uVar10 = puVar21[1];
                  if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar17 != 0) {
                      uVar2 = 0;
                      if ((ulong)uVar10 != 0) {
                        uVar2 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                      }
                      if (*puVar21 <= uVar2) {
                        uVar2 = 0xffffffff;
                      }
                      if ((uVar2 < DAT_05327190) &&
                         (*(short *)(DAT_05327198 + (long)(int)uVar2 * 2) == 0x6a))
                      goto LAB_028a8fd8;
                    }
                  }
                  if (*puVar21 != 0) {
                    uVar10 = puVar21[1];
                    if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar21 + 10) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                      if (lVar17 != 0) {
                        uVar2 = 0;
                        if ((ulong)uVar10 != 0) {
                          uVar2 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                        }
                        if (*puVar21 <= uVar2) {
                          uVar2 = 0xffffffff;
                        }
                        if ((uVar2 < DAT_05327190) &&
                           (*(short *)(DAT_05327198 + (long)(int)uVar2 * 2) == 0x6b))
                        goto LAB_028a8fd8;
                      }
                    }
                    if (*puVar21 != 0) {
                      uVar10 = puVar21[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                        lVar17 = 0xc;
                        if (*(char *)((long)puVar21 + 10) != '\0') {
                          lVar17 = 0x1c;
                        }
                        lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                        if (lVar17 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                          }
                          if (*puVar21 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < DAT_05327190) &&
                             (*(short *)(DAT_05327198 + (long)(int)uVar2 * 2) == 0x1a))
                          goto LAB_028a8fd8;
                        }
                      }
                      if ((*puVar21 != 0) &&
                         ((uVar10 = puVar21[1], uVar10 != 0 && ((ulong)(ushort)puVar21[2] != 0)))) {
                        lVar17 = 0xc;
                        if (*(char *)((long)puVar21 + 10) != '\0') {
                          lVar17 = 0x1c;
                        }
                        lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                        if (lVar17 != 0) {
                          uVar2 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar2 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                          }
                          if (*puVar21 <= uVar2) {
                            uVar2 = 0xffffffff;
                          }
                          if ((uVar2 < DAT_05327190) &&
                             (*(short *)(DAT_05327198 + (long)(int)uVar2 * 2) == 0x1b))
                          goto LAB_028a8fd8;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar11 = lVar11 + 8;
    lVar17 = lVar18;
  } while (lVar11 != 0x200);
  puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar10 = *puVar20 ^ *puVar20 << 0xb;
  uVar3 = puVar20[3];
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar2 = uVar10 ^ uVar3;
  uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar2;
  puVar20[2] = uVar3;
  puVar20[3] = uVar10;
  uVar10 = (uVar10 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
  uVar2 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
  local_90 = (undefined **)CONCAT44(uVar2,uVar10);
  uVar3 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  uVar4 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
  local_88 = (undefined8 *)CONCAT44(uVar4,uVar3);
  lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
  lVar11 = 0;
  iVar9 = 0;
  do {
    puVar20 = (uint *)(lVar17 + lVar11);
    lVar11 = lVar11 + 4;
    uVar13 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
    uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
    uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
    uVar13 = uVar13 + (uVar13 >> 8);
    iVar9 = (uVar13 + (uVar13 >> 0x10) & 0x3f) + iVar9;
  } while (lVar11 != 0x754);
  if (iVar9 == 0) {
    local_70._0_4_ = _DAT_05586008;
    local_70._4_4_ = DAT_0558600c;
  }
  else {
    lVar17 = (**(code **)(local_800 + 0x20))(&local_800);
    lVar11 = 0;
    uVar13 = 0;
    do {
      puVar20 = (uint *)(lVar17 + lVar11);
      lVar11 = lVar11 + 4;
      uVar5 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
      uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
      uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
      uVar5 = uVar5 + (uVar5 >> 8);
      uVar13 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + uVar13;
    } while (lVar11 != 0x754);
    uVar10 = uVar10 ^ uVar10 * 0x800;
    local_90 = (undefined **)CONCAT44(uVar3,uVar2);
    uVar10 = uVar10 >> 8 ^ uVar4 >> 0x13 ^ uVar10 ^ uVar4;
    local_88 = (undefined8 *)CONCAT44(uVar10,uVar4);
    FUN_00889f80(&local_70,&local_800,(int)((ulong)uVar10 * (ulong)uVar13 >> 0x20) + 1);
    FUN_01a4c66c(&local_90,&local_70);
  }
  lVar11 = *(long *)puVar7;
  uVar10 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar7 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      FUN_0289ee00(param_1,&local_70,uVar8,0);
    }
  }
LAB_028a8fd8:
  if ((((local_808 & 1) != 0) && (lVar14 = *(long *)(lVar14 + 0x1bf260), lVar14 != 0)) &&
     (puVar15 = *(undefined8 **)(lVar14 + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return;
}

