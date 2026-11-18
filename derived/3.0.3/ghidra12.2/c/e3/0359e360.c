
void FUN_0359e360(long *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long *plVar8;
  long *plVar9;
  int *piVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined *local_e0;
  undefined1 *local_d8;
  undefined *local_d0;
  undefined1 *local_c8;
  int local_c0;
  undefined1 local_bc [31];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_88 = 0x20;
  local_65 = 0;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  local_98 = puVar1;
  local_90 = local_84;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar14 = (undefined1 *)param_2[1];
  if (local_84 != puVar14) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_0359e42c;
      lVar3 = param_2[1] + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0359e42c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0359e42c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0359e42c:
    iVar5 = (int)lVar11;
    if (local_88 <= (int)lVar11) {
      iVar5 = local_88 + -1;
    }
    memcpy(local_84,puVar14,(long)iVar5);
    local_84[iVar5] = 0;
  }
  local_9d = 0;
  local_c0 = 0x20;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  local_d0 = puVar1;
  local_c8 = local_bc;
  local_98 = puVar2;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar14 = (undefined1 *)param_2[1];
  if (local_bc != puVar14) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(char *)(param_2[1] + lVar11) == '\0') goto LAB_0359e4ec;
      lVar3 = param_2[1] + lVar11;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_0359e4ec;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_0359e4ec;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_0359e4ec:
    iVar5 = (int)lVar11;
    if (local_c0 <= (int)lVar11) {
      iVar5 = local_c0 + -1;
    }
    memcpy(local_bc,puVar14,(long)iVar5);
    local_bc[iVar5] = 0;
  }
  puVar14 = local_90;
  puVar1 = PTR_DAT_04bb2020;
  local_d8 = &DAT_0408e753;
  local_e0 = PTR_DAT_04bb2020 + 0x10;
  local_d0 = puVar2;
  (**(code **)(local_98 + 0x18))(&local_98);
  lVar11 = 0;
  do {
    if (local_90[lVar11] == '\0') goto LAB_0359e58c;
    if (local_90[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0359e58c;
    }
    if (local_90[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0359e58c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0359e58c:
  uVar7 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  lVar11 = 0;
  do {
    if (local_d8[lVar11] == '\0') goto LAB_0359e5ec;
    if (local_d8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0359e5ec;
    }
    if (local_d8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0359e5ec;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0359e5ec:
  uVar12 = (uint)lVar11;
  if ((int)(local_88 - uVar7) <= (int)(uint)lVar11) {
    uVar12 = local_88 + ~uVar7;
  }
  if (0 < (int)uVar12) {
    (**(code **)(local_e0 + 0x18))(&local_e0);
    memcpy(puVar14 + uVar7,local_d8,(ulong)uVar12);
    puVar14[(int)(uVar12 + uVar7)] = 0;
  }
  puVar14 = local_c8;
  local_e0 = puVar1 + 0x10;
  local_d8 = &DAT_040989d3;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar11 = 0;
  do {
    if (local_c8[lVar11] == '\0') goto LAB_0359e69c;
    if (local_c8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0359e69c;
    }
    if (local_c8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0359e69c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0359e69c:
  uVar7 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_e0 + 0x18))(&local_e0);
  lVar11 = 0;
  do {
    if (local_d8[lVar11] == '\0') goto LAB_0359e6fc;
    if (local_d8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_0359e6fc;
    }
    if (local_d8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_0359e6fc;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_0359e6fc:
  uVar12 = (uint)lVar11;
  if ((int)(local_c0 - uVar7) <= (int)(uint)lVar11) {
    uVar12 = local_c0 + ~uVar7;
  }
  if (0 < (int)uVar12) {
    (**(code **)(local_e0 + 0x18))(&local_e0);
    memcpy(puVar14 + uVar7,local_d8,(ulong)uVar12);
    puVar14[(int)(uVar12 + uVar7)] = 0;
  }
  lVar11 = DAT_057740d8;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar7 = FUN_006bd550(local_90,0);
  iVar5 = *(int *)(lVar11 + 0x10);
  if (iVar5 != 0) {
    uVar12 = 0;
    iVar13 = iVar5 + -1;
    if (iVar13 == 0 || iVar5 < 1) {
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x18);
      do {
        iVar5 = iVar13 + uVar12;
        if (iVar5 < 0 != SCARRY4(iVar13,uVar12)) {
          iVar5 = iVar5 + 1;
        }
        uVar4 = iVar5 >> 1;
        uVar6 = *(uint *)(*(long *)(lVar11 + (long)(int)uVar4 * 8) + 0x18);
        if (uVar6 == uVar7) goto joined_r0x0359e7e4;
        if (uVar6 < uVar7) {
          uVar12 = uVar4 + 1;
        }
        else {
          iVar13 = uVar4 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar4 = uVar12;
    if (*(uint *)(*(long *)(lVar11 + (long)(int)uVar12 * 8) + 0x18) == uVar7) {
joined_r0x0359e7e4:
      if (-1 < (int)uVar4) {
        lVar11 = **(long **)(lVar11 + (ulong)uVar4 * 8);
        goto LAB_0359e7ec;
      }
    }
  }
  lVar11 = 0;
LAB_0359e7ec:
  *param_1 = lVar11;
  lVar11 = DAT_057740d8;
  (**(code **)(local_d0 + 0x18))(&local_d0);
  uVar7 = FUN_006bd550(local_c8,0);
  iVar5 = *(int *)(lVar11 + 0x10);
  if (iVar5 != 0) {
    uVar12 = 0;
    iVar13 = iVar5 + -1;
    if (iVar13 == 0 || iVar5 < 1) {
      lVar11 = *(long *)(lVar11 + 0x18);
    }
    else {
      lVar11 = *(long *)(lVar11 + 0x18);
      do {
        iVar5 = iVar13 + uVar12;
        if (iVar5 < 0 != SCARRY4(iVar13,uVar12)) {
          iVar5 = iVar5 + 1;
        }
        uVar4 = iVar5 >> 1;
        uVar6 = *(uint *)(*(long *)(lVar11 + (long)(int)uVar4 * 8) + 0x18);
        if (uVar6 == uVar7) goto joined_r0x0359e920;
        if (uVar6 < uVar7) {
          uVar12 = uVar4 + 1;
        }
        else {
          iVar13 = uVar4 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar4 = uVar12;
    if (*(uint *)(*(long *)(lVar11 + (long)(int)uVar12 * 8) + 0x18) == uVar7) {
joined_r0x0359e920:
      if (-1 < (int)uVar4) {
        lVar11 = **(long **)(lVar11 + (ulong)uVar4 * 8);
        param_1[1] = lVar11;
        if (lVar11 == 0 || *param_1 == 0) {
          return;
        }
        plVar8 = (long *)(**(code **)(*(long *)(*param_1 + 0x30) + 0xf0))();
        plVar9 = (long *)(**(code **)(*(long *)(param_1[1] + 0x30) + 0xf0))();
        *(undefined4 *)((long)param_1 + 0x1c) = 0;
        piVar10 = (int *)(**(code **)(*(long *)(*param_1 + 0xf8) + 0xf0))();
        *(float *)(param_1 + 4) = (float)*piVar10;
        uVar15 = (**(code **)(*plVar8 + 0x10))(0,plVar8);
        uVar16 = (**(code **)(*plVar9 + 0x10))(0,plVar9);
        *(undefined4 *)(param_1 + 2) = uVar15;
        *(undefined4 *)((long)param_1 + 0x14) = uVar16;
        *(undefined4 *)(param_1 + 3) = uVar15;
        return;
      }
    }
  }
  param_1[1] = 0;
  return;
}

