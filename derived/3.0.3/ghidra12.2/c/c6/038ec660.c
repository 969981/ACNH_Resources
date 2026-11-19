
/* WARNING: Removing unreachable block (ram,0x038ecf70) */

void FUN_038ec660(long param_1,long param_2,long *param_3,ulong param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  long *plVar12;
  void *pvVar13;
  long *plVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined1 *puVar21;
  long *plVar22;
  undefined8 *local_968;
  byte local_95c [4];
  undefined *local_958;
  undefined1 *local_950;
  uint local_948;
  undefined1 local_944 [127];
  undefined1 local_8c5;
  undefined *local_8c0;
  undefined1 *local_8b8;
  uint local_8b0;
  undefined1 local_8ac [7];
  undefined1 local_8a5;
  undefined *local_8a0;
  undefined1 *puStack_898;
  undefined4 local_890;
  undefined1 local_88c [1023];
  undefined1 local_48d;
  undefined *local_488;
  undefined1 *local_480;
  undefined4 local_478;
  undefined1 local_474 [1023];
  undefined1 local_75;
  byte local_6c [12];
  
  if (*(long *)(param_1 + 8) != 0) {
    FUN_038f0e50();
    *(undefined8 *)(param_1 + 8) = 0;
  }
  puVar5 = PTR_PTR_04c4b9a0;
  *(undefined ***)(param_2 + 8) = &PTR_PTR_04c4b9a0;
  (**(code **)(puVar5 + 0xe0))(&PTR_PTR_04c4b9a0,*(undefined8 *)(param_2 + 0x10));
  puVar7 = PTR_DAT_04bb3768;
  puVar6 = PTR_DAT_04bb2d88;
  puVar5 = PTR_DAT_04bb2698;
  if ((param_4 & 1) != 0) {
    local_8b0 = 8;
    local_8b8 = local_8ac;
    local_8a5 = 0;
    local_8ac[0] = 0;
    local_8c5 = 0;
    local_8c0 = PTR_DAT_04bb3768 + 0x10;
    local_944[0] = 0;
    local_950 = local_944;
    local_948 = 0x80;
    local_6c[0] = 0;
    local_958 = PTR_DAT_04bb2d88 + 0x10;
    local_95c[0] = 0;
    iVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                      (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_95c,1);
    if (iVar9 == 0) {
      return;
    }
    FUN_038eaaf0(param_1,param_3);
    FUN_038eaea0(param_1,local_95c[0],param_3);
    if (local_95c[0] != 0) {
      plVar12 = (long *)(param_1 + 0x30);
      uVar17 = 0;
LAB_038ec884:
      iVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                        (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_6c,1);
      if (iVar9 == 0) {
        return;
      }
      (**(code **)(local_8c0 + 0x18))(&local_8c0);
      uVar10 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                         (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_8b8,
                          local_6c[0]);
      if (uVar10 < local_6c[0]) {
        return;
      }
      if (local_8b0 == local_6c[0] || (int)local_8b0 < (int)(uint)local_6c[0]) {
        (**(code **)(local_8c0 + 0x18))(&local_8c0);
      }
      else {
        local_8b8[(uint)local_6c[0]] = 0;
      }
      iVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                        (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_6c,1);
      if (iVar9 == 0) {
        return;
      }
      (**(code **)(local_958 + 0x18))(&local_958);
      uVar10 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                         (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),local_950,
                          local_6c[0]);
      if (uVar10 < local_6c[0]) {
        return;
      }
      if (local_948 == local_6c[0] || (int)local_948 < (int)(uint)local_6c[0]) {
        (**(code **)(local_958 + 0x18))(&local_958);
      }
      else {
        local_950[(uint)local_6c[0]] = 0;
      }
      iVar9 = *(int *)(param_1 + 0x40);
      iVar15 = *(int *)(param_1 + 0x58);
      if (iVar9 < iVar15) {
        lVar20 = *(long *)(param_1 + 0x38);
        lVar18 = lVar20 + -0xb8;
        if (lVar18 != param_1 + -0x88) {
          do {
            (**(code **)(*(long *)(lVar20 + -0xb8) + 0x18))(lVar18);
            (**(code **)(*(long *)(lVar20 + -0xb8) + 0x18))(lVar18);
            puVar21 = *(undefined1 **)(lVar18 + 8);
            (**(code **)(local_8c0 + 0x18))(&local_8c0);
            if (puVar21 == local_8b8) {
LAB_038eca70:
              puVar21 = *(undefined1 **)(lVar18 + 0x28);
              (**(code **)(local_958 + 0x18))(&local_958);
              puVar19 = local_950;
              if (puVar21 == local_950) goto LAB_038ec870;
              (**(code **)(local_958 + 0x18))(&local_958);
              lVar20 = 0;
              goto LAB_038ecab0;
            }
            uVar16 = 0;
            bVar8 = true;
            lVar1 = *(long *)(lVar18 + 8) + 1;
            do {
              lVar3 = lVar1 + uVar16;
              cVar4 = *(char *)(lVar3 + -1);
              if (cVar4 != local_8b8[uVar16]) break;
              if (cVar4 == '\0') {
                if (bVar8) goto LAB_038eca70;
                break;
              }
              cVar4 = *(char *)(lVar1 + uVar16);
              if (cVar4 != local_8b8[uVar16 + 1]) break;
              if (cVar4 == '\0') goto LAB_038eca70;
              cVar4 = *(char *)(lVar3 + 1);
              if (cVar4 != local_8b8[uVar16 + 2]) break;
              if (cVar4 == '\0') goto LAB_038eca70;
              bVar8 = uVar16 < 0x7fffe;
              uVar16 = uVar16 + 3;
            } while (uVar16 != 0x80001);
            lVar20 = *(long *)(lVar20 + 8);
            lVar18 = lVar20 + -0xb8;
          } while (lVar18 != param_1 + -0x88);
          iVar9 = *(int *)(param_1 + 0x40);
          iVar15 = *(int *)(param_1 + 0x58);
        }
        if (iVar9 < iVar15) {
          plVar22 = *(long **)(param_1 + 0x48);
          if (plVar22 != (long *)0x0) {
            *(long *)(param_1 + 0x48) = *plVar22;
          }
          *(undefined1 *)((long)plVar22 + 0x1b) = 0;
          *(undefined1 *)((long)plVar22 + 0x14) = 0;
          *(undefined4 *)(plVar22 + 2) = 8;
          *(undefined1 *)((long)plVar22 + 0x34) = 0;
          plVar22[1] = (long)plVar22 + 0x14;
          plVar22[5] = (long)plVar22 + 0x34;
          *(undefined4 *)(plVar22 + 6) = 0x80;
          *plVar22 = (long)(puVar7 + 0x10);
          *(undefined1 *)((long)plVar22 + 0xb3) = 0;
          plVar14 = plVar22 + 0x17;
          *plVar14 = 0;
          plVar22[4] = (long)(puVar6 + 0x10);
          plVar22[0x18] = 0;
          lVar18 = *plVar12;
          *plVar12 = (long)plVar14;
          plVar22[0x18] = (long)plVar12;
          *plVar14 = lVar18;
          if (lVar18 != 0) {
            *(long **)(lVar18 + 8) = plVar14;
          }
          *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
        }
        else {
          plVar22 = (long *)0x0;
        }
        puVar19 = (undefined1 *)plVar22[1];
        (**(code **)(local_8c0 + 0x18))(&local_8c0);
        puVar21 = local_8b8;
        if (puVar19 != local_8b8) {
          (**(code **)(local_8c0 + 0x18))(&local_8c0);
          lVar18 = 0;
          do {
            if (local_8b8[lVar18] == '\0') goto LAB_038ecc00;
            if (local_8b8[lVar18 + 1] == '\0') {
              lVar18 = lVar18 + 1;
              goto LAB_038ecc00;
            }
            if (local_8b8[lVar18 + 2] == '\0') {
              lVar18 = lVar18 + 2;
              goto LAB_038ecc00;
            }
            lVar18 = lVar18 + 3;
          } while (lVar18 != 0x80001);
          lVar18 = 0;
LAB_038ecc00:
          iVar9 = (int)lVar18;
          if ((int)plVar22[2] <= (int)lVar18) {
            iVar9 = (int)plVar22[2] + -1;
          }
          memcpy(puVar19,puVar21,(long)iVar9);
          puVar19[iVar9] = 0;
        }
        puVar21 = (undefined1 *)plVar22[5];
        (**(code **)(local_958 + 0x18))(&local_958);
        puVar19 = local_950;
        if (puVar21 == local_950) goto LAB_038ec870;
        (**(code **)(local_958 + 0x18))(&local_958);
        lVar18 = 0;
        do {
          if (local_950[lVar18] == '\0') goto LAB_038ecc9c;
          if (local_950[lVar18 + 1] == '\0') {
            lVar18 = lVar18 + 1;
            goto LAB_038ecc9c;
          }
          if (local_950[lVar18 + 2] == '\0') {
            lVar18 = lVar18 + 2;
            goto LAB_038ecc9c;
          }
          lVar18 = lVar18 + 3;
        } while (lVar18 != 0x80001);
        lVar18 = 0;
LAB_038ecc9c:
        iVar9 = (int)lVar18;
        if ((int)plVar22[6] <= (int)lVar18) {
          iVar9 = (int)plVar22[6] + -1;
        }
        memcpy(puVar21,puVar19,(long)iVar9);
        puVar21 = puVar21 + iVar9;
        goto LAB_038ec86c;
      }
      goto LAB_038ec870;
    }
LAB_038eccc8:
    lVar18 = *(long *)PTR_DAT_04bb2698;
    if (lVar18 == 0) {
      plVar12 = malloc(0xd0);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar18 + 8);
        if (lVar20 != 0) {
          plVar12 = (long *)(lVar20 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
          goto LAB_038ecd38;
        }
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd0,8);
    }
