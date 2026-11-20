
void FUN_03d56a40(long *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  undefined **ppuVar8;
  undefined1 *puVar9;
  int *piVar10;
  ulong uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  bool bVar16;
  ulong uVar17;
  int local_11c;
  undefined *local_118;
  undefined1 *local_110;
  int local_108;
  undefined1 local_104 [31];
  undefined1 local_e5;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  undefined *puStack_6c;
  
  puVar5 = PTR_DAT_04bb2028;
  local_75 = 0;
  local_98 = 0x20;
  local_94[0] = 0;
  local_a0 = local_94;
  local_a8 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_a8,&DAT_040c7be9,param_2);
  if (param_3 == 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar15 = param_1[1];
    uVar12 = (undefined4)param_1[2];
    (**(code **)(local_a8 + 0x18))(&local_a8);
    ppuVar8 = &local_e0;
    puVar9 = local_a0;
  }
  else {
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar15 = 0;
    do {
      if (local_a0[lVar15] == '\0') goto LAB_03d56b44;
      if (local_a0[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03d56b44;
      }
      if (local_a0[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03d56b44;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03d56b44:
    iVar6 = FUN_038cefc4();
    piVar10 = *(int **)PTR_DAT_04bb4eb8;
    if ((piVar10 == (int *)0x0) || ((char)piVar10[8] == '\0')) {
      uVar7 = FUN_038ced70();
    }
    else {
      uVar11 = (ulong)(uint)(*piVar10 << 1) | 1;
      if (0x1f < (uint)uVar11) {
        uVar11 = 0;
      }
      uVar7 = (uint)(byte)(&DAT_04058440)[uVar11];
    }
    local_e0 = puVar5 + 0x10;
    local_ad = 0;
    local_d0 = 0x20;
    local_d8 = &local_cc;
    local_cc = 0x2e;
    if (((10 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x603U) == 0)) &&
       (local_cc = 0x2e, iVar6 != 2)) {
      local_cc = 0x2c;
    }
    local_e5 = 0;
    local_110 = local_104;
    local_108 = 0x20;
    local_118 = puVar5 + 0x10;
    iVar6 = (int)lVar15 + (param_2 >> 0x1f);
    local_cb = 0;
    local_104[0] = 0;
    (**(code **)(local_a8 + 0x18))(&local_a8);
    lVar15 = 0;
    do {
      if (local_a0[lVar15] == '\0') {
LAB_03d56c60:
        local_11c = (int)lVar15 + 1;
        if ((int)lVar15 != -1) goto LAB_03d56cd0;
        goto LAB_03d56c6c;
      }
      if (local_a0[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03d56c60;
      }
      if (local_a0[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03d56c60;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    local_11c = 1;
LAB_03d56cd0:
    uVar11 = 0;
    uVar7 = 0;
    bVar16 = false;
    uVar17 = 0;
    do {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar15 = 0;
      do {
        if (local_a0[lVar15] == '\0') goto LAB_03d56d64;
        if (local_a0[lVar15 + 1] == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_03d56d64;
        }
        if (local_a0[lVar15 + 2] == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_03d56d64;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_03d56d64:
      iVar14 = (int)uVar11;
      pcVar3 = "";
      if (iVar14 <= (int)lVar15 && -1 < iVar14) {
        pcVar3 = local_a0 + uVar17;
      }
      if (*pcVar3 == '-') {
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar15 = 0;
        do {
          if (local_a0[lVar15] == '\0') goto LAB_03d56e30;
          if (local_a0[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_03d56e30;
          }
          if (local_a0[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_03d56e30;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_03d56e30:
        puVar9 = &DAT_0419b684;
        if (iVar14 <= (int)lVar15 && -1 < iVar14) {
          puVar9 = local_a0 + uVar17;
        }
        uVar4 = *puVar9;
        (**(code **)(local_118 + 0x18))(&local_118);
        lVar15 = 0;
        do {
          if (local_110[lVar15] == '\0') goto LAB_03d56ea0;
          if (local_110[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_03d56ea0;
          }
          if (local_110[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_03d56ea0;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_03d56ea0:
        if ((int)lVar15 < local_108 + -1) {
          local_110[(int)lVar15] = uVar4;
          (local_110 + (int)lVar15)[1] = 0;
        }
      }
      else {
        if ((uVar7 == 0) && (iVar6 <= param_3)) {
          (**(code **)(local_118 + 0x18))(&local_118);
          puVar9 = local_110;
          lVar15 = 0;
          do {
            if (local_110[lVar15] == '\0') goto LAB_03d56ecc;
            if (local_110[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_03d56ecc;
            }
            if (local_110[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_03d56ecc;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_03d56ecc:
          if ((int)lVar15 < local_108 + -1) {
            *(undefined2 *)(local_110 + (int)lVar15) = 0x30;
          }
          (**(code **)(local_118 + 0x18))(&local_118);
          lVar15 = 0;
          do {
            if (local_110[lVar15] == '\0') goto LAB_03d56f3c;
            if (local_110[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_03d56f3c;
            }
            if (local_110[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_03d56f3c;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_03d56f3c:
          uVar1 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_e0 + 0x18))(&local_e0);
          lVar15 = 0;
          do {
            if (local_d8[lVar15] == '\0') goto LAB_03d56f9c;
            if (local_d8[lVar15 + 1] == '\0') {
              lVar15 = lVar15 + 1;
              goto LAB_03d56f9c;
            }
            if (local_d8[lVar15 + 2] == '\0') {
              lVar15 = lVar15 + 2;
              goto LAB_03d56f9c;
            }
            lVar15 = lVar15 + 3;
          } while (lVar15 != 0x80001);
          lVar15 = 0;
LAB_03d56f9c:
          uVar2 = (uint)lVar15;
          if ((int)(local_108 - uVar1) <= (int)(uint)lVar15) {
            uVar2 = local_108 + ~uVar1;
          }
          if (0 < (int)uVar2) {
            (**(code **)(local_e0 + 0x18))(&local_e0);
            memcpy(puVar9 + uVar1,local_d8,(ulong)uVar2);
            puVar9[(int)(uVar2 + uVar1)] = 0;
          }
          if (0 < param_3 - iVar6) {
            iVar13 = 0;
            do {
              (**(code **)(local_118 + 0x18))(&local_118);
              lVar15 = 0;
              do {
                if (local_110[lVar15] == '\0') goto LAB_03d57064;
                if (local_110[lVar15 + 1] == '\0') {
                  lVar15 = lVar15 + 1;
                  goto LAB_03d57064;
                }
                if (local_110[lVar15 + 2] == '\0') {
                  lVar15 = lVar15 + 2;
                  goto LAB_03d57064;
                }
                lVar15 = lVar15 + 3;
              } while (lVar15 != 0x80001);
              lVar15 = 0;
LAB_03d57064:
              if ((int)lVar15 < local_108 + -1) {
                *(undefined2 *)(local_110 + (int)lVar15) = 0x30;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 != param_3 - iVar6);
          }
          bVar16 = true;
        }
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar15 = 0;
        do {
          if (local_a0[lVar15] == '\0') goto LAB_03d570dc;
          if (local_a0[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_03d570dc;
          }
          if (local_a0[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_03d570dc;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_03d570dc:
        puVar9 = &DAT_0419b684;
        if (iVar14 <= (int)lVar15 && -1 < iVar14) {
          puVar9 = local_a0 + uVar17;
        }
        uVar4 = *puVar9;
        (**(code **)(local_118 + 0x18))(&local_118);
        puVar9 = local_110;
        lVar15 = 0;
        do {
          if (local_110[lVar15] == '\0') goto LAB_03d5714c;
          if (local_110[lVar15 + 1] == '\0') {
            lVar15 = lVar15 + 1;
            goto LAB_03d5714c;
          }
          if (local_110[lVar15 + 2] == '\0') {
            lVar15 = lVar15 + 2;
            goto LAB_03d5714c;
          }
          lVar15 = lVar15 + 3;
        } while (lVar15 != 0x80001);
        lVar15 = 0;
LAB_03d5714c:
        if ((int)lVar15 < local_108 + -1) {
          local_110[(int)lVar15] = uVar4;
          (local_110 + (int)lVar15)[1] = 0;
        }
        if (bVar16) {
LAB_03d56cf0:
          bVar16 = true;
        }
        else {
          if (iVar6 + ~uVar7 == param_3) {
            (**(code **)(local_118 + 0x18))(&local_118);
            lVar15 = 0;
            do {
              if (local_110[lVar15] == '\0') goto LAB_03d571d8;
              if (local_110[lVar15 + 1] == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_03d571d8;
              }
              if (local_110[lVar15 + 2] == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_03d571d8;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_03d571d8:
            uVar1 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
            (**(code **)(local_e0 + 0x18))(&local_e0);
            lVar15 = 0;
            do {
              if (local_d8[lVar15] == '\0') goto LAB_03d57230;
              if (local_d8[lVar15 + 1] == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_03d57230;
              }
              if (local_d8[lVar15 + 2] == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_03d57230;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_03d57230:
            uVar2 = (uint)lVar15;
            if ((int)(local_108 - uVar1) <= (int)(uint)lVar15) {
              uVar2 = local_108 + ~uVar1;
            }
            if (0 < (int)uVar2) {
              (**(code **)(local_e0 + 0x18))(&local_e0);
              memcpy(puVar9 + uVar1,local_d8,(ulong)uVar2);
              puVar9[(int)(uVar2 + uVar1)] = 0;
            }
            goto LAB_03d56cf0;
          }
          bVar16 = false;
        }
        uVar7 = uVar7 + 1;
      }
      uVar11 = uVar17 + 1;
      uVar17 = uVar11 & 0xffffffff;
    } while (local_11c != (int)uVar11);
LAB_03d56c6c:
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar15 = param_1[1];
    uVar12 = (undefined4)param_1[2];
    (**(code **)(local_118 + 0x18))(&local_118);
    ppuVar8 = &puStack_6c;
    puVar9 = local_110;
  }
  FUN_038d4900(ppuVar8,lVar15,uVar12,puVar9,0xffffffff);
  return;
}

