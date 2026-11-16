
bool FUN_027feee0(short *param_1,uint param_2)

{
  short *psVar1;
  undefined **ppuVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  short *psVar7;
  short *psVar8;
  undefined *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  ushort uVar15;
  uint *puVar16;
  undefined8 *puVar17;
  short *psVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint *puVar22;
  short *psVar23;
  long lVar24;
  long lVar25;
  uint local_b4;
  short *local_88;
  undefined **local_80;
  short *local_78;
  undefined1 *local_70;
  undefined8 uStack_68;
  
  uVar11 = *(uint *)(param_1 + 0xac);
  psVar1 = param_1 + 0x5c;
  if (0x13 < uVar11) {
    uVar11 = 0x14;
  }
  if (uVar11 == 0) {
    iVar10 = 0;
  }
  else {
    if (uVar11 == 1) {
      uVar21 = 0;
      iVar10 = 0;
    }
    else {
      uVar21 = 0;
      iVar10 = 0;
      psVar23 = param_1 + 0x60;
      do {
        psVar18 = psVar23 + -4;
        uVar21 = uVar21 + 2;
        sVar6 = *psVar23;
        psVar23 = psVar23 + 8;
        if (*psVar18 == -2) {
          iVar10 = iVar10 + 1;
        }
        if (sVar6 == -2) {
          iVar10 = iVar10 + 1;
        }
      } while (((ulong)uVar11 & 0x1e) != uVar21);
    }
    if (((uVar11 & 1) != 0) && (psVar1[uVar21 * 4] == -2)) {
      iVar10 = iVar10 + 1;
    }
  }
  uVar11 = *(uint *)(param_1 + 0x50);
  if (0x13 < uVar11) {
    uVar11 = 0x14;
  }
  if (uVar11 == 0) {
    iVar20 = 0;
  }
  else {
    if (uVar11 == 1) {
      uVar21 = 0;
      iVar20 = 0;
    }
    else {
      uVar21 = 0;
      iVar20 = 0;
      psVar23 = param_1 + 4;
      do {
        psVar18 = psVar23 + -4;
        uVar21 = uVar21 + 2;
        sVar6 = *psVar23;
        psVar23 = psVar23 + 8;
        if (*psVar18 == -2) {
          iVar20 = iVar20 + 1;
        }
        if (sVar6 == -2) {
          iVar20 = iVar20 + 1;
        }
      } while (((ulong)uVar11 & 0x1e) != uVar21);
    }
    if (((uVar11 & 1) != 0) && (param_1[uVar21 * 4] == -2)) {
      iVar20 = iVar20 + 1;
    }
  }
  uVar21 = 0;
  local_b4 = (iVar20 + iVar10) * 10;
  uVar11 = 0;
  if (*(byte *)(param_1 + 0xbc) < 3) {
    uVar11 = (uint)*(byte *)(param_1 + 0xbc);
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar11);
  ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
  psVar23 = psVar1;
  do {
    puVar9 = PTR_DAT_04bb43c0;
    uVar14 = 0x14;
    uVar11 = *(uint *)(param_1 + 0xac);
    if (0x13 < *(uint *)(param_1 + 0xac)) {
      uVar11 = uVar14;
    }
    if (uVar21 < uVar11) {
      sVar6 = *psVar23;
      psVar7 = psVar23;
joined_r0x027ff128:
      psVar18 = psVar7;
      if (sVar6 != -2) {
        lVar24 = *(long *)PTR_DAT_04bb43c0;
        uVar11 = FUN_0277d6c4(psVar7);
        if (*(long *)puVar9 == 0) goto LAB_027ff190;
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        psVar18 = &DAT_05586008;
        if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
          psVar18 = &DAT_05586008;
          if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
            psVar18 = psVar7;
          }
        }
      }
    }
    else {
      uVar12 = (uint)(uVar21 + -uVar11);
      if ((int)uVar12 < 0) {
LAB_027ff190:
        psVar18 = &DAT_05586008;
      }
      else {
        uVar19 = *(uint *)(param_1 + 0x50);
        if (0x13 < *(uint *)(param_1 + 0x50)) {
          uVar19 = uVar14;
        }
        psVar18 = &DAT_05586008;
        if (uVar12 < uVar19) {
          sVar6 = param_1[(uVar21 + -uVar11 & 0xffffffff) * 4];
          psVar7 = param_1 + (uVar21 + -uVar11 & 0xffffffff) * 4;
          goto joined_r0x027ff128;
        }
      }
    }
    puVar9 = PTR_DAT_04bb43c0;
    psVar8 = *(short **)psVar18;
    psVar7 = *(short **)psVar18;
    local_88 = *(short **)psVar18;
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar11 = FUN_0277d6c4(&local_88);
    lVar25 = *(long *)puVar9;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
        local_70 = (undefined1 *)0x0;
        local_80 = ppuVar2;
        local_78 = psVar7;
        uVar11 = FUN_0277d6c4(&local_78);
        if (DAT_053274a0 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar11 = FUN_0277d6c4(&local_88);
            puVar9 = PTR_DAT_04bb43c0;
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
               (((puVar16 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8),
                 puVar16 != (uint *)0x0 && (uVar11 = *puVar16, uVar11 != 0)) &&
                (puVar16 != (uint *)(ulong)uVar11)))) {
              puVar22 = (uint *)((long)puVar16 - (long)(ulong)uVar11);
              if (((*puVar22 != 0) && (uVar11 = puVar22[1], uVar11 != 0)) &&
                 ((ulong)(ushort)puVar22[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar22 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
                if (lVar24 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar11 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar16 - lVar24) / (ulong)uVar11);
                  }
                  if (*puVar22 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if (((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                      (uVar15 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2)
                      , uVar15 < 0xbd)) && (uVar15 == 0x59)) {
                    local_80 = &PTR_FUN_04a36b50;
                    local_70 = (undefined1 *)0x0;
                    lVar24 = *(long *)PTR_DAT_04bb43c0;
                    local_78 = psVar8;
                    uVar11 = FUN_0277d6c4(&local_78);
                    if (*(long *)puVar9 != 0) {
                      lVar24 = *(long *)(lVar24 + 0x57e58);
                      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                      if ((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                        lVar24 = *(long *)PTR_DAT_04bc0428;
                        uVar11 = FUN_0277d6c4(&local_88);
                        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                        if (uVar11 < *(uint *)(lVar24 + 0x1d8)) {
                          lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8);
                          if (lVar24 != 0) {
                            local_70 = (undefined1 *)lVar24;
                          }
                        }
                      }
                    }
                    iVar10 = FUN_01aedd20(&local_80);
                    iVar10 = (int)((ulong)((long)iVar10 * -0x66666667) >> 0x20);
                    local_b4 = local_b4 + ((iVar10 >> 2) - (iVar10 >> 0x1f)) + 10;
                  }
                }
              }
            }
          }
        }
      }
    }
    uVar21 = uVar21 + 1;
    psVar23 = psVar23 + 4;
    uVar11 = 0;
    if (*(byte *)(param_1 + 0xbc) < 3) {
      uVar11 = (uint)*(byte *)(param_1 + 0xbc);
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar11);
    uVar4 = 0x1e;
    if (uVar11 != 1) {
      uVar4 = 0x14;
    }
    uVar5 = 0x28;
    if (uVar11 != 2) {
      uVar5 = uVar4;
    }
  } while (uVar21 < uVar5);
  if (DAT_05574040 != 0) {
    puVar17 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar25 = (**(code **)(*(long *)*puVar17 + 0x38))();
      lVar24 = 0;
      if (lVar25 != 0) {
        lVar24 = lVar25 + 0x70;
      }
      goto LAB_027ff438;
    }
    if (puVar17 != (undefined8 *)0x0) {
      lVar24 = 0;
      if ((long *)puVar17[0x26] != (long *)0x0) {
        lVar24 = (**(code **)(*(long *)puVar17[0x26] + 0x38))();
      }
      goto LAB_027ff438;
    }
  }
  lVar24 = 0;
