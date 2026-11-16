
void FUN_028687c0(long *param_1)

{
  long *plVar1;
  undefined **ppuVar2;
  undefined2 *puVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  void *__s;
  ulong uVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  uint *puVar18;
  int iVar19;
  uint *puVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  uint local_858;
  uint local_854;
  uint local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined **local_820;
  undefined4 local_818;
  undefined4 local_814;
  undefined8 local_810;
  undefined *local_808;
  undefined1 auStack_800 [1876];
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  undefined8 local_98;
  uint *puStack_90;
  undefined1 auStack_78 [8];
  uint local_70 [4];
  
  puVar6 = PTR_DAT_04bb46b0;
  lVar14 = *(long *)PTR_DAT_04bb46b0;
  if (lVar14 == 0) {
LAB_0286883c:
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
      if (puVar15 == (undefined8 *)0x0) goto LAB_0286883c;
      lVar14 = 0;
      if ((long *)puVar15[0x26] != (long *)0x0) {
        lVar14 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar14 + 0x1a3d88) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar14 + 0x1a3d88), puVar15 == (undefined8 *)0x0)) {
    local_854 = 0;
  }
  else {
    local_854 = (**(code **)*puVar15)();
  }
  lVar11 = *(long *)(lVar14 + 0x1a3d70) + *(long *)(lVar14 + 0x1a3d68);
  piVar17 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
  if (*(short *)piVar17 == 0) {
    local_98 = *(undefined ***)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    if ((char)((ulong)local_98 >> 0x20) < '\x05') {
      lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_98);
      local_808 = (undefined *)(lVar12 + -0x15180);
      local_98 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_808);
    }
    piVar17 = (int *)&local_98;
    uVar13 = (ulong)local_98 >> 0x30;
    local_98._0_6_ = CONCAT24(5,(int)local_98);
    local_98 = (undefined **)(CONCAT26((short)uVar13,(undefined6)local_98) & 0xff00ffffffffffff);
  }
  iVar22 = *piVar17;
  uVar7 = nn::time::GetDayOfWeek((int)(short)iVar22,(iVar22 << 8) >> 0x18,iVar22 >> 0x18);
  puVar5 = PTR_DAT_04bb43c0;
  local_808 = (undefined *)CONCAT44(local_808._4_4_,uVar7);
  uVar8 = 0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  lVar12 = lVar11 + (ulong)uVar7 * 0x200;
  if (6 < uVar7) {
    lVar12 = lVar11;
  }
  do {
    lVar11 = lVar12 + ((long)((ulong)uVar8 << 0x20) >> 0x1d);
    uVar7 = FUN_0277d6c4(lVar11);
    lVar16 = *(long *)puVar5;
    if (lVar16 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar21 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar7 = FUN_0277d6c4(lVar11);
        lVar16 = *(long *)puVar5;
        if ((uVar7 >> 3 & 0x1fff) < 0x753) {
          lVar11 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
          *(uint *)(lVar21 + lVar11) =
               *(uint *)(lVar21 + lVar11) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar8 = uVar8 + 1;
    lVar21 = lVar16;
  } while (uVar8 != 0x40);
  local_808 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_800,0,0x754);
  uVar8 = nn::os::GetSystemTick();
  local_ac = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
  local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
  local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(local_808 + 0x18))(&local_808);
  memset(__s,0,0x754);
  lVar11 = *(long *)puVar6;
  if (lVar11 != 0) {
    puVar15 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar15 + 0x38))();
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = lVar12 + 0x70;
      }
      goto LAB_02868ab0;
    }
    if (puVar15 != (undefined8 *)0x0) {
      lVar11 = 0;
      if ((long *)puVar15[0x26] != (long *)0x0) {
        lVar11 = (**(code **)(*(long *)puVar15[0x26] + 0x38))();
      }
      goto LAB_02868ab0;
    }
  }
  lVar11 = 0;
