
uint FUN_027ff9e0(long param_1,undefined8 param_2,uint param_3)

{
  short *psVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  undefined *puVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  short *psVar14;
  uint *puVar15;
  uint *puVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  short *psVar20;
  long lVar21;
  uint uVar22;
  uint local_8c;
  uint local_88 [2];
  undefined **local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  long local_70;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  
  uVar10 = *(uint *)(param_1 + 0x158);
  psVar20 = (short *)(param_1 + 0xb8);
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  if (uVar10 == 0) {
    iVar12 = 0;
  }
  else {
    if (uVar10 == 1) {
      uVar18 = 0;
      iVar12 = 0;
    }
    else {
      uVar18 = 0;
      iVar12 = 0;
      psVar14 = (short *)(param_1 + 0xc0);
      do {
        psVar1 = psVar14 + -4;
        uVar18 = uVar18 + 2;
        sVar7 = *psVar14;
        psVar14 = psVar14 + 8;
        if (*psVar1 == -2) {
          iVar12 = iVar12 + 1;
        }
        if (sVar7 == -2) {
          iVar12 = iVar12 + 1;
        }
      } while (((ulong)uVar10 & 0x1e) != uVar18);
    }
    if (((uVar10 & 1) != 0) && (psVar20[uVar18 * 4] == -2)) {
      iVar12 = iVar12 + 1;
    }
  }
  uVar10 = *(uint *)(param_1 + 0xa0);
  if (0x13 < uVar10) {
    uVar10 = 0x14;
  }
  if (uVar10 == 0) {
    iVar17 = 0;
  }
  else {
    if (uVar10 == 1) {
      uVar18 = 0;
      iVar17 = 0;
    }
    else {
      uVar18 = 0;
      iVar17 = 0;
      psVar14 = (short *)(param_1 + 8);
      do {
        psVar1 = psVar14 + -4;
        uVar18 = uVar18 + 2;
        sVar7 = *psVar14;
        psVar14 = psVar14 + 8;
        if (*psVar1 == -2) {
          iVar17 = iVar17 + 1;
        }
        if (sVar7 == -2) {
          iVar17 = iVar17 + 1;
        }
      } while (((ulong)uVar10 & 0x1e) != uVar18);
    }
    if (((uVar10 & 1) != 0) && (*(short *)(param_1 + uVar18 * 8) == -2)) {
      iVar17 = iVar17 + 1;
    }
  }
  uVar10 = iVar17 + iVar12;
  uVar11 = param_3 / 10;
  if (uVar10 <= param_3 / 10) {
    uVar11 = uVar10;
  }
  if (uVar11 != 0) {
    uVar22 = uVar11;
    do {
      FUN_01aedf10(&local_80,100);
      FUN_027faa50(param_1,&local_80,0,0,0);
      uVar22 = uVar22 - 1;
    } while (uVar22 != 0);
    uVar10 = uVar10 - uVar11;
  }
  local_8c = param_3 + uVar11 * -10;
  if (local_8c != 0) {
    if (uVar10 != 0) {
      FUN_01aedf10(&local_80,local_8c * 10 & 0xfffe);
      uVar10 = FUN_027faa50(param_1,&local_80,0,0,0);
      puVar8 = PTR_DAT_04bb43c0;
      if ((uVar10 & 1) != 0) {
        lVar19 = *(long *)PTR_DAT_04bb43c0;
        uVar11 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
LAB_027ffc00:
            FUN_02648c90(param_2,&local_80,0);
          }
        }
      }
      goto LAB_02800260;
    }
    uVar18 = 0;
    uVar10 = 0;
    if (*(byte *)(param_1 + 0x178) < 3) {
      uVar10 = (uint)*(byte *)(param_1 + 0x178);
    }
    ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar10);
    do {
      puVar8 = PTR_DAT_04bb43c0;
      uVar10 = *(uint *)(param_1 + 0x158);
      if (0x13 < uVar10) {
        uVar10 = 0x14;
      }
      if (uVar18 < uVar10) {
        sVar7 = *psVar20;
        psVar1 = psVar20;
joined_r0x027ffce8:
        psVar14 = psVar1;
        if (sVar7 != -2) {
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          uVar10 = FUN_0277d6c4(psVar1);
          if (*(long *)puVar8 == 0) goto LAB_027ffd50;
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          psVar14 = &DAT_05586008;
          if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
            psVar14 = &DAT_05586008;
            if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
              psVar14 = psVar1;
            }
          }
        }
      }
      else {
        uVar11 = (uint)(uVar18 + -uVar10);
        if ((int)uVar11 < 0) {
LAB_027ffd50:
          psVar14 = &DAT_05586008;
        }
        else {
          uVar22 = *(uint *)(param_1 + 0xa0);
          if (0x13 < uVar22) {
            uVar22 = 0x14;
          }
          psVar14 = &DAT_05586008;
          if (uVar11 < uVar22) {
            psVar1 = (short *)(param_1 + (uVar18 + -uVar10 & 0xffffffff) * 8);
            sVar7 = *psVar1;
            goto joined_r0x027ffce8;
          }
        }
      }
      puVar8 = PTR_DAT_04bb43c0;
      sVar7 = *psVar14;
      uVar5 = (undefined1)psVar14[1];
      uVar6 = *(undefined1 *)((long)psVar14 + 3);
      uVar4 = *(undefined4 *)(psVar14 + 2);
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      local_68 = sVar7;
      local_66 = uVar5;
      local_65 = uVar6;
      local_64 = uVar4;
      uVar10 = FUN_0277d6c4(&local_68);
      lVar19 = *(long *)puVar8;
      if (lVar19 != 0) {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (uVar10 < *(uint *)(lVar21 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
            local_70 = 0;
            local_80 = ppuVar2;
            local_78 = sVar7;
            local_76 = uVar5;
            local_75 = uVar6;
            local_74 = uVar4;
            uVar10 = FUN_0277d6c4(&local_78);
            if (DAT_053274a0 == 0) {
LAB_027ffef4:
              uVar11 = 0xbc;
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              uVar11 = 0xbc;
              if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) == 0)
                goto LAB_027ffef4;
                lVar19 = *(long *)PTR_DAT_04bc0428;
                uVar10 = FUN_0277d6c4(&local_68);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                uVar11 = 0xbc;
                if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
                  puVar15 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8);
                  if (puVar15 == (uint *)0x0) goto LAB_027ffef4;
                  uVar10 = *puVar15;
                  uVar11 = 0;
                  if ((uVar10 != 0) && (puVar15 != (uint *)(ulong)uVar10)) {
                    puVar16 = (uint *)((long)puVar15 - (long)(ulong)uVar10);
                    uVar11 = 0;
                    if (*puVar16 != 0) {
                      uVar10 = puVar16[1];
                      if ((uVar10 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                        lVar19 = 0xc;
                        if (*(char *)((long)puVar16 + 10) != '\0') {
                          lVar19 = 0x1c;
                        }
                        lVar19 = (long)puVar16 + lVar19 + (ulong)(ushort)puVar16[2] * 8;
                        if (lVar19 != 0) {
                          uVar11 = 0;
                          if ((ulong)uVar10 != 0) {
                            uVar11 = (uint)((ulong)((long)puVar15 - lVar19) / (ulong)uVar10);
                          }
                          if (*puVar16 <= uVar11) {
                            uVar11 = 0xffffffff;
                          }
                          if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                             (uVar11 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar11 * 2), uVar11 < 0xbd))
                          goto LAB_027ffef8;
                        }
                      }
                      uVar11 = 0;
                    }
                  }
                }
              }
            }