LAB_038ecd38:
    plVar12[4] = 0;
    puVar5 = PTR_DAT_04bd0f48;
    puVar2 = (undefined8 *)((long)plVar12 + 0x3c);
    plVar12[6] = (long)puVar2;
    plVar12[2] = 0;
    plVar12[3] = 0;
    *(undefined4 *)(plVar12 + 7) = 0x40;
    *(undefined1 *)((long)plVar12 + 0x7b) = 0;
    *plVar12 = (long)(puVar5 + 0x10);
    plVar12[1] = 0;
    if (puVar2 != &DAT_0407ebb1) {
      *(undefined1 *)puVar2 = 0;
    }
    plVar12[0x10] = 0;
    puVar5 = PTR_DAT_04bb2bc0;
    *(undefined4 *)(plVar12 + 0x11) = 0;
    *(undefined1 *)((long)plVar12 + 0x8c) = 0;
    puStack_898 = local_88c;
    *(undefined4 *)(plVar12 + 0x12) = 0;
    *(undefined4 *)(plVar12 + 0x15) = 0;
    plVar12[0x13] = (long)(plVar12 + 0x13);
    plVar12[0x14] = (long)(plVar12 + 0x13);
    plVar12[5] = (long)(puVar5 + 0x10);
    local_480 = local_474;
    *(undefined4 *)(plVar12 + 0x18) = 0;
    plVar12[0x19] = 0;
    local_474[0] = 0;
    local_478 = 0x400;
    plVar12[0x16] = 0;
    plVar12[0x17] = 0;
    local_75 = 0;
    local_8a0 = PTR_DAT_04bb2f40 + 0x10;
    local_890 = 0x400;
    local_48d = 0;
    local_88c[0] = 0;
    local_488 = local_8a0;
    FUN_038f0aa0(plVar12,param_2,param_3,&local_488,&local_8a0);
    *(long **)(param_1 + 8) = plVar12;
    return;
  }
  uVar16 = (ulong)*(uint *)(param_1 + 0x28);
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    pvVar13 = malloc(uVar16);
    *(void **)(param_1 + 0x10) = pvVar13;
