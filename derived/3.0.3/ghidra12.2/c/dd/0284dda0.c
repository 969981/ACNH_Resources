
/* WARNING: Type propagation algorithm not settling */

int FUN_0284dda0(long param_1,int param_2,byte *param_3,undefined4 param_4)

{
  undefined *puVar1;
  int *piVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  uint uVar13;
  long *plVar14;
  ulong uVar15;
  uint *puVar16;
  long lVar17;
  uint *puVar18;
  long lVar19;
  long *plVar20;
  short *psVar21;
  short *psVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  uint uVar26;
  byte local_a0 [4];
  byte local_9c [4];
  byte local_98 [4];
  byte local_94 [4];
  byte local_90 [4];
  byte local_8c [4];
  byte local_88 [4];
  undefined4 local_84;
  undefined *local_80;
  char *local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  
  local_88[0] = *param_3;
  if (7 < local_88[0]) {
    local_88[0] = 0xff;
  }
  local_84 = param_4;
  uVar10 = FUN_02669430(local_88);
  if ((uVar10 & 1) == 0) {
    return -1;
  }
  iVar9 = -1;
  switch(local_84) {
  case 0:
    local_8c[0] = *param_3;
    if (7 < local_8c[0]) {
      local_8c[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
    if (lVar11 == 0) {
      return -1;
    }
    if (*(char *)(param_1 + 0x37) != '\x02') {
      return -1;
    }
    if (*(long **)(lVar11 + 0x17f68) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17f68);
      uVar10 = 0;
      if (puVar12 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar12)();
      }
    }
    piVar2 = (int *)(*(long *)(lVar11 + 0x17f50) + *(long *)(lVar11 + 0x17f48));
    if (*(int *)(param_1 + 8) == *piVar2) {
      lVar23 = *(long *)(piVar2 + 1);
      lVar17 = *(long *)(param_1 + 0xc);
      lVar24 = *(long *)(piVar2 + 3);
      lVar19 = *(long *)(param_1 + 0x14);
      iVar9 = piVar2[5];
      iVar5 = *(int *)(param_1 + 0x1c);
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar11 + 0x17f68) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x17f68) + 8), puVar12 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar12)();
      }
      if ((lVar23 != lVar17 || lVar24 != lVar19) || iVar9 != iVar5) {
        return -1;
      }
      local_90[0] = *param_3;
      if (7 < local_90[0]) {
        local_90[0] = 0xff;
      }
      uVar10 = FUN_0284e6e0(param_1,param_2,local_90);
      if ((uVar10 & 1) == 0) {
        return 0;
      }
      lVar11 = (long)*(char *)(param_1 + 0x36) + -7;
      if ((uint)lVar11 < 4) {
        return *(int *)(&DAT_041028e0 + lVar11 * 4);
      }
      return 1;
    }
    if ((uVar10 & 1) == 0) {
      return -1;
    }
    lVar11 = *(long *)(lVar11 + 0x17f68);
    if (lVar11 == 0) {
      return -1;
    }
    goto LAB_0284e638;
  case 1:
    local_94[0] = *param_3;
    if (7 < local_94[0]) {
      local_94[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_94,1);
    if (lVar11 == 0) {
      return -1;
    }
    plVar20 = (long *)(lVar11 + 0x17f48);
    if ((*(long **)(lVar11 + 0x17f68) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17f68), puVar12 == (undefined8 *)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar12)();
      uVar10 = uVar10 & 0xffffffff;
    }
    if (*(long *)(lVar11 + 0x194b8) == 0) {
      lVar23 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
      plVar14 = *(long **)(lVar23 + 0x98);
      if (plVar14 != (long *)0x0) goto LAB_0284e198;
LAB_0284e1b4:
      uVar15 = 0;
    }
    else {
      lVar23 = lVar11 + 0x194b0;
      plVar14 = *(long **)(lVar11 + 0x19548);
      if (plVar14 == (long *)0x0) goto LAB_0284e1b4;
LAB_0284e198:
      if ((undefined8 *)*plVar14 == (undefined8 *)0x0) goto LAB_0284e1b4;
      uVar15 = (*(code *)**(undefined8 **)*plVar14)();
      uVar15 = uVar15 & 0xffffffff;
    }
    if (*(char *)(param_1 + 0x70) == param_2) {
      piVar2 = (int *)(*(long *)(lVar11 + 0x17f50) + *plVar20);
      if ((*(int *)(param_1 + 0x44) != *piVar2) ||
         (!((*(long *)(piVar2 + 1) == *(long *)(param_1 + 0x48) &&
            *(long *)(piVar2 + 3) == *(long *)(param_1 + 0x50)) &&
           piVar2[5] == *(int *)(param_1 + 0x58)))) goto LAB_0284e230;
      uVar8 = FUN_02848090(lVar11,*(long *)(lVar23 + 0x80) + *(long *)(lVar23 + 0x78));
      iVar9 = (uint)(uVar8 < 0x28) << 2;
    }
    else if (*(char *)(param_1 + 0x79) == '\0') {
LAB_0284e230:
      lVar17 = *(long *)(lVar23 + 0x80) + *(long *)(lVar23 + 0x78);
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "UpgradePocket40";
      local_80 = puVar1;
      iVar9 = FUN_0274b8d0(lVar11,&local_80);
      if (iVar9 == 0) {
        local_78 = "UpgradePocket30";
        local_80 = puVar1;
        iVar9 = FUN_0274b8d0(lVar11,&local_80);
        uVar8 = (uint)(iVar9 != 0);
      }
      else {
        uVar8 = 2;
      }
      puVar7 = PTR_DAT_04bb43c0;
      puVar6 = PTR_DAT_04bb37e0;
      local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar8);
      uVar25 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      uVar3 = 0x1e;
      if (uVar8 != 1) {
        uVar3 = 0x14;
      }
      uVar4 = 0x28;
      if (uVar8 != 2) {
        uVar4 = uVar3;
      }
      do {
        uVar8 = *(uint *)(lVar17 + 0x158);
        if (0x13 < uVar8) {
          uVar8 = 0x14;
        }
        if ((uint)uVar25 < uVar8) {
          psVar22 = (short *)(lVar17 + 0xb8 + (uVar25 & 0xffffffff) * 8);
LAB_0284e3e8:
          psVar21 = psVar22;
          if (*psVar22 != -2) {
            lVar11 = *(long *)puVar7;
            uVar8 = FUN_0277d6c4(psVar22);
            if (*(long *)puVar7 == 0) goto LAB_0284e450;
            lVar11 = *(long *)(lVar11 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
            psVar21 = (short *)puVar6;
            if (uVar8 < *(uint *)(lVar11 + 0x1d8)) {
              if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
                psVar21 = psVar22;
              }
            }
          }
        }
        else {
          uVar13 = (uint)(uVar25 + -uVar8);
          if ((int)uVar13 < 0) {
LAB_0284e450:
            psVar21 = (short *)puVar6;
          }
          else {
            uVar26 = *(uint *)(lVar17 + 0xa0);
            if (0x13 < uVar26) {
              uVar26 = 0x14;
            }
            psVar21 = (short *)puVar6;
            if (uVar13 < uVar26) {
              psVar22 = (short *)(lVar17 + (uVar25 + -uVar8 & 0xffffffff) * 8);
              goto LAB_0284e3e8;
            }
          }
        }
        lVar24 = *(long *)puVar7;
        uVar8 = FUN_0277d6c4(psVar21);
        lVar11 = *(long *)puVar7;
        if (lVar11 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            local_78 = *(char **)psVar21;
            local_70 = 0;
            local_80 = puVar1;
            uVar8 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar7 == 0) {
LAB_0284e5c0:
              local_68 = 0xbc;
            }
            else {
              lVar11 = *(long *)(lVar11 + 0x57e58);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
              goto LAB_0284e5c0;
              lVar11 = *(long *)PTR_DAT_04bc0428;
              uVar8 = FUN_0277d6c4(psVar21);
              uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((*(uint *)(lVar11 + 0x1d8) <= uVar8) ||
                 (puVar16 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8),
                 puVar16 == (uint *)0x0)) goto LAB_0284e5c0;
              local_68 = 0;
              uVar8 = *puVar16;
              if ((uVar8 != 0) && (puVar16 != (uint *)(ulong)uVar8)) {
                puVar18 = (uint *)((long)puVar16 - (long)(ulong)uVar8);
                local_68 = 0;
                if (*puVar18 != 0) {
                  uVar8 = puVar18[1];
                  if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                    lVar11 = 0xc;
                    if (*(char *)((long)puVar18 + 10) != '\0') {
                      lVar11 = 0x1c;
                    }
                    lVar11 = (long)puVar18 + lVar11 + (ulong)(ushort)puVar18[2] * 8;
                    if (lVar11 != 0) {
                      uVar13 = 0;
                      if ((ulong)uVar8 != 0) {
                        uVar13 = (uint)((ulong)((long)puVar16 - lVar11) / (ulong)uVar8);
                      }
                      if (*puVar18 <= uVar13) {
                        uVar13 = 0xffffffff;
                      }
                      if ((uVar13 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_68 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar13 * 2
                                            ), local_68 < 0xbd)) goto LAB_0284e5cc;
                    }
                  }
                  local_68 = 0;
                }
              }
            }