LAB_02868ab0:
  plVar1 = (long *)(lVar11 + 0x1a0d80);
  if ((*(long **)(lVar11 + 0x1a0da0) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar11 + 0x1a0da0), puVar15 == (undefined8 *)0x0)) {
    local_858 = 0;
  }
  else {
    local_858 = (**(code **)*puVar15)();
  }
  uVar8 = 0;
  ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  lVar12 = *(long *)(lVar11 + 0x1a0d88) + *plVar1 + 4;
  do {
    lVar21 = *(long *)puVar5;
    puVar3 = (undefined2 *)(lVar12 + ((long)((ulong)uVar8 << 0x20) >> 0x1d));
    uVar7 = FUN_0277d6c4(puVar3);
    if (*(long *)puVar5 != 0) {
      lVar21 = *(long *)(lVar21 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar21 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        lVar21 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar7 = FUN_0277d6c4(puVar3);
        if ((uVar7 >> 3 & 0x1fff) < 0x753) {
          lVar16 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
          *(uint *)(lVar21 + lVar16) =
               *(uint *)(lVar21 + lVar16) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
        }
        lVar21 = lVar12 + (long)(int)uVar8 * 8;
        lVar16 = *(long *)puVar5;
        local_810 = 0;
        local_814 = *(undefined4 *)(lVar21 + 4);
        local_818 = CONCAT22(*(undefined2 *)(lVar21 + 2),*puVar3);
        local_820 = ppuVar2;
        uVar9 = FUN_0277d6c4(&local_818);
        uVar7 = 0;
        if (*(long *)puVar5 == 0) goto LAB_02868cd4;
        lVar21 = *(long *)(lVar16 + 0x57e58);
        uVar7 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar21 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar21 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(puVar3);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((*(uint *)(lVar21 + 0x1d8) <= uVar7) ||
             (puVar18 = *(uint **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar18 == (uint *)0x0)) goto LAB_02868cd0;
          uVar9 = *puVar18;
          uVar7 = 0;
          if ((uVar9 != 0) && (puVar18 != (uint *)(ulong)uVar9)) {
            puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar9);
            uVar7 = 0;
            if (*puVar20 != 0) {
              uVar7 = puVar20[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar21 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar21 = 0x1c;
                }
                lVar21 = (long)puVar20 + lVar21 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar21 != 0) {
                  uVar9 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar9 = (uint)((ulong)((long)puVar18 - lVar21) / (ulong)uVar7);
                  }
                  if (*puVar20 <= uVar9) {
                    uVar9 = 0xffffffff;
                  }
                  if ((uVar9 < *(uint *)PTR_DAT_04bc0020) &&
                     (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar9 * 2),
                     uVar7 = (uint)uVar4, uVar4 < 0x5b6)) goto LAB_02868cd4;
                }
              }
              goto LAB_02868cd0;
            }
          }
        }
        else {
LAB_02868cd0:
          uVar7 = 0;
        }
LAB_02868cd4:
        local_70[0] = uVar7;
        if (local_70[0] != 0) {
          puStack_90 = local_70;
          local_98 = &PTR_FUN_049ff858;
          FUN_008a1ba0(&local_808,&local_98);
        }
      }
    }
    uVar8 = uVar8 + 1;
  } while (uVar8 != 0x80);
  uVar13 = FUN_0289c060(*(long *)(lVar11 + 0x1a0d88) + *plVar1,0);
  uVar23 = uVar13 & 0xffffffff;
  iVar22 = 0;
  while( true ) {
    iVar19 = iVar22;
    FUN_0297ac30(&local_98,uVar13,uVar23,iVar19);
    lVar12 = *(long *)puVar5;
    uVar13 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar5 == 0) break;
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = ((uint)uVar13 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
       (iVar22 = iVar19 + 1, *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
    break;
  }
  puVar15 = (undefined8 *)PTR_DAT_04bb4700;
  if (iVar19 != 0) {
    iVar22 = 0;
    do {
      uVar10 = FUN_0289c060(*(long *)(lVar11 + 0x1a0d88) + *plVar1,0);
      FUN_0297ac30(&local_828,*puVar15,uVar10,iVar22);
      lVar12 = *(long *)puVar5;
      uVar8 = FUN_0277d6c4(&local_828);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
          uVar8 = FUN_0277d6c4(&local_828);
          if ((uVar8 >> 3 & 0x1fff) < 0x753) {
            lVar21 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
            *(uint *)(lVar12 + lVar21) =
                 *(uint *)(lVar12 + lVar21) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
          }
          local_810 = 0;
          local_820 = &PTR_FUN_04a36b50;
          lVar12 = *(long *)puVar5;
          local_818 = local_828;
          local_814 = uStack_824;
          uVar7 = FUN_0277d6c4(&local_818);
          uVar8 = 0;
          if (*(long *)puVar5 == 0) goto LAB_02868f84;
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar8 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_828);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
               (puVar18 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar18 == (uint *)0x0)) goto LAB_02868f80;
            uVar7 = *puVar18;
            uVar8 = 0;
            if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
              puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
              uVar8 = 0;
              if (*puVar20 != 0) {
                uVar8 = puVar20[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar12 != 0) {
                    uVar7 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar7 = (uint)((ulong)((long)puVar18 - lVar12) / (ulong)uVar8);
                    }
                    if (*puVar20 <= uVar7) {
                      uVar7 = 0xffffffff;
                    }
                    if ((uVar7 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar7 * 2),
                       uVar8 = (uint)uVar4, uVar4 < 0x5b6)) goto LAB_02868f84;
                  }
                }
                goto LAB_02868f80;
              }
            }
          }
          else {
LAB_02868f80:
            uVar8 = 0;
          }
