
bool FUN_0284e6e0(long param_1,ulong param_2,byte *param_3)

{
  undefined *puVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  short *psVar17;
  long *plVar18;
  long lVar19;
  int *piVar20;
  uint uVar21;
  uint *puVar22;
  uint *puVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  short *psVar27;
  uint uVar28;
  long *plVar29;
  long lVar30;
  uint local_a4;
  byte local_88 [4];
  byte local_84 [4];
  undefined *local_80;
  char *local_78;
  ulong local_70;
  uint local_68;
  undefined4 local_64;
  
  uVar9 = FUN_0284da58(param_1,param_2,0);
  puVar1 = PTR_DAT_04bb4f78;
  local_84[0] = *param_3;
  if (7 < local_84[0]) {
    local_84[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_84,1);
  if (lVar12 == 0) {
    return false;
  }
  if ((*(long **)(lVar12 + 0x17f68) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar12 + 0x17f68), puVar13 == (undefined8 *)0x0)) {
    uVar14 = 0;
    plVar18 = *(long **)(lVar12 + 0xd0);
    if (plVar18 != (long *)0x0) goto LAB_0284e78c;
LAB_0284e7c0:
    uVar24 = 0;
    if (*(long *)(lVar12 + 0x194b8) != 0) goto LAB_0284e7cc;
LAB_0284e7ac:
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  else {
    uVar14 = (**(code **)*puVar13)();
    uVar14 = uVar14 & 0xffffffff;
    plVar18 = *(long **)(lVar12 + 0xd0);
    if (plVar18 == (long *)0x0) goto LAB_0284e7c0;
LAB_0284e78c:
    if ((undefined8 *)*plVar18 == (undefined8 *)0x0) goto LAB_0284e7c0;
    uVar24 = (*(code *)**(undefined8 **)*plVar18)();
    uVar24 = uVar24 & 0xffffffff;
    if (*(long *)(lVar12 + 0x194b8) == 0) goto LAB_0284e7ac;
LAB_0284e7cc:
    lVar19 = lVar12 + 0x194b0;
  }
  if ((*(long **)(lVar19 + 0x98) == (long *)0x0) ||
     (puVar13 = (undefined8 *)**(long **)(lVar19 + 0x98), puVar13 == (undefined8 *)0x0)) {
    local_a4 = 0;
  }
  else {
    local_a4 = (**(code **)*puVar13)();
  }
  if ((uVar9 < 7) && (uVar9 != 1)) {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
    switch(uVar9) {
    default:
      piVar20 = (int *)(param_1 + 8);
      break;
    case 1:
      piVar20 = (int *)(param_1 + 0x44);
      break;
    case 2:
      piVar20 = (int *)(param_1 + 0x80);
      break;
    case 3:
      piVar20 = (int *)(param_1 + 0xc0);
      break;
    case 4:
      piVar20 = (int *)(param_1 + 0xfc);
      break;
    case 5:
      piVar20 = (int *)(param_1 + 0x134);
      break;
    case 6:
      piVar20 = (int *)(param_1 + 0x16c);
    }
    if (((*(char *)((long)piVar20 + 0x2f) == '\x02') &&
        (piVar2 = (int *)(*(long *)(lVar12 + 0x17f50) + *(long *)(lVar12 + 0x17f48)),
        *piVar20 == *piVar2)) &&
       ((*(long *)(piVar2 + 1) == *(long *)(piVar20 + 1) &&
        *(long *)(piVar2 + 3) == *(long *)(piVar20 + 3)) && piVar2[5] == piVar20[5])) {
      if (uVar9 == 0) {
        local_88[0] = *param_3;
        if (7 < local_88[0]) {
          local_88[0] = 0xff;
        }
        lVar15 = FUN_025830c0(*(undefined8 *)puVar1,local_88,1);
        if (lVar15 != 0) {
          lVar26 = lVar15 + 0x194b0;
          if (*(long *)(lVar15 + 0x194b8) == 0) {
            lVar26 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          local_78 = (char *)(lVar26 + 0x70);
          local_70 = CONCAT71(local_70._1_7_,1);
          if (*(long **)(lVar26 + 0x98) == (long *)0x0) {
            uVar8 = 0;
          }
          else {
            puVar13 = (undefined8 *)**(long **)(lVar26 + 0x98);
            uVar8 = 0;
            if (puVar13 != (undefined8 *)0x0) {
              uVar8 = (**(code **)*puVar13)();
            }
          }
          local_70 = CONCAT62(local_70._2_6_,CONCAT11(uVar8,(undefined1)local_70)) &
                     0xffffffffffff01ff;
          local_80 = PTR_DAT_04bb5ad8 + 0x10;
          uVar9 = FUN_027f9664(param_3);
          puVar5 = PTR_DAT_04bb43c0;
          puVar1 = PTR_DAT_04bb37e0;
          if (0 < (int)uVar9) {
            uVar25 = 0;
            lVar15 = 0xb8;
            do {
              lVar30 = *(long *)(lVar26 + 0x80) + *(long *)(lVar26 + 0x78);
              uVar11 = *(uint *)(lVar30 + 0x158);
              if (0x13 < uVar11) {
                uVar11 = 0x14;
              }
              lVar4 = lVar15;
              if ((uint)uVar25 < uVar11) {
LAB_0284edfc:
                psVar27 = (short *)(lVar30 + lVar4);
                psVar17 = psVar27;
                if (*psVar27 != -2) {
                  lVar30 = *(long *)puVar5;
                  uVar11 = FUN_0277d6c4(psVar27,psVar27);
                  if (*(long *)puVar5 == 0) goto LAB_0284ee5c;
                  lVar30 = *(long *)(lVar30 + 0x57e58);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
                  psVar17 = (short *)puVar1;
                  if (uVar11 < *(uint *)(lVar30 + 0x1d8)) {
                    if (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar11 * 8) != 0) {
                      psVar17 = psVar27;
                    }
                  }
                }
              }
              else {
                uVar21 = (uint)(uVar25 + -uVar11);
                if ((int)uVar21 < 0) {
LAB_0284ee5c:
                  psVar17 = (short *)puVar1;
                }
                else {
                  uVar28 = *(uint *)(lVar30 + 0xa0);
                  if (0x13 < uVar28) {
                    uVar28 = 0x14;
                  }
                  psVar17 = (short *)puVar1;
                  if (uVar21 < uVar28) {
                    lVar4 = (uVar25 + -uVar11 & 0xffffffff) * 8;
                    goto LAB_0284edfc;
                  }
                }
              }
              uVar16 = FUN_028454ec(param_1 + 8,psVar17);
              if ((uVar16 & 1) != 0) {
                FUN_02640184(&local_80);
                bVar7 = true;
                goto LAB_0284ec08;
              }
              uVar25 = uVar25 + 1;
              lVar15 = lVar15 + 8;
            } while (uVar9 != uVar25);
          }
          FUN_02640184(&local_80);
          bVar7 = false;
          goto LAB_0284ec08;
        }
      }
      else {
        local_80 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_80);
        FUN_0284eea8(param_1,&local_80,param_2 & 0xffffffff);
        uVar25 = FUN_0277dedc(&local_80);
        if ((uVar25 & 1) == 0) {
          uVar9 = FUN_026788f0(param_3,&local_80);
          bVar7 = uVar9 < 0x28;
          goto LAB_0284ec08;
        }
      }
      bVar7 = false;
      goto LAB_0284ec08;
    }
  }
  lVar15 = *(long *)(lVar19 + 0x80) + *(long *)(lVar19 + 0x78);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "UpgradePocket40";
  local_80 = puVar1;
  iVar10 = FUN_0274b8d0(lVar12,&local_80);
  if (iVar10 == 0) {
    local_78 = "UpgradePocket30";
    local_80 = puVar1;
    iVar10 = FUN_0274b8d0(lVar12,&local_80);
    uVar9 = (uint)(iVar10 != 0);
  }
  else {
    uVar9 = 2;
  }
  puVar6 = PTR_DAT_04bb43c0;
  puVar5 = PTR_DAT_04bb37e0;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar9);
  uVar25 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  uVar16 = 0x1e;
  if (uVar9 != 1) {
    uVar16 = 0x14;
  }
  uVar3 = 0x28;
  if (uVar9 != 2) {
    uVar3 = uVar16;
  }
  do {
    uVar9 = *(uint *)(lVar15 + 0x158);
    if (0x13 < uVar9) {
      uVar9 = 0x14;
    }
    if ((uint)uVar25 < uVar9) {
      plVar29 = (long *)(lVar15 + 0xb8 + (uVar25 & 0xffffffff) * 8);
LAB_0284e9d8:
      plVar18 = plVar29;
      if ((short)*plVar29 != -2) {
        lVar26 = *(long *)puVar6;
        uVar9 = FUN_0277d6c4(plVar29);
        if (*(long *)puVar6 == 0) goto LAB_0284ea40;
        lVar26 = *(long *)(lVar26 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
        plVar18 = (long *)puVar5;
        if (uVar9 < *(uint *)(lVar26 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8) != 0) {
            plVar18 = plVar29;
          }
        }
      }
    }
    else {
      uVar11 = (uint)(uVar25 + -uVar9);
      if ((int)uVar11 < 0) {
LAB_0284ea40:
        plVar18 = (long *)puVar5;
      }
      else {
        uVar21 = *(uint *)(lVar15 + 0xa0);
        if (0x13 < uVar21) {
          uVar21 = 0x14;
        }
        plVar18 = (long *)puVar5;
        if (uVar11 < uVar21) {
          plVar29 = (long *)(lVar15 + (uVar25 + -uVar9 & 0xffffffff) * 8);
          goto LAB_0284e9d8;
        }
      }
    }
    lVar30 = *(long *)puVar6;
    uVar9 = FUN_0277d6c4(plVar18);
    lVar26 = *(long *)puVar6;
    if (lVar26 != 0) {
      lVar30 = *(long *)(lVar30 + 0x57e58);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if ((uVar9 < *(uint *)(lVar30 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
        local_78 = (char *)*plVar18;
        local_70 = 0;
        local_80 = puVar1;
        uVar9 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar6 == 0) {
LAB_0284ebb0:
          local_68 = 0xbc;
        }
        else {
          lVar26 = *(long *)(lVar26 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar9) ||
             (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_0284ebb0;
          lVar26 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(plVar18);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
          if ((*(uint *)(lVar26 + 0x1d8) <= uVar9) ||
             (puVar22 = *(uint **)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar9 * 8),
             puVar22 == (uint *)0x0)) goto LAB_0284ebb0;
          local_68 = 0;
          uVar9 = *puVar22;
          if ((uVar9 != 0) && (puVar22 != (uint *)(ulong)uVar9)) {
            puVar23 = (uint *)((long)puVar22 - (long)(ulong)uVar9);
            local_68 = 0;
            if (*puVar23 != 0) {
              uVar9 = puVar23[1];
              if ((uVar9 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                lVar26 = 0xc;
                if (*(char *)((long)puVar23 + 10) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar23 + lVar26 + (ulong)(ushort)puVar23[2] * 8;
                if (lVar26 != 0) {
                  uVar11 = 0;
                  if ((ulong)uVar9 != 0) {
                    uVar11 = (uint)((ulong)((long)puVar22 - lVar26) / (ulong)uVar9);
                  }
                  if (*puVar23 <= uVar11) {
                    uVar11 = 0xffffffff;
                  }
                  if ((uVar11 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar11 * 2),
                     local_68 < 0xbd)) goto LAB_0284ebbc;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_0284ebbc:
        local_64 = 0x8f;
        if (local_68 == 0x8f) goto LAB_0284ebe0;
      }
    }
    uVar25 = uVar25 + 1;
  } while (uVar3 != uVar25);
  uVar25 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_0284ebe0:
  bVar7 = (uint)uVar25 < 0x14 || (uint)uVar25 - 0x14 < 0x14;
LAB_0284ec08:
  if ((((local_a4 & 1) != 0) && (*(long *)(lVar19 + 0x98) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar19 + 0x98) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  if ((((uVar24 & 1) != 0) && (*(long *)(lVar12 + 0xd0) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0xd0) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  if ((((uVar14 & 1) != 0) && (*(long *)(lVar12 + 0x17f68) != 0)) &&
     (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x17f68) + 8), puVar13 != (undefined8 *)0x0)) {
    (**(code **)*puVar13)();
  }
  return bVar7;
}