LAB_038ec81c:
    pvVar13 = malloc(uVar16);
    *(void **)(param_1 + 0x18) = pvVar13;
LAB_038ec834:
    pvVar13 = malloc(uVar16);
  }
  else {
    plVar12 = param_3;
    if (param_3 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar20 != 0) {
        plVar12 = (long *)(lVar20 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) goto LAB_038ec7d8;
      lVar18 = *(long *)puVar5;
      *(undefined8 *)(param_1 + 0x10) = 0;
      uVar16 = (ulong)*(uint *)(param_1 + 0x28);
      if (lVar18 == 0) goto LAB_038ec81c;
LAB_038ece28:
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar20 != 0) {
        plVar12 = (long *)(lVar20 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) goto LAB_038ece54;
      lVar18 = *(long *)puVar5;
      *(undefined8 *)(param_1 + 0x18) = 0;
      uVar16 = (ulong)*(uint *)(param_1 + 0x28);
      if (lVar18 == 0) goto LAB_038ec834;
LAB_038ecea4:
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar18 + 8);
      if (lVar20 != 0) {
        plVar12 = (long *)(lVar20 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      pvVar13 = (void *)0x0;
      if (plVar12 == (long *)0x0) goto LAB_038ecee4;
    }
    else {
LAB_038ec7d8:
      uVar11 = (**(code **)(*plVar12 + 0x30))(plVar12,uVar16,0xfffffff8);
      lVar18 = *(long *)puVar5;
      *(undefined8 *)(param_1 + 0x10) = uVar11;
      uVar16 = (ulong)*(uint *)(param_1 + 0x28);
      if (lVar18 == 0) goto LAB_038ec81c;
      if (param_3 == (long *)0x0) goto LAB_038ece28;
      plVar12 = param_3;
LAB_038ece54:
      uVar11 = (**(code **)(*plVar12 + 0x30))(plVar12,uVar16,0xfffffff8);
      lVar18 = *(long *)puVar5;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
      uVar16 = (ulong)*(uint *)(param_1 + 0x28);
      if (lVar18 == 0) goto LAB_038ec834;
      if (param_3 == (long *)0x0) goto LAB_038ecea4;
      plVar12 = param_3;
    }
    pvVar13 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar16,0xfffffff8);
  }