LAB_02868f84:
          local_82c = uVar8;
          if (local_82c != 0) {
            uVar13 = 0;
            puStack_90 = &local_82c;
            local_98 = &PTR_FUN_049ff858;
            do {
              uVar7 = (uint)uVar13;
              (**(code **)(local_808 + 0x10))(auStack_78,&local_808,uVar13);
              lVar12 = *(long *)puVar5;
              uVar8 = FUN_0277d6c4(auStack_78);
              if (*(long *)puVar5 == 0) {
LAB_02868fb0:
                lVar21 = (**(code **)(local_808 + 0x18))(&local_808);
                lVar12 = (uVar13 >> 5) * 4;
                uVar8 = *(uint *)(lVar21 + lVar12) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
LAB_02868fd4:
                *(uint *)(lVar21 + lVar12) = uVar8;
              }
              else {
                lVar12 = *(long *)(lVar12 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                   (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                goto LAB_02868fb0;
                uVar23 = (*(code *)*local_98)(&local_98,auStack_78);
                if ((uVar23 & 1) != 0) {
                  (**(code **)(local_808 + 0x10))(local_70,&local_808,uVar13);
                  lVar12 = *(long *)puVar5;
                  uVar8 = FUN_0277d6c4(local_70);
                  if (*(long *)puVar5 == 0) goto LAB_02868fd8;
                  lVar12 = *(long *)(lVar12 + 0x57e58);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                  goto LAB_02868fd8;
                  lVar21 = (**(code **)(local_808 + 0x18))(&local_808);
                  lVar12 = (ulong)(uVar7 >> 5) * 4;
                  uVar8 = *(uint *)(lVar21 + lVar12) | 1 << (ulong)(uVar7 & 0x1f);
                  goto LAB_02868fd4;
                }
              }
LAB_02868fd8:
              uVar13 = (ulong)(uVar7 + 1);
            } while (uVar7 + 1 != 15000);
            puVar15 = &DAT_055dc9c0;
          }
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar19 != iVar22);
  }
  uVar13 = FUN_0289c060(*(long *)(lVar11 + 0x1a0d88) + *plVar1,1);
  uVar23 = uVar13 & 0xffffffff;
  iVar22 = 0;
  while( true ) {
    iVar19 = iVar22;
    FUN_0297ac30(&local_98,uVar13,uVar23,iVar19);
    lVar12 = *(long *)puVar5;
    uVar13 = FUN_0277d6c4(&local_98);
    if (*(long *)puVar5 == 0) break;
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = ((uint)uVar13 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
       (iVar22 = iVar19 + 1, *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
    break;
  }
  if (iVar19 != 0) {
    iVar22 = 0;
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      uVar10 = FUN_0289c060(*(long *)(lVar11 + 0x1a0d88) + *plVar1,1);
      FUN_0297ac30(&local_828,*puVar15,uVar10,iVar22);
      lVar12 = *(long *)puVar5;
      uVar8 = FUN_0277d6c4(&local_828);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
          uVar8 = FUN_0277d6c4(&local_828);
          if ((uVar8 >> 3 & 0x1fff) < 0x753) {
            lVar21 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
            *(uint *)(lVar12 + lVar21) =
                 *(uint *)(lVar12 + lVar21) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
          }
          local_810 = 0;
          lVar12 = *(long *)puVar5;
          local_818 = local_828;
          local_814 = uStack_824;
          local_820 = ppuVar2;
          uVar7 = FUN_0277d6c4(&local_818);
          uVar8 = 0;
          if (*(long *)puVar5 == 0) goto LAB_02869344;
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar8 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(&local_828);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
               (puVar18 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8),
               puVar18 == (uint *)0x0)) goto LAB_02869340;
            uVar7 = *puVar18;
            uVar8 = 0;
            if ((uVar7 != 0) && (puVar18 != (uint *)(ulong)uVar7)) {
              puVar20 = (uint *)((long)puVar18 - (long)(ulong)uVar7);
              uVar8 = 0;
              if (*puVar20 != 0) {
                uVar8 = puVar20[1];
                if ((uVar8 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar12 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar12 = 0x1c;
                  }
                  lVar12 = (long)puVar20 + lVar12 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar12 != 0) {
                    uVar7 = 0;
                    if ((ulong)uVar8 != 0) {
                      uVar7 = (uint)((ulong)((long)puVar18 - lVar12) / (ulong)uVar8);
                    }
                    if (*puVar20 <= uVar7) {
                      uVar7 = 0xffffffff;
                    }
                    if ((uVar7 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar7 * 2),
                       uVar8 = (uint)uVar4, uVar4 < 0x5b6)) goto LAB_02869344;
                  }
                }
                goto LAB_02869340;
              }
            }
          }
          else {
LAB_02869340:
            uVar8 = 0;
          }
