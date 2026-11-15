
void FUN_022978d0(long *param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  bool bVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined *puVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  uint local_e4;
  undefined *local_d8;
  char *local_d0;
  undefined4 local_c8;
  char local_c4 [63];
  undefined1 local_85;
  long *local_80;
  uint local_78;
  undefined *local_70;
  undefined1 *local_68;
  
  if (*(char *)param_1[0x32] != '\0') {
    pvVar15 = (void *)param_1[0x6e];
    (**(code **)(param_1[0x31] + 0x18))(param_1 + 0x31);
    pvVar16 = (void *)param_1[0x32];
    if (pvVar15 != pvVar16) {
      (**(code **)(param_1[0x31] + 0x18))(param_1 + 0x31);
      lVar11 = 0;
      do {
        if (*(char *)(param_1[0x32] + lVar11) == '\0') goto LAB_0229798c;
        lVar8 = param_1[0x32] + lVar11;
        if (*(char *)(lVar8 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_0229798c;
        }
        if (*(char *)(lVar8 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_0229798c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_0229798c:
      iVar13 = (int)lVar11;
      if ((int)param_1[0x6f] <= (int)lVar11) {
        iVar13 = (int)param_1[0x6f] + -1;
      }
      memcpy(pvVar15,pvVar16,(long)iVar13);
      *(undefined1 *)((long)pvVar15 + (long)iVar13) = 0;
    }
  }
  plVar9 = param_1 + 0x6d;
  (**(code **)(param_1[0x6d] + 0x18))(plVar9);
  lVar11 = 0;
  do {
    local_80 = plVar9;
    if (*(char *)(param_1[0x6e] + lVar11) == '\0') {
LAB_02297a48:
      local_e4 = (int)lVar11 + 1;
      local_78 = 0;
      local_70 = PTR_DAT_04bb2020 + 0x10;
      local_68 = &DAT_04079e84;
      if ((int)lVar11 != -1) goto LAB_02297adc;
      goto LAB_02297a74;
    }
    lVar8 = param_1[0x6e] + lVar11;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_02297a48;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_02297a48;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  local_e4 = 1;
LAB_02297adc:
  local_68 = &DAT_04079e84;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  local_78 = 0;
  uVar20 = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    local_85 = 0;
    local_c8 = 0x40;
    local_c4[0] = '\0';
    local_d8 = puVar1;
    local_d0 = local_c4;
    FUN_0076e020(&local_80,&local_d8);
    uVar6 = local_78;
    plVar10 = local_80;
    if (*local_d0 != '\0' && uVar20 < 5) {
                    /* WARNING: Could not recover jumptable at 0x02297b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_02297b68 + (ulong)(byte)(&DAT_0417a070)[uVar20] * 4))();
      return;
    }
    uVar20 = uVar20 + 1;
    uVar19 = (ulong)local_78;
    (**(code **)(*local_80 + 0x18))(local_80);
    lVar11 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar11) == '\0') {
LAB_02297e94:
        iVar13 = (int)lVar11;
        goto joined_r0x02297eb8;
      }
      lVar8 = plVar10[1] + lVar11;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02297e94;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        iVar13 = (int)lVar11 + 2;
        goto joined_r0x02297eb8;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    iVar13 = 0;
joined_r0x02297eb8:
    if ((-1 < (int)uVar6) && ((int)uVar6 <= iVar13)) {
      for (; lVar11 = local_80[1], *(char *)(lVar11 + uVar19) != '\0'; uVar19 = uVar19 + 1) {
        (**(code **)(local_70 + 0x18))(&local_70);
        uVar14 = 0;
        bVar7 = true;
        cVar4 = *(char *)(lVar11 + uVar19);
        do {
          if (local_68[uVar14] == '\0') break;
          if (local_68[uVar14] == cVar4) {
            if (bVar7) goto LAB_02297f54;
            break;
          }
          if (local_68[uVar14 + 1] == '\0') break;
          if (local_68[uVar14 + 1] == cVar4) goto LAB_02297f54;
          if (local_68[uVar14 + 2] == '\0') break;
          if (local_68[uVar14 + 2] == cVar4) goto LAB_02297f54;
          bVar7 = uVar14 < 0x7fffe;
          uVar14 = uVar14 + 3;
        } while (uVar14 != 0x80001);
      }
LAB_02297f54:
      local_78 = (int)uVar19 + 1;
    }
  } while ((local_80 != plVar9) || (local_78 != local_e4));
LAB_02297a74:
  puVar1 = PTR_DAT_04bb2698;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar9 = malloc(0x2e8);
  }
  else {
    plVar9 = param_3;
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar11 + 8);
      if (lVar8 != 0) {
        plVar9 = (long *)(lVar8 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_02297f78;
      }
    }
    plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2e8,8);
  }
LAB_02297f78:
  FUN_00705c50(plVar9);
  puVar5 = PTR_DAT_04bb3078;
  puVar17 = (undefined *)plVar9[0xc];
  plVar9[0x54] = (long)&DAT_3f8000003f800000;
  plVar9[0x4f] = 0;
  plVar9[0x50] = 0;
  plVar9[0x51] = 0;
  plVar9[0x52] = 0;
  plVar9[0x53] = 0;
  *(undefined4 *)(plVar9 + 0x55) = 0x3f800000;
  *plVar9 = (long)(puVar5 + 0x10);
  *(undefined8 *)((long)plVar9 + 700) = 0;
  *(undefined8 *)((long)plVar9 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar9 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar9 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar9 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar9 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar9 + 0x2d4) = 0;
  if (puVar17 != &DAT_040afd37) {
    iVar13 = 4;
    if ((int)plVar9[0xd] < 5) {
      iVar13 = (int)plVar9[0xd] + -1;
    }
    memcpy(puVar17,&DAT_040afd37,(long)iVar13);
    puVar17[iVar13] = 0;
  }
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0 | 5;
  lVar11 = param_1[0x2c];
  *(int *)((long)plVar9 + 0x284) = (int)lVar11;
  uVar21 = *(undefined4 *)((long)param_1 + 0x164);
  *(undefined4 *)(plVar9 + 0x51) = uVar21;
  lVar8 = param_1[0x2d];
  *(int *)(plVar9 + 0x4f) = (int)lVar11;
  *(undefined4 *)((long)plVar9 + 0x27c) = uVar21;
  *(int *)((long)plVar9 + 0x28c) = (int)lVar8;
  *(int *)(plVar9 + 0x50) = (int)lVar8;
  uVar21 = *(undefined4 *)((long)param_1 + 0x16c);
  *(undefined4 *)(plVar9 + 0x54) = uVar21;
  *(undefined4 *)((long)plVar9 + 0x2a4) = uVar21;
  *(undefined4 *)(plVar9 + 0x55) = uVar21;
  *(int *)((long)plVar9 + 0x2b4) = (int)param_1[0x2e];
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  plVar9 = param_1 + 0x80;
  (**(code **)(param_1[0x80] + 0x18))(plVar9);
  (**(code **)(param_1[0x80] + 0x18))(plVar9);
  lVar11 = param_1[0x81];
  (**(code **)(DAT_05474d08 + 0x18))(&DAT_05474d08);
  if (lVar11 != DAT_05474d10) {
    uVar19 = 0;
    bVar7 = true;
    do {
      if (*(char *)(param_1[0x81] + uVar19) != *(char *)(DAT_05474d10 + uVar19)) break;
      if (*(char *)(param_1[0x81] + uVar19) == '\0') {
        if (bVar7) goto LAB_02298570;
        break;
      }
      bVar7 = uVar19 < 0x80000;
      uVar19 = uVar19 + 1;
    } while (uVar19 != 0x80001);
    lVar11 = *(long *)puVar1;
    if (lVar11 == 0) {
      pvVar15 = malloc(0x11f0);
    }
    else {
      plVar10 = param_3;
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar11 + 8);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
      }
      pvVar15 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x11f0,8);
    }
    FUN_00739870(pvVar15,0,0,1);
    FUN_006f9fc0(param_1,pvVar15,0xffffffff);
    lVar11 = *(long *)puVar1;
    if (lVar11 == 0) {
      plVar10 = malloc(0x2a8);
    }
    else {
      plVar10 = param_3;
      if (param_3 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar10 = (long *)(lVar11 + 8);
        if (lVar8 != 0) {
          plVar10 = (long *)(lVar8 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)0x0;
          goto LAB_022981dc;
        }
      }
      plVar10 = (long *)(**(code **)(*plVar10 + 0x30))(plVar10,0x2a8,8);
    }
LAB_022981dc:
    FUN_00705c50(plVar10);
    *(undefined4 *)(plVar10 + 0x51) = 0;
    puVar5 = PTR_DAT_04bb35d0;
    pcVar18 = (char *)plVar10[0xc];
    *(undefined4 *)(plVar10 + 0x52) = 0;
    plVar10[0x53] = 0;
    *(undefined2 *)(plVar10 + 0x54) = 0;
    plVar10[0x50] = (long)(plVar10 + 0x4f);
    plVar10[0x4f] = (long)(plVar10 + 0x4f);
    *plVar10 = (long)(puVar5 + 0x10);
    if (pcVar18 != "ModelResLoader") {
      iVar13 = 0xe;
      if ((int)plVar10[0xd] < 0xf) {
        iVar13 = (int)plVar10[0xd] + -1;
      }
      memcpy(pcVar18,"ModelResLoader",(long)iVar13);
      pcVar18[iVar13] = '\0';
    }
    *(undefined4 *)((long)plVar10 + 0x28c) = 8;
    *(uint *)(plVar10 + 0x4c) = *(uint *)(plVar10 + 0x4c) & 0xfffffff0 | 1;
    FUN_006f9fc0(param_1,plVar10,0xffffffff);
    lVar11 = param_1[0xc];
    pvVar15 = *(void **)(lVar11 + 0x280);
    (**(code **)(param_1[0x80] + 0x18))(plVar9);
    pvVar16 = (void *)param_1[0x81];
    if (pvVar15 != pvVar16) {
      (**(code **)(param_1[0x80] + 0x18))(plVar9);
      lVar8 = 0;
      do {
        if (*(char *)(param_1[0x81] + lVar8) == '\0') goto LAB_02298304;
        lVar2 = param_1[0x81] + lVar8;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_02298304;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_02298304;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_02298304:
      iVar13 = (int)lVar8;
      if (*(int *)(lVar11 + 0x288) <= (int)lVar8) {
        iVar13 = *(int *)(lVar11 + 0x288) + -1;
      }
      memcpy(pvVar15,pvVar16,(long)iVar13);
      *(undefined1 *)((long)pvVar15 + (long)iVar13) = 0;
    }
    *(undefined4 *)(lVar11 + 0x10d8) = 0;
    if (*(char *)param_1[0x8c] != '\0') {
      plVar9 = param_1 + 0x8b;
      (**(code **)(param_1[0x8b] + 0x18))(plVar9);
      (**(code **)(param_1[0x8b] + 0x18))(plVar9);
      pcVar18 = (char *)param_1[0x8c];
      if (pcVar18 != "None") {
        if (*pcVar18 == 'N') {
          lVar11 = 0;
          do {
            if ((lVar11 == 0x80000) ||
               (lVar8 = lVar11 + 1, pcVar18[lVar8] != (&DAT_040cd540)[lVar11])) goto LAB_022983b8;
            lVar11 = lVar11 + 1;
          } while (pcVar18[lVar8] != '\0');
        }
        else {
LAB_022983b8:
          lVar11 = param_1[0xc];
          pvVar15 = *(void **)(lVar11 + 0x1028);
          (**(code **)(param_1[0x8b] + 0x18))(plVar9);
          pvVar16 = (void *)param_1[0x8c];
          if (pvVar15 != pvVar16) {
            (**(code **)(param_1[0x8b] + 0x18))(plVar9);
            lVar8 = 0;
            do {
              if (*(char *)(param_1[0x8c] + lVar8) == '\0') goto LAB_02298444;
              lVar2 = param_1[0x8c] + lVar8;
              if (*(char *)(lVar2 + 1) == '\0') {
                lVar8 = lVar8 + 1;
                goto LAB_02298444;
              }
              if (*(char *)(lVar2 + 2) == '\0') {
                lVar8 = lVar8 + 2;
                goto LAB_02298444;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_02298444:
            iVar3 = *(int *)(lVar11 + 0x1030);
            iVar13 = (int)lVar8;
            if (iVar3 <= (int)lVar8) {
              iVar13 = iVar3 + -1;
            }
            memcpy(pvVar15,pvVar16,(long)iVar13);
            *(undefined1 *)((long)pvVar15 + (long)iVar13) = 0;
          }
          uVar19 = (**(code **)(*param_1 + 400))(param_1);
          if ((uVar19 & 1) != 0) {
            lVar11 = *(long *)puVar1;
            if (lVar11 == 0) {
              plVar9 = malloc(0x2d8);
            }
            else {
              plVar9 = param_3;
              if (param_3 == (long *)0x0) {
                lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                plVar9 = (long *)(lVar11 + 8);
                if (lVar8 != 0) {
                  plVar9 = (long *)(lVar8 + 0xa8);
                }
                plVar9 = (long *)*plVar9;
                if (plVar9 == (long *)0x0) {
                  plVar9 = (long *)0x0;
                  goto LAB_022984e4;
                }
              }
              plVar9 = (long *)(**(code **)(*plVar9 + 0x30))(plVar9,0x2d8,8);
            }
LAB_022984e4:
            FUN_00705c50(plVar9);
            puVar5 = PTR_DAT_04bb39e0;
            *(undefined1 *)(plVar9 + 0x55) = 0;
            puVar17 = PTR_DAT_04bdf1d8;
            pcVar18 = (char *)plVar9[0xc];
            plVar9[0x56] = 0;
            plVar9[0x58] = 0;
            plVar9[0x59] = 0;
            plVar9[0x5a] = 0;
            *plVar9 = (long)(puVar5 + 0x10);
            plVar9[0x57] = (long)(puVar17 + 0x10);
            if (pcVar18 != "XLink") {
              iVar13 = 5;
              if ((int)plVar9[0xd] < 6) {
                iVar13 = (int)plVar9[0xd] + -1;
              }
              memcpy(pcVar18,"XLink",(long)iVar13);
              pcVar18[iVar13] = '\0';
            }
            FUN_006f9fc0(param_1,plVar9,0xffffffff);
          }
        }
      }
    }
  }
LAB_02298570:
  lVar11 = *(long *)puVar1;
  if (lVar11 == 0) {
    plVar9 = malloc(0x300);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar12 = (undefined8 *)(lVar11 + 8);
      if (lVar8 != 0) {
        puVar12 = (undefined8 *)(lVar8 + 0xa8);
      }
      param_3 = (long *)*puVar12;
      if (param_3 == (long *)0x0) {
        plVar9 = (long *)0x0;
        goto LAB_022985d8;
      }
    }
    plVar9 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x300,8);
  }
LAB_022985d8:
  FUN_00705c50(plVar9);
  plVar9[0x50] = 0xffffffff;
  puVar1 = PTR_DAT_04bb38d8;
  plVar9[0x51] = 0xffffffff;
  plVar9[0x52] = 0xffffffff;
  puVar5 = PTR_DAT_04bd4738;
  pcVar18 = (char *)plVar9[0xc];
  *(undefined2 *)(plVar9 + 0x53) = 0;
  *(undefined4 *)(plVar9 + 0x54) = 0;
  plVar9[0x55] = 0;
  *(undefined4 *)(plVar9 + 0x56) = 0;
  *plVar9 = (long)(puVar1 + 0x10);
  plVar9[0x57] = 0;
  plVar9[0x4f] = (long)(puVar5 + 0x10);
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  plVar9[0x58] = (long)puVar1;
  plVar9[0x5c] = (long)puVar1;
  if (pcVar18 != "StateMachine") {
    iVar13 = 0xc;
    if ((int)plVar9[0xd] < 0xd) {
      iVar13 = (int)plVar9[0xd] + -1;
    }
    memcpy(pcVar18,"StateMachine",(long)iVar13);
    pcVar18[iVar13] = '\0';
  }
  *(uint *)(plVar9 + 0x4c) = *(uint *)(plVar9 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar9,0xffffffff);
  lVar11 = 0;
  if (param_1[0xe] != 0) {
    lVar11 = param_1[0xe] + 0x278;
  }
  FUN_03ebac90(lVar11,2,0,0,0);
  lVar11 = 0;
  if (param_1[0xe] != 0) {
    lVar11 = param_1[0xe] + 0x278;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = "State::cIdle";
  local_d8 = puVar1;
  FUN_03ebaf40(lVar11,0,&local_d8);
  lVar11 = 0;
  if (param_1[0xe] != 0) {
    lVar11 = param_1[0xe] + 0x278;
  }
  puVar12 = *(undefined8 **)(lVar11 + 0x30);
  *puVar12 = &PTR_LAB_04a7d660;
  puVar12[1] = param_1;
  puVar12[2] = 0x160;
  puVar12[3] = 1;
  puVar12[4] = 0x168;
  puVar12[5] = 1;
  puVar12[6] = 0x170;
  puVar12[7] = 1;
  lVar11 = 0;
  if (param_1[0xe] != 0) {
    lVar11 = param_1[0xe] + 0x278;
  }
  local_d0 = "State::cTalk";
  local_d8 = puVar1;
  FUN_03ebaf40(lVar11,1,&local_d8);
  lVar11 = 0;
  if (param_1[0xe] != 0) {
    lVar11 = param_1[0xe] + 0x278;
  }
  puVar12 = (undefined8 *)(*(long *)(lVar11 + 0x30) + (ulong)(1 < *(uint *)(lVar11 + 0x28)) * 0x40);
  puVar12[2] = 0x178;
  puVar12[3] = 1;
  *puVar12 = &PTR_LAB_04a7d660;
  puVar12[1] = param_1;
  puVar12[4] = 0x180;
  puVar12[5] = 1;
  puVar12[6] = 0x188;
  puVar12[7] = 1;
  return;
}

