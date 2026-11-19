
void FUN_03c2e260(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined *puVar9;
  char *__src;
  char *pcVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  int iVar22;
  long *plVar23;
  int iVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  float fVar28;
  undefined *local_2a0;
  char *local_298;
  undefined *local_290;
  char *local_288;
  int local_280;
  char local_27c [511];
  undefined1 local_7d;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x2400));
  puVar9 = PTR_DAT_04bb2020;
  lVar19 = 0;
  iVar24 = 0;
  lVar18 = param_1 + 0x348;
  lVar4 = param_1 + 0x1fb8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  do {
    lVar25 = lVar18 + (ulong)param_3 * 0x960;
    if (2 < param_3) {
      lVar25 = lVar18;
    }
    lVar25 = lVar25 + lVar19 * 0x18;
    for (lVar26 = *(long *)(lVar25 + 8); lVar26 != lVar25; lVar26 = *(long *)(lVar26 + 8)) {
      local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
      lVar13 = *(long *)(lVar26 + 0x10);
      lVar16 = lVar4 + (ulong)param_3 * 0x160;
      if (2 < param_3) {
        lVar16 = lVar4;
      }
      local_288 = *(char **)(lVar16 + 8);
      if (*local_288 == '\0') {
LAB_03c2e35c:
        local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
        lVar16 = lVar4 + (ulong)param_3 * 0x160;
        if (2 < param_3) {
          lVar16 = lVar4;
        }
        local_290 = puVar9 + 0x10;
        local_288 = *(char **)(lVar16 + 0x60);
        if (*local_288 != '\0') {
          uVar11 = FUN_03eb9680(lVar13 + 0x60,&local_290);
          if ((uVar11 & 1) != 0) goto LAB_03c2e30c;
          lVar13 = *(long *)(lVar26 + 0x10);
        }
        local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
        lVar15 = *(long *)(lVar13 + 0x50);
        lVar16 = lVar4 + (ulong)param_3 * 0x160;
        if (2 < param_3) {
          lVar16 = lVar4;
        }
        local_290 = puVar9 + 0x10;
        local_288 = *(char **)(lVar16 + 0xb8);
        if (*local_288 != '\0') {
          uVar11 = FUN_03eb9680(lVar15 + 0x20,&local_290);
          if ((uVar11 & 1) == 0) goto LAB_03c2e30c;
          lVar13 = *(long *)(lVar26 + 0x10);
          lVar15 = *(long *)(lVar13 + 0x50);
        }
        local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
        lVar16 = lVar4 + (ulong)param_3 * 0x160;
        if (2 < param_3) {
          lVar16 = lVar4;
        }
        local_290 = puVar9 + 0x10;
        local_288 = *(char **)(lVar16 + 0x110);
        if (*local_288 != '\0') {
          uVar11 = FUN_03eb9680(lVar15 + 0x20,&local_290);
          if ((uVar11 & 1) != 0) goto LAB_03c2e30c;
          lVar13 = *(long *)(lVar26 + 0x10);
        }
        iVar24 = *(int *)(*(long *)(lVar13 + 0x48) + 0x10) + iVar24;
      }
      else {
        local_290 = puVar1;
        uVar11 = FUN_03eb9680(lVar13 + 0x60,&local_290);
        if ((uVar11 & 1) != 0) {
          lVar13 = *(long *)(lVar26 + 0x10);
          goto LAB_03c2e35c;
        }
      }
LAB_03c2e30c:
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 100);
  uVar12 = nn::os::UnlockMutex((MutexType *)(param_1 + 0x2400));
  FUN_03c2de50((double)((float)iVar24 * 0.0009765625 * 0.0009765625),uVar12,param_2,&DAT_0408f024);
  plVar20 = (long *)(param_1 + 0x1f88);
  plVar21 = *(long **)(param_1 + 0x1f90);
  while (plVar21 != plVar20) {
    plVar23 = (long *)plVar21[1];
    plVar17 = plVar23;
    if (*plVar21 != 0) {
      *(long **)(*plVar21 + 8) = plVar23;
      plVar17 = (long *)plVar21[1];
    }
    if (plVar17 != (long *)0x0) {
      *plVar17 = *plVar21;
    }
    *plVar21 = 0;
    plVar21[1] = 0;
    *(int *)(param_1 + 0x1f98) = *(int *)(param_1 + 0x1f98) + -1;
    plVar21[-1] = *(long *)(param_1 + 0x1fa0);
    *(long **)(param_1 + 0x1fa0) = plVar21 + -1;
    plVar21 = plVar23;
  }
  lVar19 = 0;
  do {
    lVar25 = lVar18 + (ulong)param_3 * 0x960;
    if (2 < param_3) {
      lVar25 = lVar18;
    }
    lVar25 = lVar25 + lVar19 * 0x18;
    lVar26 = *(long *)(lVar25 + 8);
    if (lVar26 != lVar25) {
      if (*(int *)(param_1 + 0x1f98) < *(int *)(param_1 + 0x1fb0)) {
        do {
          if (*(int *)(param_1 + 0x1f98) < *(int *)(param_1 + 0x1fb0)) {
            local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
            lVar13 = *(long *)(lVar26 + 0x10);
            lVar16 = lVar4 + (ulong)param_3 * 0x160;
            if (2 < param_3) {
              lVar16 = lVar4;
            }
            local_288 = *(char **)(lVar16 + 8);
            if (*local_288 != '\0') {
              local_290 = puVar9 + 0x10;
              uVar11 = FUN_03eb9680(lVar13 + 0x60,&local_290);
              if ((uVar11 & 1) == 0) goto LAB_03c2e4f0;
              lVar13 = *(long *)(lVar26 + 0x10);
            }
            local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
            lVar16 = lVar4 + (ulong)param_3 * 0x160;
            if (2 < param_3) {
              lVar16 = lVar4;
            }
            local_290 = puVar9 + 0x10;
            local_288 = *(char **)(lVar16 + 0x60);
            if (*local_288 != '\0') {
              uVar11 = FUN_03eb9680(lVar13 + 0x60,&local_290);
              if ((uVar11 & 1) != 0) goto LAB_03c2e4f0;
              lVar13 = *(long *)(lVar26 + 0x10);
            }
            local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
            lVar13 = *(long *)(lVar13 + 0x50);
            lVar16 = lVar4 + (ulong)param_3 * 0x160;
            if (2 < param_3) {
              lVar16 = lVar4;
            }
            local_290 = puVar9 + 0x10;
            local_288 = *(char **)(lVar16 + 0xb8);
            if (*local_288 != '\0') {
              uVar11 = FUN_03eb9680(lVar13 + 0x20,&local_290);
              if ((uVar11 & 1) == 0) goto LAB_03c2e4f0;
              lVar13 = *(long *)(*(long *)(lVar26 + 0x10) + 0x50);
            }
            local_2a0 = (undefined *)CONCAT44(local_2a0._4_4_,param_3);
            lVar16 = lVar4 + (ulong)param_3 * 0x160;
            if (2 < param_3) {
              lVar16 = lVar4;
            }
            local_290 = puVar9 + 0x10;
            local_288 = *(char **)(lVar16 + 0x110);
            if ((*local_288 == '\0') ||
               (uVar11 = FUN_03eb9680(lVar13 + 0x20,&local_290), (uVar11 & 1) == 0)) {
              puVar14 = *(undefined8 **)(param_1 + 0x1fa0);
              if (puVar14 != (undefined8 *)0x0) {
                *(undefined8 *)(param_1 + 0x1fa0) = *puVar14;
              }
              puVar14[2] = 0;
              *puVar14 = 0;
              plVar21 = puVar14 + 1;
              *plVar21 = 0;
              lVar16 = *plVar20;
              *plVar20 = (long)plVar21;
              puVar14[2] = plVar20;
              *plVar21 = lVar16;
              if (lVar16 != 0) {
                *(long **)(lVar16 + 8) = plVar21;
              }
              *(int *)(param_1 + 0x1f98) = *(int *)(param_1 + 0x1f98) + 1;
              *puVar14 = *(undefined8 *)(lVar26 + 0x10);
            }
          }
LAB_03c2e4f0:
          lVar26 = *(long *)(lVar26 + 8);
        } while (lVar26 != lVar25);
      }
      else {
        do {
          lVar26 = *(long *)(lVar26 + 8);
        } while (lVar26 != lVar25);
      }
    }
    lVar19 = lVar19 + 1;
  } while (lVar19 != 100);
  local_290 = &LAB_03c2eca0;
  FUN_03c2f4c0(*(undefined8 *)(param_1 + 0x1f90),*(undefined8 *)(param_1 + 0x1f88),
               *(undefined4 *)(param_1 + 0x1f98),&local_290);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar18 = 0;
  do {
    if (*(char *)(param_2[1] + lVar18) == '\0') goto LAB_03c2e71c;
    lVar19 = param_2[1] + lVar18;
    if (*(char *)(lVar19 + 1) == '\0') {
      lVar18 = lVar18 + 1;
      goto LAB_03c2e71c;
    }
    if (*(char *)(lVar19 + 2) == '\0') {
      lVar18 = lVar18 + 2;
      goto LAB_03c2e71c;
    }
    lVar18 = lVar18 + 3;
  } while (lVar18 != 0x80001);
  lVar18 = 0;
LAB_03c2e71c:
  plVar21 = *(long **)(param_1 + 0x1f90);
  iVar24 = (int)lVar18;
  if (plVar21 == plVar20) {
    lVar18 = 0;
  }
  else {
    iVar22 = 0;
    plVar20 = plVar21 + -1;
    puVar2 = PTR_DAT_04bb2d90 + 0x10;
    do {
      local_7d = 0;
      local_280 = 0x200;
      local_27c[0] = '\0';
      lVar18 = plVar21[-1];
      fVar28 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(lVar18 + 0x48) + 0x10));
      local_290 = puVar2;
      local_288 = local_27c;
      (**(code **)(*(long *)(lVar18 + 0x60) + 0x18))((long *)(lVar18 + 0x60));
      FUN_038d1270((double)(fVar28 * 0.0009765625 * 0.0009765625),&local_290,"%7.2f  %s",
                   *(undefined8 *)(lVar18 + 0x68));
      if (param_3 != 2) {
        lVar18 = *(long *)(*plVar20 + 0x50);
        plVar23 = (long *)(lVar18 + 0x20);
        (**(code **)(*plVar23 + 0x18))(plVar23);
        FUN_038d13f0(&local_290," (Heap:%s)",*(undefined8 *)(lVar18 + 0x28));
        pcVar10 = local_288;
        if ((param_3 == 0) && (*(char *)(*plVar20 + 0x191) != '\0')) {
          local_2a0 = puVar9 + 0x10;
          local_298 = " [DecompIfExist]";
          (**(code **)(local_290 + 0x18))(&local_290);
          lVar18 = 0;
          do {
            if (local_288[lVar18] == '\0') goto LAB_03c2eb98;
            if (local_288[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_03c2eb98;
            }
            if (local_288[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_03c2eb98;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_03c2eb98:
          uVar5 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
          (**(code **)(local_2a0 + 0x18))(&local_2a0);
          lVar18 = 0;
          do {
            if (local_298[lVar18] == '\0') goto LAB_03c2ebf0;
            if (local_298[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_03c2ebf0;
            }
            if (local_298[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_03c2ebf0;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_03c2ebf0:
          uVar7 = (uint)lVar18;
          if ((int)(local_280 - uVar5) <= (int)(uint)lVar18) {
            uVar7 = local_280 + ~uVar5;
          }
          if (0 < (int)uVar7) {
            (**(code **)(local_2a0 + 0x18))(&local_2a0);
            memcpy(pcVar10 + uVar5,local_298,(ulong)uVar7);
            pcVar10[(int)(uVar7 + uVar5)] = '\0';
          }
        }
      }
      pcVar10 = local_288;
      local_298 = "\n";
      local_2a0 = puVar9 + 0x10;
      (**(code **)(local_290 + 0x18))(&local_290);
      lVar18 = 0;
      do {
        if (local_288[lVar18] == '\0') goto LAB_03c2e884;
        if (local_288[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03c2e884;
        }
        if (local_288[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03c2e884;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03c2e884:
      uVar5 = (uint)lVar18 & ((int)(uint)lVar18 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_2a0 + 0x18))(&local_2a0);
      lVar18 = 0;
      do {
        if (local_298[lVar18] == '\0') goto LAB_03c2e8e4;
        if (local_298[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03c2e8e4;
        }
        if (local_298[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03c2e8e4;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03c2e8e4:
      uVar7 = (uint)lVar18;
      if ((int)(local_280 - uVar5) <= (int)(uint)lVar18) {
        uVar7 = local_280 + ~uVar5;
      }
      if (0 < (int)uVar7) {
        (**(code **)(local_2a0 + 0x18))(&local_2a0);
        memcpy(pcVar10 + uVar5,local_298,(ulong)uVar7);
        pcVar10[(int)(uVar7 + uVar5)] = '\0';
      }
      (**(code **)(local_290 + 0x18))(&local_290);
      lVar18 = 0;
      do {
        if (local_288[lVar18] == '\0') goto LAB_03c2e994;
        if (local_288[lVar18 + 1] == '\0') {
          lVar18 = lVar18 + 1;
          goto LAB_03c2e994;
        }
        if (local_288[lVar18 + 2] == '\0') {
          lVar18 = lVar18 + 2;
          goto LAB_03c2e994;
        }
        lVar18 = lVar18 + 3;
      } while (lVar18 != 0x80001);
      lVar18 = 0;
LAB_03c2e994:
      iVar27 = (int)lVar18;
      iVar3 = iVar22 + iVar24 + iVar27;
      iVar8 = 0x40000 - DAT_05aed568;
      if (iVar8 < iVar3) {
        (**(code **)(DAT_05aed558 + 0x18))(&DAT_05aed558);
        pcVar10 = local_288;
        lVar18 = 0;
        do {
          if (DAT_05aed560[lVar18] == '\0') goto LAB_03c2ea7c;
          if (DAT_05aed560[lVar18 + 1] == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_03c2ea7c;
          }
          if (DAT_05aed560[lVar18 + 2] == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_03c2ea7c;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_03c2ea7c:
        iVar27 = (int)lVar18;
        (**(code **)(DAT_05aed558 + 0x18))(&DAT_05aed558);
        __src = DAT_05aed560;
        if (pcVar10 != DAT_05aed560) {
          (**(code **)(DAT_05aed558 + 0x18))(&DAT_05aed558);
          lVar18 = 0;
          do {
            if (DAT_05aed560[lVar18] == '\0') goto LAB_03c2eafc;
            if (DAT_05aed560[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_03c2eafc;
            }
            if (DAT_05aed560[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_03c2eafc;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_03c2eafc:
          iVar6 = (int)lVar18;
          if (local_280 <= (int)lVar18) {
            iVar6 = local_280 + -1;
          }
          memcpy(pcVar10,__src,(long)iVar6);
          pcVar10[iVar6] = '\0';
        }
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar18 = param_2[1];
      (**(code **)(local_290 + 0x18))(&local_290);
      memcpy((void *)(lVar18 + iVar24 + (long)iVar22),local_288,(long)iVar27);
      iVar22 = iVar27 + iVar22;
      if (iVar8 < iVar3) break;
      plVar21 = (long *)plVar21[1];
      plVar20 = plVar21 + -1;
    } while (plVar20 != (long *)(param_1 + 0x1f80));
    lVar18 = (long)iVar22;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  *(undefined1 *)(param_2[1] + (long)iVar24 + lVar18) = 0;
  return;
}

