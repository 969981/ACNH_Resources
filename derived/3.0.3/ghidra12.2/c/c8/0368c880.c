
/* WARNING: Removing unreachable block (ram,0x0368cf70) */

void FUN_0368c880(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  bool bVar7;
  short sVar8;
  int iVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  long *plVar13;
  char cVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  undefined8 *puVar19;
  undefined1 *puVar20;
  undefined *puVar21;
  long *plVar22;
  undefined2 *puVar23;
  short *psVar24;
  undefined *local_198;
  undefined1 *puStack_190;
  int local_188;
  undefined1 auStack_184 [7];
  undefined1 local_17d;
  undefined *local_178;
  undefined1 *puStack_170;
  int local_168;
  undefined1 local_164 [7];
  undefined1 local_15d;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [7];
  undefined1 local_13d;
  undefined *local_138;
  undefined *local_130;
  undefined8 local_128;
  uint local_120;
  undefined1 local_11c [15];
  undefined1 local_10d;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined8 local_b4;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  byte local_78;
  undefined8 local_70;
  
  lVar15 = *(long *)PTR_DAT_04bb4e28;
  if (lVar15 == 0) {
    return;
  }
  local_70 = 0;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar19 = &DAT_055c04a0;
  }
  else {
    puVar19 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar19 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar9 = FUN_006bd550(*puVar19,0);
      puVar19 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar19 = &DAT_055c04a0;
      }
    }
  }
  iVar9 = *(int *)(puVar19 + 7);
  if (DAT_05ac0a90 == iVar9) {
    lVar16 = 0;
    local_70 = (ulong)DAT_05ac0a94 << 0x20;
  }
  else if (DAT_05ac0aa0 == iVar9) {
    local_70 = (ulong)DAT_05ac0aa4 << 0x20;
    lVar16 = 1;
  }
  else if (DAT_05ac0ab0 == iVar9) {
    local_70 = (ulong)DAT_05ac0ab4 << 0x20;
    lVar16 = 2;
  }
  else if (DAT_05ac0ac0 == iVar9) {
    local_70 = (ulong)DAT_05ac0ac4 << 0x20;
    lVar16 = 3;
  }
  else if (DAT_05ac0ad0 == iVar9) {
    local_70 = (ulong)DAT_05ac0ad4 << 0x20;
    lVar16 = 4;
  }
  else if (DAT_05ac0ae0 == iVar9) {
    local_70 = (ulong)DAT_05ac0ae4 << 0x20;
    lVar16 = 5;
  }
  else {
    if (DAT_05ac0af0 == iVar9) {
      lVar16 = 6;
LAB_0368ca68:
      local_70 = CONCAT44((&DAT_05ac0a94)[lVar16 * 4],(int)local_70);
    }
    else {
      if (DAT_05ac0b00 == iVar9) {
        lVar16 = 7;
        goto LAB_0368ca68;
      }
      if (DAT_05ac0b10 == iVar9) {
        lVar16 = 8;
        goto LAB_0368ca68;
      }
      if (DAT_05ac0b20 == iVar9) {
        lVar16 = 9;
        goto LAB_0368ca68;
      }
    }
    if (DAT_05ac0af0 == iVar9) {
      lVar16 = 6;
    }
    else if (DAT_05ac0b00 == iVar9) {
      lVar16 = 7;
    }
    else if (DAT_05ac0b10 == iVar9) {
      lVar16 = 8;
    }
    else {
      if (DAT_05ac0b20 != iVar9) goto LAB_0368cad4;
      lVar16 = 9;
    }
  }
  local_70 = CONCAT44(local_70._4_4_,(&DAT_05ac0a98)[lVar16 * 4]);
