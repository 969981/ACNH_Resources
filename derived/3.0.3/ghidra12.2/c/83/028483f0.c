
void FUN_028483f0(void)

{
  undefined *puVar1;
  byte bVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  short sVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined8 *puVar16;
  uint uVar17;
  long *plVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  long lVar22;
  short *psVar23;
  short *psVar24;
  ulong uVar25;
  short local_98;
  undefined1 local_96;
  byte local_95;
  uint local_94;
  uint *local_90;
  uint local_84;
  uint local_80;
  uint local_7c;
  undefined8 local_78;
  char *local_70;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_04bb43c0;
  iVar21 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar18 = (long *)PTR_DAT_04bb46b0;
  do {
    if ((*plVar18 == 0) || (lVar15 = FUN_026eec4c(*plVar18,iVar21), lVar15 == 0)) {
      uVar12 = *(uint *)PTR_DAT_04bb4e20;
    }
    else {
      lVar22 = lVar15 + 0x194b0;
      if (*(long *)(lVar15 + 0x194b8) == 0) {
        lVar22 = *(long *)(*plVar18 + 0x20);
        plVar18 = *(long **)(lVar22 + 0x98);
        if (plVar18 != (long *)0x0) goto LAB_028484c4;
LAB_028484e0:
        uVar13 = 0;
      }
      else {
        plVar18 = *(long **)(lVar15 + 0x19548);
        if (plVar18 == (long *)0x0) goto LAB_028484e0;
LAB_028484c4:
        if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_028484e0;
        uVar13 = (*(code *)**(undefined8 **)*plVar18)();
      }
      lVar6 = *(long *)(lVar22 + 0x78);
      lVar7 = *(long *)(lVar22 + 0x80);
      local_70 = "UpgradePocket40";
      local_78 = puVar1;
      iVar11 = FUN_0274b8d0(lVar15,&local_78);
      if (iVar11 == 0) {
        local_78 = PTR_DAT_04bb2020 + 0x10;
        local_70 = "UpgradePocket30";
        iVar11 = FUN_0274b8d0(lVar15,&local_78);
        uVar12 = (uint)(iVar11 != 0);
      }
      else {
        uVar12 = 2;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar12);
      lVar7 = lVar7 + lVar6;
      uVar25 = 0;
      uVar3 = 0x1e;
      if (uVar12 != 1) {
        uVar3 = 0x14;
      }
      uVar4 = 0x28;
      if (uVar12 != 2) {
        uVar4 = uVar3;
      }
      do {
        uVar12 = *(uint *)(lVar7 + 0x158);
        if (0x13 < uVar12) {
          uVar12 = 0x14;
        }
        if ((uint)uVar25 < uVar12) {
          psVar24 = (short *)(lVar7 + 0xb8 + (uVar25 & 0xffffffff) * 8);
LAB_028485cc:
          psVar23 = psVar24;
          if (*psVar24 != -2) {
            lVar15 = *(long *)puVar10;
            uVar12 = FUN_0277d6c4(psVar24);
            if (*(long *)puVar10 == 0) goto LAB_02848640;
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            psVar23 = (short *)PTR_DAT_04bb37e0;
            if (uVar12 < *(uint *)(lVar15 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
                psVar23 = psVar24;
              }
            }
          }
        }
        else {
          uVar17 = (uint)(uVar25 + -uVar12);
          if ((int)uVar17 < 0) {
LAB_02848640:
            psVar23 = (short *)PTR_DAT_04bb37e0;
          }
          else {
            uVar14 = *(uint *)(lVar7 + 0xa0);
            if (0x13 < uVar14) {
              uVar14 = 0x14;
            }
            psVar23 = (short *)PTR_DAT_04bb37e0;
            if (uVar17 < uVar14) {
              psVar24 = (short *)(lVar7 + (uVar25 + -uVar12 & 0xffffffff) * 8);
              goto LAB_028485cc;
            }
          }
        }
        iVar11 = FUN_0277d6c4(psVar23);
        if (iVar11 == 0x1095) {
          local_78 = PTR_DAT_04bc0510 + 0x10;
          lVar15 = *(long *)puVar10;
          bVar8 = *(byte *)((long)psVar23 + 3);
          local_70 = *(char **)psVar23;
          local_68 = 0;
          uVar12 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar10 == 0) {
LAB_028487a4:
            local_84 = 0xbc;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
               (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8) == 0))
            goto LAB_028487a4;
            lVar15 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(psVar23);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            if ((*(uint *)(lVar15 + 0x1d8) <= uVar12) ||
               (puVar19 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8),
               puVar19 == (uint *)0x0)) goto LAB_028487a4;
            local_84 = 0;
            uVar12 = *puVar19;
            if ((uVar12 != 0) && (puVar19 != (uint *)(ulong)uVar12)) {
              puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar12);
              local_84 = 0;
              if (*puVar20 != 0) {
                uVar12 = puVar20[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                  lVar15 = 0xc;
                  if (*(char *)((long)puVar20 + 10) != '\0') {
                    lVar15 = 0x1c;
                  }
                  lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
                  if (lVar15 != 0) {
                    uVar17 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar17 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar12);
                    }
                    if (*puVar20 <= uVar17) {
                      uVar17 = 0xffffffff;
                    }
                    if ((uVar17 < *(uint *)PTR_DAT_04bc00c8) &&
                       (local_84 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar17 * 2),
                       local_84 < 0xbd)) goto LAB_028487b0;
                  }
                }
                local_84 = 0;
              }
            }
          }
