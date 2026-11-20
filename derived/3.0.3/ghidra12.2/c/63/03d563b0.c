
void FUN_03d563b0(long *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  char *pcVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined *puVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined *local_110;
  undefined1 *local_108;
  undefined4 local_100;
  undefined1 local_fc;
  undefined1 local_fb;
  undefined1 local_dd;
  undefined *local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *local_98;
  undefined4 local_90;
  undefined1 local_8c [31];
  undefined1 local_6d;
  
  puVar7 = PTR_DAT_04bb2028;
  local_6d = 0;
  local_90 = 0x20;
  local_8c[0] = 0;
  local_98 = local_8c;
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  FUN_038d1270(&local_a0,&DAT_040c7be9,param_2);
  (**(code **)(local_a0 + 0x18))(&local_a0);
  lVar10 = 0;
  do {
    if (local_98[lVar10] == '\0') goto LAB_03d5647c;
    if (local_98[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03d5647c;
    }
    if (local_98[lVar10 + 2] == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_03d5647c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_03d5647c:
  iVar1 = (int)lVar10 + (param_2 >> 0x1f);
  iVar8 = FUN_038cefc4();
  piVar11 = *(int **)PTR_DAT_04bb4eb8;
  if ((piVar11 == (int *)0x0) || ((char)piVar11[8] == '\0')) {
    uVar9 = FUN_038ced70();
    if (iVar1 != 4) goto LAB_03d564c8;
LAB_03d56560:
    if (((10 < uVar9) || ((1 << (ulong)(uVar9 & 0x1f) & 0x60bU) == 0)) && (iVar8 != 4)) {
LAB_03d564f0:
      local_d8 = puVar7 + 0x10;
      local_a5 = 0;
      local_c4[0] = 0;
      local_c8 = 0x20;
      local_d0 = local_c4;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      puVar3 = local_98;
      if (local_c4 != local_98) {
        (**(code **)(local_a0 + 0x18))(&local_a0);
        lVar10 = 0;
        do {
          if (local_98[lVar10] == '\0') goto LAB_03d569ac;
          if (local_98[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03d569ac;
          }
          if (local_98[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03d569ac;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03d569ac:
        iVar1 = (int)lVar10;
        if (local_c8 <= (int)lVar10) {
          iVar1 = local_c8 + -1;
        }
        memcpy(local_c4,puVar3,(long)iVar1);
        local_c4[iVar1] = 0;
      }
      goto LAB_03d569d8;
    }
  }
  else {
    uVar12 = (ulong)(uint)(*piVar11 << 1) | 1;
    if (0x1f < (uint)uVar12) {
      uVar12 = 0;
    }
    uVar9 = (uint)(byte)(&DAT_04058440)[uVar12];
    if (iVar1 == 4) goto LAB_03d56560;
LAB_03d564c8:
    if (iVar1 < 5) goto LAB_03d564f0;
  }
  local_d0 = local_c4;
  local_a5 = 0;
  local_c4[0] = 0;
  local_c8 = 0x20;
  local_110 = puVar7 + 0x10;
  local_dd = 0;
  local_100 = 0x20;
  local_108 = &local_fc;
  if (uVar9 < 0xb) {
    uVar6 = 1 << (ulong)(uVar9 & 0x1f);
    if ((uVar6 & 0x603) == 0) {
      if (((uVar6 & 0xe0) == 0) && ((uVar9 != 4 || (param_3 != 1)))) goto LAB_03d565fc;
      local_fc = 0x2e;
    }
    else {
      local_fc = 0x2c;
    }
  }
  else {
LAB_03d565fc:
    local_fc = 0x20;
  }
  local_fb = 0;
  local_d8 = local_110;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  puVar7 = PTR_DAT_04bb2120;
  lVar10 = 0;
  do {
    if (local_98[lVar10] == '\0') {
LAB_03d56658:
      iVar8 = (int)lVar10 + 1;
      if ((int)lVar10 == -1) goto LAB_03d569d8;
      goto LAB_03d56678;
    }
    if (local_98[lVar10 + 1] == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_03d56658;
    }
    if (local_98[lVar10 + 2] == '\0') {
      iVar8 = (int)lVar10 + 3;
      if ((int)lVar10 != -3) goto LAB_03d56678;
      goto LAB_03d569d8;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  iVar8 = 1;
LAB_03d56678:
  uVar12 = 0;
  uVar9 = 0;
  uVar15 = 0;
  do {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar10 = 0;
    do {
      if (local_98[lVar10] == '\0') goto LAB_03d56714;
      if (local_98[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03d56714;
      }
      if (local_98[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03d56714;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03d56714:
    iVar13 = (int)uVar12;
    puVar3 = puVar7;
    if (iVar13 <= (int)lVar10 && -1 < iVar13) {
      puVar3 = local_98 + uVar15;
    }
    uVar5 = *puVar3;
    (**(code **)(local_d8 + 0x18))(&local_d8);
    lVar10 = 0;
    do {
      if (local_d0[lVar10] == '\0') goto LAB_03d56784;
      if (local_d0[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03d56784;
      }
      if (local_d0[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03d56784;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03d56784:
    if ((int)lVar10 < local_c8 + -1) {
      local_d0[(int)lVar10] = uVar5;
      (local_d0 + (int)lVar10)[1] = 0;
    }
    (**(code **)(local_a0 + 0x18))(&local_a0);
    puVar3 = local_d0;
    lVar10 = 0;
    do {
      if (local_98[lVar10] == '\0') goto LAB_03d56804;
      if (local_98[lVar10 + 1] == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_03d56804;
      }
      if (local_98[lVar10 + 2] == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_03d56804;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_03d56804:
    pcVar4 = puVar7;
    if (iVar13 <= (int)lVar10 && -1 < iVar13) {
      pcVar4 = local_98 + uVar15;
    }
    if (*pcVar4 != '-') {
      if ((0 < (int)(iVar1 + ~uVar9)) && ((iVar1 + ~uVar9) % 3 == 0)) {
        (**(code **)(local_d8 + 0x18))(&local_d8);
        lVar10 = 0;
        do {
          if (local_d0[lVar10] == '\0') goto LAB_03d5689c;
          if (local_d0[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03d5689c;
          }
          if (local_d0[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03d5689c;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03d5689c:
        uVar6 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_110 + 0x18))(&local_110);
        lVar10 = 0;
        do {
          if (local_108[lVar10] == '\0') goto LAB_03d568fc;
          if (local_108[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03d568fc;
          }
          if (local_108[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03d568fc;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03d568fc:
        uVar2 = (uint)lVar10;
        if ((int)(local_c8 - uVar6) <= (int)(uint)lVar10) {
          uVar2 = local_c8 + ~uVar6;
        }
        if (0 < (int)uVar2) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(puVar3 + uVar6,local_108,(ulong)uVar2);
          puVar3[(int)(uVar2 + uVar6)] = 0;
        }
      }
      uVar9 = uVar9 + 1;
    }
    uVar12 = uVar15 + 1;
    uVar15 = uVar12 & 0xffffffff;
  } while (iVar8 != (int)uVar12);
LAB_03d569d8:
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar14 = param_1[1];
  lVar10 = param_1[2];
  (**(code **)(local_d8 + 0x18))(&local_d8);
  FUN_038d4900(&local_110,lVar14,(int)lVar10,local_d0,0xffffffff);
  return;
}

