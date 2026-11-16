
undefined4 FUN_0289b890(long param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  long lVar14;
  long lVar15;
  undefined4 *puVar16;
  int iVar17;
  uint uVar18;
  uint local_6bc;
  undefined4 local_6b0;
  undefined4 uStack_6ac;
  uint local_6a8;
  undefined4 local_6a4 [384];
  uint local_a4;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 local_96;
  undefined4 local_94;
  undefined8 local_90;
  uint local_84;
  undefined **local_80;
  undefined2 local_78;
  undefined2 local_76;
  undefined4 local_74;
  undefined8 local_70;
  
  local_6a8 = 0;
  uVar9 = FUN_0291e130(local_6a4,&local_6a8,0);
  uVar6 = local_6a8;
  puVar5 = PTR_DAT_04bb43c0;
  if (((uVar9 & 1) != 0) && (local_6a8 != 0)) {
    uVar18 = 0;
    iVar17 = 0;
    param_1 = param_1 + 4;
    do {
      piVar11 = (int *)(DAT_04da6480 + 0x4068);
      if (*(short *)piVar11 == 0) {
        local_a0 = *(undefined **)(DAT_04da6480 + 0x4060);
        if ((char)((ulong)local_a0 >> 0x20) < '\x05') {
          lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a0);
          local_80 = (undefined **)(lVar10 + -0x15180);
          local_a0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        }
        uVar9 = (ulong)local_a0 >> 0x30;
        local_a0._0_6_ = CONCAT24(5,(int)local_a0);
        local_a0 = (undefined *)(CONCAT26((short)uVar9,(undefined6)local_a0) & 0xff00ffffffffffff);
        piVar11 = (int *)&local_a0;
      }
      iVar3 = *piVar11;
      nn::time::GetDayOfWeek((int)(short)iVar3,(iVar3 << 8) >> 0x18,iVar3 >> 0x18);
      lVar10 = 0;
      local_6bc = 0;
      do {
        puVar16 = (undefined4 *)(param_1 + lVar10 * 8);
        lVar14 = *(long *)puVar5;
        uVar7 = FUN_0277d6c4(puVar16);
        lVar15 = *(long *)puVar5;
        if (lVar15 != 0) {
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            uVar7 = FUN_0277d6c4(puVar16);
            lVar14 = *(long *)puVar5;
            if (lVar14 != 0) {
              lVar15 = *(long *)(lVar15 + 0x57e58);
              uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
              if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
                local_70 = 0;
                local_76 = *(undefined2 *)((long)puVar16 + 2);
                local_80 = &PTR_FUN_04a36b50;
                local_78 = *(undefined2 *)puVar16;
                local_74 = puVar16[1];
                uVar7 = FUN_0277d6c4(&local_78);
                if (*(long *)puVar5 == 0) {
LAB_0289bb54:
                  local_84 = 0xbc;
                }
                else {
                  lVar14 = *(long *)(lVar14 + 0x57e58);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
                     (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                  goto LAB_0289bb54;
                  lVar14 = *(long *)PTR_DAT_04bc0428;
                  uVar7 = FUN_0277d6c4(puVar16);
                  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                  if ((*(uint *)(lVar14 + 0x1d8) <= uVar7) ||
                     (puVar12 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8),
                     puVar12 == (uint *)0x0)) goto LAB_0289bb54;
                  uVar7 = *puVar12;
                  local_84 = 0;
                  if ((uVar7 != 0) && (puVar12 != (uint *)(ulong)uVar7)) {
                    puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar7);
                    local_84 = 0;
                    if (*puVar13 != 0) {
                      uVar7 = puVar13[1];
                      if ((uVar7 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                        lVar14 = 0xc;
                        if (*(char *)((long)puVar13 + 10) != '\0') {
                          lVar14 = 0x1c;
                        }
                        lVar14 = (long)puVar13 + lVar14 + (ulong)(ushort)puVar13[2] * 8;
                        if (lVar14 != 0) {
                          uVar8 = 0;
                          if ((ulong)uVar7 != 0) {
                            uVar8 = (uint)((ulong)((long)puVar12 - lVar14) / (ulong)uVar7);
                          }
                          if (*puVar13 <= uVar8) {
                            uVar8 = 0xffffffff;
                          }
                          if ((uVar8 < *(uint *)PTR_DAT_04bc00c8) &&
                             (local_84 = (uint)*(ushort *)
                                                (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                (long)(int)uVar8 * 2), local_84 < 0xbd))
                          goto LAB_0289bb58;
                        }
                      }
                      local_84 = 0;
                    }
                  }
                }
LAB_0289bb58:
                switch(local_84) {
                case 9:
                  if (local_6bc == 0) {
LAB_0289bbe4:
                    uVar7 = 0;
                    lVar14 = *(long *)puVar5;
                    do {
                      puVar1 = (undefined2 *)(param_1 + ((long)((ulong)uVar7 << 0x20) >> 0x1d));
                      uVar8 = FUN_0277d6c4(puVar1);
                      lVar15 = *(long *)puVar5;
                      if (lVar15 == 0) {
                        lVar15 = 0;
                      }
                      else {
                        lVar14 = *(long *)(lVar14 + 0x57e58);
                        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
                        if ((uVar8 < *(uint *)(lVar14 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
                          lVar14 = param_1 + (long)(int)uVar7 * 8;
                          local_98 = *puVar1;
                          local_90 = 0;
                          local_a0 = PTR_DAT_04bc0510 + 0x10;
                          local_96 = *(undefined2 *)(lVar14 + 2);
                          local_94 = *(undefined4 *)(lVar14 + 4);
                          uVar8 = FUN_0277d6c4(&local_98);
                          lVar14 = *(long *)puVar5;
                          if (lVar14 == 0) {
LAB_0289bd98:
                            local_a4 = 0xbc;
                          }
                          else {
                            lVar15 = *(long *)(lVar15 + 0x57e58);
                            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                            if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
                               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                            goto LAB_0289bd98;
                            lVar15 = *(long *)PTR_DAT_04bc0428;
                            uVar8 = FUN_0277d6c4(puVar1);
                            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                            lVar14 = *(long *)puVar5;
                            if ((*(uint *)(lVar15 + 0x1d8) <= uVar8) ||
                               (puVar12 = *(uint **)(*(long *)(lVar15 + 0x1e0) +
                                                    (long)(int)uVar8 * 8), puVar12 == (uint *)0x0))
                            goto LAB_0289bd98;
                            uVar8 = *puVar12;
                            local_a4 = 0;
                            if ((uVar8 != 0) && (puVar12 != (uint *)(ulong)uVar8)) {
                              puVar13 = (uint *)((long)puVar12 - (long)(ulong)uVar8);
                              local_a4 = 0;
                              if (*puVar13 != 0) {
                                uVar8 = puVar13[1];
                                if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
                                  lVar15 = 0xc;
                                  if (*(char *)((long)puVar13 + 10) != '\0') {
                                    lVar15 = 0x1c;
                                  }
                                  lVar15 = (long)puVar13 + lVar15 + (ulong)(ushort)puVar13[2] * 8;
                                  if (lVar15 != 0) {
                                    uVar2 = 0;
                                    if ((ulong)uVar8 != 0) {
                                      uVar2 = (uint)((ulong)((long)puVar12 - lVar15) / (ulong)uVar8)
                                      ;
                                    }
                                    if (*puVar13 <= uVar2) {
                                      uVar2 = 0xffffffff;
                                    }
                                    if (uVar2 < *(uint *)PTR_DAT_04bc00c8) {
                                      uVar4 = *(ushort *)
                                               (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                               (long)(int)uVar2 * 2);
                                      if (uVar4 < 0xbd) {
                                        local_a4 = 0x10;
                                        if (uVar4 != 0x11) {
                                          local_a4 = (uint)uVar4;
                                        }
                                        goto LAB_0289bd9c;
                                      }
                                    }
                                  }
                                }
                                local_a4 = 0;
                              }
                            }
                          }
LAB_0289bd9c:
                          lVar15 = lVar14;
                          if (local_84 == local_a4) {
                            uVar9 = FUN_0277d7b4(puVar1,puVar16);
                            if (((uVar9 & 1) != 0) &&
                               (local_6bc = local_6bc + 1, uVar18 < local_6bc)) goto LAB_0289bdf8;
                            break;
                          }
                        }
                      }
                      uVar7 = uVar7 + 1;
                      lVar14 = lVar15;
                    } while (uVar7 != 0x80);
                  }
                  break;
                case 10:
                  if (local_6bc == 2) goto LAB_0289bbe4;
                  break;
                case 0xd:
                  if (local_6bc == 1) goto LAB_0289bbe4;
                  break;
                case 0xf:
                  if (local_6bc == 5) goto LAB_0289bbe4;
                  break;
                case 0x10:
                case 0x11:
                  if (local_6bc == 3) {
                    local_84 = 0x10;
                    goto LAB_0289bbe4;
                  }
                  break;
                case 0x12:
                  if (local_6bc == 4) goto LAB_0289bbe4;
                }
              }
            }
          }
        }
        lVar10 = lVar10 + 1;
      } while (lVar10 != 0x80);
      puVar16 = (undefined4 *)&DAT_05586008;
LAB_0289bdf8:
      local_6b0 = *puVar16;
      uStack_6ac = puVar16[1];
      lVar10 = *(long *)puVar5;
      uVar7 = FUN_0277d6c4(&local_6b0);
      if (*(long *)puVar5 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
           (uVar9 = FUN_0277d7b4(&local_6b0,param_2), (uVar9 & 1) != 0)) {
          return local_6a4[(long)iVar17 * 3];
        }
      }
      iVar17 = iVar17 + 1;
    } while ((iVar17 != 0x80) && (uVar18 = uVar18 + 1, uVar18 < uVar6));
  }
  return 0;
}

