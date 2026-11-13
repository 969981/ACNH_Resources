
undefined8 FUN_01234430(undefined4 *param_1,long param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  long local_f8;
  char *local_f0;
  undefined **local_e8;
  char *local_e0;
  int local_d8;
  char local_d4 [31];
  undefined1 local_b5;
  undefined **local_b0;
  char *local_a8;
  int local_a0;
  char local_9c [31];
  undefined1 local_7d;
  undefined **local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar10 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4();
  lVar6 = DAT_05150358;
  lVar9 = *(long *)puVar2;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_68 = 0;
      local_70 = *param_1;
      uStack_6c = param_1[1];
      local_78 = &PTR_FUN_04a36b50;
      uVar3 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar2 != 0) {
        lVar6 = *(long *)(lVar9 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar6 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
             (lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8), lVar6 != 0)) {
            local_68 = lVar6;
          }
        }
      }
      iVar4 = FUN_01af93e8(&local_78);
      if (iVar4 == 0) {
        FUN_01af9ba0(&local_b0,0x17);
        pcVar7 = *(char **)(param_2 + 0x280);
        (*(code *)local_b0[3])(&local_b0);
        pcVar8 = local_a8;
        if (pcVar7 != local_a8) {
          (*(code *)local_b0[3])(&local_b0);
          lVar6 = 0;
          do {
            if (local_a8[lVar6] == '\0') goto LAB_01234918;
            if (local_a8[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_01234918;
            }
            if (local_a8[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_01234918;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_01234918:
          iVar4 = (int)lVar6;
          if (*(int *)(param_2 + 0x288) <= (int)lVar6) {
            iVar4 = *(int *)(param_2 + 0x288) + -1;
          }
          memcpy(pcVar7,pcVar8,(long)iVar4);
          pcVar7[iVar4] = '\0';
        }
        *(undefined4 *)(param_2 + 0x10d8) = 0;
        FUN_01af9ba0(&local_b0,0x17);
        pcVar7 = *(char **)(param_2 + 0xf90);
        (*(code *)local_b0[3])(&local_b0);
        pcVar8 = local_a8;
        if (pcVar7 == local_a8) {
          return 1;
        }
        (*(code *)local_b0[3])(&local_b0);
        lVar6 = 0;
        do {
          if (local_a8[lVar6] == '\0') goto LAB_01234b0c;
          if (local_a8[lVar6 + 1] == '\0') goto LAB_01234b00;
          if (local_a8[lVar6 + 2] == '\0') goto LAB_01234b08;
          lVar6 = lVar6 + 3;
        } while (lVar6 != 0x80001);
      }
      else {
        FUN_01af99c0(&local_e8,&local_78);
        local_a0 = 0x20;
        local_7d = 0;
        local_b0 = &PTR_LAB_048fa8f8;
        local_a8 = local_9c;
        (*(code *)local_e8[3])(&local_e8);
        pcVar8 = local_e0;
        if (local_9c != local_e0) {
          (*(code *)local_e8[3])(&local_e8);
          lVar6 = 0;
          do {
            if (local_e0[lVar6] == '\0') goto LAB_0123472c;
            if (local_e0[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_0123472c;
            }
            if (local_e0[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_0123472c;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_0123472c:
          iVar4 = (int)lVar6;
          if (local_a0 <= (int)lVar6) {
            iVar4 = local_a0 + -1;
          }
          memcpy(local_9c,pcVar8,(long)iVar4);
          local_9c[iVar4] = '\0';
        }
        ppuVar1 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
        local_b0 = ppuVar1;
        FUN_01af9d70(&local_f8,&local_78);
        local_b5 = 0;
        local_d8 = 0x20;
        local_e8 = &PTR_LAB_048fa8f8;
        local_e0 = local_d4;
        (**(code **)(local_f8 + 0x18))(&local_f8);
        pcVar8 = local_f0;
        if (local_d4 != local_f0) {
          (**(code **)(local_f8 + 0x18))(&local_f8);
          lVar6 = 0;
          do {
            if (local_f0[lVar6] == '\0') goto LAB_012347f0;
            if (local_f0[lVar6 + 1] == '\0') {
              lVar6 = lVar6 + 1;
              goto LAB_012347f0;
            }
            if (local_f0[lVar6 + 2] == '\0') {
              lVar6 = lVar6 + 2;
              goto LAB_012347f0;
            }
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
          lVar6 = 0;
LAB_012347f0:
          iVar4 = (int)lVar6;
          if (local_d8 <= (int)lVar6) {
            iVar4 = local_d8 + -1;
          }
          memcpy(local_d4,pcVar8,(long)iVar4);
          local_d4[iVar4] = '\0';
        }
        local_e8 = ppuVar1;
        if (*local_a8 == '\0') {
          FUN_01af9ba0(&local_f8,0x17);
          pcVar7 = *(char **)(param_2 + 0x280);
          (**(code **)(local_f8 + 0x18))(&local_f8);
          pcVar8 = local_f0;
          if (pcVar7 != local_f0) {
            (**(code **)(local_f8 + 0x18))(&local_f8);
            lVar6 = 0;
            do {
              if (local_f0[lVar6] == '\0') goto LAB_01234a5c;
              if (local_f0[lVar6 + 1] == '\0') {
                lVar6 = lVar6 + 1;
                goto LAB_01234a5c;
              }
              if (local_f0[lVar6 + 2] == '\0') {
                lVar6 = lVar6 + 2;
                goto LAB_01234a5c;
              }
              lVar6 = lVar6 + 3;
            } while (lVar6 != 0x80001);
            lVar6 = 0;
LAB_01234a5c:
            iVar4 = (int)lVar6;
            if (*(int *)(param_2 + 0x288) <= (int)lVar6) {
              iVar4 = *(int *)(param_2 + 0x288) + -1;
            }
            memcpy(pcVar7,pcVar8,(long)iVar4);
            pcVar7[iVar4] = '\0';
          }
          *(undefined4 *)(param_2 + 0x10d8) = 0;
          FUN_01af9ba0(&local_f8,0x17);
          pcVar7 = *(char **)(param_2 + 0xf90);
          (**(code **)(local_f8 + 0x18))(&local_f8);
          pcVar8 = local_f0;
          if (pcVar7 == local_f0) {
            return 1;
          }
          (**(code **)(local_f8 + 0x18))(&local_f8);
          lVar6 = 0;
          do {
            if (local_f0[lVar6] == '\0') goto LAB_01234b0c;
            if (local_f0[lVar6 + 1] == '\0') goto LAB_01234b00;
            if (local_f0[lVar6 + 2] == '\0') goto LAB_01234b08;
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
        }
        else {
          pcVar7 = *(char **)(param_2 + 0x280);
          (*(code *)local_b0[3])(&local_b0);
          pcVar8 = local_a8;
          if (pcVar7 != local_a8) {
            (*(code *)local_b0[3])(&local_b0);
            lVar6 = 0;
            do {
              if (local_a8[lVar6] == '\0') goto LAB_012349c0;
              if (local_a8[lVar6 + 1] == '\0') {
                lVar6 = lVar6 + 1;
                goto LAB_012349c0;
              }
              if (local_a8[lVar6 + 2] == '\0') {
                lVar6 = lVar6 + 2;
                goto LAB_012349c0;
              }
              lVar6 = lVar6 + 3;
            } while (lVar6 != 0x80001);
            lVar6 = 0;
LAB_012349c0:
            iVar4 = (int)lVar6;
            if (*(int *)(param_2 + 0x288) <= (int)lVar6) {
              iVar4 = *(int *)(param_2 + 0x288) + -1;
            }
            memcpy(pcVar7,pcVar8,(long)iVar4);
            pcVar7[iVar4] = '\0';
          }
          *(undefined4 *)(param_2 + 0x10d8) = 0;
          pcVar7 = *(char **)(param_2 + 0xf90);
          (*(code *)local_e8[3])(&local_e8);
          pcVar8 = local_e0;
          if (pcVar7 == local_e0) {
            return 1;
          }
          (*(code *)local_e8[3])(&local_e8);
          lVar6 = 0;
          do {
            if (local_e0[lVar6] == '\0') goto LAB_01234b0c;
            if (local_e0[lVar6 + 1] == '\0') goto LAB_01234b00;
            if (local_e0[lVar6 + 2] == '\0') goto LAB_01234b08;
            lVar6 = lVar6 + 3;
          } while (lVar6 != 0x80001);
        }
      }
      lVar6 = 0;
      goto LAB_01234b0c;
    }
  }
  if (((DAT_05150358 != 0) &&
      ((((*(long *)(DAT_05150358 + 0xb0) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        (*(long *)(DAT_05150358 + 0x488) != 0)) &&
       ((*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0 &&
        (*(long *)(DAT_05150358 + 0x2b0) != 0)))))) &&
     (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)) {
    uVar3 = FUN_0277d6c4(param_1);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      uVar5 = FUN_01234b40(param_1,param_2,param_3 & 1);
      return uVar5;
    }
  }
  return 0;
LAB_01234b00:
  lVar6 = lVar6 + 1;
  goto LAB_01234b0c;
LAB_01234b08:
  lVar6 = lVar6 + 2;
LAB_01234b0c:
  iVar4 = (int)lVar6;
  if (*(int *)(param_2 + 0xf98) <= (int)lVar6) {
    iVar4 = *(int *)(param_2 + 0xf98) + -1;
  }
  memcpy(pcVar7,pcVar8,(long)iVar4);
  pcVar7[iVar4] = '\0';
  return 1;
}

