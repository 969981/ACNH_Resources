
void FUN_0173ac60(long *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined2 *puVar18;
  undefined *puVar19;
  uint *puVar20;
  void *pvVar21;
  char *pcVar22;
  void *pvVar23;
  uint *puVar24;
  long lVar25;
  undefined *local_f0;
  char *local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_75;
  uint local_6c;
  undefined4 local_68;
  undefined4 local_64;
  
  FUN_0173a0dc();
  if ((*(uint *)((long)param_1 + 0x15c) < 0xec) &&
     ((int *)(&DAT_04c969c8)[*(uint *)((long)param_1 + 0x15c)] != (int *)0x0)) {
    plVar14 = (long *)(PTR_DAT_04bb3840 +
                      (long)*(int *)(&DAT_04c969c8)[*(uint *)((long)param_1 + 0x15c)] * 0x10);
  }
  else {
    plVar14 = (long *)PTR_PTR_04bb2238;
  }
  pvVar21 = (void *)param_1[0x69];
  plVar1 = param_1 + 0x68;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar23 = (void *)plVar14[1];
  if (pvVar21 != pvVar23) {
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar17 = 0;
    do {
      if (*(char *)(plVar14[1] + lVar17) == '\0') goto LAB_0173ad4c;
      lVar25 = plVar14[1] + lVar17;
      if (*(char *)(lVar25 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0173ad4c;
      }
      if (*(char *)(lVar25 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0173ad4c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0173ad4c:
    iVar13 = (int)lVar17;
    if ((int)param_1[0x6a] <= (int)lVar17) {
      iVar13 = (int)param_1[0x6a] + -1;
    }
    memcpy(pvVar21,pvVar23,(long)iVar13);
    *(undefined1 *)((long)pvVar21 + (long)iVar13) = 0;
  }
  plVar14 = param_1 + 0x5d;
  pvVar21 = (void *)param_1[0x5e];
  (**(code **)(param_1[0x68] + 0x18))(plVar1);
  pvVar23 = (void *)param_1[0x69];
  if (pvVar21 != pvVar23) {
    (**(code **)(param_1[0x68] + 0x18))(plVar1);
    lVar17 = 0;
    do {
      if (*(char *)(param_1[0x69] + lVar17) == '\0') goto LAB_0173adec;
      lVar25 = param_1[0x69] + lVar17;
      if (*(char *)(lVar25 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0173adec;
      }
      if (*(char *)(lVar25 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0173adec;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0173adec:
    iVar13 = (int)lVar17;
    if ((int)param_1[0x5f] <= (int)lVar17) {
      iVar13 = (int)param_1[0x5f] + -1;
    }
    memcpy(pvVar21,pvVar23,(long)iVar13);
    *(undefined1 *)((long)pvVar21 + (long)iVar13) = 0;
  }
  pvVar21 = (void *)param_1[0x53];
  (**(code **)(param_1[0x5d] + 0x18))(plVar14);
  pvVar23 = (void *)param_1[0x5e];
  if (pvVar21 != pvVar23) {
    (**(code **)(param_1[0x5d] + 0x18))(plVar14);
    lVar17 = 0;
    do {
      if (*(char *)(param_1[0x5e] + lVar17) == '\0') goto LAB_0173ae8c;
      lVar25 = param_1[0x5e] + lVar17;
      if (*(char *)(lVar25 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0173ae8c;
      }
      if (*(char *)(lVar25 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0173ae8c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0173ae8c:
    iVar13 = (int)lVar17;
    if ((int)param_1[0x54] <= (int)lVar17) {
      iVar13 = (int)param_1[0x54] + -1;
    }
    memcpy(pvVar21,pvVar23,(long)iVar13);
    *(undefined1 *)((long)pvVar21 + (long)iVar13) = 0;
  }
  puVar19 = PTR_DAT_04bb43c0;
  puVar3 = (undefined4 *)PTR_DAT_04bb37e0;
  if ((undefined4 *)param_1[0x45] != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)param_1[0x45];
  }
  local_68 = *puVar3;
  local_64 = puVar3[1];
  lVar25 = *(long *)PTR_DAT_04bb43c0;
  uVar12 = FUN_0277d6c4(&local_68);
  puVar8 = PTR_DAT_04bc0510;
  puVar7 = PTR_DAT_04bb2f90;
  lVar17 = *(long *)puVar19;
  if (lVar17 == 0) {
LAB_0173afe4:
    uVar5 = *(undefined4 *)(PTR_DAT_04bb2f90 + 0x31);
    local_b0 = *(undefined2 *)(PTR_DAT_04bb2f90 + 0x35);
    local_c8 = PTR_DAT_04bb2bc0 + 0x10;
LAB_0173b010:
    local_b8 = (uint *)CONCAT44(uVar5,0x40);
    local_c0 = (undefined *)((long)&local_b8 + 4);
    local_75 = 0;
    local_ae = 0;
    uVar15 = (**(code **)(*param_1 + 0x100))(param_1);
    puVar2 = local_c0;
    if (((uVar15 & 1) != 0) && (local_c0 != puVar7 + 0x43)) {
      iVar13 = 6;
      if ((int)local_b8 < 7) {
        iVar13 = (int)local_b8 + -1;
      }
      memcpy(local_c0,puVar7 + 0x43,(long)iVar13);
      puVar18 = (undefined2 *)(puVar2 + iVar13);
      goto LAB_0173b3a8;
    }
  }
  else {
    lVar25 = *(long *)(lVar25 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
    if ((*(uint *)(lVar25 + 0x1d8) <= uVar12) ||
       (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0173afe4;
    local_c8 = PTR_DAT_04bc0510 + 0x10;
    local_b8 = (uint *)0x0;
    local_c0 = (undefined *)CONCAT44(local_64,local_68);
    uVar12 = FUN_0277d6c4(&local_c0);
    if (*(long *)puVar19 == 0) {
LAB_0173b060:
      puVar24 = (uint *)0x0;
    }
    else {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) == 0)) goto LAB_0173b060;
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_68);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (*(uint *)(lVar17 + 0x1d8) <= uVar12) goto LAB_0173b060;
      puVar24 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8);
      if (puVar24 != (uint *)0x0) {
        local_b8 = puVar24;
      }
    }
    iVar13 = FUN_01ad78cc(&local_c8);
    local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar13);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar13);
    if ((*(int *)((long)param_1 + 0x15c) == 0x9b) || (*(int *)((long)param_1 + 0x15c) == 0x97)) {
      if (iVar13 == 0x24) {
        FUN_038d1270(plVar14,"HumanPartsTool%s",PTR_DAT_04bb4678 + 0x13d);
        pvVar21 = (void *)param_1[0x69];
        (**(code **)(param_1[0x5d] + 0x18))(plVar14);
        pvVar23 = (void *)param_1[0x5e];
        if (pvVar21 != pvVar23) {
          (**(code **)(param_1[0x5d] + 0x18))(plVar14);
          lVar17 = 0;
          do {
            if (*(char *)(param_1[0x5e] + lVar17) == '\0') goto LAB_0173b250;
            lVar25 = param_1[0x5e] + lVar17;
            if (*(char *)(lVar25 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0173b250;
            }
            if (*(char *)(lVar25 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0173b250;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0173b250:
          iVar13 = (int)lVar17;
          if ((int)param_1[0x6a] <= (int)lVar17) {
            iVar13 = (int)param_1[0x6a] + -1;
          }
          memcpy(pvVar21,pvVar23,(long)iVar13);
          *(undefined1 *)((long)pvVar21 + (long)iVar13) = 0;
        }
        pvVar21 = (void *)param_1[0x53];
        (**(code **)(param_1[0x68] + 0x18))(plVar1);
        pvVar23 = (void *)param_1[0x69];
        if (pvVar21 != pvVar23) {
          (**(code **)(param_1[0x68] + 0x18))(plVar1);
          lVar17 = 0;
          do {
            if (*(char *)(param_1[0x69] + lVar17) == '\0') goto LAB_0173b2ec;
            lVar25 = param_1[0x69] + lVar17;
            if (*(char *)(lVar25 + 1) == '\0') {
              lVar17 = lVar17 + 1;
              goto LAB_0173b2ec;
            }
            if (*(char *)(lVar25 + 2) == '\0') {
              lVar17 = lVar17 + 2;
              goto LAB_0173b2ec;
            }
            lVar17 = lVar17 + 3;
          } while (lVar17 != 0x80001);
          lVar17 = 0;
LAB_0173b2ec:
          iVar13 = (int)lVar17;
          if ((int)param_1[0x54] <= (int)lVar17) {
            iVar13 = (int)param_1[0x54] + -1;
          }
          memcpy(pvVar21,pvVar23,(long)iVar13);
          *(undefined1 *)((long)pvVar21 + (long)iVar13) = 0;
        }
      }
      else {
        if (puVar24 == (uint *)0x0) {
          uVar12 = 0x21;
        }
        else {
          uVar4 = *puVar24;
          uVar12 = 0;
          if ((uVar4 != 0) && (puVar24 != (uint *)(ulong)uVar4)) {
            puVar20 = (uint *)((long)puVar24 - (long)(ulong)uVar4);
            uVar12 = 0;
            if (*puVar20 != 0) {
              uVar12 = puVar20[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
                lVar17 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  lVar17 = 0x1c;
                }
                lVar17 = (long)puVar20 + lVar17 + (ulong)(ushort)puVar20[2] * 8;
                if (lVar17 != 0) {
                  uVar4 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar4 = (uint)((ulong)((long)puVar24 - lVar17) / (ulong)uVar12);
                  }
                  if (*puVar20 <= uVar4) {
                    uVar4 = 0xffffffff;
                  }
                  if ((uVar4 < *(uint *)PTR_DAT_04bc0148) &&
                     (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc0148 + 8) + (long)(int)uVar4 * 2),
                     uVar12 = (uint)uVar6, uVar6 < 0xa2)) goto LAB_0173b1b8;
                }
              }
              uVar12 = 0;
            }
          }
        }
LAB_0173b1b8:
        local_6c = uVar12;
        uVar15 = FUN_01adb720(&local_c8);
        if ((uVar15 & 1) != 0) {
          if (uVar12 < 0xa2) {
            puVar16 = *(undefined8 **)(PTR_s_STowelN_04bbe238 + (ulong)uVar12 * 8 + 0x760);
          }
          else {
            puVar16 = &DAT_0407ebb1;
          }
          FUN_038d1270(plVar1,"HumanPartsTool%s",puVar16);
        }
        uVar15 = FUN_01adbb50(&local_c8);
        if ((uVar15 & 1) != 0) {
          if (uVar12 < 0xa2) {
            puVar16 = *(undefined8 **)(PTR_s_STowelN_04bbe238 + (ulong)uVar12 * 8 + 0x760);
          }
          else {
            puVar16 = &DAT_0407ebb1;
          }
          FUN_038d1270(plVar14,"HumanPartsTool%s",puVar16);
        }
      }
      iVar13 = (int)local_e0;
    }
    bVar11 = FUN_01ad9630(&local_c8);
    uVar5 = *(undefined4 *)(puVar7 + 0x31);
    local_75 = 0;
    *(byte *)(param_1 + 0x51) = bVar11 & 1;
    local_ae = 0;
    local_b0 = *(undefined2 *)(puVar7 + 0x35);
    *(bool *)((long)param_1 + 0x39d) = (int)local_e0 == 0x1d;
    *(bool *)((long)param_1 + 0x39e) = (int)local_e0 == 0x2a;
    local_c0 = (undefined *)((long)&local_b8 + 4);
    *(bool *)((long)param_1 + 0x39f) = (int)local_e0 == 100;
    *(bool *)(param_1 + 0x74) = (int)local_e0 == 0x26;
    local_c8 = PTR_DAT_04bb2bc0 + 0x10;
    if (iVar13 != 0x1a) goto LAB_0173b010;
    local_b8 = (uint *)0x6d65744900000040;
    puVar18 = &local_b0;
LAB_0173b3a8:
    *(undefined1 *)puVar18 = 0;
  }
  puVar7 = PTR_DAT_04bb2698;
  lVar17 = *(long *)PTR_DAT_04bb2698;
  if (lVar17 == 0) {
    plVar14 = malloc(0x300);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar17 + 8);
      if (lVar25 != 0) {
        plVar14 = (long *)(lVar25 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_0173b420;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x300,8);
  }
LAB_0173b420:
  FUN_00705c50(plVar14);
  plVar14[0x50] = 0xffffffff;
  puVar2 = PTR_DAT_04bb38d8;
  plVar14[0x51] = 0xffffffff;
  plVar14[0x52] = 0xffffffff;
  puVar9 = PTR_DAT_04bd4738;
  pcVar22 = (char *)plVar14[0xc];
  *(undefined2 *)(plVar14 + 0x53) = 0;
  *(undefined4 *)(plVar14 + 0x54) = 0;
  plVar14[0x55] = 0;
  *(undefined4 *)(plVar14 + 0x56) = 0;
  *plVar14 = (long)(puVar2 + 0x10);
  plVar14[0x57] = 0;
  plVar14[0x4f] = (long)(puVar9 + 0x10);
  puVar2 = PTR_DAT_04bb2d80 + 0x10;
  plVar14[0x58] = (long)puVar2;
  plVar14[0x5c] = (long)puVar2;
  if (pcVar22 != "StateMachine") {
    iVar13 = 0xc;
    if ((int)plVar14[0xd] < 0xd) {
      iVar13 = (int)plVar14[0xd] + -1;
    }
    memcpy(pcVar22,"StateMachine",(long)iVar13);
    pcVar22[iVar13] = '\0';
  }
  *(uint *)(plVar14 + 0x4c) = *(uint *)(plVar14 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar14,0xffffffff);
  lVar17 = *(long *)puVar7;
  if (lVar17 == 0) {
    pvVar21 = malloc(0x438);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar17 + 8);
      if (lVar25 != 0) {
        plVar14 = (long *)(lVar25 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x438,8);
  }
  FUN_006fc0d0(pvVar21,&local_c8,PTR_DAT_04bb2f80);
  FUN_006f9fc0(param_1,pvVar21,0xffffffff);
  lVar17 = *(long *)puVar7;
  if (lVar17 == 0) {
    pvVar21 = malloc(0x12a8);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar17 + 8);
      if (lVar25 != 0) {
        plVar14 = (long *)(lVar25 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
    }
    pvVar21 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x12a8,8);
  }
  FUN_017518f4(pvVar21,&local_68);
  FUN_006f9fc0(param_1,pvVar21,0xffffffff);
  iVar13 = FUN_0277d6c4(&local_68);
  if (iVar13 == 0x39d9) {
    lVar17 = *(long *)puVar19;
    local_e0 = puVar8 + 0x10;
    local_d0 = 0;
    local_d8 = local_68;
    uStack_d4 = local_64;
    uVar12 = FUN_0277d6c4(&local_d8);
    if (*(long *)puVar19 != 0) {
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
        lVar17 = *(long *)PTR_DAT_04bc0428;
        uVar12 = FUN_0277d6c4(&local_68);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (uVar12 < *(uint *)(lVar17 + 0x1d8)) {
          lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8);
          if (lVar17 != 0) {
            local_d0 = lVar17;
          }
        }
      }
    }
    uVar15 = (**(code **)(*param_1 + 0x100))(param_1);
    if ((uVar15 & 1) == 0) {
      FUN_01ad8e70(&local_f0,&local_e0);
    }
    else {
      FUN_01ad90f0(&local_e0);
    }
    (**(code **)(local_f0 + 0x18))(&local_f0);
    (**(code **)(local_f0 + 0x18))(&local_f0);
    if (local_e8 == "Main") {
LAB_0173b894:
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
        plVar14 = malloc(0x378);
      }
      else {
        plVar14 = param_3;
        if (param_3 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar17 + 8);
          if (lVar25 != 0) {
            plVar14 = (long *)(lVar25 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_0173b8f4;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x378,8);
      }
LAB_0173b8f4:
      FUN_00705c50(plVar14);
      plVar14[0x4f] = 0;
      puVar2 = PTR_DAT_04bb30b8;
      plVar14[0x50] = 0;
      *(undefined1 *)((long)plVar14 + 0x2b4) = 0;
      plVar14[0x51] = 0;
      plVar14[0x52] = 0;
      plVar14[0x53] = 0;
      plVar14[0x55] = (long)plVar14 + 0x2b4;
      *(undefined1 *)((long)plVar14 + 0x2f3) = 0;
      *plVar14 = (long)(puVar2 + 0x10);
      *(undefined4 *)(plVar14 + 0x56) = 0x40;
      puVar2 = PTR_DAT_04bb2bc0 + 0x10;
      *(undefined4 *)(plVar14 + 0x5f) = 0;
      *(undefined4 *)((long)plVar14 + 0x334) = 0;
      plVar14[0x69] = (long)plVar14 + 0x354;
      *(undefined1 *)((long)plVar14 + 0x373) = 0;
      plVar14[0x54] = (long)puVar2;
      *(undefined8 *)((long)plVar14 + 0x32c) = 0;
      *(undefined1 *)(plVar14 + 0x67) = 1;
      *(undefined4 *)((long)plVar14 + 0x339) = 0;
      *(undefined4 *)(plVar14 + 0x6a) = 0x20;
      pcVar22 = (char *)plVar14[0xc];
      puVar2 = PTR_DAT_04bb2028 + 0x10;
      *(undefined1 *)((long)plVar14 + 0x354) = 0;
      plVar14[0x68] = (long)puVar2;
      if (pcVar22 != "Cloth") {
        iVar13 = 5;
        if ((int)plVar14[0xd] < 6) {
          iVar13 = (int)plVar14[0xd] + -1;
        }
        memcpy(pcVar22,"Cloth",(long)iVar13);
        pcVar22[iVar13] = '\0';
      }
      *(uint *)(plVar14 + 0x2f) = *(uint *)(plVar14 + 0x2f) & 0xfffffffb;
      *(uint *)(plVar14 + 0x4c) = *(uint *)(plVar14 + 0x4c) & 0xfffffff0 | 2;
      FUN_006f9fc0(param_1,plVar14,0xffffffff);
    }
    else {
      uVar15 = 0;
      bVar10 = true;
      do {
        if (local_e8[uVar15] != (&DAT_040deabe)[uVar15]) break;
        if (local_e8[uVar15] == '\0') {
          if (bVar10) goto LAB_0173b894;
          break;
        }
        bVar10 = uVar15 < 0x80000;
        uVar15 = uVar15 + 1;
      } while (uVar15 != 0x80001);
    }
  }
  else {
    lVar17 = *(long *)puVar7;
    if (lVar17 == 0) {
      plVar14 = malloc(0x378);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar17 + 8);
        if (lVar25 != 0) {
          plVar14 = (long *)(lVar25 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
          goto LAB_0173b77c;
        }
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x378,8);
    }
LAB_0173b77c:
    FUN_00705c50(plVar14);
    plVar14[0x4f] = 0;
    puVar2 = PTR_DAT_04bb30b8;
    plVar14[0x50] = 0;
    *(undefined1 *)((long)plVar14 + 0x2b4) = 0;
    plVar14[0x51] = 0;
    plVar14[0x52] = 0;
    plVar14[0x53] = 0;
    plVar14[0x55] = (long)plVar14 + 0x2b4;
    *(undefined1 *)((long)plVar14 + 0x2f3) = 0;
    *plVar14 = (long)(puVar2 + 0x10);
    *(undefined4 *)(plVar14 + 0x56) = 0x40;
    puVar2 = PTR_DAT_04bb2bc0 + 0x10;
    *(undefined4 *)(plVar14 + 0x5f) = 0;
    *(undefined4 *)((long)plVar14 + 0x334) = 0;
    plVar14[0x69] = (long)plVar14 + 0x354;
    *(undefined1 *)((long)plVar14 + 0x373) = 0;
    plVar14[0x54] = (long)puVar2;
    *(undefined8 *)((long)plVar14 + 0x32c) = 0;
    *(undefined1 *)(plVar14 + 0x67) = 1;
    *(undefined4 *)((long)plVar14 + 0x339) = 0;
    *(undefined4 *)(plVar14 + 0x6a) = 0x20;
    pcVar22 = (char *)plVar14[0xc];
    puVar2 = PTR_DAT_04bb2028 + 0x10;
    *(undefined1 *)((long)plVar14 + 0x354) = 0;
    plVar14[0x68] = (long)puVar2;
    if (pcVar22 != "Cloth") {
      iVar13 = 5;
      if ((int)plVar14[0xd] < 6) {
        iVar13 = (int)plVar14[0xd] + -1;
      }
      memcpy(pcVar22,"Cloth",(long)iVar13);
      pcVar22[iVar13] = '\0';
    }
    *(uint *)(plVar14 + 0x2f) = *(uint *)(plVar14 + 0x2f) & 0xfffffffb;
    *(uint *)(plVar14 + 0x4c) = *(uint *)(plVar14 + 0x4c) & 0xfffffff0 | 2;
    FUN_006f9fc0(param_1,plVar14,0xffffffff);
  }
  lVar17 = *(long *)puVar19;
  local_e0 = puVar8 + 0x10;
  local_d0 = 0;
  local_d8 = local_68;
  uStack_d4 = local_64;
  uVar12 = FUN_0277d6c4(&local_d8);
  if (*(long *)puVar19 != 0) {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      lVar17 = *(long *)PTR_DAT_04bc0428;
      uVar12 = FUN_0277d6c4(&local_68);
      uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (uVar12 < *(uint *)(lVar17 + 0x1d8)) {
        lVar17 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8);
        if (lVar17 != 0) {
          local_d0 = lVar17;
        }
      }
    }
  }
  iVar13 = FUN_01ad78cc(&local_e0);
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar13);
  if (iVar13 != 0x1c) {
    lVar17 = *(long *)puVar7;
    if (lVar17 == 0) {
      pvVar21 = malloc(0x308);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar17 + 8);
        if (lVar25 != 0) {
          plVar14 = (long *)(lVar25 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          pvVar21 = (void *)0x0;
          goto LAB_0173bb18;
        }
      }
      pvVar21 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x308,8);
    }