LAB_0368cad4:
  if (*(int *)(param_1 + 0x278) != 0) {
    plVar22 = *(long **)(param_1 + 0x280);
    plVar13 = plVar22 + *(int *)(param_1 + 0x278);
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    do {
      lVar16 = *plVar22;
      uVar4 = *(uint *)(lVar16 + 0x4c);
      if (uVar4 != 0xffffffff) {
        local_10d = 0;
        local_11c[0] = 0;
        lVar17 = param_1 + 0x698 + (ulong)uVar4 * 0xd8;
        if (0x25 < uVar4) {
          lVar17 = param_1 + 0x698;
        }
        local_104 = *(undefined8 *)(lVar17 + 0x48);
        local_fc = *(undefined8 *)(lVar17 + 0x50);
        local_ec = *(undefined4 *)(lVar17 + 0x60);
        local_f4 = *(undefined8 *)(lVar17 + 0x58);
        uStack_d8 = *(undefined8 *)(lVar17 + 0x74);
        local_108 = *(undefined4 *)(lVar17 + 0x44);
        local_e8 = *(undefined2 *)(lVar17 + 100);
        local_e6 = *(undefined1 *)(lVar17 + 0x66);
        local_e5 = *(undefined1 *)(lVar17 + 0x67);
        local_e4 = *(undefined4 *)(lVar17 + 0x68);
        local_e0 = *(undefined8 *)(lVar17 + 0x6c);
        local_d0 = *(undefined8 *)(lVar17 + 0x7c);
        local_c8 = *(undefined4 *)(lVar17 + 0x84);
        uStack_c4 = *(undefined4 *)(lVar17 + 0x88);
        local_c0 = *(undefined2 *)(lVar17 + 0x8c);
        local_be = *(undefined1 *)(lVar17 + 0x8e);
        local_bd = *(undefined1 *)(lVar17 + 0x8f);
        local_bc = *(undefined4 *)(lVar17 + 0x90);
        uStack_b8 = *(undefined4 *)(lVar17 + 0x94);
        local_b4 = *(undefined8 *)(lVar17 + 0x98);
        local_ac = *(undefined8 *)(lVar17 + 0xa0);
        local_120 = 0x10;
        local_a4 = *(undefined8 *)(lVar17 + 0xa8);
        local_9c = *(undefined4 *)(lVar17 + 0xb0);
        local_98 = *(undefined2 *)(lVar17 + 0xb4);
        local_96 = *(undefined1 *)(lVar17 + 0xb6);
        local_95 = *(undefined1 *)(lVar17 + 0xb7);
        local_94 = *(undefined4 *)(lVar17 + 0xb8);
        local_90 = *(undefined2 *)(lVar17 + 0xbc);
        local_8e = *(undefined1 *)(lVar17 + 0xbe);
        local_8d = *(undefined1 *)(lVar17 + 0xbf);
        local_8c = *(undefined4 *)(lVar17 + 0xc0);
        local_88 = *(undefined2 *)(lVar17 + 0xc4);
        local_86 = *(undefined1 *)(lVar17 + 0xc6);
        local_85 = *(undefined1 *)(lVar17 + 199);
        local_84 = *(undefined4 *)(lVar17 + 200);
        local_80 = *(undefined2 *)(lVar17 + 0xcc);
        local_7e = *(undefined1 *)(lVar17 + 0xce);
        local_7d = *(undefined1 *)(lVar17 + 0xcf);
        local_7c = *(undefined4 *)(lVar17 + 0xd0);
        local_78 = *(byte *)(lVar16 + 0x48) >> 4 & 1;
        local_138 = (undefined *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar16 + 0x50));
        bVar7 = (*(byte *)(lVar16 + 0x48) & 2) != 0;
        lVar17 = lVar16 + 8;
        if (bVar7) {
          lVar17 = lVar16 + 0x60;
        }
        lVar3 = 8;
        if (bVar7) {
          lVar3 = 0x60;
        }
        local_130 = puVar1;
        local_128 = local_11c;
        (**(code **)(*(long *)(lVar16 + lVar3) + 0x18))(lVar17);
        puVar20 = *(undefined1 **)(lVar17 + 8);
        if (local_11c != puVar20) {
          (**(code **)(*(long *)(lVar16 + lVar3) + 0x18))(lVar17);
          lVar16 = 0;
          do {
            if (*(char *)(*(long *)(lVar17 + 8) + lVar16) == '\0') goto LAB_0368cb1c;
            lVar3 = *(long *)(lVar17 + 8) + lVar16;
            if (*(char *)(lVar3 + 1) == '\0') {
              lVar16 = lVar16 + 1;
              goto LAB_0368cb1c;
            }
            if (*(char *)(lVar3 + 2) == '\0') {
              lVar16 = lVar16 + 2;
              goto LAB_0368cb1c;
            }
            lVar16 = lVar16 + 3;
          } while (lVar16 != 0x80001);
          lVar16 = 0;
LAB_0368cb1c:
          iVar9 = (int)lVar16;
          if ((int)local_120 <= (int)lVar16) {
            iVar9 = local_120 - 1;
          }
          memcpy(local_11c,puVar20,(long)iVar9);
          local_11c[iVar9] = 0;
        }
        FUN_03733c40(lVar15,&local_138);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar13);
  }
  puVar21 = PTR_DAT_04bc11f0;
  puVar1 = PTR_DAT_04bb4960;
  iVar9 = 0;
  lVar16 = param_1 + 0x698;
  do {
    if (*(int *)(param_1 + 0x68c) == 0) {
      if ((local_70._4_4_ == *(int *)(lVar16 + (long)iVar9 * 0xd8 + 0x38)) &&
         ((int)local_70 != *(int *)(lVar16 + (long)iVar9 * 0xd8 + 0x3c))) goto LAB_0368cd84;
    }
    else {
      lVar17 = *(long *)puVar1;
      if ((lVar17 != 0) &&
         (uVar4 = *(uint *)(lVar16 + (long)iVar9 * 0xd8 + 0x30), (uVar4 & 0xffff) < 0x15)) {
        uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar4 * 8 + 0x150),0
                             );
        local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar10);
        puVar11 = (uint *)FUN_036c67d0(lVar17 + 0x800,&local_138);
        if (puVar11 != (uint *)0x0) {
          uVar4 = *puVar11;
          if (uVar4 != 0) {
            cVar14 = *PTR_DAT_04bc11e8;
            do {
              if (cVar14 == '\0') {
                cVar14 = '\x01';
                *PTR_DAT_04bc11e8 = 1;
                *(undefined8 *)puVar21 = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar21 + 0x78) = 0xffffffffffffffff;
                uVar4 = *puVar11;
              }
              else {
                uVar5 = *(uint *)(puVar21 + 0x68);
                if (-1 < (int)uVar5) {
                  if (((char *)((ulong)uVar5 + (long)puVar11) != (char *)0x0) &&
                     (*(char *)((ulong)uVar5 + (long)puVar11) != '\0')) goto LAB_0368cd84;
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar6 = (uint *)(ulong)uVar4;
              if ((puVar6 == (uint *)0x0) || (puVar11 == puVar6)) break;
              lVar17 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
                lVar17 = 0x1c;
              }
              lVar17 = (long)puVar11 + (lVar17 - (long)puVar6);
              if (lVar17 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
              *(undefined4 *)(puVar21 + 0x68) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar18 = (int *)(lVar17 + 4);
              while (piVar18[-1] != -0x6b59ee42) {
                piVar18 = piVar18 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0368cf2c;
              }
              iVar2 = 0;
              if (*piVar18 != -1) {
                iVar2 = *piVar18;
              }
              *(int *)(puVar21 + 0x68) = iVar2;
              uVar4 = *puVar11;
              if (uVar4 == 0) break;
            } while( true );
          }
LAB_0368cf2c:
          if (local_70._4_4_ == *(int *)(lVar16 + (long)iVar9 * 0xd8 + 0x38)) goto LAB_0368cd9c;
        }
      }
