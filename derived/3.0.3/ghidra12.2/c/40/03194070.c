
void FUN_03194070(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  byte bVar7;
  char cVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  short *psVar15;
  ulong uVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  undefined8 *puVar20;
  long lVar21;
  uint *puVar22;
  uint *puVar23;
  long *plVar24;
  long *plVar25;
  float fVar26;
  float fVar27;
  undefined **local_d0;
  char *local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  uint local_b4;
  undefined **local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  uint *local_a0;
  
  lVar1 = param_1 + 0x1f8;
  local_d0 = &PTR_LAB_048f9770;
  local_c8 = "ItemRingEnable";
  iVar9 = FUN_0274bce0(lVar1,&local_d0);
  local_b8 = 0;
  local_d0 = (undefined **)0x0;
  local_c8 = (char *)0x0;
  uStack_c0 = 0;
  uVar14 = FUN_033ffc10(lVar1);
  plVar24 = &DAT_053274a0;
  if ((uVar14 & 1) == 0) {
    FUN_03423fe0(&local_d0,lVar1);
  }
  else {
    FUN_034240e0(&local_d0,lVar1,*(undefined8 *)(DAT_053274a0 + 0xdc330));
  }
  if ((*(int *)(param_1 + 0x1c4fc) == 7) && (DAT_051f0338 != 0)) {
    uVar10 = FUN_014e4978();
  }
  else {
    uVar10 = 0;
  }
  uVar14 = 0;
  ppuVar2 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
  do {
    lVar19 = *(long *)(param_1 + 0x210);
    uVar13 = (uint)uVar14;
    if ((int)uVar13 < 0x14) {
      plVar25 = (long *)(lVar19 + 0x590) + uVar14;
      if (0x13 < uVar13) {
        plVar25 = (long *)(lVar19 + 0x590);
      }
      plVar25 = (long *)*plVar25;
joined_r0x03194270:
      if (plVar25 != (long *)0x0) goto LAB_03194274;
    }
    else {
      if (uVar13 < 0x28) {
        plVar25 = *(long **)(lVar19 + (ulong)(uVar13 - 0x14) * 8 + 0x630);
      }
      else if (uVar13 == 0x28) {
        plVar25 = *(long **)(lVar19 + 0x6d0);
      }
      else {
        if (0x29 < uVar13) {
          if (uVar13 == 0x2a) {
            plVar25 = *(long **)(lVar19 + 0x6e0);
            goto joined_r0x03194270;
          }
          goto LAB_031941dc;
        }
        plVar25 = *(long **)(lVar19 + 0x6d8);
      }
      if (plVar25 == (long *)0x0) goto LAB_031941dc;
LAB_03194274:
      iVar11 = FUN_02672e00(lVar1);
      uVar12 = uVar13;
      if (iVar11 <= (int)uVar13 || 0x7fffffff < uVar13) {
        uVar12 = 0xffffffff;
      }
      psVar15 = (short *)PTR_DAT_04bb37e0;
      if (uVar12 < 0x28) {
        psVar15 = (short *)FUN_02677ea0(lVar1);
      }
      lVar19 = *plVar24;
      uVar12 = FUN_0277d6c4(psVar15);
      if (*plVar24 == 0) {
LAB_031942f4:
        bVar5 = false;
      }
      else {
        lVar19 = *(long *)(lVar19 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
        if (*(uint *)(lVar19 + 0x1d8) <= uVar12) goto LAB_031942f4;
        bVar5 = *(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
      }
      bVar7 = (**(code **)(*plVar25 + 0xf8))(plVar25);
      (**(code **)(*plVar25 + 0x140))(plVar25,bVar5 | bVar7 & 1,0);
      if ((bVar5 != false) && (*(int *)(param_1 + 0x1c1b8 + uVar14 * 4) == -1)) {
        if ((*PTR_DAT_04c4b988 != '\0') || (iVar11 = -1, *psVar15 != -2)) {
          iVar11 = 0;
          iVar17 = 0;
          do {
            if ((*(int *)(param_1 + 0x268 + (long)iVar17 * 0x1a8 + 0x1a0) == 0) &&
               (lVar19 = param_1 + 0x268 + (long)iVar17 * 0x1a8,
               (*(byte *)(lVar19 + 0x18) >> 1 & 1) == 0)) {
              FUN_03412d40(lVar19,PTR_PTR_04bb2238,psVar15,0);
              goto LAB_031943bc;
            }
            iVar17 = iVar17 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar17 != 0x10e);
          iVar11 = -1;
        }
LAB_031943bc:
        *(int *)(param_1 + 0x1c1b8 + uVar14 * 4) = iVar11;
      }
      FUN_03d82e70(plVar25,bVar5);
      FUN_03421d30(*(undefined8 *)plVar25[0x5c],
                   *(undefined8 *)(plVar25[0x5e] + (ulong)(2 < *(uint *)(plVar25 + 0x5d)) * 0x10),
                   psVar15);
      uVar12 = *(uint *)(plVar25 + 0x5d);
      lVar21 = plVar25[0x5e];
      lVar19 = 0x48;
      if (uVar12 < 10) {
        lVar19 = 0;
      }
      plVar24 = *(long **)(lVar21 + lVar19);
      if (plVar24 != (long *)0x0) {
        if (iVar9 == 0) {
LAB_03194474:
          local_b0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_a8 = 6;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          puVar20 = (undefined8 *)(plVar24[3] + 0x1b8);
        }
        else {
          uVar16 = uVar14;
          if (0x27 < uVar13) {
            uVar16 = 0xffffffff;
          }
          cVar8 = FUN_02678270(lVar1,uVar16);
          if (cVar8 == -1) goto LAB_03194474;
          local_b0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_a8 = 7;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          puVar20 = (undefined8 *)(plVar24[3] + 0x1c0);
        }
        (*(code *)*puVar20)(plVar24[1]);
        uVar12 = *(uint *)(plVar25 + 0x5d);
        lVar21 = plVar25[0x5e];
      }
      lVar19 = 0x68;
      if (uVar12 < 0xe) {
        lVar19 = 0;
      }
      plVar24 = *(long **)(lVar21 + lVar19);
      if (plVar24 != (long *)0x0) {
        if (uVar14 == ((long)*(char *)(param_1 + 0x1c516) & 0xffffffffU)) {
          local_b4 = 0;
        }
        else {
          local_b4 = FUN_03457ed0(psVar15,uVar10);
        }
        fVar27 = (float)(int)local_b4;
        local_b0 = &PTR_LAB_04aa7fe0;
        local_a8 = 7;
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_b0);
        fVar26 = (float)(**(code **)(plVar24[3] + 0x90))(plVar24[1]);
        if (fVar26 != fVar27) {
          local_b0 = &PTR_LAB_04aa7fe0;
          local_a8 = 0x14;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          (**(code **)(plVar24[3] + 0x158))(fVar27,plVar24[1]);
        }
        uVar12 = *(uint *)(plVar25 + 0x5d);
        lVar21 = plVar25[0x5e];
      }
      lVar19 = 0x58;
      if (uVar12 < 0xc) {
        lVar19 = 0;
      }
      plVar24 = *(long **)(lVar21 + lVar19);
      if (plVar24 != (long *)0x0) {
        fVar26 = 0.0;
        if (*(int *)(param_1 + 0x1c4fc) == 3) {
          uVar16 = FUN_03422a60(psVar15,lVar1);
          if ((uVar16 & 1) == 0) {
            uVar16 = FUN_034239e0(psVar15,0,PTR_DAT_04bb32e0,0);
            fVar26 = 1.0;
            if ((uVar16 & 1) == 0) {
              fVar26 = 0.0;
            }
          }
          else {
            uVar16 = FUN_03425560(&local_d0,psVar15,lVar1);
            fVar26 = 1.0;
            if ((uVar16 & 1) == 0) {
              uVar16 = FUN_03423e20(psVar15);
              fVar26 = 3.0;
              if ((uVar16 & 1) == 0) {
                uVar16 = FUN_03423f00(psVar15);
                fVar26 = 4.0;
                if ((uVar16 & 1) == 0) {
                  fVar26 = 2.0;
                }
              }
            }
          }
        }
        ppuVar3 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_a8 = 7;
        local_b0 = ppuVar3;
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_b0);
        fVar27 = (float)(**(code **)(plVar24[3] + 0x90))(plVar24[1]);
        if (fVar26 != fVar27) {
          local_a8 = 0x14;
          local_b0 = ppuVar3;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          (**(code **)(plVar24[3] + 0x158))(fVar26,plVar24[1]);
        }
      }
      lVar19 = 0x98;
      if (*(uint *)(plVar25 + 0x5d) < 0x14) {
        lVar19 = 0;
      }
      plVar24 = *(long **)(plVar25[0x5e] + lVar19);
      if (plVar24 != (long *)0x0) {
        fVar26 = 0.0;
        if (*(int *)(param_1 + 0x1c4fc) == 10) {
          uVar16 = FUN_03423190(psVar15);
          fVar26 = 1.0;
          if ((uVar16 & 1) == 0) {
            fVar26 = 0.0;
          }
        }
        local_b0 = &PTR_LAB_04aa7fe0;
        local_a8 = 7;
        (**(code **)(*plVar24 + 0x20))(plVar24,&local_b0);
        fVar27 = (float)(**(code **)(plVar24[3] + 0x90))(plVar24[1]);
        if (fVar26 != fVar27) {
          local_b0 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
          local_a8 = 0x14;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          (**(code **)(plVar24[3] + 0x158))(fVar26,plVar24[1]);
        }
      }
      plVar24 = *(long **)(plVar25[0x5e] + (ulong)(1 < *(uint *)(plVar25 + 0x5d)) * 8);
      if (plVar24 == (long *)0x0) {
        bVar6 = false;
LAB_03194854:
        plVar24 = &DAT_053274a0;
      }
      else {
        local_a8 = 6;
        local_b0 = ppuVar2;
        (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
        (**(code **)(plVar24[3] + 0x1b8))(plVar24[1]);
        uVar16 = *(ulong *)(param_1 + 0x1c4f0) & 1L << (uVar14 & 0x3f);
        bVar6 = uVar16 != 0;
        if (uVar16 != 0) {
          local_b0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_a8 = 7;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          (**(code **)(plVar24[3] + 0x1c0))(plVar24[1]);
          bVar5 = false;
        }
        puVar4 = PTR_DAT_04bb43c0;
        if (*(int *)(param_1 + 0x1c4fc) != 7) goto LAB_03194854;
        if (uVar14 == ((long)*(char *)(param_1 + 0x1c516) & 0xffffffffU)) {
LAB_03194808:
          local_b0 = (undefined **)(PTR_DAT_04bc4e68 + 0x10);
          local_a8 = 7;
          (**(code **)(*plVar24 + 0x18))(plVar24,&local_b0);
          (**(code **)(plVar24[3] + 0x1c0))(plVar24[1]);
          bVar5 = false;
          bVar6 = true;
          goto LAB_03194854;
        }
        lVar21 = *(long *)PTR_DAT_04bb43c0;
        uVar13 = FUN_0277d6c4(psVar15);
        lVar19 = *(long *)puVar4;
        if (lVar19 != 0) {
          lVar21 = *(long *)(lVar21 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
          if ((uVar13 < *(uint *)(lVar21 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
            local_b0 = &PTR_FUN_04a36b50;
            local_a8 = *(undefined4 *)psVar15;
            local_a4 = *(undefined4 *)(psVar15 + 2);
            local_a0 = (uint *)0x0;
            uVar13 = FUN_0277d6c4(&local_a8);
            if (DAT_053274a0 == 0) {
LAB_03194a8c:
              local_b4 = 0xbc;
            }
            else {
              lVar19 = *(long *)(lVar19 + 0x57e58);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar13) ||
                 (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8) == 0))
              goto LAB_03194a8c;
              lVar19 = *(long *)PTR_DAT_04bc0428;
              uVar13 = FUN_0277d6c4(psVar15);
              uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
              if ((*(uint *)(lVar19 + 0x1d8) <= uVar13) ||
                 (puVar22 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar13 * 8),
                 puVar22 == (uint *)0x0)) goto LAB_03194a8c;
              local_b4 = 0;
              uVar13 = *puVar22;
              local_a0 = puVar22;
              if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
                puVar23 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
                local_b4 = 0;
                if (*puVar23 != 0) {
                  uVar13 = puVar23[1];
                  if ((uVar13 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar23 + 10) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar23 + lVar19 + (ulong)(ushort)puVar23[2] * 8;
                    if (lVar19 != 0) {
                      uVar12 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar12 = (uint)((ulong)((long)puVar22 - lVar19) / (ulong)uVar13);
                      }
                      if (*puVar23 <= uVar12) {
                        uVar12 = 0xffffffff;
                      }
                      if ((uVar12 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_b4 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar12 * 2
                                            ), local_b4 < 0xbd)) goto LAB_03194a98;
                    }
                  }
                  local_b4 = 0;
                }
              }
            }
LAB_03194a98:
            if ((local_b4 != 0x76) &&
               ((uVar16 = FUN_01ae59b0(&local_b0), (uVar16 & 1) != 0 ||
                (uVar16 = FUN_0277e688(psVar15), (uVar16 & 1) != 0)))) goto LAB_03194854;
            goto LAB_03194808;
          }
        }
        plVar24 = (long *)PTR_DAT_04bb43c0;
      }
      *(bool *)((long)plVar25 + 0x315) = bVar6;
      uVar13 = *(int *)(param_1 + 0x1c4fc) - 1;
      if ((uVar13 < 10) && ((0x387U >> (ulong)(uVar13 & 0x1f) & 1) != 0)) {
        uVar18 = 2;
      }
      else {
        uVar18 = 0;
        if (bVar5 == false) {
          uVar18 = 2;
        }
      }
      local_b0 = (undefined **)CONCAT44(local_b0._4_4_,uVar18);
      switch(uVar18) {
      case 0:
        bVar7 = *(byte *)(plVar25 + 0x58) & 0xf8 | 2;
        break;
      case 2:
        bVar7 = *(byte *)(plVar25 + 0x58) & 0xf8 | 1;
        break;
      default:
        goto switchD_031948bc_default;
      }
      *(byte *)(plVar25 + 0x58) = bVar7;
switchD_031948bc_default:
      *(undefined4 *)(plVar25 + 0x56) = uVar18;
    }
LAB_031941dc:
    uVar14 = uVar14 + 1;
    if (uVar14 == 0x28) {
      return;
    }
  } while( true );
}