LAB_027ff438:
  if (*(long **)(&LAB_001b6eb0 + lVar24) == (long *)0x0) {
    uVar21 = 0;
  }
  else {
    puVar17 = (undefined8 *)**(long **)(&LAB_001b6eb0 + lVar24);
    uVar21 = 0;
    if (puVar17 != (undefined8 *)0x0) {
      uVar21 = (**(code **)*puVar17)();
    }
  }
  iVar10 = *(int *)(*(long *)(lVar24 + 0x1b6e98) + *(long *)(lVar24 + 0x1b6e90));
  if ((((uVar21 & 1) != 0) && (*(long *)(&LAB_001b6eb0 + lVar24) != 0)) &&
     (puVar17 = *(undefined8 **)(*(long *)(&LAB_001b6eb0 + lVar24) + 8),
     puVar17 != (undefined8 *)0x0)) {
    (**(code **)*puVar17)();
  }
  uVar11 = 0;
  uVar21 = 0;
  uVar12 = 0;
  if (*(byte *)(param_1 + 0xbc) < 3) {
    uVar12 = (uint)*(byte *)(param_1 + 0xbc);
  }
  local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar12);
  psVar23 = psVar1;
  do {
    puVar9 = PTR_DAT_04bb43c0;
    uVar12 = *(uint *)(param_1 + 0xac);
    if (0x13 < *(uint *)(param_1 + 0xac)) {
      uVar12 = 0x14;
    }
    if (uVar21 < uVar12) {
      sVar6 = *psVar23;
      psVar7 = psVar23;
joined_r0x027ff588:
      psVar18 = psVar7;
      if (sVar6 != -2) {
        lVar24 = *(long *)PTR_DAT_04bb43c0;
        uVar12 = FUN_0277d6c4(psVar7);
        if (*(long *)puVar9 == 0) goto LAB_027ff5f0;
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        psVar18 = &DAT_05586008;
        if (uVar12 < *(uint *)(lVar24 + 0x1d8)) {
          psVar18 = &DAT_05586008;
          if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
            psVar18 = psVar7;
          }
        }
      }
    }
    else {
      uVar19 = (uint)(uVar21 + -uVar12);
      if ((int)uVar19 < 0) {
LAB_027ff5f0:
        psVar18 = &DAT_05586008;
      }
      else {
        uVar3 = *(uint *)(param_1 + 0x50);
        if (0x13 < *(uint *)(param_1 + 0x50)) {
          uVar3 = 0x14;
        }
        psVar18 = &DAT_05586008;
        if (uVar19 < uVar3) {
          sVar6 = param_1[(uVar21 + -uVar12 & 0xffffffff) * 4];
          psVar7 = param_1 + (uVar21 + -uVar12 & 0xffffffff) * 4;
          goto joined_r0x027ff588;
        }
      }
    }
    puVar9 = PTR_DAT_04bb43c0;
    psVar7 = *(short **)psVar18;
    local_88 = *(short **)psVar18;
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar12 = FUN_0277d6c4(&local_88);
    lVar25 = *(long *)puVar9;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        local_70 = (undefined1 *)0x0;
        local_80 = &PTR_FUN_04a36b50;
        local_78 = psVar7;
        uVar12 = FUN_0277d6c4(&local_78);
        if (DAT_053274a0 == 0) {
          uVar15 = 0xbc;
        }
        else {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          uVar15 = 0xbc;
          if (uVar12 < *(uint *)(lVar24 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8) == 0) {
LAB_027ff7a4:
              uVar15 = 0xbc;
            }
            else {
              lVar24 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_88);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              uVar15 = 0xbc;
              if (uVar12 < *(uint *)(lVar24 + 0x1d8)) {
                puVar16 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar12 * 8);
                if (puVar16 == (uint *)0x0) goto LAB_027ff7a4;
                uVar12 = *puVar16;
                uVar15 = 0;
                if ((uVar12 != 0) && (puVar16 != (uint *)(ulong)uVar12)) {
                  puVar22 = (uint *)((long)puVar16 - (long)(ulong)uVar12);
                  uVar15 = 0;
                  if (*puVar22 != 0) {
                    uVar12 = puVar22[1];
                    if ((uVar12 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                      lVar24 = 0xc;
                      if (*(char *)((long)puVar22 + 10) != '\0') {
                        lVar24 = 0x1c;
                      }
                      lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
                      if (lVar24 != 0) {
                        uVar19 = 0;
                        if ((ulong)uVar12 != 0) {
                          uVar19 = (uint)((ulong)((long)puVar16 - lVar24) / (ulong)uVar12);
                        }
                        if (*puVar22 <= uVar19) {
                          uVar19 = 0xffffffff;
                        }
                        if ((uVar19 < *(uint *)PTR_DAT_04bc00c8) &&
                           (uVar15 = *(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar19 * 2),
                           uVar15 < 0xbd)) goto LAB_027ff7a8;
                      }
                    }
                    uVar15 = 0;
                  }
                }
              }
            }
          }
        }
