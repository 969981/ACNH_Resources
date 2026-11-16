
/* WARNING: Removing unreachable block (ram,0x0284fae4) */

void FUN_0284f760(int *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  short *psVar10;
  uint uVar11;
  undefined *puVar12;
  long *plVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  uint *puVar17;
  char *pcVar18;
  long lVar19;
  short sVar20;
  uint *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  undefined8 *puVar26;
  long lVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined *puVar31;
  long *plVar32;
  long lVar33;
  short *psVar34;
  uint uVar35;
  uint local_e4;
  uint local_d0 [2];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined *local_b0;
  int local_a8;
  int iStack_a4;
  undefined *local_a0;
  uint local_98;
  undefined4 uStack_94;
  byte local_90;
  uint local_84;
  undefined *local_80;
  undefined8 local_78;
  uint *local_70;
  
  if (DAT_055c1b60 == &DAT_055c1b58) {
LAB_0284f808:
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = DAT_055c1b60 + -8;
    sVar20 = 0;
    puVar25 = DAT_055c1b60;
    puVar26 = puVar23;
    do {
      puVar16 = DAT_055c1b60;
      if (*(int *)(puVar26 + 7) == 0x6622bd46) {
        if (sVar20 != 0) goto LAB_0284f7e0;
        goto LAB_0284f810;
      }
      puVar25 = (undefined8 *)puVar25[1];
      sVar20 = sVar20 + 1;
      puVar26 = puVar25 + -8;
    } while (puVar25 != &DAT_055c1b58);
    sVar20 = -1;
LAB_0284f7e0:
    do {
      puVar16 = (undefined8 *)puVar16[1];
      sVar20 = sVar20 + -1;
    } while (puVar16 != &DAT_055c1b58 && sVar20 != 0);
    puVar23 = puVar16 + -8;
    if (puVar23 == &DAT_055c1b18) goto LAB_0284f808;
  }
LAB_0284f810:
  lVar27 = 0;
  while (*(int *)(PTR_DAT_04bbbf90 + lVar27 * 4 + 8) != *(int *)(puVar23 + 7)) {
    if (0x37 < (uint)lVar27) {
      lVar27 = 0;
      puVar12 = PTR_DAT_04bbbf90;
      goto LAB_0284f864;
    }
    if (*(int *)(PTR_DAT_04bbbf90 + lVar27 * 4 + 0xc) == *(int *)(puVar23 + 7)) {
      lVar27 = lVar27 + 1;
      break;
    }
    lVar27 = lVar27 + 2;
  }
  puVar12 = PTR_DAT_04bbbf90 + lVar27 * 4;
LAB_0284f864:
  local_a0 = PTR_DAT_04bbfe68 + 0x10;
  uStack_94 = *(undefined4 *)(puVar12 + 8);
  uVar8 = (uint)lVar27;
  local_98 = uVar8;
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  local_a8 = (int)(short)param_1[0xe];
  iStack_a4 = (int)*(short *)((long)param_1 + 0x3a);
  local_c0 = PTR_DAT_04bb2010 + 0x10;
  uStack_b8 = 0;
  local_b0 = local_c0;
  FUN_01a5033c(&local_c8,&local_a0,0,&local_b0,&local_c0);
  puVar12 = PTR_DAT_04bb43c0;
  lVar29 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_c8);
  puVar5 = PTR_DAT_04bc0510;
  puVar1 = PTR_DAT_04bc00c8;
  lVar27 = *(long *)puVar12;
  if (lVar27 == 0) goto LAB_0284faf8;
  lVar29 = *(long *)(lVar29 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
  if ((*(uint *)(lVar29 + 0x1d8) <= uVar6) ||
     (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0284faf8;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_70 = (uint *)0x0;
  local_78 = (char *)CONCAT44(uStack_c4,local_c8);
  uVar6 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar12 == 0) {
LAB_0284fa44:
    local_84 = 0xbc;
  }
  else {
    lVar27 = *(long *)(lVar27 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((*(uint *)(lVar27 + 0x1d8) <= uVar6) ||
       (*(long *)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) goto LAB_0284fa44;
    lVar27 = *(long *)PTR_DAT_04bc0428;
    uVar6 = FUN_0277d6c4(&local_c8);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar27 + 0x1f8);
    if ((*(uint *)(lVar27 + 0x1d8) <= uVar6) ||
       (puVar17 = *(uint **)(*(long *)(lVar27 + 0x1e0) + (long)(int)uVar6 * 8),
       puVar17 == (uint *)0x0)) goto LAB_0284fa44;
    local_84 = 0;
    uVar6 = *puVar17;
    local_70 = puVar17;
    if ((uVar6 != 0) && (puVar17 != (uint *)(ulong)uVar6)) {
      puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar6);
      local_84 = 0;
      if (*puVar21 != 0) {
        uVar6 = puVar21[1];
        if ((uVar6 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
          lVar27 = 0xc;
          if (*(char *)((long)puVar21 + 10) != '\0') {
            lVar27 = 0x1c;
          }
          lVar27 = (long)puVar21 + lVar27 + (ulong)(ushort)puVar21[2] * 8;
          if (lVar27 != 0) {
            uVar11 = 0;
            if ((ulong)uVar6 != 0) {
              uVar11 = (uint)((ulong)((long)puVar17 - lVar27) / (ulong)uVar6);
            }
            if (*puVar21 <= uVar11) {
              uVar11 = 0xffffffff;
            }
            if ((uVar11 < *(uint *)puVar1) &&
               (local_84 = (uint)*(ushort *)(*(long *)(puVar1 + 8) + (long)(int)uVar11 * 2),
               local_84 < 0xbd)) goto LAB_0284fa50;
          }
        }
        local_84 = 0;
      }
    }
  }
LAB_0284fa50:
  local_d0[0] = 0x8f;
  if ((local_84 != 0x8f) || (uVar9 = FUN_01a4f798(&local_a0,0,&local_c0), (uVar9 & 1) == 0))
  goto LAB_0284faf8;
  if (uVar8 == 0) {
    local_d0[0] = 0;
LAB_0284faa0:
    if (local_d0[0] == 0) {
      plVar13 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar32 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar13 = plVar32 + local_d0[0];
      if (0x38 < local_d0[0]) {
        plVar13 = plVar32;
      }
    }
    lVar27 = *plVar13;
  }
  else {
    local_84 = uVar8;
    if (uVar8 != 0) {
      local_d0[0] = uVar8;
      goto LAB_0284faa0;
    }
    lVar27 = 0;
  }
  local_d0[0] = 0;
  if (*(long *)(lVar27 + 0xd0) != 0) {
    FUN_012e5af4(*(long *)(lVar27 + 0xd0),&local_c0);
  }
LAB_0284faf8:
  iVar28 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  plVar13 = (long *)PTR_DAT_04bb46b0;
  do {
    if ((*plVar13 == 0) || (lVar27 = FUN_026eec4c(*plVar13,iVar28), lVar27 == 0)) {
      uVar6 = *(uint *)PTR_DAT_04bb4e20;
    }
    else {
      if ((*(long **)(lVar27 + 0xd0) == (long *)0x0) ||
         (puVar25 = (undefined8 *)**(long **)(lVar27 + 0xd0), puVar25 == (undefined8 *)0x0)) {
        local_e4 = 0;
      }
      else {
        local_e4 = (**(code **)*puVar25)();
      }
      lVar29 = lVar27 + 0x194b0;
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar29 = *(long *)(*plVar13 + 0x20);
        plVar13 = *(long **)(lVar29 + 0x98);
        if (plVar13 != (long *)0x0) goto LAB_0284fbc4;
LAB_0284fbe0:
        uVar8 = 0;
      }
      else {
        plVar13 = *(long **)(lVar27 + 0x19548);
        if (plVar13 == (long *)0x0) goto LAB_0284fbe0;
LAB_0284fbc4:
        if ((undefined8 *)*plVar13 == (undefined8 *)0x0) goto LAB_0284fbe0;
        uVar8 = (*(code *)**(undefined8 **)*plVar13)();
      }
      lVar30 = *(long *)(lVar29 + 0x78);
      lVar14 = *(long *)(lVar29 + 0x80);
      local_78 = "UpgradePocket40";
      local_80 = puVar1;
      iVar7 = FUN_0274b8d0(lVar27,&local_80);
      if (iVar7 == 0) {
        local_80 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "UpgradePocket30";
        iVar7 = FUN_0274b8d0(lVar27,&local_80);
        uVar6 = (uint)(iVar7 != 0);
      }
      else {
        uVar6 = 2;
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
      lVar14 = lVar14 + lVar30;
      uVar9 = 0;
      uVar2 = 0x1e;
      if (uVar6 != 1) {
        uVar2 = 0x14;
      }
      uVar3 = 0x28;
      if (uVar6 != 2) {
        uVar3 = uVar2;
      }
      do {
        uVar6 = *(uint *)(lVar14 + 0x158);
        if (0x13 < uVar6) {
          uVar6 = 0x14;
        }
        if ((uint)uVar9 < uVar6) {
          plVar32 = (long *)(lVar14 + 0xb8 + (uVar9 & 0xffffffff) * 8);
LAB_0284fccc:
          plVar13 = plVar32;
          if ((short)*plVar32 != -2) {
            lVar30 = *(long *)puVar12;
            uVar6 = FUN_0277d6c4(plVar32);
            if (*(long *)puVar12 == 0) goto LAB_0284fd40;
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            plVar13 = (long *)PTR_DAT_04bb37e0;
            if (uVar6 < *(uint *)(lVar30 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
                plVar13 = plVar32;
              }
            }
          }
        }
        else {
          uVar11 = (uint)(uVar9 + -uVar6);
          if ((int)uVar11 < 0) {
LAB_0284fd40:
            plVar13 = (long *)PTR_DAT_04bb37e0;
          }
          else {
            uVar35 = *(uint *)(lVar14 + 0xa0);
            if (0x13 < uVar35) {
              uVar35 = 0x14;
            }
            plVar13 = (long *)PTR_DAT_04bb37e0;
            if (uVar11 < uVar35) {
              plVar32 = (long *)(lVar14 + (uVar9 + -uVar6 & 0xffffffff) * 8);
              goto LAB_0284fccc;
            }
          }
        }
        lVar30 = *(long *)puVar12;
        uVar6 = FUN_0277d6c4(plVar13);
        lVar33 = *(long *)puVar12;
        if (lVar33 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = (char *)*plVar13;
            local_70 = (uint *)0x0;
            local_80 = puVar5 + 0x10;
            uVar6 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar12 == 0) {
LAB_0284feb4:
              local_84 = 0xbc;
            }
            else {
              lVar30 = *(long *)(lVar33 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((*(uint *)(lVar30 + 0x1d8) <= uVar6) ||
                 (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar6 * 8) == 0))
              goto LAB_0284feb4;
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar6 = FUN_0277d6c4(plVar13);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((*(uint *)(lVar30 + 0x1d8) <= uVar6) ||
                 (puVar17 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar6 * 8),
                 puVar17 == (uint *)0x0)) goto LAB_0284feb4;
              local_84 = 0;
              uVar6 = *puVar17;
              if ((uVar6 != 0) && (puVar17 != (uint *)(ulong)uVar6)) {
                puVar21 = (uint *)((long)puVar17 - (long)(ulong)uVar6);
                local_84 = 0;
                if (*puVar21 != 0) {
                  uVar6 = puVar21[1];
                  if ((uVar6 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                    lVar30 = 0xc;
                    if (*(char *)((long)puVar21 + 10) != '\0') {
                      lVar30 = 0x1c;
                    }
                    lVar30 = (long)puVar21 + lVar30 + (ulong)(ushort)puVar21[2] * 8;
                    if (lVar30 != 0) {
                      uVar11 = 0;
                      if ((ulong)uVar6 != 0) {
                        uVar11 = (uint)((ulong)((long)puVar17 - lVar30) / (ulong)uVar6);
                      }
                      if (*puVar21 <= uVar11) {
                        uVar11 = 0xffffffff;
                      }
                      if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_84 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2
                                            ), local_84 < 0xbd)) goto LAB_0284fec0;
                    }
                  }
                  local_84 = 0;
                }
              }
            }
LAB_0284fec0:
            local_d0[0] = 0x8f;
            if (local_84 == 0x8f) goto LAB_0284feec;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar3 != uVar9);
      uVar9 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_0284feec:
      plVar13 = (long *)PTR_DAT_04bb46b0;
      uVar6 = (uint)uVar9;
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar29 + 0x98) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar29 + 0x98) + 8), puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
      if ((((local_e4 & 1) != 0) && (*(long *)(lVar27 + 0xd0) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar27 + 0xd0) + 8), puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
    }
    if (((uVar6 < 0x28) && (*plVar13 != 0)) && (lVar27 = FUN_026eec4c(*plVar13,iVar28), lVar27 != 0)
       ) {
      if (*(long *)(lVar27 + 0x194b8) == 0) {
        lVar29 = *(long *)(*plVar13 + 0x20);
      }
      else {
        lVar29 = lVar27 + 0x194b0;
      }
      lVar14 = *(long *)(lVar29 + 0x98);
      if (lVar14 == 0) {
        local_e4 = 0;
LAB_02850048:
        puVar15 = (undefined *)(*(long *)(lVar29 + 0x80) + *(long *)(lVar29 + 0x78));
        puVar31 = puVar15;
      }
      else {
        if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
          local_e4 = 0;
          plVar13 = *(long **)(lVar14 + 0x20);
          if (plVar13 != (long *)0x0) goto LAB_0284ffd0;
LAB_02850064:
          pcVar18 = *(char **)(lVar29 + 0x80);
          puVar22 = *(undefined **)(lVar29 + 0x78);
          puVar15 = puVar22 + (long)pcVar18;
          plVar13 = *(long **)(lVar14 + 0x20);
          puVar31 = puVar15;
          if (plVar13 != (long *)0x0) goto LAB_02850018;
LAB_02850080:
          puVar31 = puVar15;
        }
        else {
          local_e4 = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
          lVar14 = *(long *)(lVar29 + 0x98);
          if (lVar14 == 0) goto LAB_02850048;
          plVar13 = *(long **)(lVar14 + 0x20);
          if (plVar13 == (long *)0x0) goto LAB_02850064;
LAB_0284ffd0:
          local_78 = *(char **)(lVar29 + 0x80);
          local_80 = *(undefined **)(lVar29 + 0x78);
          local_70 = (uint *)0x17c;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
          puVar22 = *(undefined **)(lVar29 + 0x78);
          pcVar18 = *(char **)(lVar29 + 0x80);
          puVar15 = puVar22 + (long)pcVar18;
          if (*(long *)(lVar29 + 0x98) == 0) goto LAB_02850080;
          plVar13 = *(long **)(*(long *)(lVar29 + 0x98) + 0x20);
          puVar31 = puVar15;
          if (plVar13 == (long *)0x0) goto LAB_02850080;
LAB_02850018:
          local_70 = (uint *)0x17c;
          local_80 = puVar22;
          local_78 = pcVar18;
          (**(code **)(*plVar13 + 0x20))(plVar13,&local_80);
          puVar15 = (undefined *)(*(long *)(lVar29 + 0x80) + *(long *)(lVar29 + 0x78));
        }
        plVar13 = (long *)PTR_DAT_04bb46b0;
      }
      uVar8 = *(uint *)(puVar15 + 0x158);
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      uVar11 = uVar6 - uVar8;
      if (uVar6 < uVar8) {
        psVar34 = (short *)(puVar15 + (ulong)uVar6 * 8 + 0xb8);
        sVar20 = *psVar34;
LAB_028500dc:
        psVar10 = psVar34;
        if (sVar20 != -2) {
          lVar14 = *(long *)puVar12;
          uVar8 = FUN_0277d6c4(psVar34);
          if (*(long *)puVar12 == 0) goto LAB_02850144;
          lVar14 = *(long *)(lVar14 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
          psVar10 = (short *)PTR_DAT_04bb37e0;
          if (uVar8 < *(uint *)(lVar14 + 0x1d8)) {
            if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
              psVar10 = psVar34;
            }
          }
        }
      }
      else if ((int)uVar11 < 0) {
LAB_02850144:
        psVar10 = (short *)PTR_DAT_04bb37e0;
      }
      else {
        uVar8 = *(uint *)(puVar15 + 0xa0);
        if (0x13 < uVar8) {
          uVar8 = 0x14;
        }
        psVar10 = (short *)PTR_DAT_04bb37e0;
        if (uVar11 < uVar8) {
          psVar34 = (short *)(puVar15 + (ulong)uVar11 * 8);
          sVar20 = *psVar34;
          goto LAB_028500dc;
        }
      }
      FUN_01b06140(local_d0,psVar10);
      FUN_027fa2dc(puVar31,(ulong)uVar6,local_d0,0);
      if ((DAT_055a3458 & 1) == 0) {
        if (*(long **)(lVar27 + 0x17bb0) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(lVar27 + 0x17bb0);
          uVar9 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar9 = (**(code **)*puVar25)();
          }
        }
        lVar14 = *(long *)(lVar27 + 0x17b98) + *(long *)(lVar27 + 0x17b90);
        if (*param_1 == *(int *)(lVar14 + 0x1c)) {
          lVar19 = *(long *)(param_1 + 1);
          lVar30 = *(long *)(lVar14 + 0x20);
          lVar33 = *(long *)(lVar14 + 0x28);
          lVar24 = *(long *)(param_1 + 3);
          iVar7 = *(int *)(lVar14 + 0x30);
          iVar4 = param_1[5];
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar27 + 0x17bb0) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar27 + 0x17bb0) + 8),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
          if ((lVar30 == lVar19 && lVar33 == lVar24) && iVar7 == iVar4) {
            iVar7 = param_1[0xb];
            if ((*(long **)(lVar27 + 0x28) == (long *)0x0) ||
               (puVar25 = (undefined8 *)**(long **)(lVar27 + 0x28), puVar25 == (undefined8 *)0x0)) {
              uVar9 = 0;
            }
            else {
              uVar9 = (**(code **)*puVar25)();
              uVar9 = uVar9 & 0xffffffff;
            }
            lVar14 = *(long *)(lVar27 + 8);
            lVar30 = *(long *)(lVar27 + 0x10);
            lVar33 = FUN_0265c2a0((int)(char)iVar7);
            if (lVar33 == 0) {
              iVar7 = -1;
              plVar13 = (long *)PTR_DAT_04bb46b0;
            }
            else {
              if ((*(long **)(lVar33 + 0x28) == (long *)0x0) ||
                 (puVar25 = (undefined8 *)**(long **)(lVar33 + 0x28), puVar25 == (undefined8 *)0x0))
              {
                uVar6 = 1;
              }
              else {
                uVar6 = (**(code **)*puVar25)();
                uVar6 = uVar6 ^ 1;
              }
              iVar7 = FUN_026b318c(*(long *)(lVar33 + 0x10) + *(long *)(lVar33 + 8),
                                   lVar30 + lVar14 + 0xc154);
              plVar13 = (long *)PTR_DAT_04bb46b0;
              if ((uVar6 & 1) == 0) {
                if (*(long *)(lVar33 + 0x28) != 0) {
                  puVar25 = *(undefined8 **)(*(long *)(lVar33 + 0x28) + 8);
                  if (puVar25 != (undefined8 *)0x0) {
                    (**(code **)*puVar25)();
                  }
                }
              }
              else {
              }
            }
            if ((((uVar9 & 1) != 0) && (*(long *)(lVar27 + 0x28) != 0)) &&
               (puVar25 = *(undefined8 **)(*(long *)(lVar27 + 0x28) + 8),
               puVar25 != (undefined8 *)0x0)) {
              (**(code **)*puVar25)();
            }
            if (-1 < iVar7) {
              FUN_021d7650((long)(char)param_1[0xb],iVar7,0xfffffffe,1);
            }
          }
        }
        else if ((((uVar9 & 1) != 0) && (*(long *)(lVar27 + 0x17bb0) != 0)) &&
                (puVar25 = *(undefined8 **)(*(long *)(lVar27 + 0x17bb0) + 8),
                puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      if ((((local_e4 & 1) != 0) && (*(long *)(lVar29 + 0x98) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar29 + 0x98) + 0x18), puVar25 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar25)();
      }
    }
    iVar28 = iVar28 + 1;
    if (iVar28 == 8) {
      *(undefined1 *)((long)param_1 + 0x36) = 0;
      local_80 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "LostPropertyFound";
      FUN_0273f3c4(&local_80,0);
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      *(undefined2 *)((long)param_1 + 0x1e) = 0x101;
      param_1[0] = 0;
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 0x21) = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      *(undefined1 **)(param_1 + 9) = &LAB_01010000;
      *(undefined1 *)(param_1 + 0xb) = 0xff;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      *(undefined1 *)((long)param_1 + 0x2f) = 0;
      *(undefined1 *)((long)param_1 + 0x2d) = 1;
      *(undefined2 *)(param_1 + 0xd) = 0;
      *(undefined1 *)((long)param_1 + 0x36) = 0;
      param_1[0xe] = 0;
      *(undefined1 *)(param_1 + 0xc) = 2;
      return;
    }
  } while( true );
}