LAB_028487b0:
          if ((local_84 != 0x8d) || ((bVar8 >> 2 & 1) == 0)) goto LAB_028487dc;
        }
        uVar25 = uVar25 + 1;
      } while (uVar4 != uVar25);
      uVar25 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_028487dc:
      plVar18 = (long *)PTR_DAT_04bb46b0;
      uVar12 = (uint)uVar25;
      if ((((uVar13 & 1) != 0) && (*(long *)(lVar22 + 0x98) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar22 + 0x98) + 8), puVar16 != (undefined8 *)0x0)) {
        (**(code **)*puVar16)();
      }
    }
    if (((uVar12 < 0x28) && (*plVar18 != 0)) &&
       (lVar15 = FUN_026eec4c(*plVar18,iVar21), lVar15 != 0)) {
      lVar22 = lVar15 + 0x194b0;
      if (*(long *)(lVar15 + 0x194b8) == 0) {
        lVar22 = *(long *)(*plVar18 + 0x20);
        lVar15 = *(long *)(lVar22 + 0x98);
        if (lVar15 == 0) goto LAB_02848884;
LAB_02848848:
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar25 = 0;
          plVar18 = *(long **)(lVar15 + 0x20);
        }
        else {
          uVar25 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          uVar25 = uVar25 & 0xffffffff;
          if (*(long *)(lVar22 + 0x98) == 0) goto LAB_028488b8;
          plVar18 = *(long **)(*(long *)(lVar22 + 0x98) + 0x20);
        }
        if (plVar18 != (long *)0x0) {
          local_78 = *(undefined **)(lVar22 + 0x78);
          local_70 = *(char **)(lVar22 + 0x80);
          local_68 = 0x17c;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
        }
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x19548);
        if (lVar15 != 0) goto LAB_02848848;
LAB_02848884:
        uVar25 = 0;
      }
LAB_028488b8:
      lVar15 = *(long *)(lVar22 + 0x80) + *(long *)(lVar22 + 0x78);
      uVar13 = *(uint *)(lVar15 + 0x158);
      if (0x13 < uVar13) {
        uVar13 = 0x14;
      }
      uVar17 = uVar12 - uVar13;
      if (uVar12 < uVar13) {
        puVar20 = (uint *)(lVar15 + (ulong)uVar12 * 8 + 0xb8);
        sVar9 = *(short *)puVar20;
LAB_02848910:
        puVar19 = puVar20;
        if (sVar9 != -2) {
          lVar15 = *(long *)puVar10;
          uVar13 = FUN_0277d6c4(puVar20);
          if (*(long *)puVar10 == 0) goto LAB_02848978;
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          puVar19 = (uint *)PTR_DAT_04bb37e0;
          if (uVar13 < *(uint *)(lVar15 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar13 * 8) != 0) {
              puVar19 = puVar20;
            }
          }
        }
      }
      else if ((int)uVar17 < 0) {
LAB_02848978:
        puVar19 = (uint *)PTR_DAT_04bb37e0;
      }
      else {
        uVar13 = *(uint *)(lVar15 + 0xa0);
        if (0x13 < uVar13) {
          uVar13 = 0x14;
        }
        puVar19 = (uint *)PTR_DAT_04bb37e0;
        if (uVar17 < uVar13) {
          puVar20 = (uint *)(lVar15 + (ulong)uVar17 * 8);
          sVar9 = (short)*puVar20;
          goto LAB_02848910;
        }
      }
      local_98 = (short)*puVar19;
      local_96 = *(undefined1 *)((long)puVar19 + 2);
      uVar17 = *puVar19;
      bVar8 = *(byte *)((long)puVar19 + 3);
      local_84 = *puVar19;
      uVar13 = puVar19[1];
      lVar15 = *(long *)puVar10;
      local_90 = (uint *)0x0;
      local_95 = bVar8;
      local_94 = uVar13;
      local_80 = uVar13;
      uVar14 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar10 == 0) {
LAB_02848ad0:
        local_7c = 0xbc;
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar14) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) goto LAB_02848ad0;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(&local_84);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar14) ||
           (puVar19 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar14 * 8),
           puVar19 == (uint *)0x0)) goto LAB_02848ad0;
        local_7c = 0;
        uVar14 = *puVar19;
        local_90 = puVar19;
        if ((uVar14 != 0) && (puVar19 != (uint *)(ulong)uVar14)) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar14);
          local_7c = 0;
          if (*puVar20 != 0) {
            uVar14 = puVar20[1];
            if ((uVar14 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar15 != 0) {
                uVar5 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar5 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar14);
                }
                if (*puVar20 <= uVar5) {
                  uVar5 = 0xffffffff;
                }
                if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_7c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                   local_7c < 0xbd)) goto LAB_02848adc;
              }
            }
            local_7c = 0;
          }
        }
      }
LAB_02848adc:
      bVar2 = bVar8 | 4;
      if (local_7c != 0x8d) {
        bVar2 = bVar8;
      }
      if ((*(long *)(lVar22 + 0x98) != 0) &&
         (plVar18 = *(long **)(*(long *)(lVar22 + 0x98) + 0x20), plVar18 != (long *)0x0)) {
        local_78 = *(undefined **)(lVar22 + 0x78);
        local_70 = *(char **)(lVar22 + 0x80);
        local_68 = 0x17c;
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_78);
      }
      local_78 = (undefined *)CONCAT44(uVar13,CONCAT13(bVar2,(int3)uVar17));
      FUN_027fa2dc(*(long *)(lVar22 + 0x80) + *(long *)(lVar22 + 0x78),(ulong)uVar12,&local_78,0);
      plVar18 = (long *)PTR_DAT_04bb46b0;
      if ((((uVar25 & 1) != 0) && (*(long *)(lVar22 + 0x98) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar22 + 0x98) + 0x18), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
    }
    iVar21 = iVar21 + 1;
    if (iVar21 == 8) {
      return;
    }
  } while( true );
}