LAB_0173bb18:
    local_f0 = PTR_DAT_04bb2020 + 0x10;
    local_e8 = "mTool_Alb";
    FUN_007599d4(pvVar21,&local_68,&local_f0,0);
    iVar13 = FUN_01ad78cc(&local_e0);
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,iVar13);
    if ((iVar13 == 0xc) && (pcVar22 = *(char **)((long)pvVar21 + 0x2b0), pcVar22 != "mUmbrella_Alb")
       ) {
      iVar13 = 0xd;
      if (*(int *)((long)pvVar21 + 0x2b8) < 0xe) {
        iVar13 = *(int *)((long)pvVar21 + 0x2b8) + -1;
      }
      memcpy(pcVar22,"mUmbrella_Alb",(long)iVar13);
      pcVar22[iVar13] = '\0';
    }
    FUN_006f9fc0(param_1,pvVar21,0xffffffff);
  }
  if ((char)param_1[0x51] == '\0') {
    if (*(char *)((long)param_1 + 0x39d) != '\0') {
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
        plVar14 = malloc(0x2d8);
      }
      else {
        plVar14 = param_3;
        if (param_3 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar17 + 8);
          if (lVar25 != 0) {
            plVar14 = (long *)(lVar25 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_0173bd64;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2d8,8);
      }
LAB_0173bd64:
      FUN_00705c50(plVar14);
      puVar19 = PTR_DAT_04bdf1d8;
      pcVar22 = (char *)plVar14[0xc];
      *(undefined1 *)(plVar14 + 0x55) = 0;
      plVar14[0x56] = 0;
      plVar14[0x58] = 0;
      plVar14[0x59] = 0;
      plVar14[0x5a] = 0;
      plVar14[0x57] = (long)(puVar19 + 0x10);
      if (pcVar22 != "XLink") {
        iVar13 = 5;
        if ((int)plVar14[0xd] < 6) {
          iVar13 = (int)plVar14[0xd] + -1;
        }
        memcpy(pcVar22,"XLink",(long)iVar13);
        pcVar22[iVar13] = '\0';
      }
      puVar19 = PTR_DAT_04bb4248;
      goto LAB_0173bf98;
    }
    if (*(char *)((long)param_1 + 0x39e) != '\0') {
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
        plVar14 = malloc(0x2d8);
      }
      else {
        plVar14 = param_3;
        if (param_3 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar17 + 8);
          if (lVar25 != 0) {
            plVar14 = (long *)(lVar25 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_0173be60;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2d8,8);
      }
LAB_0173be60:
      FUN_00705c50(plVar14);
      puVar19 = PTR_DAT_04bdf1d8;
      pcVar22 = (char *)plVar14[0xc];
      *(undefined1 *)(plVar14 + 0x55) = 0;
      plVar14[0x56] = 0;
      plVar14[0x58] = 0;
      plVar14[0x59] = 0;
      plVar14[0x5a] = 0;
      plVar14[0x57] = (long)(puVar19 + 0x10);
      if (pcVar22 != "XLink") {
        iVar13 = 5;
        if ((int)plVar14[0xd] < 6) {
          iVar13 = (int)plVar14[0xd] + -1;
        }
        memcpy(pcVar22,"XLink",(long)iVar13);
        pcVar22[iVar13] = '\0';
      }
      puVar19 = PTR_DAT_04bb4190;
      goto LAB_0173bf98;
    }
    if (*(char *)((long)param_1 + 0x39f) != '\0') {
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
        plVar14 = malloc(0x2e0);
      }
      else {
        plVar14 = param_3;
        if (param_3 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar14 = (long *)(lVar17 + 8);
          if (lVar25 != 0) {
            plVar14 = (long *)(lVar25 + 0xa8);
          }
          plVar14 = (long *)*plVar14;
          if (plVar14 == (long *)0x0) {
            plVar14 = (long *)0x0;
            goto LAB_0173bf1c;
          }
        }
        plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2e0,8);
      }