LAB_02869344:
          local_82c = uVar8;
          if (local_82c != 0) {
            uVar13 = 0;
            puStack_90 = &local_82c;
            local_98 = &PTR_FUN_049ff858;
            do {
              uVar7 = (uint)uVar13;
              (**(code **)(local_808 + 0x10))(auStack_78,&local_808,uVar13);
              lVar12 = *(long *)puVar5;
              uVar8 = FUN_0277d6c4(auStack_78);
              if (*(long *)puVar5 == 0) {
LAB_02869370:
                lVar21 = (**(code **)(local_808 + 0x18))(&local_808);
                lVar12 = (uVar13 >> 5) * 4;
                uVar8 = *(uint *)(lVar21 + lVar12) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
LAB_02869394:
                *(uint *)(lVar21 + lVar12) = uVar8;
              }
              else {
                lVar12 = *(long *)(lVar12 + 0x57e58);
                uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                   (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                goto LAB_02869370;
                uVar23 = (*(code *)*local_98)(&local_98,auStack_78);
                if ((uVar23 & 1) != 0) {
                  (**(code **)(local_808 + 0x10))(local_70,&local_808,uVar13);
                  lVar12 = *(long *)puVar5;
                  uVar8 = FUN_0277d6c4(local_70);
                  if (*(long *)puVar5 == 0) goto LAB_02869398;
                  lVar12 = *(long *)(lVar12 + 0x57e58);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
                  if ((*(uint *)(lVar12 + 0x1d8) <= uVar8) ||
                     (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                  goto LAB_02869398;
                  lVar21 = (**(code **)(local_808 + 0x18))(&local_808);
                  lVar12 = (ulong)(uVar7 >> 5) * 4;
                  uVar8 = *(uint *)(lVar21 + lVar12) | 1 << (ulong)(uVar7 & 0x1f);
                  goto LAB_02869394;
                }
              }
LAB_02869398:
              uVar13 = (ulong)(uVar7 + 1);
            } while (uVar7 + 1 != 15000);
            puVar15 = &DAT_055dc9c0;
          }
        }
      }
      iVar22 = iVar22 + 1;
    } while (iVar19 != iVar22);
  }
  lVar21 = (**(code **)(local_808 + 0x20))(&local_808);
  lVar12 = 0;
  iVar22 = 0;
  do {
    iVar19 = iVar22;
    puVar18 = (uint *)(lVar21 + lVar12);
    lVar12 = lVar12 + 4;
    uVar8 = *puVar18 - (*puVar18 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    uVar8 = uVar8 + (uVar8 >> 0x10);
    iVar22 = (uVar8 & 0x3f) + iVar19;
  } while (lVar12 != 0x754);
  if (iVar22 != 0) {
    iVar22 = 0;
    do {
      iVar22 = iVar22 + 1;
      FUN_00889f80(&local_98,&local_808,iVar22);
      lVar12 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar5 != 0) {
        lVar12 = *(long *)(lVar12 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar12 = (**(code **)(*param_1 + 0x18))(param_1);
          uVar7 = FUN_0277d6c4(&local_98);
          if ((uVar7 >> 3 & 0x1fff) < 0x753) {
            lVar21 = (ulong)((uVar7 & 0xffff) >> 5) * 4;
            *(uint *)(lVar12 + lVar21) =
                 *(uint *)(lVar12 + lVar21) & (1 << (ulong)(uVar7 & 0x1f) ^ 0xffffffffU);
          }
        }
      }
    } while (iVar19 + (uVar8 & 0x3f) != iVar22);
  }
  if ((((local_858 & 1) != 0) && (*(long *)(lVar11 + 0x1a0da0) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar11 + 0x1a0da0) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  if ((((local_854 & 1) != 0) && (*(long *)(lVar14 + 0x1a3d88) != 0)) &&
     (puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x1a3d88) + 8), puVar15 != (undefined8 *)0x0)) {
    (**(code **)*puVar15)();
  }
  return;
}