LAB_0284e5cc:
            local_64 = 0x8f;
            if (local_68 == 0x8f) goto LAB_0284e5f0;
          }
        }
        uVar25 = uVar25 + 1;
      } while (uVar4 != uVar25);
      uVar25 = (ulong)*(uint *)PTR_DAT_04bb4e20;
LAB_0284e5f0:
      iVar9 = 3;
      if (0x27 < (uint)uVar25) {
        iVar9 = -1;
      }
    }
    else {
      iVar9 = -1;
    }
    if ((((uVar15 & 1) != 0) && (*(long *)(lVar23 + 0x98) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar23 + 0x98) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    if ((uVar10 & 1) == 0) {
      return iVar9;
    }
    goto LAB_0284e630;
  case 2:
    local_98[0] = *param_3;
    if (7 < local_98[0]) {
      local_98[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_98,1);
    if (lVar11 == 0) {
      return -1;
    }
    plVar20 = (long *)(lVar11 + 0x17f48);
    if ((*(long **)(lVar11 + 0x17f68) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17f68), puVar12 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar12)();
      uVar8 = uVar8 ^ 1;
    }
    if (((*(char *)(param_1 + 0xaf) == '\x02') &&
        (piVar2 = (int *)(*(long *)(lVar11 + 0x17f50) + *plVar20),
        *(int *)(param_1 + 0x80) == *piVar2)) &&
       ((*(long *)(piVar2 + 1) == *(long *)(param_1 + 0x84) &&
        *(long *)(piVar2 + 3) == *(long *)(param_1 + 0x8c)) && piVar2[5] == *(int *)(param_1 + 0x94)
       )) {
      uVar10 = FUN_0284cae0(param_1,0xc);
      if ((uVar10 & 1) == 0) {
        if (*(char *)(param_1 + 0xbc) == param_2) {
          iVar9 = 6;
        }
        else {
          iVar9 = -(uint)(*(char *)(param_1 + 0xac) != param_2);
        }
      }
      else {
        iVar9 = 5;
        if (*(char *)(param_1 + 0xac) != param_2) {
          iVar9 = -1;
        }
      }
    }
    break;
  default:
    goto switchD_0284de14_caseD_3;
  case 4:
    local_9c[0] = *param_3;
    if (7 < local_9c[0]) {
      local_9c[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_9c,1);
    if (lVar11 == 0) {
      return -1;
    }
    plVar20 = (long *)(lVar11 + 0x17f48);
    if ((*(long **)(lVar11 + 0x17f68) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17f68), puVar12 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar12)();
      uVar8 = uVar8 ^ 1;
    }
    if ((*(char *)(param_1 + 0x12a) == '\x02') &&
       (piVar2 = (int *)(*(long *)(lVar11 + 0x17f50) + *plVar20),
       *(int *)(param_1 + 0xfc) == *piVar2)) {
      uVar10 = (*(ulong *)(piVar2 + 1) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(piVar2 + 1) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar10 = (*(ulong *)(param_1 + 0x100) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_1 + 0x100) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      if (uVar15 == uVar10) {
        uVar10 = (*(ulong *)(piVar2 + 3) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(piVar2 + 3) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar10 = (*(ulong *)(param_1 + 0x108) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 0x108) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        if (uVar15 != uVar10) goto LAB_0284e168;
        uVar13 = (piVar2[5] & 0xff00ff00U) >> 8 | (piVar2[5] & 0xff00ffU) << 8;
        uVar26 = uVar13 >> 0x10 | uVar13 << 0x10;
        uVar13 = *(uint *)(param_1 + 0x110);
LAB_0284e154:
        uVar15 = (ulong)uVar26;
        uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
        uVar10 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
        if (uVar15 != uVar10) goto LAB_0284e168;
        iVar9 = 0;
      }
      else {
LAB_0284e168:
        iVar9 = 1;
        if (uVar15 < uVar10) {
          iVar9 = -1;
        }
      }
      iVar9 = -(uint)(iVar9 != 0);
    }
    break;
  case 5:
    local_a0[0] = *param_3;
    if (7 < local_a0[0]) {
      local_a0[0] = 0xff;
    }
    lVar11 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a0,1);
    if (lVar11 == 0) {
      return -1;
    }
    plVar20 = (long *)(lVar11 + 0x17f48);
    if ((*(long **)(lVar11 + 0x17f68) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17f68), puVar12 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar12)();
      uVar8 = uVar8 ^ 1;
    }
    if ((*(char *)(param_1 + 0x162) == '\x02') &&
       (piVar2 = (int *)(*(long *)(lVar11 + 0x17f50) + *plVar20),
       *(int *)(param_1 + 0x134) == *piVar2)) {
      uVar10 = (*(ulong *)(piVar2 + 1) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(piVar2 + 1) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar10 = (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff00) >> 8 |
               (*(ulong *)(param_1 + 0x138) & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      if (uVar15 == uVar10) {
        uVar10 = (*(ulong *)(piVar2 + 3) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(piVar2 + 3) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar10 = (*(ulong *)(param_1 + 0x140) & 0xff00ff00ff00ff00) >> 8 |
                 (*(ulong *)(param_1 + 0x140) & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        if (uVar15 == uVar10) {
          uVar13 = (piVar2[5] & 0xff00ff00U) >> 8 | (piVar2[5] & 0xff00ffU) << 8;
          uVar26 = uVar13 >> 0x10 | uVar13 << 0x10;
          uVar13 = *(uint *)(param_1 + 0x148);
          goto LAB_0284e154;
        }
      }
      goto LAB_0284e168;
    }
  }
  if ((uVar8 & 1) == 0) {
LAB_0284e630:
    lVar11 = plVar20[4];
    if (lVar11 != 0) {
LAB_0284e638:
      if (*(undefined8 **)(lVar11 + 8) != (undefined8 *)0x0) {
        (**(code **)**(undefined8 **)(lVar11 + 8))();
      }
    }
  }
switchD_0284de14_caseD_3:
  return iVar9;
}