LAB_027ff7a8:
        if (uVar15 == 0x86) {
          uVar11 = uVar11 + 1;
        }
      }
    }
    uVar21 = uVar21 + 1;
    psVar23 = psVar23 + 4;
    uVar12 = 0;
    if (*(byte *)(param_1 + 0xbc) < 3) {
      uVar12 = (uint)*(byte *)(param_1 + 0xbc);
    }
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar12);
    uVar4 = 0x1e;
    if (uVar12 != 1) {
      uVar4 = 0x14;
    }
    uVar5 = 0x28;
    if (uVar12 != 2) {
      uVar5 = uVar4;
    }
    if (uVar5 <= uVar21) {
      if (uVar11 != 0) {
        iVar20 = 0;
        uVar19 = param_2 * 10 * iVar10;
        uVar12 = *(uint *)(param_1 + 0xb8);
        if ((!(*(byte *)((long)param_1 + 0x177) == 0 &&
              (((ulong)uVar12 == 0 && param_1[0xba] == 0) && *(byte *)(param_1 + 0xbb) == 0))) &&
           ((uint)*(byte *)((long)param_1 + 0x177) ==
            ((uVar12 + (uVar12 >> 0x10) + (uVar12 >> 0x18) + (uVar12 >> 8)) - 0x2d & 0xff))) {
          lVar24 = (ulong)uVar12 << ((ulong)(0x1d - *(byte *)(param_1 + 0xbb)) & 0x3f);
          iVar20 = ((int)lVar24 - (uint)(ushort)param_1[0xba]) + (int)((ulong)lVar24 >> 0x20) +
                   -0x7f1cd4ef;
        }
        local_80 = &PTR_LAB_04a915d0;
        local_70 = &LAB_028012e0;
        uStack_68 = 0;
        uVar12 = *(uint *)(param_1 + 0xac);
        if (0x13 < *(uint *)(param_1 + 0xac)) {
          uVar12 = uVar14;
        }
        local_78 = psVar1;
        iVar10 = FUN_0277c8f0(uVar12,&local_80);
        local_80 = &PTR_LAB_04a915f8;
        local_70 = &LAB_028012f0;
        uStack_68 = 0;
        uVar12 = *(uint *)(param_1 + 0x50);
        if (0x13 < *(uint *)(param_1 + 0x50)) {
          uVar12 = uVar14;
        }
        local_78 = param_1;
        iVar13 = FUN_0277c8f0(uVar12,&local_80);
        uVar14 = iVar10 + iVar20 + iVar13;
        uVar12 = uVar14 - uVar19;
        if (uVar19 <= uVar14) {
          local_88 = (short *)0x8a4;
          FUN_0277d4ac(&local_88);
          puVar9 = PTR_DAT_04bb43c0;
          local_70 = (undefined1 *)0x0;
          local_78 = local_88;
          local_80 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          lVar24 = *(long *)PTR_DAT_04bb43c0;
          uVar14 = FUN_0277d6c4(&local_78);
          if (*(long *)puVar9 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar24 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              lVar24 = *(long *)PTR_DAT_04bc0428;
              uVar14 = FUN_0277d6c4(&local_88);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if (uVar14 < *(uint *)(lVar24 + 0x1d8)) {
                lVar24 = *(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar14 * 8);
                if (lVar24 != 0) {
                  local_70 = (undefined1 *)lVar24;
                }
              }
            }
          }
          iVar10 = FUN_01aed730(&local_80);
          if (uVar12 < 99999) {
            uVar14 = 0;
          }
          else {
            uVar14 = 0;
            do {
              uVar12 = uVar12 - iVar10;
              uVar14 = uVar14 + 1;
            } while (0x1869e < uVar12);
          }
          iVar10 = 0;
          if (uVar14 <= uVar11) {
            iVar10 = (uVar11 - uVar14) * 10;
          }
          local_b4 = iVar10 + local_b4;
        }
      }
      return param_2 <= local_b4;
    }
  } while( true );
}