LAB_027ffef8:
            puVar8 = PTR_DAT_04bb43c0;
            local_88[0] = uVar11;
            if (uVar11 == 0x59) {
              local_80 = &PTR_FUN_04a36b50;
              local_70 = 0;
              lVar19 = *(long *)PTR_DAT_04bb43c0;
              local_78 = sVar7;
              local_76 = uVar5;
              local_75 = uVar6;
              local_74 = uVar4;
              uVar10 = FUN_0277d6c4(&local_78);
              if (*(long *)puVar8 != 0) {
                lVar19 = *(long *)(lVar19 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar19 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_68);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar19 + 0x1d8)) {
                    lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (lVar19 != 0) {
                      local_70 = lVar19;
                    }
                  }
                }
              }
              iVar12 = FUN_01aedd20(&local_80);
              puVar8 = PTR_DAT_04bb43c0;
              uVar10 = 10 - iVar12 / 10;
              if (local_8c < uVar10) {
                lVar19 = *(long *)PTR_DAT_04bb43c0;
                uVar10 = FUN_0277d6c4(&local_68);
                if (*(long *)puVar8 != 0) {
                  lVar19 = *(long *)(lVar19 + 0x57e58);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                  if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                    FUN_01aedf10(&local_80,(iVar12 / 10 + local_8c) * 10 & 0xfffe);
                    uVar18 = FUN_027fa2dc(param_1,uVar18,&local_80,0);
                    if (((uVar18 & 1) != 0) && (uVar18 = FUN_0277d9a8(&local_80), (uVar18 & 1) != 0)
                       ) {
                      FUN_02648c90(param_2,&local_80,0);
                    }
                    goto LAB_0280025c;
                  }
                }
              }
              else {
                FUN_01aedf10(&local_80,100);
                FUN_01aedf10(local_88,100);
                uVar13 = FUN_027fa2dc(param_1,uVar18,local_88,0);
                puVar8 = PTR_DAT_04bb43c0;
                if ((uVar13 & 1) != 0) {
                  lVar19 = *(long *)PTR_DAT_04bb43c0;
                  uVar11 = FUN_0277d6c4(&local_80);
                  if (*(long *)puVar8 != 0) {
                    lVar19 = *(long *)(lVar19 + 0x57e58);
                    uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((uVar11 < *(uint *)(lVar19 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                      FUN_02648c90(param_2,&local_80,0);
                    }
                  }
                }
                local_8c = local_8c - uVar10;
              }
            }
          }
        }
      }
      uVar18 = uVar18 + 1;
      psVar20 = psVar20 + 4;
      uVar10 = 0;
      if (*(byte *)(param_1 + 0x178) < 3) {
        uVar10 = (uint)*(byte *)(param_1 + 0x178);
      }
      local_80 = (undefined **)CONCAT44(local_80._4_4_,uVar10);
      uVar13 = 0x1e;
      if (uVar10 != 1) {
        uVar13 = 0x14;
      }
      uVar3 = 0x28;
      if (uVar10 != 2) {
        uVar3 = uVar13;
      }
    } while (uVar18 < uVar3);
    if (local_8c != 0) {
      FUN_027fb5c0(param_1);
      puVar8 = PTR_DAT_04bb43c0;
      iVar12 = local_8c * 10;
      do {
        bVar9 = local_8c < 10;
        local_8c = local_8c - 10;
        if (bVar9) {
          FUN_01aedf10(&local_80,iVar12);
          uVar10 = FUN_027faa50(param_1,&local_80,0,0,0);
          puVar8 = PTR_DAT_04bb43c0;
          if ((uVar10 & 1) == 0) goto LAB_02800260;
          lVar19 = *(long *)PTR_DAT_04bb43c0;
          uVar11 = FUN_0277d6c4(&local_80);
          if (*(long *)puVar8 == 0) goto LAB_02800260;
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((*(uint *)(lVar19 + 0x1d8) <= uVar11) ||
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar11 * 8) == 0)) goto LAB_02800260;
          goto LAB_027ffc00;
        }
        FUN_01aedf10(&local_80,100);
        uVar18 = FUN_027faa50(param_1,&local_80,0,0,0);
        if ((uVar18 & 1) == 0) {
          uVar10 = 0;
          goto LAB_02800260;
        }
        lVar19 = *(long *)puVar8;
        uVar10 = FUN_0277d6c4(&local_80);
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            FUN_02648c90(param_2,&local_80,0);
          }
        }
        iVar12 = iVar12 + -100;
      } while (local_8c != 0);
    }
  }
LAB_0280025c:
  uVar10 = 1;
LAB_02800260:
  return uVar10 & 1;
}

