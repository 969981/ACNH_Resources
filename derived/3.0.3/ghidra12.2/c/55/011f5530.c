
void FUN_011f5530(long *param_1)

{
  uint *puVar1;
  long *plVar2;
  ushort uVar3;
  ulong uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long *plVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined2 local_74;
  int local_70;
  undefined8 local_68;
  
  if (0 < *param_1) {
    uVar16 = (ulong)*(byte *)((long)param_1 + 0x1a);
    uVar3 = *(ushort *)(param_1 + 3);
    uVar12 = (uint)uVar3;
    if ((*(byte *)((long)param_1 + 0x1a) != *(byte *)((long)param_1 + 0x12)) ||
       (uVar3 != *(ushort *)(param_1 + 2))) {
      local_68._0_7_ = CONCAT43(0x501,*(undefined3 *)(param_1 + 3));
      uVar13 = 0xffffffff;
      do {
        uVar23 = uVar13;
        uVar13 = (uint)uVar16;
        if (uVar13 - 0xd < 0xfffffff4) {
          uVar13 = 1;
        }
        if (((uVar12 & 3) == 0) &&
           (((uVar12 & 0xf) == 0 || 0x28f5c28 < (uVar12 * -0x3d70a3d7 >> 2 | uVar12 * 0x40000000))
            && uVar13 == 2)) {
          uVar16 = 0x1d;
        }
        else {
          uVar16 = (ulong)(byte)(&DAT_0416812f)[uVar13];
        }
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_a8 = (undefined **)(lVar8 + uVar16 * 0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
        puVar5 = PTR_DAT_04bb46b0;
        uVar6 = (uint)local_68;
        uVar12 = uVar6 & 0xffff;
        uVar16 = local_68 >> 0x10 & 0xff;
        uVar13 = uVar23 + 1;
      } while (((char)(local_68 >> 0x10) < *(char *)((long)param_1 + 0x12)) ||
              ((short)local_68 < (short)param_1[2]));
      uVar4 = local_68 >> 0x18;
      uVar16 = local_68 >> 0x10;
      uVar23 = uVar23 + 2;
      iVar18 = 0;
      uVar12 = uVar23 & 3;
      do {
        if ((*(long *)puVar5 != 0) && (lVar8 = FUN_026eec4c(*(long *)puVar5,iVar18), lVar8 != 0)) {
          lVar22 = lVar8 + 0x194b0;
          plVar20 = (long *)(lVar8 + 0x194b8);
          lVar8 = lVar22;
          if (*plVar20 == 0) {
            lVar8 = *(long *)(*(long *)puVar5 + 0x20);
          }
          if (*(long **)(lVar8 + 0x8640) == (long *)0x0) {
            uVar10 = 0;
          }
          else {
            puVar9 = (undefined8 *)**(long **)(lVar8 + 0x8640);
            uVar10 = 0;
            if (puVar9 != (undefined8 *)0x0) {
              uVar10 = (**(code **)*puVar9)();
            }
          }
          uVar19 = 0;
          puVar1 = (uint *)(*(long *)(lVar8 + 0x8628) + *(long *)(lVar8 + 0x8620));
          uVar15 = *puVar1;
          if ((*(byte *)((long)puVar1 + 7) != 0 ||
               (((ulong)uVar15 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0))
             && ((uint)*(byte *)((long)puVar1 + 7) ==
                 ((uVar15 + (uVar15 >> 0x10) + (uVar15 >> 0x18) + (uVar15 >> 8)) - 0x2d & 0xff))) {
            lVar17 = (ulong)uVar15 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
            uVar19 = ((int)lVar17 - (uint)(ushort)puVar1[1]) + -0x7f1cd4ef +
                     (int)((ulong)lVar17 >> 0x20);
          }
          if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x8640) != 0)) &&
             (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x8640) + 8), puVar9 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar9)();
          }
          uVar15 = uVar19;
          uVar14 = uVar23 & 0xfffffffc;
          if (2 < uVar13) {
            do {
              uVar14 = uVar14 - 4;
              uVar15 = uVar15 + (int)((float)uVar15 * 0.0005);
              uVar15 = uVar15 + (int)((float)uVar15 * 0.0005);
              uVar15 = uVar15 + (int)((float)uVar15 * 0.0005);
              uVar15 = uVar15 + (int)((double)uVar15 * 0.0005);
            } while (uVar14 != 0);
          }
          if (uVar12 != 0) {
            uVar14 = uVar12;
            do {
              uVar14 = uVar14 - 1;
              uVar15 = uVar15 + (int)((double)uVar15 * 0.0005);
            } while (uVar14 != 0);
          }
          uVar15 = uVar15 - uVar19;
          if (uVar15 != 0) {
            if (0x270e < uVar15) {
              uVar15 = 9999;
            }
            lVar8 = lVar22;
            if (*plVar20 == 0) {
              lVar8 = *(long *)(*(long *)puVar5 + 0x20);
            }
            plVar2 = (long *)(lVar8 + 0x8620);
            lVar17 = *(long *)(lVar8 + 0x8640);
            if (lVar17 == 0) {
              FUN_0285dc20(*(long *)(lVar8 + 0x8628) + *plVar2,uVar15,999999999);
            }
            else {
              if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
                uVar10 = 0;
                plVar11 = *(long **)(lVar17 + 0x20);
joined_r0x011f5b10:
                if (plVar11 != (long *)0x0) {
                  local_a8 = (undefined **)*plVar2;
                  local_a0 = *(undefined8 *)(lVar8 + 0x8628);
                  uStack_98 = 8;
                  (**(code **)(*plVar11 + 0x20))(plVar11,&local_a8);
                }
              }
              else {
                uVar10 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
                uVar10 = uVar10 & 0xffffffff;
                if (*(long *)(lVar8 + 0x8640) != 0) {
                  plVar11 = *(long **)(*(long *)(lVar8 + 0x8640) + 0x20);
                  goto joined_r0x011f5b10;
                }
              }
              FUN_0285dc20(*(long *)(lVar8 + 0x8628) + *plVar2,uVar15,999999999);
              if ((((uVar10 & 1) != 0) && (*(long *)(lVar8 + 0x8640) != 0)) &&
                 (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x8640) + 0x18),
                 puVar9 != (undefined8 *)0x0)) {
                (**(code **)*puVar9)();
              }
            }
            if (*plVar20 == 0) {
              lVar22 = *(long *)(*(long *)puVar5 + 0x20);
            }
            if (*(long **)(lVar22 + 0x8640) == (long *)0x0) {
              uVar10 = 0;
            }
            else {
              puVar9 = (undefined8 *)**(long **)(lVar22 + 0x8640);
              uVar10 = 0;
              if (puVar9 != (undefined8 *)0x0) {
                uVar10 = (**(code **)*puVar9)();
              }
            }
            iVar21 = 0;
            puVar1 = (uint *)(*(long *)(lVar22 + 0x8628) + *(long *)(lVar22 + 0x8620));
            uVar15 = *puVar1;
            if ((*(byte *)((long)puVar1 + 7) != 0 ||
                 (((ulong)uVar15 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0
                 )) && ((uint)*(byte *)((long)puVar1 + 7) ==
                        ((uVar15 + (uVar15 >> 0x10) + (uVar15 >> 0x18) + (uVar15 >> 8)) - 0x2d &
                        0xff))) {
              lVar8 = (ulong)uVar15 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
              iVar21 = ((int)lVar8 - (uint)(ushort)puVar1[1]) + -0x7f1cd4ef +
                       (int)((ulong)lVar8 >> 0x20);
            }
            if ((((uVar10 & 1) != 0) && (*(long *)(lVar22 + 0x8640) != 0)) &&
               (puVar9 = *(undefined8 **)(*(long *)(lVar22 + 0x8640) + 8),
               puVar9 != (undefined8 *)0x0)) {
              (**(code **)*puVar9)();
            }
            if (iVar21 - uVar19 != 0) {
              FUN_01b46be0(&local_a8);
              local_70 = 0;
              local_a8 = &PTR_FUN_049871b0;
              if (((DAT_04f292d0 & 1) == 0) &&
                 (iVar7 = __cxa_guard_acquire(&DAT_04f292d0), iVar7 != 0)) {
                FUN_00dd5f80(&DAT_04f292c0);
                __cxa_guard_release(&DAT_04f292d0);
              }
              if (0 < (int)DAT_04f292c0) {
                uVar10 = 0;
                do {
                  if (*(int *)(DAT_04f292c8 + uVar10 * 4) == 0x52) goto LAB_011f5a80;
                  uVar10 = uVar10 + 1;
                } while (DAT_04f292c0 != uVar10);
              }
              uVar10 = 0;
LAB_011f5a80:
              nn::time::IsValidDate(uVar6 & 0xffff,uVar6 >> 0x10 & 0xff,(uint)uVar4 & 0xff);
              local_88 = (undefined4)uVar10;
              uStack_84 = 0x11;
              local_80 = 1;
              local_74 = 0;
              local_7c = *(undefined4 *)PTR_DAT_04bb37e0;
              uStack_78 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
              local_a0 = CONCAT44(uVar6 & 0xff000000 | ((uint)uVar16 & 0xff) << 0x10 |
                                  uVar6 & 0xffff,iVar18);
              local_70 = iVar21 - uVar19;
              lVar8 = (*(code *)local_a8[4])(&local_a8,DAT_0532d280);
              plVar20 = DAT_0532d278;
              if (lVar8 != 0) {
                lVar22 = *DAT_0532d278;
                plVar2 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar8);
                *DAT_0532d278 = (long)plVar2;
                *plVar2 = lVar22;
                plVar2[1] = (long)plVar20;
                if (lVar22 != 0) {
                  *(long **)(lVar22 + 8) = plVar2;
                }
                *(int *)(plVar20 + 2) = (int)plVar20[2] + 1;
              }
            }
          }
        }
        iVar18 = iVar18 + 1;
      } while (iVar18 != 8);
    }
  }
  return;
}

