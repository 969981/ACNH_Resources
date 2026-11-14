
void FUN_017793a0(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  char cVar10;
  uint uVar11;
  undefined8 *puVar13;
  undefined8 uVar12;
  char cVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  long *plVar17;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  undefined *local_110;
  undefined1 *local_108;
  undefined *local_100;
  char *local_f8;
  int local_f0;
  char local_ec [63];
  undefined1 local_ad;
  undefined1 local_6d;
  
  if (**(char **)(param_1 + 0x478) == '\0') {
    return;
  }
  lVar3 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),param_1 + 0x470);
  if (lVar3 == 0) {
    return;
  }
  lVar4 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),&DAT_0528c980);
  if (lVar4 == 0) {
    return;
  }
  if (**(char **)(param_1 + 0x510) == '\0') {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),param_1 + 0x508);
  }
  if (**(char **)(param_1 + 0x9a8) == '\0') {
    lVar6 = 0;
  }
  else {
    lVar6 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),param_1 + 0x9a0);
  }
  puVar20 = PTR_DAT_04bb2020;
  plVar17 = (long *)(param_1 + 0x640);
  local_108 = *(undefined1 **)(param_1 + 0x478);
  local_110 = PTR_DAT_04bb2020 + 0x10;
  FUN_017779b0(lVar3,&local_110,plVar17,lVar4);
  if (*(char *)(param_1 + 0x72d) == '\0') {
    if (*(char *)(param_1 + 0x99a) != '\0') {
      local_6d = 0;
      local_f0 = 0x80;
      local_f8 = local_ec;
      local_ec[0] = '\0';
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      if (lVar6 != 0) {
        uVar12 = 0;
        if (*(long *)(lVar6 + 8) != 0) {
          if ((*(long *)(*(long *)(lVar6 + 8) + 0x20) == 0) || (lVar3 = FUN_038fde10(), lVar3 == 0))
          {
            uVar12 = 0;
          }
          else {
            uVar12 = **(undefined8 **)(lVar3 + 0x28);
          }
        }
        *(undefined8 *)(param_1 + 0x6a8) = uVar12;
      }
      pcVar18 = local_f8;
      if (*(int *)(param_1 + 0x638) == 2) {
        if (lVar5 != 0) {
          (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
          pcVar19 = DAT_0528c808;
          if (pcVar18 != DAT_0528c808) {
            (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
            lVar3 = 0;
            do {
              if (DAT_0528c808[lVar3] == '\0') goto LAB_0177a41c;
              if (DAT_0528c808[lVar3 + 1] == '\0') {
                lVar3 = lVar3 + 1;
                goto LAB_0177a41c;
              }
              if (DAT_0528c808[lVar3 + 2] == '\0') {
                lVar3 = lVar3 + 2;
                goto LAB_0177a41c;
              }
              lVar3 = lVar3 + 3;
            } while (lVar3 != 0x80001);
            lVar3 = 0;
LAB_0177a41c:
            iVar2 = (int)lVar3;
            if (local_f0 <= (int)lVar3) {
              iVar2 = local_f0 + -1;
            }
            memcpy(pcVar18,pcVar19,(long)iVar2);
            pcVar18[iVar2] = '\0';
          }
          pcVar18 = local_f8;
          (**(code **)(local_100 + 0x18))(&local_100);
          lVar3 = 0;
          do {
            if (local_f8[lVar3] == '\0') goto LAB_0177a498;
            if (local_f8[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177a498;
            }
            if (local_f8[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177a498;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177a498:
          uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
          (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
          lVar3 = 0;
          do {
            if (*(char *)((long)DAT_0528cbe8 + lVar3) == '\0') goto LAB_0177a4f8;
            if (*(char *)((long)DAT_0528cbe8 + lVar3 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177a4f8;
            }
            if (*(char *)((long)DAT_0528cbe8 + lVar3 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177a4f8;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177a4f8:
          uVar1 = (uint)lVar3;
          if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
            uVar1 = local_f0 + ~uVar11;
          }
          if (0 < (int)uVar1) {
            (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
            memcpy(pcVar18 + uVar11,DAT_0528cbe8,(ulong)uVar1);
            pcVar18[(int)(uVar1 + uVar11)] = '\0';
          }
          if ((*(long *)(lVar5 + 8) == 0) ||
             (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20), lVar3 == 0)) {
            uVar12 = 0;
          }
          else {
            (**(code **)(local_100 + 0x18))(&local_100);
            uVar12 = FUN_038fe510(lVar3,local_f8);
          }
          pcVar19 = local_f8;
          lVar3 = DAT_0528c800;
          *(undefined8 *)(param_1 + 0x6b0) = uVar12;
          (**(code **)(lVar3 + 0x18))(&DAT_0528c800);
          pcVar18 = DAT_0528c808;
          if (pcVar19 != DAT_0528c808) {
            (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
            lVar3 = 0;
            do {
              if (DAT_0528c808[lVar3] == '\0') goto LAB_0177a7c4;
              if (DAT_0528c808[lVar3 + 1] == '\0') {
                lVar3 = lVar3 + 1;
                goto LAB_0177a7c4;
              }
              if (DAT_0528c808[lVar3 + 2] == '\0') {
                lVar3 = lVar3 + 2;
                goto LAB_0177a7c4;
              }
              lVar3 = lVar3 + 3;
            } while (lVar3 != 0x80001);
            lVar3 = 0;
LAB_0177a7c4:
            iVar2 = (int)lVar3;
            if (local_f0 <= (int)lVar3) {
              iVar2 = local_f0 + -1;
            }
            memcpy(pcVar19,pcVar18,(long)iVar2);
            pcVar19[iVar2] = '\0';
          }
          pcVar18 = local_f8;
          (**(code **)(local_100 + 0x18))(&local_100);
          lVar3 = 0;
          do {
            if (local_f8[lVar3] == '\0') goto LAB_0177a840;
            if (local_f8[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177a840;
            }
            if (local_f8[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177a840;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177a840:
          uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
          (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
          lVar3 = 0;
          do {
            if (*(char *)((long)DAT_0528cbf8 + lVar3) == '\0') goto LAB_0177a970;
            if (*(char *)((long)DAT_0528cbf8 + lVar3 + 1) == '\0') goto LAB_0177a964;
            if (*(char *)((long)DAT_0528cbf8 + lVar3 + 2) == '\0') goto LAB_0177a96c;
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          goto LAB_0177a95c;
        }
      }
      else if (lVar5 != 0) {
        (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
        pcVar19 = DAT_0528c818;
        if (pcVar18 != DAT_0528c818) {
          (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
          lVar3 = 0;
          do {
            if (DAT_0528c818[lVar3] == '\0') goto LAB_0177a5f0;
            if (DAT_0528c818[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177a5f0;
            }
            if (DAT_0528c818[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177a5f0;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177a5f0:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(pcVar18,pcVar19,(long)iVar2);
          pcVar18[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177a66c;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177a66c;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177a66c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177a66c:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cbe8 + lVar3) == '\0') goto LAB_0177a6cc;
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177a6cc;
          }
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177a6cc;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177a6cc:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
          memcpy(pcVar18 + uVar11,DAT_0528cbe8,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        if ((*(long *)(lVar5 + 8) == 0) ||
           (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20), lVar3 == 0)) {
          uVar12 = 0;
        }
        else {
          (**(code **)(local_100 + 0x18))(&local_100);
          uVar12 = FUN_038fe510(lVar3,local_f8);
        }
        pcVar19 = local_f8;
        lVar3 = DAT_0528c810;
        *(undefined8 *)(param_1 + 0x6b0) = uVar12;
        (**(code **)(lVar3 + 0x18))(&DAT_0528c810);
        pcVar18 = DAT_0528c818;
        if (pcVar19 != DAT_0528c818) {
          (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
          lVar3 = 0;
          do {
            if (DAT_0528c818[lVar3] == '\0') goto LAB_0177a894;
            if (DAT_0528c818[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177a894;
            }
            if (DAT_0528c818[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177a894;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177a894:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(pcVar19,pcVar18,(long)iVar2);
          pcVar19[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177a910;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177a910;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177a910;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177a910:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cbf8 + lVar3) == '\0') goto LAB_0177a970;
          if (*(char *)((long)DAT_0528cbf8 + lVar3 + 1) == '\0') goto LAB_0177a964;
          if (*(char *)((long)DAT_0528cbf8 + lVar3 + 2) == '\0') goto LAB_0177a96c;
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
LAB_0177a95c:
        lVar3 = 0;
        goto LAB_0177a970;
      }
    }
  }
  else {
    local_6d = 0;
    local_f0 = 0x80;
    local_f8 = local_ec;
    local_ec[0] = '\0';
    local_100 = PTR_DAT_04bb2d88 + 0x10;
    uVar7 = FUN_01596728(*(long *)(param_1 + 0x768) + 8);
    pcVar18 = local_f8;
    if ((uVar7 & 1) == 0) {
      uVar12 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x100) != 0) {
        puVar13 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x100) + 0xd41d0);
        goto LAB_01779540;
      }
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x768) + 0x20);
      uVar12 = 0;
      if (lVar3 != 0) {
        puVar13 = (undefined8 *)(lVar3 + 0x380);
LAB_01779540:
        uVar12 = *puVar13;
      }
    }
    *(undefined8 *)(param_1 + 0x6a8) = uVar12;
    if (*(int *)(param_1 + 0x638) == 2) {
      if (lVar5 != 0) {
        (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
        pcVar19 = DAT_0528c808;
        if (pcVar18 != DAT_0528c808) {
          (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
          lVar3 = 0;
          do {
            if (DAT_0528c808[lVar3] == '\0') goto LAB_01779754;
            if (DAT_0528c808[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_01779754;
            }
            if (DAT_0528c808[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_01779754;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_01779754:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(pcVar18,pcVar19,(long)iVar2);
          pcVar18[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') {
LAB_017797e0:
            uVar11 = (uint)lVar3;
            goto LAB_017797e4;
          }
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_017797e0;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_017797e0;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        uVar11 = 0;
LAB_017797e4:
        uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cbe8 + lVar3) == '\0') goto LAB_0177984c;
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177984c;
          }
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177984c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177984c:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
          memcpy(pcVar18 + uVar11,DAT_0528cbe8,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        if ((*(long *)(lVar5 + 8) == 0) ||
           (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20), lVar3 == 0)) {
          uVar12 = 0;
        }
        else {
          (**(code **)(local_100 + 0x18))(&local_100);
          uVar12 = FUN_038fe510(lVar3,local_f8);
        }
        pcVar19 = local_f8;
        lVar3 = DAT_0528c800;
        *(undefined8 *)(param_1 + 0x6b0) = uVar12;
        (**(code **)(lVar3 + 0x18))(&DAT_0528c800);
        pcVar18 = DAT_0528c808;
        if (pcVar19 != DAT_0528c808) {
          (**(code **)(DAT_0528c800 + 0x18))(&DAT_0528c800);
          lVar3 = 0;
          do {
            if (DAT_0528c808[lVar3] == '\0') goto LAB_01779b3c;
            if (DAT_0528c808[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_01779b3c;
            }
            if (DAT_0528c808[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_01779b3c;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_01779b3c:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(pcVar19,pcVar18,(long)iVar2);
          pcVar19[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_01779bbc;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_01779bbc;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_01779bbc;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_01779bbc:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cbf8 + lVar3) == '\0') goto LAB_01779cec;
          if (*(char *)((long)DAT_0528cbf8 + lVar3 + 1) == '\0') goto LAB_01779ce0;
          if (*(char *)((long)DAT_0528cbf8 + lVar3 + 2) == '\0') goto LAB_01779ce8;
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        goto LAB_01779cd8;
      }
    }
    else if (lVar5 != 0) {
      (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
      pcVar19 = DAT_0528c818;
      if (pcVar18 != DAT_0528c818) {
        (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
        lVar3 = 0;
        do {
          if (DAT_0528c818[lVar3] == '\0') goto LAB_0177994c;
          if (DAT_0528c818[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177994c;
          }
          if (DAT_0528c818[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177994c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177994c:
        iVar2 = (int)lVar3;
        if (local_f0 <= (int)lVar3) {
          iVar2 = local_f0 + -1;
        }
        memcpy(pcVar18,pcVar19,(long)iVar2);
        pcVar18[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar3 = 0;
      do {
        if (local_f8[lVar3] == '\0') goto LAB_017799e0;
        if (local_f8[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_017799e0;
        }
        if (local_f8[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_017799e0;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_017799e0:
      uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
      lVar3 = 0;
      do {
        if (*(char *)((long)DAT_0528cbe8 + lVar3) == '\0') goto LAB_01779a40;
        if (*(char *)((long)DAT_0528cbe8 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01779a40;
        }
        if (*(char *)((long)DAT_0528cbe8 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01779a40;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01779a40:
      uVar1 = (uint)lVar3;
      if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
        uVar1 = local_f0 + ~uVar11;
      }
      if (0 < (int)uVar1) {
        (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
        memcpy(pcVar18 + uVar11,DAT_0528cbe8,(ulong)uVar1);
        pcVar18[(int)(uVar1 + uVar11)] = '\0';
      }
      if ((*(long *)(lVar5 + 8) == 0) ||
         (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20), lVar3 == 0)) {
        uVar12 = 0;
      }
      else {
        (**(code **)(local_100 + 0x18))(&local_100);
        uVar12 = FUN_038fe510(lVar3,local_f8);
      }
      pcVar19 = local_f8;
      lVar3 = DAT_0528c810;
      *(undefined8 *)(param_1 + 0x6b0) = uVar12;
      (**(code **)(lVar3 + 0x18))(&DAT_0528c810);
      pcVar18 = DAT_0528c818;
      if (pcVar19 != DAT_0528c818) {
        (**(code **)(DAT_0528c810 + 0x18))(&DAT_0528c810);
        lVar3 = 0;
        do {
          if (DAT_0528c818[lVar3] == '\0') goto LAB_01779c10;
          if (DAT_0528c818[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_01779c10;
          }
          if (DAT_0528c818[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_01779c10;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_01779c10:
        iVar2 = (int)lVar3;
        if (local_f0 <= (int)lVar3) {
          iVar2 = local_f0 + -1;
        }
        memcpy(pcVar19,pcVar18,(long)iVar2);
        pcVar19[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar3 = 0;
      do {
        if (local_f8[lVar3] == '\0') goto LAB_01779c8c;
        if (local_f8[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_01779c8c;
        }
        if (local_f8[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_01779c8c;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_01779c8c:
      uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
      lVar3 = 0;
      do {
        if (*(char *)((long)DAT_0528cbf8 + lVar3) == '\0') goto LAB_01779cec;
        if (*(char *)((long)DAT_0528cbf8 + lVar3 + 1) == '\0') goto LAB_01779ce0;
        if (*(char *)((long)DAT_0528cbf8 + lVar3 + 2) == '\0') goto LAB_01779ce8;
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
LAB_01779cd8:
      lVar3 = 0;
      goto LAB_01779cec;
    }
  }
  goto LAB_01779d80;
LAB_0177a964:
  lVar3 = lVar3 + 1;
  goto LAB_0177a970;
LAB_0177a96c:
  lVar3 = lVar3 + 2;
LAB_0177a970:
  uVar1 = (uint)lVar3;
  if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
    uVar1 = local_f0 + ~uVar11;
  }
  if (0 < (int)uVar1) {
    (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
    memcpy(pcVar18 + uVar11,DAT_0528cbf8,(ulong)uVar1);
    pcVar18[(int)(uVar1 + uVar11)] = '\0';
  }
  puVar20 = PTR_DAT_04bb2020;
  if (*(long *)(lVar5 + 8) != 0) {
    lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20);
    if (lVar3 != 0) {
      (**(code **)(local_100 + 0x18))(&local_100);
      uVar12 = FUN_038fe510(lVar3,local_f8);
      goto LAB_01779d7c;
    }
    goto LAB_01779d78;
  }
  uVar12 = 0;
  goto LAB_01779d7c;
LAB_01779ce0:
  lVar3 = lVar3 + 1;
  goto LAB_01779cec;
LAB_01779ce8:
  lVar3 = lVar3 + 2;
LAB_01779cec:
  uVar1 = (uint)lVar3;
  if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
    uVar1 = local_f0 + ~uVar11;
  }
  if (0 < (int)uVar1) {
    (**(code **)(DAT_0528cbf0 + 0x18))(&DAT_0528cbf0);
    memcpy(pcVar18 + uVar11,DAT_0528cbf8,(ulong)uVar1);
    pcVar18[(int)(uVar1 + uVar11)] = '\0';
  }
  if ((*(long *)(lVar5 + 8) == 0) || (lVar3 = *(long *)(*(long *)(lVar5 + 8) + 0x20), lVar3 == 0)) {
LAB_01779d78:
    uVar12 = 0;
  }
  else {
    (**(code **)(local_100 + 0x18))(&local_100);
    uVar12 = FUN_038fe510(lVar3,local_f8);
  }
LAB_01779d7c:
  *(undefined8 *)(param_1 + 0x6b8) = uVar12;
LAB_01779d80:
  if (*(long *)(param_1 + 0x6d8) != 0) {
    FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6d8),
                 &DAT_0528c9a0);
  }
  switch(*(undefined4 *)(param_1 + 0x638)) {
  case 1:
    if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
      FUN_01777098(plVar17,*(undefined8 *)(param_1 + 0x60));
    }
    else {
LAB_0177a1ac:
      if (*(long *)(param_1 + 0x6a8) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6a8),
                     &DAT_0528c9f0);
      }
      if (*(long *)(param_1 + 0x6b0) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6b0),
                     &DAT_0528ca00);
      }
      lVar3 = *(long *)(param_1 + 0x6b8);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        ppuVar9 = (undefined **)&DAT_0528ca10;
        goto LAB_0177c95c;
      }
    }
    break;
  case 2:
    if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
      FUN_01777130(plVar17,*(undefined8 *)(param_1 + 0x60),*(undefined1 *)(param_1 + 0xaf7),
                   *(undefined1 *)(param_1 + 0x72c));
    }
    else {
      if (*(long *)(param_1 + 0x6a8) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6a8),
                     &DAT_0528ca40);
      }
      if (*(long *)(param_1 + 0x6b0) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6b0),
                     &DAT_0528ca50);
      }
      if (*(long *)(param_1 + 0x6b8) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6b8),
                     &DAT_0528ca60);
      }
      if (*(char *)(param_1 + 0xaf7) != '\0') {
        if (*(long *)(param_1 + 0x6a8) != 0) {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x6a8),&DAT_0528ca90);
        }
        if (*(long *)(param_1 + 0x6b0) != 0) {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x6b0),&DAT_0528caa0);
        }
        if (*(long *)(param_1 + 0x6b8) != 0) {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x6b8),&DAT_0528cab0);
        }
      }
      lVar3 = *(long *)(param_1 + 0x6d0);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        ppuVar9 = (undefined **)&DAT_0528ca80;
        goto LAB_0177c95c;
      }
    }
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x648);
    if (lVar3 == 0) {
      lVar4 = *(long *)(param_1 + 0x640);
      if (lVar4 != 0 || *(long *)(param_1 + 0x6a8) != 0) {
        lVar3 = *(long *)(param_1 + 0x6a8);
        if (lVar4 != 0) {
          lVar3 = lVar4;
        }
        goto LAB_01779e2c;
      }
    }
    else {
LAB_01779e2c:
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),lVar3,&DAT_0528c9f0);
    }
    lVar3 = param_1 + 0x5a0;
    lVar4 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),lVar3);
    if (lVar4 != 0) {
      local_f0 = 0x40;
      local_ad = 0;
      local_100 = PTR_DAT_04bb2f70 + 0x10;
      local_f8 = local_ec;
      (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
      pcVar18 = *(char **)(param_1 + 0x5a8);
      if (local_ec != pcVar18) {
        (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
        lVar5 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5a8) + lVar5) == '\0') goto LAB_0177aa10;
          lVar6 = *(long *)(param_1 + 0x5a8) + lVar5;
          if (*(char *)(lVar6 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0177aa10;
          }
          if (*(char *)(lVar6 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0177aa10;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0177aa10:
        iVar2 = (int)lVar5;
        if (local_f0 <= (int)lVar5) {
          iVar2 = local_f0 + -1;
        }
        memcpy(local_ec,pcVar18,(long)iVar2);
        local_ec[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      lVar5 = 0;
      local_100 = PTR_DAT_04bb2bc0 + 0x10;
      local_110 = puVar20 + 0x10;
      local_108 = &DAT_040da329;
      local_f8[(long)local_f0 + -1] = '\0';
      do {
        if (local_f8[lVar5] == '\0') goto LAB_0177aaac;
        if (local_f8[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0177aaac;
        }
        if (local_f8[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0177aaac;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0177aaac:
      uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
      (**(code **)(puVar20 + 0x28))(&local_110);
      lVar5 = 0;
      do {
        if (local_108[lVar5] == '\0') goto LAB_0177ab04;
        if (local_108[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0177ab04;
        }
        if (local_108[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0177ab04;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0177ab04:
      uVar1 = (uint)lVar5;
      if ((int)(local_f0 - uVar11) <= (int)(uint)lVar5) {
        uVar1 = local_f0 + ~uVar11;
      }
      if (0 < (int)uVar1) {
        (**(code **)(local_110 + 0x18))(&local_110);
        memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
        pcVar18[(int)(uVar1 + uVar11)] = '\0';
      }
      if ((*(long *)(lVar4 + 8) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar4 + 8) + 0x20), lVar5 != 0)) {
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar5 = FUN_038fe510(lVar5,local_f8);
        if (lVar5 != 0) {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),lVar5,&DAT_0528cad0);
        }
      }
      pcVar18 = local_f8;
      (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
      pcVar19 = *(char **)(param_1 + 0x5a8);
      if (pcVar18 != pcVar19) {
        (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
        lVar3 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5a8) + lVar3) == '\0') goto LAB_0177ac0c;
          lVar5 = *(long *)(param_1 + 0x5a8) + lVar3;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177ac0c;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177ac0c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177ac0c:
        iVar2 = (int)lVar3;
        if (local_f0 <= (int)lVar3) {
          iVar2 = local_f0 + -1;
        }
        memcpy(pcVar18,pcVar19,(long)iVar2);
        pcVar18[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar3 = 0;
      do {
        if (local_f8[lVar3] == '\0') goto LAB_0177c1f4;
        if (local_f8[lVar3 + 1] == '\0') goto LAB_0177c1e8;
        if (local_f8[lVar3 + 2] == '\0') goto LAB_0177c1f0;
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
LAB_0177c1e0:
      lVar3 = 0;
      goto LAB_0177c1f4;
    }
    break;
  case 4:
    lVar3 = *(long *)(param_1 + 0x648);
    if (lVar3 == 0) {
      lVar4 = *(long *)(param_1 + 0x640);
      if (lVar4 != 0 || *(long *)(param_1 + 0x6a8) != 0) {
        lVar3 = *(long *)(param_1 + 0x6a8);
        if (lVar4 != 0) {
          lVar3 = lVar4;
        }
        goto LAB_01779f00;
      }
    }
    else {
LAB_01779f00:
      local_100 = puVar20 + 0x10;
      local_f8 = "mDummyCeling_Alb";
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),lVar3,&local_100);
    }
    if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
      if (*(long *)(param_1 + 0x670) == 0) {
        lVar3 = *(long *)(param_1 + 0x648);
        if (lVar3 == 0) {
          lVar4 = *(long *)(param_1 + 0x640);
          if (lVar4 == 0 && *(long *)(param_1 + 0x6a8) == 0) goto LAB_0177adc8;
          lVar3 = *(long *)(param_1 + 0x6a8);
          if (lVar4 != 0) {
            lVar3 = lVar4;
          }
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),lVar3,&DAT_0528caf0);
        lVar3 = *(long *)(param_1 + 0x648);
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
        if ((lVar3 == 0) && (lVar3 = *plVar17, lVar3 == 0)) goto LAB_0177a2e8;
LAB_0177a40c:
        ppuVar9 = (undefined **)&DAT_0528c9f0;
      }
      else {
        if (*(char *)(param_1 + 0x72c) == '\0') {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x670),&DAT_0528caf0);
          lVar3 = *(long *)(param_1 + 0x670);
          uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
          goto LAB_0177a40c;
        }
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177ac84;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177ac84;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177ac84;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177ac84:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        local_110 = puVar20 + 0x10;
        local_108 = &DAT_040c51a4;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177ad10;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177ad10;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177ad10;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177ad10:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_110 + 0x18))(&local_110);
        lVar3 = 0;
        do {
          if (local_108[lVar3] == '\0') goto LAB_0177ad68;
          if (local_108[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177ad68;
          }
          if (local_108[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177ad68;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177ad68:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        ppuVar9 = &local_100;
        lVar3 = *(long *)(param_1 + 0x670);
        uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
      }
      FUN_039a9540(uVar12,lVar3,ppuVar9);
    }
    else if (*(long *)(param_1 + 0x6a8) != 0) {
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6a8),
                   &DAT_0528caf0);
      uVar12 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
LAB_0177a2e8:
      lVar3 = *(long *)(param_1 + 0x6a8);
      goto LAB_0177a40c;
    }
LAB_0177adc8:
    cVar10 = *(char *)(param_1 + 0x72d);
    cVar14 = *(char *)(param_1 + 0x99a);
    if (cVar10 == '\0' && cVar14 == '\0') {
      if (*(long *)(param_1 + 0x650) == 0) {
        cVar14 = '\0';
        cVar10 = '\0';
      }
      else {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x650),
                     &DAT_0528ca30);
        cVar10 = *(char *)(param_1 + 0x72d);
        cVar14 = *(char *)(param_1 + 0x99a);
      }
    }
    if (cVar10 == '\0' && cVar14 == '\0') {
      if (*(long *)(param_1 + 0x678) == 0) {
        if (*(long *)(param_1 + 0x658) == 0) goto LAB_0177b25c;
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x658),
                     &DAT_0528cb00);
        lVar3 = *(long *)(param_1 + 0x60);
        uVar12 = *(undefined8 *)(param_1 + 0x658);
LAB_0177af1c:
        uVar8 = *(undefined8 *)(lVar3 + 0x1150);
        ppuVar9 = (undefined **)&DAT_0528ca00;
      }
      else {
        if (*(char *)(param_1 + 0x72c) == '\0') {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x678),&DAT_0528cb00);
          lVar3 = *(long *)(param_1 + 0x60);
          uVar12 = *(undefined8 *)(param_1 + 0x678);
          goto LAB_0177af1c;
        }
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177b120;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177b120;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177b120;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177b120:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177b19c;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b19c;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b19c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b19c:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cbe8 + lVar3) == '\0') goto LAB_0177b1fc;
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b1fc;
          }
          if (*(char *)((long)DAT_0528cbe8 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b1fc;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b1fc:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cbe0 + 0x18))(&DAT_0528cbe0);
          memcpy(pcVar18 + uVar11,DAT_0528cbe8,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        ppuVar9 = &local_100;
        uVar12 = *(undefined8 *)(param_1 + 0x678);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
      }
      FUN_039a9540(uVar8,uVar12,ppuVar9);
    }
    else if (*(long *)(param_1 + 0x6b0) != 0) {
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6b0),
                   &DAT_0528cb00);
      lVar3 = *(long *)(param_1 + 0x60);
      uVar12 = *(undefined8 *)(param_1 + 0x6b0);
      goto LAB_0177af1c;
    }
LAB_0177b25c:
    if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
      if (*(long *)(param_1 + 0x680) == 0) {
        if (*(long *)(param_1 + 0x660) == 0) goto LAB_0177b6c0;
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x660),
                     &DAT_0528cb10);
        lVar3 = *(long *)(param_1 + 0x60);
        uVar12 = *(undefined8 *)(param_1 + 0x660);
LAB_0177b378:
        uVar8 = *(undefined8 *)(lVar3 + 0x1150);
        ppuVar9 = (undefined **)&DAT_0528ca10;
      }
      else {
        if (*(char *)(param_1 + 0x72c) == '\0') {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(long *)(param_1 + 0x680),&DAT_0528cb10);
          lVar3 = *(long *)(param_1 + 0x60);
          uVar12 = *(undefined8 *)(param_1 + 0x680);
          goto LAB_0177b378;
        }
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177b57c;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177b57c;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177b57c;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177b57c:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        local_110 = puVar20 + 0x10;
        local_108 = &DAT_0408c8c2;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177b608;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b608;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b608;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b608:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_110 + 0x18))(&local_110);
        lVar3 = 0;
        do {
          if (local_108[lVar3] == '\0') goto LAB_0177b660;
          if (local_108[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b660;
          }
          if (local_108[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b660;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b660:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        ppuVar9 = &local_100;
        uVar12 = *(undefined8 *)(param_1 + 0x680);
        uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150);
      }
      FUN_039a9540(uVar8,uVar12,ppuVar9);
    }
    else if (*(long *)(param_1 + 0x6b8) != 0) {
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x6b8),
                   &DAT_0528cb10);
      lVar3 = *(long *)(param_1 + 0x60);
      uVar12 = *(undefined8 *)(param_1 + 0x6b8);
      goto LAB_0177b378;
    }
LAB_0177b6c0:
    cVar10 = *(char *)(param_1 + 0x72d);
    cVar14 = *(char *)(param_1 + 0x99a);
    if (cVar10 == '\0' && cVar14 == '\0') {
      cVar14 = '\0';
      if (*(long *)(param_1 + 0x688) == 0) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\0';
        if (*(char *)(param_1 + 0x72c) != '\0') {
          local_6d = 0;
          local_ec[0] = '\0';
          local_f0 = 0x80;
          local_100 = PTR_DAT_04bb2d88 + 0x10;
          local_f8 = local_ec;
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          pcVar18 = *(char **)(param_1 + 0x348);
          if (local_ec != pcVar18) {
            (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
            lVar3 = 0;
            do {
              if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177b78c;
              lVar4 = *(long *)(param_1 + 0x348) + lVar3;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar3 = lVar3 + 1;
                goto LAB_0177b78c;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar3 = lVar3 + 2;
                goto LAB_0177b78c;
              }
              lVar3 = lVar3 + 3;
            } while (lVar3 != 0x80001);
            lVar3 = 0;
LAB_0177b78c:
            iVar2 = (int)lVar3;
            if (local_f0 <= (int)lVar3) {
              iVar2 = local_f0 + -1;
            }
            memcpy(local_ec,pcVar18,(long)iVar2);
            local_ec[iVar2] = '\0';
          }
          pcVar18 = local_f8;
          (**(code **)(local_100 + 0x18))(&local_100);
          lVar3 = 0;
          do {
            if (local_f8[lVar3] == '\0') goto LAB_0177b808;
            if (local_f8[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177b808;
            }
            if (local_f8[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177b808;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177b808:
          uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
          (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
          lVar3 = 0;
          do {
            if (*(char *)((long)DAT_0528cc08 + lVar3) == '\0') goto LAB_0177b868;
            if (*(char *)((long)DAT_0528cc08 + lVar3 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177b868;
            }
            if (*(char *)((long)DAT_0528cc08 + lVar3 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177b868;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177b868:
          uVar1 = (uint)lVar3;
          if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
            uVar1 = local_f0 + ~uVar11;
          }
          if (0 < (int)uVar1) {
            (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
            memcpy(pcVar18 + uVar11,DAT_0528cc08,(ulong)uVar1);
            pcVar18[(int)(uVar1 + uVar11)] = '\0';
          }
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(undefined8 *)(param_1 + 0x688),&local_100);
          cVar10 = *(char *)(param_1 + 0x72d);
          cVar14 = *(char *)(param_1 + 0x99a);
        }
      }
    }
    if (cVar10 == '\0' && cVar14 == '\0') {
      cVar14 = '\0';
      if (*(long *)(param_1 + 0x690) == 0) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\0';
        if (*(char *)(param_1 + 0x72c) != '\0') {
          local_6d = 0;
          local_ec[0] = '\0';
          local_f0 = 0x80;
          local_100 = PTR_DAT_04bb2d88 + 0x10;
          local_f8 = local_ec;
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          pcVar18 = *(char **)(param_1 + 0x348);
          if (local_ec != pcVar18) {
            (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
            lVar3 = 0;
            do {
              if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177b994;
              lVar4 = *(long *)(param_1 + 0x348) + lVar3;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar3 = lVar3 + 1;
                goto LAB_0177b994;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar3 = lVar3 + 2;
                goto LAB_0177b994;
              }
              lVar3 = lVar3 + 3;
            } while (lVar3 != 0x80001);
            lVar3 = 0;
LAB_0177b994:
            iVar2 = (int)lVar3;
            if (local_f0 <= (int)lVar3) {
              iVar2 = local_f0 + -1;
            }
            memcpy(local_ec,pcVar18,(long)iVar2);
            local_ec[iVar2] = '\0';
          }
          pcVar18 = local_f8;
          (**(code **)(local_100 + 0x18))(&local_100);
          lVar3 = 0;
          do {
            if (local_f8[lVar3] == '\0') goto LAB_0177ba10;
            if (local_f8[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177ba10;
            }
            if (local_f8[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177ba10;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177ba10:
          uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
          (**(code **)(DAT_0528cc20 + 0x18))(&DAT_0528cc20);
          lVar3 = 0;
          do {
            if (*(char *)((long)DAT_0528cc28 + lVar3) == '\0') goto LAB_0177ba70;
            if (*(char *)((long)DAT_0528cc28 + lVar3 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177ba70;
            }
            if (*(char *)((long)DAT_0528cc28 + lVar3 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177ba70;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177ba70:
          uVar1 = (uint)lVar3;
          if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
            uVar1 = local_f0 + ~uVar11;
          }
          if (0 < (int)uVar1) {
            (**(code **)(DAT_0528cc20 + 0x18))(&DAT_0528cc20);
            memcpy(pcVar18 + uVar11,DAT_0528cc28,(ulong)uVar1);
            pcVar18[(int)(uVar1 + uVar11)] = '\0';
          }
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(undefined8 *)(param_1 + 0x690),&local_100);
          cVar10 = *(char *)(param_1 + 0x72d);
          cVar14 = *(char *)(param_1 + 0x99a);
        }
      }
    }
    if (cVar10 == '\0' && cVar14 == '\0') {
      cVar14 = '\0';
      if (*(long *)(param_1 + 0x698) == 0) {
        cVar10 = '\0';
      }
      else {
        cVar10 = '\0';
        if (*(char *)(param_1 + 0x72c) != '\0') {
          local_6d = 0;
          local_ec[0] = '\0';
          local_f0 = 0x80;
          local_100 = PTR_DAT_04bb2d88 + 0x10;
          local_f8 = local_ec;
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          pcVar18 = *(char **)(param_1 + 0x348);
          if (local_ec != pcVar18) {
            (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
            lVar3 = 0;
            do {
              if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177bb9c;
              lVar4 = *(long *)(param_1 + 0x348) + lVar3;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar3 = lVar3 + 1;
                goto LAB_0177bb9c;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar3 = lVar3 + 2;
                goto LAB_0177bb9c;
              }
              lVar3 = lVar3 + 3;
            } while (lVar3 != 0x80001);
            lVar3 = 0;
LAB_0177bb9c:
            iVar2 = (int)lVar3;
            if (local_f0 <= (int)lVar3) {
              iVar2 = local_f0 + -1;
            }
            memcpy(local_ec,pcVar18,(long)iVar2);
            local_ec[iVar2] = '\0';
          }
          pcVar18 = local_f8;
          (**(code **)(local_100 + 0x18))(&local_100);
          lVar3 = 0;
          do {
            if (local_f8[lVar3] == '\0') goto LAB_0177bc18;
            if (local_f8[lVar3 + 1] == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177bc18;
            }
            if (local_f8[lVar3 + 2] == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177bc18;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177bc18:
          uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
          (**(code **)(DAT_0528cc30 + 0x18))(&DAT_0528cc30);
          lVar3 = 0;
          do {
            if (*(char *)((long)DAT_0528cc38 + lVar3) == '\0') goto LAB_0177bc78;
            if (*(char *)((long)DAT_0528cc38 + lVar3 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177bc78;
            }
            if (*(char *)((long)DAT_0528cc38 + lVar3 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177bc78;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177bc78:
          uVar1 = (uint)lVar3;
          if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
            uVar1 = local_f0 + ~uVar11;
          }
          if (0 < (int)uVar1) {
            (**(code **)(DAT_0528cc30 + 0x18))(&DAT_0528cc30);
            memcpy(pcVar18 + uVar11,DAT_0528cc38,(ulong)uVar1);
            pcVar18[(int)(uVar1 + uVar11)] = '\0';
          }
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                       *(undefined8 *)(param_1 + 0x698),&local_100);
          cVar10 = *(char *)(param_1 + 0x72d);
          cVar14 = *(char *)(param_1 + 0x99a);
        }
      }
    }
    if (((cVar10 == '\0' && cVar14 == '\0') && (*(long *)(param_1 + 0x6a0) != 0)) &&
       (*(char *)(param_1 + 0x72c) != '\0')) {
      local_6d = 0;
      local_ec[0] = '\0';
      local_f0 = 0x80;
      local_100 = PTR_DAT_04bb2d88 + 0x10;
      local_f8 = local_ec;
      (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
      pcVar18 = *(char **)(param_1 + 0x348);
      if (local_ec != pcVar18) {
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        lVar3 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177bd94;
          lVar4 = *(long *)(param_1 + 0x348) + lVar3;
          if (*(char *)(lVar4 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177bd94;
          }
          if (*(char *)(lVar4 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177bd94;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177bd94:
        iVar2 = (int)lVar3;
        if (local_f0 <= (int)lVar3) {
          iVar2 = local_f0 + -1;
        }
        memcpy(local_ec,pcVar18,(long)iVar2);
        local_ec[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar3 = 0;
      do {
        if (local_f8[lVar3] == '\0') goto LAB_0177be10;
        if (local_f8[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_0177be10;
        }
        if (local_f8[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_0177be10;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_0177be10:
      uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
      (**(code **)(DAT_0528cc40 + 0x18))(&DAT_0528cc40);
      lVar3 = 0;
      do {
        if (*(char *)((long)DAT_0528cc48 + lVar3) == '\0') goto LAB_0177be70;
        if (*(char *)((long)DAT_0528cc48 + lVar3 + 1) == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_0177be70;
        }
        if (*(char *)((long)DAT_0528cc48 + lVar3 + 2) == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_0177be70;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_0177be70:
      uVar1 = (uint)lVar3;
      if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
        uVar1 = local_f0 + ~uVar11;
      }
      if (0 < (int)uVar1) {
        (**(code **)(DAT_0528cc40 + 0x18))(&DAT_0528cc40);
        memcpy(pcVar18 + uVar11,DAT_0528cc48,(ulong)uVar1);
        pcVar18[(int)(uVar1 + uVar11)] = '\0';
      }
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                   *(undefined8 *)(param_1 + 0x6a0),&local_100);
    }
    lVar3 = param_1 + 0x5a0;
    lVar4 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),lVar3);
    if (lVar4 != 0) {
      local_f0 = 0x40;
      local_ad = 0;
      local_100 = PTR_DAT_04bb2f70 + 0x10;
      local_f8 = local_ec;
      (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
      pcVar18 = *(char **)(param_1 + 0x5a8);
      if (local_ec != pcVar18) {
        (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
        lVar5 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5a8) + lVar5) == '\0') goto LAB_0177bf7c;
          lVar6 = *(long *)(param_1 + 0x5a8) + lVar5;
          if (*(char *)(lVar6 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_0177bf7c;
          }
          if (*(char *)(lVar6 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_0177bf7c;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_0177bf7c:
        iVar2 = (int)lVar5;
        if (local_f0 <= (int)lVar5) {
          iVar2 = local_f0 + -1;
        }
        memcpy(local_ec,pcVar18,(long)iVar2);
        local_ec[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      lVar5 = 0;
      local_100 = PTR_DAT_04bb2bc0 + 0x10;
      local_110 = puVar20 + 0x10;
      local_108 = &DAT_040da329;
      local_f8[(long)local_f0 + -1] = '\0';
      do {
        if (local_f8[lVar5] == '\0') goto LAB_0177c018;
        if (local_f8[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0177c018;
        }
        if (local_f8[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0177c018;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0177c018:
      uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
      (**(code **)(puVar20 + 0x28))(&local_110);
      lVar5 = 0;
      do {
        if (local_108[lVar5] == '\0') goto LAB_0177c070;
        if (local_108[lVar5 + 1] == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0177c070;
        }
        if (local_108[lVar5 + 2] == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0177c070;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0177c070:
      uVar1 = (uint)lVar5;
      if ((int)(local_f0 - uVar11) <= (int)(uint)lVar5) {
        uVar1 = local_f0 + ~uVar11;
      }
      if (0 < (int)uVar1) {
        (**(code **)(local_110 + 0x18))(&local_110);
        memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
        pcVar18[(int)(uVar1 + uVar11)] = '\0';
      }
      if ((*(long *)(lVar4 + 8) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar4 + 8) + 0x20), lVar5 != 0)) {
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar5 = FUN_038fe510(lVar5,local_f8);
        if (lVar5 != 0) {
          FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),lVar5,&DAT_0528cad0);
        }
      }
      pcVar18 = local_f8;
      (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
      pcVar19 = *(char **)(param_1 + 0x5a8);
      if (pcVar18 != pcVar19) {
        (**(code **)(*(long *)(param_1 + 0x5a0) + 0x18))(lVar3);
        lVar3 = 0;
        do {
          if (*(char *)(*(long *)(param_1 + 0x5a8) + lVar3) == '\0') goto LAB_0177c178;
          lVar5 = *(long *)(param_1 + 0x5a8) + lVar3;
          if (*(char *)(lVar5 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c178;
          }
          if (*(char *)(lVar5 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c178;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c178:
        iVar2 = (int)lVar3;
        if (local_f0 <= (int)lVar3) {
          iVar2 = local_f0 + -1;
        }
        memcpy(pcVar18,pcVar19,(long)iVar2);
        pcVar18[iVar2] = '\0';
      }
      pcVar18 = local_f8;
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar3 = 0;
      do {
        if (local_f8[lVar3] == '\0') goto LAB_0177c1f4;
        if (local_f8[lVar3 + 1] == '\0') goto LAB_0177c1e8;
        if (local_f8[lVar3 + 2] == '\0') goto LAB_0177c1f0;
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      goto LAB_0177c1e0;
    }
    break;
  case 5:
    if (*plVar17 != 0) {
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*plVar17,&DAT_0528cb20);
    }
    if (*(long *)(param_1 + 0x658) != 0) {
      FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x658),
                   &DAT_0528cb30);
    }
    lVar3 = *(long *)(param_1 + 0x660);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x60);
      ppuVar9 = (undefined **)&DAT_0528cb40;
      goto LAB_0177c95c;
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x72d) != '\0' || *(char *)(param_1 + 0x99a) != '\0') goto LAB_0177a1ac;
    if (*(char *)(param_1 + 0x72c) == '\0') {
      lVar4 = *(long *)(param_1 + 0x60);
      lVar3 = *(long *)(param_1 + 0x648);
      if (((lVar3 != 0) || (lVar3 = *plVar17, lVar3 != 0)) ||
         (lVar3 = *(long *)(param_1 + 0x6a8), lVar3 != 0)) {
        FUN_039a9540(*(undefined8 *)(lVar4 + 0x1150),lVar3,&DAT_0528c9f0);
      }
      if (*(long *)(param_1 + 0x650) != 0) {
        FUN_039a9540(*(undefined8 *)(lVar4 + 0x1150),*(long *)(param_1 + 0x650),&DAT_0528ca30);
      }
      lVar3 = *(long *)(param_1 + 0x678);
      if ((lVar3 != 0) || (lVar3 = *(long *)(param_1 + 0x658), lVar3 != 0)) {
        FUN_039a9540(*(undefined8 *)(lVar4 + 0x1150),lVar3,&DAT_0528ca00);
      }
      lVar3 = *(long *)(param_1 + 0x680);
      if ((lVar3 != 0) || (lVar3 = *(long *)(param_1 + 0x660), lVar3 != 0)) {
        uVar12 = *(undefined8 *)(lVar4 + 0x1150);
        ppuVar9 = (undefined **)&DAT_0528ca10;
        goto LAB_0177c960;
      }
    }
    else {
      if (*(long *)(param_1 + 0x678) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177af38;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177af38;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177af38;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177af38:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        local_110 = puVar20 + 0x10;
        local_108 = &DAT_040da329;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177afc4;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177afc4;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177afc4;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177afc4:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_110 + 0x18))(&local_110);
        lVar3 = 0;
        do {
          if (local_108[lVar3] == '\0') goto LAB_0177b01c;
          if (local_108[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b01c;
          }
          if (local_108[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b01c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b01c:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                     *(undefined8 *)(param_1 + 0x678),&local_100);
      }
      if (*(long *)(param_1 + 0x680) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177b394;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177b394;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177b394;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177b394:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        local_110 = puVar20 + 0x10;
        local_108 = &DAT_0408c8c2;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177b420;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b420;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b420;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b420:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_110 + 0x18))(&local_110);
        lVar3 = 0;
        do {
          if (local_108[lVar3] == '\0') goto LAB_0177b478;
          if (local_108[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177b478;
          }
          if (local_108[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177b478;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177b478:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(pcVar18 + uVar11,local_108,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                     *(undefined8 *)(param_1 + 0x680),&local_100);
      }
      if (*(long *)(param_1 + 0x688) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177c288;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177c288;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177c288;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177c288:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177c304;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c304;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c304;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c304:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cc08 + lVar3) == '\0') goto LAB_0177c364;
          if (*(char *)((long)DAT_0528cc08 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c364;
          }
          if (*(char *)((long)DAT_0528cc08 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c364;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c364:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cc00 + 0x18))(&DAT_0528cc00);
          memcpy(pcVar18 + uVar11,DAT_0528cc08,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                     *(undefined8 *)(param_1 + 0x688),&local_100);
      }
      if (*(long *)(param_1 + 0x690) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177c468;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177c468;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177c468;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177c468:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177c4e4;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c4e4;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c4e4;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c4e4:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cc20 + 0x18))(&DAT_0528cc20);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cc28 + lVar3) == '\0') goto LAB_0177c544;
          if (*(char *)((long)DAT_0528cc28 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c544;
          }
          if (*(char *)((long)DAT_0528cc28 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c544;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c544:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cc20 + 0x18))(&DAT_0528cc20);
          memcpy(pcVar18 + uVar11,DAT_0528cc28,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                     *(undefined8 *)(param_1 + 0x690),&local_100);
      }
      if (*(long *)(param_1 + 0x698) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177c648;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177c648;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177c648;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177c648:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177c6c4;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c6c4;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c6c4;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c6c4:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cc30 + 0x18))(&DAT_0528cc30);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cc38 + lVar3) == '\0') goto LAB_0177c724;
          if (*(char *)((long)DAT_0528cc38 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c724;
          }
          if (*(char *)((long)DAT_0528cc38 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c724;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c724:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cc30 + 0x18))(&DAT_0528cc30);
          memcpy(pcVar18 + uVar11,DAT_0528cc38,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),
                     *(undefined8 *)(param_1 + 0x698),&local_100);
      }
      if (*(long *)(param_1 + 0x6a0) != 0) {
        local_6d = 0;
        local_ec[0] = '\0';
        local_f0 = 0x80;
        local_100 = PTR_DAT_04bb2d88 + 0x10;
        local_f8 = local_ec;
        (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
        pcVar18 = *(char **)(param_1 + 0x348);
        if (local_ec != pcVar18) {
          (**(code **)(*(long *)(param_1 + 0x340) + 0x18))(param_1 + 0x340);
          lVar3 = 0;
          do {
            if (*(char *)(*(long *)(param_1 + 0x348) + lVar3) == '\0') goto LAB_0177c828;
            lVar4 = *(long *)(param_1 + 0x348) + lVar3;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar3 = lVar3 + 1;
              goto LAB_0177c828;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar3 = lVar3 + 2;
              goto LAB_0177c828;
            }
            lVar3 = lVar3 + 3;
          } while (lVar3 != 0x80001);
          lVar3 = 0;
LAB_0177c828:
          iVar2 = (int)lVar3;
          if (local_f0 <= (int)lVar3) {
            iVar2 = local_f0 + -1;
          }
          memcpy(local_ec,pcVar18,(long)iVar2);
          local_ec[iVar2] = '\0';
        }
        pcVar18 = local_f8;
        (**(code **)(local_100 + 0x18))(&local_100);
        lVar3 = 0;
        do {
          if (local_f8[lVar3] == '\0') goto LAB_0177c8a4;
          if (local_f8[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c8a4;
          }
          if (local_f8[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c8a4;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c8a4:
        uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
        (**(code **)(DAT_0528cc40 + 0x18))(&DAT_0528cc40);
        lVar3 = 0;
        do {
          if (*(char *)((long)DAT_0528cc48 + lVar3) == '\0') goto LAB_0177c904;
          if (*(char *)((long)DAT_0528cc48 + lVar3 + 1) == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_0177c904;
          }
          if (*(char *)((long)DAT_0528cc48 + lVar3 + 2) == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_0177c904;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_0177c904:
        uVar1 = (uint)lVar3;
        if ((int)(local_f0 - uVar11) <= (int)(uint)lVar3) {
          uVar1 = local_f0 + ~uVar11;
        }
        if (0 < (int)uVar1) {
          (**(code **)(DAT_0528cc40 + 0x18))(&DAT_0528cc40);
          memcpy(pcVar18 + uVar11,DAT_0528cc48,(ulong)uVar1);
          pcVar18[(int)(uVar1 + uVar11)] = '\0';
        }
        lVar4 = *(long *)(param_1 + 0x60);
        ppuVar9 = &local_100;
        lVar3 = *(long *)(param_1 + 0x6a0);
        goto LAB_0177c95c;
      }
    }
    break;
  case 7:
    lVar4 = *(long *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x640) != 0) {
      FUN_039a9540(*(undefined8 *)(lVar4 + 0x1150),*(long *)(param_1 + 0x640),&DAT_0528cb80);
    }
    if (*(long *)(param_1 + 0x658) != 0) {
      FUN_039a9540(*(undefined8 *)(lVar4 + 0x1150),*(long *)(param_1 + 0x658),&DAT_0528cb90);
    }
    lVar3 = *(long *)(param_1 + 0x660);
    if (lVar3 == 0) break;
    uVar12 = *(undefined8 *)(lVar4 + 0x1150);
    ppuVar9 = (undefined **)&DAT_0528cba0;
    goto LAB_0177c960;
  case 8:
    if (**(char **)(param_1 + 0x478) != '\0') {
      if (*plVar17 != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*plVar17,&DAT_0528cb50);
      }
      if (*(long *)(param_1 + 0x658) != 0) {
        FUN_039a9540(*(undefined8 *)(*(long *)(param_1 + 0x60) + 0x1150),*(long *)(param_1 + 0x658),
                     &DAT_0528cb60);
      }
      lVar3 = *(long *)(param_1 + 0x660);
      if (lVar3 != 0) {
        lVar4 = *(long *)(param_1 + 0x60);
        ppuVar9 = (undefined **)&DAT_0528cb70;
        goto LAB_0177c95c;
      }
    }
    break;
  case 9:
    if (*(char *)(param_1 + 0x72d) == '\0' && *(char *)(param_1 + 0x99a) == '\0') {
      lVar3 = *(long *)(param_1 + 0x648);
      if (lVar3 == 0) {
        lVar4 = *(long *)(param_1 + 0x640);
        if (lVar4 == 0 && *(long *)(param_1 + 0x6a8) == 0) break;
        lVar3 = *(long *)(param_1 + 0x6a8);
        if (lVar4 != 0) {
          lVar3 = lVar4;
        }
      }
    }
    else {
      lVar3 = *(long *)(param_1 + 0x6a8);
      if (lVar3 == 0) break;
    }
    lVar4 = *(long *)(param_1 + 0x60);
    ppuVar9 = (undefined **)&DAT_0528c9f0;
    goto LAB_0177c95c;
  }
  goto switchD_01779dc0_default;
LAB_0177c1e8:
  lVar3 = lVar3 + 1;
  goto LAB_0177c1f4;
LAB_0177c1f0:
  lVar3 = lVar3 + 2;
LAB_0177c1f4:
  uVar11 = (uint)lVar3 & ((int)(uint)lVar3 >> 0x1f ^ 0xffffffffU);
  uVar1 = 4;
  if ((int)(local_f0 - uVar11) < 5) {
    uVar1 = local_f0 + ~uVar11;
  }
  if (0 < (int)uVar1) {
    memcpy(pcVar18 + uVar11,&DAT_0408c8c2,(ulong)uVar1);
    pcVar18[(ulong)uVar1 + (ulong)uVar11] = '\0';
  }
  if ((*(long *)(lVar4 + 8) != 0) && (lVar3 = *(long *)(*(long *)(lVar4 + 8) + 0x20), lVar3 != 0)) {
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar3 = FUN_038fe510(lVar3,local_f8);
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x60);
      ppuVar9 = (undefined **)&DAT_0528cae0;
LAB_0177c95c:
      uVar12 = *(undefined8 *)(lVar4 + 0x1150);
LAB_0177c960:
      FUN_039a9540(uVar12,lVar3,ppuVar9);
    }
  }
switchD_01779dc0_default:
  FUN_01777240(*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x60),
               *(undefined1 *)(param_1 + 0xb40),plVar17);
  if (1 < *(int *)(param_1 + 0x638) - 3U) {
    if (*(int *)(param_1 + 0x638) != 2) {
      return;
    }
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xe48);
    if (iVar2 == 1) {
      uVar12 = 1;
    }
    else {
      local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
      if ((iVar2 < 2) || (local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2), 5 < iVar2)) {
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
        if (5 < iVar2) {
          local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2);
          if (iVar2 < 0x11) {
            uVar12 = 3;
            goto LAB_0177cc3c;
          }
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
        if (0x10 < iVar2) {
          local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2);
          if (iVar2 < 0x13) {
            uVar12 = 4;
            goto LAB_0177cc3c;
          }
        }
        uVar8 = 6;
        if (iVar2 != 0x14) {
          uVar8 = 3;
        }
        uVar12 = 5;
        if (iVar2 != 0x13) {
          uVar12 = uVar8;
        }
      }
      else {
        uVar12 = 2;
      }
    }
LAB_0177cc3c:
    FUN_01777530(uVar12,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x60));
    return;
  }
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb5ce0 + 0xe48);
  if (iVar2 == 1) {
    uVar16 = 1;
  }
  else {
    local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
    if ((iVar2 < 2) || (local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2), 5 < iVar2)) {
      local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
      if (5 < iVar2) {
        local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2);
        if (iVar2 < 0x11) {
          uVar16 = 3;
          goto LAB_0177ca8c;
        }
      }
      local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar2);
      if (0x10 < iVar2) {
        local_110 = (undefined *)CONCAT44(local_110._4_4_,iVar2);
        if (iVar2 < 0x13) {
          uVar16 = 4;
          goto LAB_0177ca8c;
        }
      }
      uVar15 = 6;
      if (iVar2 != 0x14) {
        uVar15 = 3;
      }
      uVar16 = 5;
      if (iVar2 != 0x13) {
        uVar16 = uVar15;
      }
    }
    else {
      uVar16 = 2;
    }
  }
LAB_0177ca8c:
  lVar3 = *(long *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0xb40) == '\0') {
    lVar4 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),&DAT_0528c980);
    if (lVar4 == 0) {
      return;
    }
    if (*(long *)(lVar4 + 8) == 0) {
      return;
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0x20);
    if (lVar4 == 0) {
      return;
    }
    (**(code **)(DAT_0528ca70 + 0x18))(&DAT_0528ca70);
    lVar4 = FUN_038fe510(lVar4,DAT_0528ca78);
    if (lVar4 == 0) {
      return;
    }
    FUN_039a9540(*(undefined8 *)(lVar3 + 0x1150),lVar4,&DAT_0528ca70);
    FUN_039a9540(*(undefined8 *)(lVar3 + 0x1150),lVar4,&DAT_0528cac0);
    return;
  }
  local_ad = 0;
  local_f0 = 0x40;
  local_f8 = local_ec;
  local_ec[0] = '\0';
  local_100 = PTR_DAT_04bb2bc0 + 0x10;
  lVar4 = FUN_0074f690(*(undefined8 *)(param_1 + 0x78),&DAT_0528c980);
  pcVar18 = local_f8;
  switch(uVar16) {
  case 2:
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar5 = 0;
    do {
      if (local_f8[lVar5] == '\0') goto LAB_0177cd64;
      if (local_f8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177cd64;
      }
      if (local_f8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177cd64;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177cd64:
    plVar17 = &DAT_0528c9c0;
    uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9c0 + 0x18))(&DAT_0528c9c0);
    lVar5 = 0;
    do {
      if (*(char *)(DAT_0528c9c8 + lVar5) == '\0') goto LAB_0177ce18;
      if (*(char *)(DAT_0528c9c8 + lVar5 + 1) == '\0') goto LAB_0177ce0c;
      if (*(char *)(DAT_0528c9c8 + lVar5 + 2) == '\0') goto LAB_0177ce14;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 3:
  case 5:
  case 6:
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar5 = 0;
    do {
      if (local_f8[lVar5] == '\0') goto LAB_0177cd00;
      if (local_f8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177cd00;
      }
      if (local_f8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177cd00;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177cd00:
    plVar17 = &DAT_0528c9d0;
    uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9d0 + 0x18))(&DAT_0528c9d0);
    lVar5 = 0;
    do {
      if (*(char *)(DAT_0528c9d8 + lVar5) == '\0') goto LAB_0177ce18;
      if (*(char *)(DAT_0528c9d8 + lVar5 + 1) == '\0') goto LAB_0177ce0c;
      if (*(char *)(DAT_0528c9d8 + lVar5 + 2) == '\0') goto LAB_0177ce14;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  case 4:
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar5 = 0;
    do {
      if (local_f8[lVar5] == '\0') goto LAB_0177cdb8;
      if (local_f8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177cdb8;
      }
      if (local_f8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177cdb8;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177cdb8:
    plVar17 = &DAT_0528c9e0;
    uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528c9e0 + 0x18))(&DAT_0528c9e0);
    lVar5 = 0;
    do {
      if (*(char *)(DAT_0528c9e8 + lVar5) == '\0') goto LAB_0177ce18;
      if (*(char *)(DAT_0528c9e8 + lVar5 + 1) == '\0') goto LAB_0177ce0c;
      if (*(char *)(DAT_0528c9e8 + lVar5 + 2) == '\0') goto LAB_0177ce14;
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    break;
  default:
    goto switchD_0177caf4_default;
  }
  lVar5 = 0;
  goto LAB_0177ce18;
LAB_0177ce0c:
  lVar5 = lVar5 + 1;
  goto LAB_0177ce18;
LAB_0177ce14:
  lVar5 = lVar5 + 2;
LAB_0177ce18:
  uVar1 = (uint)lVar5;
  if ((int)(local_f0 - uVar11) <= (int)(uint)lVar5) {
    uVar1 = local_f0 + ~uVar11;
  }
  if (0 < (int)uVar1) {
    (**(code **)(*plVar17 + 0x18))(plVar17);
    memcpy(pcVar18 + uVar11,(void *)plVar17[1],(ulong)uVar1);
    pcVar18[(int)(uVar1 + uVar11)] = '\0';
  }
switchD_0177caf4_default:
  pcVar18 = local_f8;
  if (lVar4 != 0) {
    (**(code **)(local_100 + 0x18))(&local_100);
    lVar5 = 0;
    do {
      if (local_f8[lVar5] == '\0') goto LAB_0177cebc;
      if (local_f8[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177cebc;
      }
      if (local_f8[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177cebc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177cebc:
    uVar11 = (uint)lVar5 & ((int)(uint)lVar5 >> 0x1f ^ 0xffffffffU);
    (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
    lVar5 = 0;
    do {
      if (*(char *)((long)DAT_0528cc18 + lVar5) == '\0') goto LAB_0177cf1c;
      if (*(char *)((long)DAT_0528cc18 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0177cf1c;
      }
      if (*(char *)((long)DAT_0528cc18 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0177cf1c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0177cf1c:
    uVar1 = (uint)lVar5;
    if ((int)(local_f0 - uVar11) <= (int)(uint)lVar5) {
      uVar1 = local_f0 + ~uVar11;
    }
    if (0 < (int)uVar1) {
      (**(code **)(DAT_0528cc10 + 0x18))(&DAT_0528cc10);
      memcpy(pcVar18 + uVar11,DAT_0528cc18,(ulong)uVar1);
      pcVar18[(int)(uVar1 + uVar11)] = '\0';
    }
    if ((*(long *)(lVar4 + 8) != 0) && (lVar4 = *(long *)(*(long *)(lVar4 + 8) + 0x20), lVar4 != 0))
    {
      (**(code **)(local_100 + 0x18))(&local_100);
      lVar4 = FUN_038fe510(lVar4,local_f8);
      if (lVar4 != 0) {
        FUN_039a9540(*(undefined8 *)(lVar3 + 0x1150),lVar4,&DAT_0528ca70);
        FUN_039a9540(*(undefined8 *)(lVar3 + 0x1150),lVar4,&DAT_0528cac0);
      }
    }
  }
  return;
}