LAB_0368cd84:
      lVar17 = lVar16 + (long)iVar9 * 0xd8;
      FUN_03735340(lVar15,lVar17 + 8,*(undefined4 *)(lVar17 + 0x30),*(undefined4 *)(lVar17 + 0x34),
                   *(undefined1 *)(lVar17 + 0x40));
    }
LAB_0368cd9c:
    iVar9 = iVar9 + 1;
  } while (iVar9 != 0x26);
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  lVar15 = 0;
  if (lVar17 != 0) {
    local_138 = (undefined *)CONCAT44(local_138._4_4_,1);
    if (((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar17 = 0;
    }
    lVar15 = 0;
    if (lVar17 != 0) {
      lVar15 = lVar17 + 0xa8;
    }
  }
  iVar9 = 0;
  plVar22 = (long *)(lVar15 + 0x4a0);
  lVar15 = 0x26;
  do {
    lVar17 = lVar16 + (long)iVar9 * 0xd8;
    if (local_70._4_4_ != *(int *)(lVar17 + 0x38) && *(char *)(lVar17 + 0x40) == '\0') {
      puVar23 = (undefined2 *)(lVar16 + (long)iVar9 * 0xd8);
      lVar17 = plVar22[4];
      if (lVar17 == 0) {
        *(undefined2 *)(plVar22[1] + *plVar22) = *puVar23;
      }
      else {
        if (*(undefined8 **)(lVar17 + 0x10) == (undefined8 *)0x0) {
          uVar12 = 0;
          plVar13 = *(long **)(lVar17 + 0x20);
joined_r0x0368d08c:
          if (plVar13 != (long *)0x0) {
            local_138 = (undefined *)*plVar22;
            local_130 = (undefined *)plVar22[1];
            local_128 = (undefined1 *)0x1178;
            (**(code **)(*plVar13 + 0x20))(plVar13,&local_138);
          }
        }
        else {
          uVar12 = (**(code **)**(undefined8 **)(lVar17 + 0x10))();
          uVar12 = uVar12 & 0xffffffff;
          if (plVar22[4] != 0) {
            plVar13 = *(long **)(plVar22[4] + 0x20);
            goto joined_r0x0368d08c;
          }
        }
        *(undefined2 *)(plVar22[1] + *plVar22) = *puVar23;
        if ((((uVar12 & 1) != 0) && (plVar22[4] != 0)) &&
           (puVar19 = *(undefined8 **)(plVar22[4] + 0x18), puVar19 != (undefined8 *)0x0)) {
          (**(code **)*puVar19)();
        }
      }
    }
    iVar9 = iVar9 + 1;
    lVar15 = lVar15 + -1;
    plVar22 = plVar22 + 0x2d8;
  } while (lVar15 != 0);
  local_120 = local_120 & 0xffffff;
  local_130 = (undefined *)((long)&local_128 + 4);
  uVar12 = (ulong)local_128 >> 0x20;
  local_128 = (undefined1 *)CONCAT44((uint)uVar12 & 0xffffff00,8);
  local_138 = PTR_DAT_04bb3768 + 0x10;
  puVar1 = PTR_DAT_04bb6a30 + 0x10;
  iVar9 = 0;
  puVar21 = PTR_DAT_04bb3768;
  do {
    psVar24 = (short *)(lVar16 + (long)iVar9 * 0xd8);
    if (*psVar24 != -1) {
      local_148 = 8;
      local_158 = puVar21 + 0x10;
      local_13d = 0;
      local_144[0] = 0;
      puStack_150 = local_144;
      FUN_038d1270(&local_158,"-----");
      if ((ulong)DAT_0545a400 < 0x23) {
        FUN_038d1270(&local_158,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a400 * 8 + 0xb0),DAT_0545a401
                    );
      }
      sVar8 = FUN_0376baa0(&local_158);
      if (*psVar24 == sVar8) {
LAB_0368d460:
        lVar15 = lVar16 + (long)iVar9 * 0xd8;
        local_15d = 0;
        local_168 = 8;
        plVar22 = (long *)(lVar15 + 8);
        local_178 = puVar1;
        puStack_170 = local_164;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        puVar20 = *(undefined1 **)(lVar15 + 0x10);
        if (local_164 != puVar20) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
          lVar17 = 0;
          do {
            if (*(char *)(*(long *)(lVar15 + 0x10) + lVar17) == '\0') goto LAB_0368d4ec;
            lVar3 = *(long *)(lVar15 + 0x10) + lVar17;
            if (*(char *)(lVar3 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0368d4ec;
            }
            if (*(char *)(lVar3 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0368d4ec;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0368d4ec:
          iVar2 = (int)lVar17;
          if (local_168 <= (int)lVar17) {
            iVar2 = local_168 + -1;
          }
          memcpy(local_164,puVar20,(long)iVar2);
          local_164[iVar2] = 0;
        }
        puVar21 = PTR_DAT_04bb3768;
        local_178 = PTR_DAT_04bb3768 + 0x10;
        FUN_02213cf0(&DAT_0545a400,&local_178,&local_138,&local_138);
      }
      else {
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a403 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a403 * 8 + 0xb0),
                       DAT_0545a404);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a406 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a406 * 8 + 0xb0),
                       DAT_0545a407);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a409 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a409 * 8 + 0xb0),
                       DAT_0545a40a);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a40c < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a40c * 8 + 0xb0),
                       DAT_0545a40d);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a40f < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a40f * 8 + 0xb0),
                       DAT_0545a410);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a412 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a412 * 8 + 0xb0),
                       DAT_0545a413);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a415 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a415 * 8 + 0xb0),
                       DAT_0545a416);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a418 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a418 * 8 + 0xb0),
                       DAT_0545a419);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d460;
      }
      FUN_038d1270(&local_158,"-----");
      if ((ulong)DAT_0545a41b < 0x23) {
        FUN_038d1270(&local_158,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a41b * 8 + 0xb0),DAT_0545a41c
                    );
      }
      sVar8 = FUN_0376baa0(&local_158);
      if (*psVar24 == sVar8) {
LAB_0368d750:
        lVar15 = lVar16 + (long)iVar9 * 0xd8;
        local_15d = 0;
        local_168 = 8;
        plVar22 = (long *)(lVar15 + 8);
        local_178 = PTR_DAT_04bb6a30 + 0x10;
        puStack_170 = local_164;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        puVar20 = *(undefined1 **)(lVar15 + 0x10);
        if (local_164 != puVar20) {
          (**(code **)(*plVar22 + 0x18))(plVar22);
          lVar17 = 0;
          do {
            if (*(char *)(*(long *)(lVar15 + 0x10) + lVar17) == '\0') goto LAB_0368d7e0;
            lVar3 = *(long *)(lVar15 + 0x10) + lVar17;
            if (*(char *)(lVar3 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0368d7e0;
            }
            if (*(char *)(lVar3 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0368d7e0;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0368d7e0:
          iVar2 = (int)lVar17;
          if (local_168 <= (int)lVar17) {
            iVar2 = local_168 + -1;
          }
          memcpy(local_164,puVar20,(long)iVar2);
          local_164[iVar2] = 0;
        }
        puVar21 = PTR_DAT_04bb3768;
        local_178 = PTR_DAT_04bb3768 + 0x10;
        FUN_02213cf0(&DAT_0545a400,&local_178,&local_138,&local_138);
      }
      else {
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a41e < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a41e * 8 + 0xb0),
                       DAT_0545a41f);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d750;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a421 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a421 * 8 + 0xb0),
                       DAT_0545a422);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d750;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a424 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a424 * 8 + 0xb0),
                       DAT_0545a425);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d750;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a427 < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a427 * 8 + 0xb0),
                       DAT_0545a428);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d750;
        FUN_038d1270(&local_158,"-----");
        if ((ulong)DAT_0545a42a < 0x23) {
          FUN_038d1270(&local_158,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a42a * 8 + 0xb0),
                       DAT_0545a42b);
        }
        sVar8 = FUN_0376baa0(&local_158);
        if (*psVar24 == sVar8) goto LAB_0368d750;
      }
      local_15d = 0;
      local_168 = 8;
      local_178 = puVar21 + 0x10;
      local_164[0] = 0;
      puStack_170 = local_164;
      FUN_038d1270(&local_178,"-----");
      if ((ulong)DAT_0545a42d < 0x23) {
        FUN_038d1270(&local_178,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)DAT_0545a42d * 8 + 0xb0),DAT_0545a42e
                    );
      }
      sVar8 = FUN_0376baa0(&local_178);
      if (*psVar24 == sVar8) {
        local_17d = 0;
        lVar16 = lVar16 + (long)iVar9 * 0xd8;
        local_188 = 8;
        plVar22 = (long *)(lVar16 + 8);
        local_198 = PTR_DAT_04bb6a30 + 0x10;
        puStack_190 = auStack_184;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        puVar20 = *(undefined1 **)(lVar16 + 0x10);
        if (auStack_184 == puVar20) goto LAB_0368d954;
        (**(code **)(*plVar22 + 0x18))(plVar22);
        lVar15 = 0;
        break;
      }
    }
    iVar9 = iVar9 + 1;
    if (iVar9 == 0x26) {
      return;
    }
  } while( true );
  while( true ) {
    lVar17 = *(long *)(lVar16 + 0x10) + lVar15;
    if (*(char *)(lVar17 + 1) == '\0') {
      lVar15 = lVar15 + 1;
      goto LAB_0368d92c;
    }
    if (*(char *)(lVar17 + 2) == '\0') {
      lVar15 = lVar15 + 2;
      goto LAB_0368d92c;
    }
    lVar15 = lVar15 + 3;
    if (lVar15 == 0x80001) break;
    if (*(char *)(*(long *)(lVar16 + 0x10) + lVar15) == '\0') goto LAB_0368d92c;
  }
  lVar15 = 0;
LAB_0368d92c:
  iVar9 = (int)lVar15;
  if (local_188 <= (int)lVar15) {
    iVar9 = local_188 + -1;
  }
  memcpy(auStack_184,puVar20,(long)iVar9);
  auStack_184[iVar9] = 0;
LAB_0368d954:
  local_198 = puVar21 + 0x10;
  FUN_02213cf0(&DAT_0545a400,&local_198,&local_138,&local_138);
  return;
}