LAB_0173bf1c:
      FUN_00705c50(plVar14);
      puVar19 = PTR_DAT_04bdf1d8;
      pcVar22 = (char *)plVar14[0xc];
      *(undefined1 *)(plVar14 + 0x55) = 0;
      plVar14[0x56] = 0;
      plVar14[0x58] = 0;
      plVar14[0x59] = 0;
      plVar14[0x5a] = 0;
      plVar14[0x57] = (long)(puVar19 + 0x10);
      if (pcVar22 != "XLink") {
        iVar13 = 5;
        if ((int)plVar14[0xd] < 6) {
          iVar13 = (int)plVar14[0xd] + -1;
        }
        memcpy(pcVar22,"XLink",(long)iVar13);
        pcVar22[iVar13] = '\0';
      }
      puVar19 = PTR_DAT_04bb42f8;
      *(undefined4 *)(plVar14 + 0x5b) = 0;
      goto LAB_0173bf98;
    }
    if ((char)param_1[0x74] == '\0') {
      plVar14 = (long *)FUN_038aa4a0(0x2d8,param_3,8);
      FUN_00794b30();
    }
    else {
      plVar14 = (long *)FUN_038aa4a0(0x2e0,param_3,8);
      FUN_00795444();
    }
  }
  else {
    lVar17 = *(long *)puVar7;
    if (lVar17 == 0) {
      plVar14 = malloc(0x2e0);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar17 + 8);
        if (lVar25 != 0) {
          plVar14 = (long *)(lVar25 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
          goto LAB_0173bc74;
        }
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2e0,8);
    }
