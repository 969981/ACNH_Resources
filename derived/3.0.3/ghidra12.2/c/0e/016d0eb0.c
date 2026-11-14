
bool FUN_016d0eb0(ulong *param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  undefined *local_108;
  char *local_100;
  int local_f8;
  char local_f4 [7];
  undefined1 local_ed;
  undefined *local_e8;
  char *local_e0;
  undefined4 local_d8;
  char local_d4 [7];
  undefined1 local_cd;
  undefined *local_c8;
  char *local_c0;
  int local_b8;
  char local_b4 [7];
  undefined1 local_ad;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  char local_94 [7];
  undefined1 local_8d;
  undefined *local_88;
  char *local_80;
  int local_78;
  char local_74 [7];
  undefined1 local_6d;
  
  puVar1 = PTR_DAT_04bb3768;
  *(undefined1 *)param_1 = 0;
  lVar11 = 0;
  *(undefined4 *)((long)param_1 + 4) = 0xffffffff;
  puVar1 = puVar1 + 0x10;
  do {
    local_78 = 8;
    local_6d = 0;
    lVar8 = *(long *)PTR_DAT_04bb46b0;
    local_74[0] = '\0';
    local_88 = puVar1;
    local_80 = local_74;
    if (lVar8 != 0) {
      puVar9 = *(undefined8 **)(lVar8 + 0x10);
      if ((*(byte *)(lVar8 + 0x453) & 1) == 0) {
        lVar8 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar8 != 0) {
          lVar8 = lVar8 + 0x70;
          goto LAB_016d0f8c;
        }
      }
      else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
              (lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar8 != 0)) {
LAB_016d0f8c:
        lVar8 = lVar8 + lVar11 * 0xc40;
        if ((*(long **)(lVar8 + 0x205ea0) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x205ea0), puVar9 == (undefined8 *)0x0)) {
          FUN_02774cf0(*(long *)(FUN_00205e88 + lVar8) + *(long *)(lVar8 + 0x205e80),&local_88);
        }
        else {
          uVar6 = (**(code **)*puVar9)();
          FUN_02774cf0(*(long *)(FUN_00205e88 + lVar8) + *(long *)(lVar8 + 0x205e80),&local_88);
          if ((uVar6 & 1) != 0) {
            if (*(long *)(lVar8 + 0x205ea0) != 0) {
              puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x205ea0) + 8);
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)();
              }
            }
          }
        }
      }
    }
    (**(code **)(local_88 + 0x18))(&local_88);
    (**(code **)(local_88 + 0x18))(&local_88);
    pcVar12 = local_80;
    (**(code **)(*param_2 + 0x18))(param_2);
    puVar3 = PTR_DAT_04bb3768;
    pcVar10 = (char *)param_2[1];
    if (pcVar12 == pcVar10) {
LAB_016d10bc:
      uVar6 = lVar11 << 0x20;
      bVar4 = true;
      goto LAB_016d10c8;
    }
    uVar6 = 0;
    bVar4 = true;
    do {
      if (local_80[uVar6] != pcVar10[uVar6]) break;
      if (local_80[uVar6] == '\0') {
        if (bVar4) goto LAB_016d10bc;
        break;
      }
      if (local_80[uVar6 + 1] != pcVar10[uVar6 + 1]) break;
      if (local_80[uVar6 + 1] == '\0') goto LAB_016d10bc;
      if (local_80[uVar6 + 2] != pcVar10[uVar6 + 2]) break;
      if (local_80[uVar6 + 2] == '\0') goto LAB_016d10bc;
      bVar4 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    lVar11 = lVar11 + 1;
  } while (lVar11 != 8);
  local_6d = 0;
  local_78 = 8;
  local_74[0] = '\0';
  local_88 = PTR_DAT_04bb3768 + 0x10;
  local_80 = local_74;
  if ((param_3 & 1) == 0) {
    FUN_021d7aa0(&local_88,param_2);
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar12 = (char *)param_2[1];
    if (local_74 != pcVar12) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar11 = 0;
      do {
        if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_016d119c;
        lVar8 = param_2[1] + lVar11;
        if (*(char *)(lVar8 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_016d119c;
        }
        if (*(char *)(lVar8 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_016d119c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_016d119c:
      iVar2 = (int)lVar11;
      if (local_78 <= (int)lVar11) {
        iVar2 = local_78 + -1;
      }
      memcpy(local_74,pcVar12,(long)iVar2);
      local_74[iVar2] = '\0';
    }
  }
  uVar6 = 0;
  bVar4 = true;
  puVar1 = puVar3 + 0x10;
  do {
    local_98 = 8;
    local_8d = 0;
    local_94[0] = '\0';
    local_a8 = puVar1;
    local_a0 = local_94;
    if (DAT_05574040 != 0) {
      puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar11 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar11 != 0) {
          lVar11 = lVar11 + 0x70;
          goto LAB_016d126c;
        }
      }
      else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
              (lVar11 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar11 != 0)) {
LAB_016d126c:
        lVar11 = lVar11 + uVar6 * 0xc40;
        if ((*(long **)(lVar11 + 0x20c0d8) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x20c0d8), puVar9 == (undefined8 *)0x0)) {
          FUN_02774cf0(*(long *)(lVar11 + 0x20c0c0) + *(long *)(lVar11 + 0x20c0b8),&local_a8);
        }
        else {
          uVar7 = (**(code **)*puVar9)();
          FUN_02774cf0(*(long *)(lVar11 + 0x20c0c0) + *(long *)(lVar11 + 0x20c0b8),&local_a8);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(lVar11 + 0x20c0d8) != 0) {
              puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x20c0d8) + 8);
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)();
              }
            }
          }
        }
      }
    }
    local_c8 = puVar3 + 0x10;
    local_b8 = 8;
    local_ad = 0;
    local_b4[0] = '\0';
    local_c0 = local_b4;
    if ((param_3 & 1) == 0) {
      FUN_021d7aa0(&local_c8,&local_a8);
    }
    else {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      pcVar12 = local_a0;
      if (local_b4 != local_a0) {
        (**(code **)(local_a8 + 0x18))(&local_a8);
        lVar11 = 0;
        do {
          if (local_a0[lVar11] == '\0') goto LAB_016d13a0;
          if (local_a0[lVar11 + 1] == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_016d13a0;
          }
          if (local_a0[lVar11 + 2] == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_016d13a0;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_016d13a0:
        iVar2 = (int)lVar11;
        if (local_b8 <= (int)lVar11) {
          iVar2 = local_b8 + -1;
        }
        memcpy(local_b4,pcVar12,(long)iVar2);
        local_b4[iVar2] = '\0';
      }
    }
    (**(code **)(local_c8 + 0x18))(&local_c8);
    (**(code **)(local_c8 + 0x18))(&local_c8);
    pcVar12 = local_c0;
    (**(code **)(local_88 + 0x18))(&local_88);
    if (pcVar12 == local_80) goto LAB_016d1760;
    uVar7 = 0;
    bVar5 = true;
    do {
      if (local_c0[uVar7] != local_80[uVar7]) break;
      if (local_c0[uVar7] == '\0') {
        if (bVar5) goto LAB_016d1760;
        break;
      }
      if (local_c0[uVar7 + 1] != local_80[uVar7 + 1]) break;
      if (local_c0[uVar7 + 1] == '\0') goto LAB_016d1760;
      if (local_c0[uVar7 + 2] != local_80[uVar7 + 2]) break;
      if (local_c0[uVar7 + 2] == '\0') goto LAB_016d1760;
      bVar5 = uVar7 < 0x7fffe;
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
    local_e8 = puVar3 + 0x10;
    local_d8 = 8;
    local_cd = 0;
    local_d4[0] = '\0';
    local_e0 = local_d4;
    if (DAT_05574040 != 0) {
      puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
      if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
        lVar11 = (**(code **)(*(long *)*puVar9 + 0x38))();
        if (lVar11 != 0) {
          lVar11 = lVar11 + 0x70;
          goto LAB_016d14f8;
        }
      }
      else if (((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) &&
              (lVar11 = (**(code **)(*(long *)puVar9[0x26] + 0x38))(), lVar11 != 0)) {
LAB_016d14f8:
        lVar11 = lVar11 + uVar6 * 0xc40;
        if ((*(long **)(lVar11 + 0x20c0d8) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar11 + 0x20c0d8), puVar9 == (undefined8 *)0x0)) {
          FUN_02775100(*(long *)(lVar11 + 0x20c0c0) + *(long *)(lVar11 + 0x20c0b8),&local_e8);
        }
        else {
          uVar7 = (**(code **)*puVar9)();
          FUN_02775100(*(long *)(lVar11 + 0x20c0c0) + *(long *)(lVar11 + 0x20c0b8),&local_e8);
          if ((uVar7 & 1) != 0) {
            if (*(long *)(lVar11 + 0x20c0d8) != 0) {
              puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x20c0d8) + 8);
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)();
              }
            }
          }
        }
      }
    }
    if (*local_e0 != '\0') {
      local_108 = puVar3 + 0x10;
      local_f8 = 8;
      local_ed = 0;
      local_f4[0] = '\0';
      local_100 = local_f4;
      if ((param_3 & 1) == 0) {
        FUN_021d7aa0(&local_108,&local_e8);
      }
      else {
        (**(code **)(local_e8 + 0x18))(&local_e8);
        pcVar12 = local_e0;
        if (local_f4 != local_e0) {
          (**(code **)(local_e8 + 0x18))(&local_e8);
          lVar11 = 0;
          do {
            if (local_e0[lVar11] == '\0') goto LAB_016d1650;
            if (local_e0[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_016d1650;
            }
            if (local_e0[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_016d1650;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_016d1650:
          iVar2 = (int)lVar11;
          if (local_f8 <= (int)lVar11) {
            iVar2 = local_f8 + -1;
          }
          memcpy(local_f4,pcVar12,(long)iVar2);
          local_f4[iVar2] = '\0';
        }
      }
      (**(code **)(local_108 + 0x18))(&local_108);
      (**(code **)(local_108 + 0x18))(&local_108);
      pcVar12 = local_100;
      (**(code **)(local_88 + 0x18))(&local_88);
      if (pcVar12 == local_80) {
LAB_016d1760:
        uVar6 = uVar6 << 0x20 | 1;
LAB_016d10c8:
        *param_1 = uVar6;
        return bVar4;
      }
      uVar7 = 0;
      bVar5 = true;
      do {
        if (local_100[uVar7] != local_80[uVar7]) break;
        if (local_100[uVar7] == '\0') {
          if (bVar5) goto LAB_016d1760;
          break;
        }
        if (local_100[uVar7 + 1] != local_80[uVar7 + 1]) break;
        if (local_100[uVar7 + 1] == '\0') goto LAB_016d1760;
        if (local_100[uVar7 + 2] != local_80[uVar7 + 2]) break;
        if (local_100[uVar7 + 2] == '\0') goto LAB_016d1760;
        bVar5 = uVar7 < 0x7fffe;
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
    }
    bVar4 = uVar6 < 7;
    uVar6 = uVar6 + 1;
    if (uVar6 == 8) {
      return bVar4;
    }
  } while( true );
}