LAB_038ecee4:
  local_968 = (undefined8 *)(param_1 + 0x18);
  *(void **)(param_1 + 0x20) = pvVar13;
  FUN_038eaaf0(param_1,param_3);
  local_958 = (undefined *)((ulong)local_958 & 0xffffffffffffff00);
  iVar9 = (**(code **)(**(long **)(param_2 + 8) + 0x58))
                    (*(long **)(param_2 + 8),*(undefined8 *)(param_2 + 0x10),&local_958,1);
  if (iVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x038ecfb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_038ecf60 + (ulong)DAT_041b2450 * 4))();
    return;
  }
  pvVar13 = *(void **)(param_1 + 0x10);
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar13);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar5,pvVar13);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar13);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  pvVar13 = (void *)*local_968;
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar13);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar5,pvVar13);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar13);
      }
    }
  }
  pvVar13 = *(void **)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = 0;
  if (pvVar13 != (void *)0x0) {
    if (*(long *)puVar5 == 0) {
      free(pvVar13);
    }
    else {
      plVar12 = (long *)FUN_038cb610(*(long *)puVar5,pvVar13);
      if (plVar12 != (long *)0x0) {
        (**(code **)(*plVar12 + 0x38))(plVar12,pvVar13);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
  while( true ) {
    if (local_950[lVar20 + 1] == '\0') {
      lVar20 = lVar20 + 1;
      goto LAB_038ec844;
    }
    if (local_950[lVar20 + 2] == '\0') {
      lVar20 = lVar20 + 2;
      goto LAB_038ec844;
    }
    lVar20 = lVar20 + 3;
    if (lVar20 == 0x80001) break;
LAB_038ecab0:
    if (local_950[lVar20] == '\0') goto LAB_038ec844;
  }
  lVar20 = 0;
LAB_038ec844:
  iVar9 = (int)lVar20;
  if (*(int *)(lVar18 + 0x30) <= (int)lVar20) {
    iVar9 = *(int *)(lVar18 + 0x30) + -1;
  }
  memcpy(puVar21,puVar19,(long)iVar9);
  puVar21 = puVar21 + iVar9;
LAB_038ec86c:
  *puVar21 = 0;
LAB_038ec870:
  uVar17 = uVar17 + 1;
  if (local_95c[0] <= uVar17) goto LAB_038eccc8;
  goto LAB_038ec884;
}