LAB_0173bc74:
    FUN_00705c50(plVar14);
    puVar19 = PTR_DAT_04bdf1d8;
    pcVar22 = (char *)plVar14[0xc];
    *(undefined1 *)(plVar14 + 0x55) = 0;
    plVar14[0x56] = 0;
    plVar14[0x58] = 0;
    plVar14[0x59] = 0;
    plVar14[0x5a] = 0;
    plVar14[0x57] = (long)(puVar19 + 0x10);
    if (pcVar22 != "XLink") {
      iVar13 = 5;
      if ((int)plVar14[0xd] < 6) {
        iVar13 = (int)plVar14[0xd] + -1;
      }
      memcpy(pcVar22,"XLink",(long)iVar13);
      pcVar22[iVar13] = '\0';
    }
    puVar19 = PTR_DAT_04bb3ec0;
    *(undefined1 *)(plVar14 + 0x5b) = 0;
LAB_0173bf98:
    *plVar14 = (long)(puVar19 + 0x10);
  }
  FUN_006f9fc0(param_1,plVar14,0xffffffff);
  lVar17 = *(long *)puVar7;
  if (lVar17 == 0) {
    plVar14 = malloc(0x2e0);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar17 + 8);
      if (lVar25 != 0) {
        plVar14 = (long *)(lVar25 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_0173c010;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2e0,8);
  }
LAB_0173c010:
  FUN_00705c50(plVar14);
  plVar14[0x4f] = 0;
  puVar19 = PTR_DAT_04bb3300;
  plVar14[0x50] = 0;
  plVar14[0x53] = -0x100000000;
  plVar14[0x52] = (long)(plVar14 + 0x51);
  plVar14[0x51] = (long)(plVar14 + 0x51);
  *plVar14 = (long)(puVar19 + 0x10);
  FUN_038e18e4(plVar14 + 0x54);
  pcVar22 = (char *)plVar14[0xc];
  if (pcVar22 != "Family") {
    iVar13 = 6;
    if ((int)plVar14[0xd] < 7) {
      iVar13 = (int)plVar14[0xd] + -1;
    }
    memcpy(pcVar22,"Family",(long)iVar13);
    pcVar22[iVar13] = '\0';
  }
  *(uint *)(plVar14 + 0x4c) = *(uint *)(plVar14 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar14 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar14,0xffffffff);
  (**(code **)(*param_1 + 0x118))(param_1,param_2,param_3);
  return;
}

