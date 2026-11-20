
void FUN_03ea55f0(undefined8 *param_1,undefined4 param_2,undefined8 param_3,long param_4,
                 uint param_5,char *param_6)

{
  undefined **ppuVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  uint uVar6;
  size_t __size;
  long *plVar7;
  undefined *puVar8;
  uint uVar9;
  undefined4 uVar10;
  long *plVar11;
  long *plVar12;
  char *pcVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  void *pvVar21;
  long *plVar22;
  uint uVar23;
  long lVar24;
  uint uVar25;
  undefined **local_290;
  char *local_288;
  int local_280;
  char local_27c [511];
  undefined1 local_7d;
  undefined **local_78;
  undefined1 *local_70;
  
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = param_2;
  puVar8 = PTR_DAT_04bb2020;
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = &PTR_FUN_04ba4180;
  param_1[1] = 0;
  local_290 = (undefined **)(puVar8 + 0x10);
  plVar12 = param_1 + 6;
  *plVar12 = (long)local_290;
  puVar8 = PTR_DAT_04bb2120;
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  param_1[7] = puVar8;
  local_288 = "";
  FUN_03c5a110(plVar12,&local_290,0xffffffff,1);
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  plVar22 = param_1 + 0xc;
  *plVar22 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = &PTR_LAB_04ba41d0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = param_1;
  pcVar13 = *(char **)(param_6 + 8);
  if (pcVar13 == (char *)0x0) {
    pcVar13 = (char *)(**(code **)(*(long *)param_1[5] + 0x10))();
  }
  if ((param_5 & 1) == 0) {
    local_290 = &PTR_LAB_048f9770;
    cVar5 = *(char *)((long)param_1 + 0x46);
    local_288 = pcVar13;
    plVar7 = (long *)PTR_DAT_04bb2698;
  }
  else {
    local_27c[0] = '\0';
    local_280 = 0x200;
    lVar15 = 0;
    local_7d = 0;
    local_290 = (undefined **)(PTR_DAT_04bb2d90 + 0x10);
    do {
      if (local_27c[lVar15] == '\0') goto LAB_03ea5768;
      if (local_27c[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ea5768;
      }
      if (local_27c[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ea5768;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ea5768:
    uVar9 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
    lVar15 = 0;
    do {
      if (pcVar13[lVar15] == '\0') goto LAB_03ea57ac;
      if (pcVar13[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ea57ac;
      }
      if (pcVar13[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ea57ac;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ea57ac:
    uVar19 = (uint)lVar15;
    if ((int)(0x200 - uVar9) <= (int)(uint)lVar15) {
      uVar19 = 0x1ff - uVar9;
    }
    local_288 = local_27c;
    if (0 < (int)uVar19) {
      memcpy(local_27c + uVar9,pcVar13,(ulong)uVar19);
      local_27c[(int)(uVar19 + uVar9)] = '\0';
    }
    pcVar13 = local_288;
    (*(code *)local_290[3])(&local_290);
    lVar15 = 0;
    do {
      if (local_288[lVar15] == '\0') goto LAB_03ea583c;
      if (local_288[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ea583c;
      }
      if (local_288[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ea583c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ea583c:
    uVar19 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
    uVar9 = local_280 + ~uVar19;
    if (1 < (int)(local_280 - uVar19)) {
      uVar9 = 1;
    }
    if (0 < (int)uVar9) {
      memcpy(pcVar13 + uVar19,&DAT_040a3a35,(ulong)uVar9);
      pcVar13[(ulong)uVar9 + (ulong)uVar19] = '\0';
    }
    pcVar13 = local_288;
    lVar24 = *(long *)(param_4 + 0x18);
    (*(code *)local_290[3])(&local_290);
    lVar15 = 0;
    do {
      if (local_288[lVar15] == '\0') goto LAB_03ea58e0;
      if (local_288[lVar15 + 1] == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ea58e0;
      }
      if (local_288[lVar15 + 2] == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ea58e0;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ea58e0:
    uVar9 = (uint)lVar15 & ((int)(uint)lVar15 >> 0x1f ^ 0xffffffffU);
    (**(code **)(*(long *)(lVar24 + 0x18) + 0x18))(lVar24 + 0x18);
    lVar15 = 0;
    do {
      if (*(char *)(*(long *)(lVar24 + 0x20) + lVar15) == '\0') goto LAB_03ea593c;
      lVar3 = *(long *)(lVar24 + 0x20) + lVar15;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_03ea593c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_03ea593c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_03ea593c:
    uVar19 = (uint)lVar15;
    if ((int)(local_280 - uVar9) <= (int)(uint)lVar15) {
      uVar19 = local_280 + ~uVar9;
    }
    if (0 < (int)uVar19) {
      (**(code **)(*(long *)(lVar24 + 0x18) + 0x18))(lVar24 + 0x18);
      memcpy(pcVar13 + uVar9,*(void **)(lVar24 + 0x20),(ulong)uVar19);
      pcVar13[(int)(uVar19 + uVar9)] = '\0';
    }
    cVar5 = *(char *)((long)param_1 + 0x46);
    plVar7 = (long *)PTR_DAT_04bb2698;
  }
  PTR_DAT_04bb2698 = (undefined *)plVar7;
  if (cVar5 != '\0') {
    (**(code **)(param_1[6] + 0x18))(plVar12);
    pvVar21 = (void *)param_1[7];
    if (pvVar21 != (void *)0x0) {
      if (*plVar7 == 0) {
        free(pvVar21);
      }
      else {
        plVar11 = (long *)FUN_038cb610(*plVar7,pvVar21);
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x38))(plVar11,pvVar21);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  FUN_03c5a110(plVar12,&local_290,0xffffffff,0);
  uVar9 = (**(code **)(*(long *)param_1[5] + 0x70))();
  puVar8 = PTR_DAT_04bb3350;
  uVar18 = (ulong)uVar9;
  if (0 < (int)uVar9) {
    lVar15 = *plVar7;
    if (lVar15 == 0) {
      pvVar21 = malloc(uVar18 << 2);
joined_r0x03ea5d6c:
      if (pvVar21 != (void *)0x0) {
        *(uint *)(param_1 + 0xb) = uVar9;
        param_1[0xc] = pvVar21;
      }
    }
    else {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar24 != 0) {
        plVar12 = (long *)(lVar24 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 != (long *)0x0) {
        pvVar21 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar18 << 2,8);
        goto joined_r0x03ea5d6c;
      }
    }
    lVar15 = *plVar7;
    __size = (ulong)(uVar9 * uVar9) << 2;
    if (lVar15 == 0) {
      pvVar21 = malloc(__size);
    }
    else {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      plVar12 = (long *)(lVar15 + 8);
      if (lVar24 != 0) {
        plVar12 = (long *)(lVar24 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) goto LAB_03ea5ac8;
      pvVar21 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,__size,8);
    }
    if (pvVar21 != (void *)0x0) {
      *(uint *)(param_1 + 0xd) = uVar9;
      *(uint *)((long)param_1 + 0x6c) = uVar9;
      param_1[0xe] = pvVar21;
    }
  }
LAB_03ea5ac8:
  uVar19 = *(uint *)(param_1 + 0xb);
  if (0 < (int)uVar19) {
    uVar14 = (ulong)uVar19 & 3;
    if (uVar19 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar15 = uVar16 * 4;
        uVar16 = uVar16 + 4;
        *(undefined4 *)(*plVar22 + lVar15) = 0xffffffff;
        *(undefined4 *)(*plVar22 + lVar15 + 4) = 0xffffffff;
        *(undefined4 *)(*plVar22 + lVar15 + 8) = 0xffffffff;
        *(undefined4 *)(*plVar22 + lVar15 + 0xc) = 0xffffffff;
      } while (((ulong)uVar19 & 0xfffffffc) != uVar16);
    }
    if ((uVar19 & 3) != 0) {
      lVar15 = uVar16 << 2;
      do {
        uVar14 = uVar14 - 1;
        *(undefined4 *)(*plVar22 + lVar15) = 0xffffffff;
        lVar15 = lVar15 + 4;
      } while (uVar14 != 0);
    }
  }
  uVar19 = *(int *)((long)param_1 + 0x6c) * *(int *)(param_1 + 0xd);
  if (0 < (int)uVar19) {
    uVar14 = (ulong)uVar19 & 3;
    if (uVar19 < 4) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      do {
        lVar15 = uVar16 * 4;
        uVar16 = uVar16 + 4;
        *(undefined4 *)(param_1[0xe] + lVar15) = 0xffffffff;
        *(undefined4 *)(param_1[0xe] + lVar15 + 4) = 0xffffffff;
        *(undefined4 *)(param_1[0xe] + lVar15 + 8) = 0xffffffff;
        *(undefined4 *)(param_1[0xe] + lVar15 + 0xc) = 0xffffffff;
      } while (((ulong)uVar19 & 0xfffffffc) != uVar16);
    }
    if ((uVar19 & 3) != 0) {
      lVar15 = uVar16 << 2;
      do {
        uVar14 = uVar14 - 1;
        *(undefined4 *)(param_1[0xe] + lVar15) = 0xffffffff;
        lVar15 = lVar15 + 4;
      } while (uVar14 != 0);
    }
  }
  iVar17 = 0;
  if (uVar9 != 0) {
    uVar19 = 0;
    do {
      plVar22 = (long *)param_1[5];
      uVar10 = (**(code **)(*plVar22 + 0x78))(plVar22,uVar19);
      lVar24 = (**(code **)(*plVar22 + 0x18))(plVar22,uVar10);
      lVar15 = 0;
      do {
        if (*(char *)(lVar24 + lVar15) == '\0') goto LAB_03ea5be8;
        if (*(char *)(lVar24 + lVar15 + 1) == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_03ea5be8;
        }
        if (*(char *)(lVar24 + lVar15 + 2) == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_03ea5be8;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_03ea5be8:
      uVar19 = uVar19 + 1;
      iVar17 = (int)lVar15 + iVar17;
    } while (uVar19 != uVar9);
  }
  uVar14 = uVar18;
  uVar6 = iVar17 + uVar9;
  uVar19 = uVar9;
  if (*param_6 != '\0') {
    iVar2 = uVar9 * 3 + iVar17 * 2;
    uVar6 = iVar17 + uVar9 + iVar2 * (uVar9 - 1);
    uVar19 = uVar9 * uVar9;
    if (param_6[1] != '\0') {
      uVar19 = uVar9 * uVar9 + uVar9;
    }
    uVar14 = (ulong)uVar19;
    if (param_6[1] != '\0') {
      uVar6 = uVar6 + iVar2;
    }
  }
  if (0 < (int)uVar19) {
    lVar15 = *plVar7;
    if (lVar15 == 0) {
      pvVar21 = malloc(uVar14 << 3);
    }
    else {
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
      plVar22 = (long *)(lVar15 + 8);
      if (lVar24 != 0) {
        plVar22 = (long *)(lVar24 + 0xa8);
      }
      plVar22 = (long *)*plVar22;
      if (plVar22 == (long *)0x0) goto LAB_03ea5d0c;
      pvVar21 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar14 << 3,8);
    }
    if (pvVar21 != (void *)0x0) {
      *(int *)(param_1 + 9) = (int)uVar14;
      param_1[10] = pvVar21;
    }
  }
LAB_03ea5d0c:
  lVar15 = *plVar7;
  uVar14 = (ulong)uVar6;
  if (lVar15 == 0) {
    pvVar21 = malloc(uVar14);
  }
  else {
    lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar8 + 0x68));
    plVar22 = (long *)(lVar15 + 8);
    if (lVar24 != 0) {
      plVar22 = (long *)(lVar24 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 == (long *)0x0) {
      pvVar21 = (void *)0x0;
    }
    else {
      pvVar21 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar14,8);
    }
  }
  memset(pvVar21,0,uVar14);
  if (uVar9 != 0) {
    uVar20 = 0;
    uVar19 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    do {
      lVar15 = (long)pvVar21 + (ulong)uVar19;
      local_280 = uVar6 - uVar19;
      local_290 = &PTR_LAB_048f96d0;
      if (local_280 < 1) {
        local_288 = (char *)0x0;
        local_280 = 0;
      }
      else {
        *(undefined1 *)(lVar15 + (ulong)(local_280 - 1)) = 0;
        local_288 = (char *)lVar15;
      }
      plVar22 = (long *)param_1[5];
      uVar10 = (**(code **)(*plVar22 + 0x78))(plVar22,uVar20);
      local_70 = (undefined1 *)(**(code **)(*plVar22 + 0x18))(plVar22,uVar10);
      pcVar13 = local_288;
      local_78 = ppuVar1;
      (*(code *)local_290[3])(&local_290);
      lVar24 = 0;
      do {
        if (*(char *)((long)local_288 + lVar24) == '\0') goto LAB_03ea5ed4;
        if (*(char *)((long)local_288 + lVar24 + 1) == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_03ea5ed4;
        }
        if (*(char *)((long)local_288 + lVar24 + 2) == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_03ea5ed4;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_03ea5ed4:
      uVar23 = (uint)lVar24 & ((int)(uint)lVar24 >> 0x1f ^ 0xffffffffU);
      (*(code *)local_78[3])(&local_78);
      lVar24 = 0;
      do {
        if (*(char *)((long)local_70 + lVar24) == '\0') goto LAB_03ea5f34;
        if (*(char *)((long)local_70 + lVar24 + 1) == '\0') {
          lVar24 = lVar24 + 1;
          goto LAB_03ea5f34;
        }
        if (*(char *)((long)local_70 + lVar24 + 2) == '\0') {
          lVar24 = lVar24 + 2;
          goto LAB_03ea5f34;
        }
        lVar24 = lVar24 + 3;
      } while (lVar24 != 0x80001);
      lVar24 = 0;
LAB_03ea5f34:
      uVar4 = (uint)lVar24;
      if ((int)(local_280 - uVar23) <= (int)(uint)lVar24) {
        uVar4 = local_280 + ~uVar23;
      }
      if (0 < (int)uVar4) {
        (*(code *)local_78[3])(&local_78);
        memcpy((void *)((long)pcVar13 + (ulong)uVar23),local_70,(ulong)uVar4);
        *(undefined1 *)((long)pcVar13 + (long)(int)(uVar4 + uVar23)) = 0;
      }
      uVar23 = uVar20;
      if (*(uint *)(param_1 + 9) <= uVar20) {
        uVar23 = 0;
      }
      *(long *)(param_1[10] + (long)(int)uVar23 * 8) = lVar15;
      (*(code *)local_290[3])(&local_290);
      lVar15 = 0;
      do {
        if (*(char *)((long)local_288 + lVar15) == '\0') goto LAB_03ea5de8;
        if (*(char *)((long)local_288 + lVar15 + 1) == '\0') {
          lVar15 = lVar15 + 1;
          goto LAB_03ea5de8;
        }
        if (*(char *)((long)local_288 + lVar15 + 2) == '\0') {
          lVar15 = lVar15 + 2;
          goto LAB_03ea5de8;
        }
        lVar15 = lVar15 + 3;
      } while (lVar15 != 0x80001);
      lVar15 = 0;
LAB_03ea5de8:
      uVar19 = uVar19 + (int)lVar15 + 1;
      uVar23 = uVar20;
      if (*(uint *)(param_1 + 0xb) <= uVar20) {
        uVar23 = 0;
      }
      *(uint *)(param_1[0xc] + (long)(int)uVar23 * 4) = uVar20;
      uVar20 = uVar20 + 1;
    } while (uVar20 != uVar9);
    if (*param_6 != '\0') {
      uVar20 = 0;
      ppuVar1 = (undefined **)(PTR_DAT_04bb2030 + 0x10);
      do {
        uVar23 = 0;
        do {
          if ((uVar20 != uVar23) || (param_6[1] != '\0')) {
            lVar15 = (long)pvVar21 + (ulong)uVar19;
            local_280 = uVar6 - uVar19;
            if (local_280 < 1) {
              local_288 = (char *)0x0;
              local_280 = 0;
            }
            else {
              *(undefined1 *)(lVar15 + (ulong)(local_280 - 1)) = 0;
              local_288 = (char *)lVar15;
            }
            plVar22 = (long *)param_1[5];
            local_290 = ppuVar1;
            uVar10 = (**(code **)(*plVar22 + 0x78))(plVar22,uVar20);
            local_70 = (undefined1 *)(**(code **)(*plVar22 + 0x18))(plVar22,uVar10);
            pcVar13 = local_288;
            local_78 = &PTR_LAB_048f9770;
            (*(code *)local_290[3])(&local_290);
            lVar24 = 0;
            do {
              if (*(char *)((long)local_288 + lVar24) == '\0') goto LAB_03ea614c;
              if (*(char *)((long)local_288 + lVar24 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea614c;
              }
              if (*(char *)((long)local_288 + lVar24 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea614c;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea614c:
            uVar4 = (uint)lVar24 & ((int)(uint)lVar24 >> 0x1f ^ 0xffffffffU);
            (*(code *)local_78[3])(&local_78);
            lVar24 = 0;
            do {
              if (*(char *)((long)local_70 + lVar24) == '\0') goto LAB_03ea61ac;
              if (*(char *)((long)local_70 + lVar24 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea61ac;
              }
              if (*(char *)((long)local_70 + lVar24 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea61ac;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea61ac:
            uVar25 = (uint)lVar24;
            if ((int)(local_280 - uVar4) <= (int)(uint)lVar24) {
              uVar25 = local_280 + ~uVar4;
            }
            if (0 < (int)uVar25) {
              (*(code *)local_78[3])(&local_78);
              memcpy((void *)((long)pcVar13 + (ulong)uVar4),local_70,(ulong)uVar25);
              *(undefined1 *)((long)pcVar13 + (long)(int)(uVar25 + uVar4)) = 0;
            }
            pcVar13 = local_288;
            local_78 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_70 = &DAT_040993d8;
            (*(code *)local_290[3])(&local_290);
            lVar24 = 0;
            do {
              if (*(char *)((long)local_288 + lVar24) == '\0') goto LAB_03ea626c;
              if (*(char *)((long)local_288 + lVar24 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea626c;
              }
              if (*(char *)((long)local_288 + lVar24 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea626c;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea626c:
            uVar4 = (uint)lVar24 & ((int)(uint)lVar24 >> 0x1f ^ 0xffffffffU);
            (*(code *)local_78[3])(&local_78);
            lVar24 = 0;
            do {
              if (local_70[lVar24] == '\0') goto LAB_03ea62cc;
              if (local_70[lVar24 + 1] == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea62cc;
              }
              if (local_70[lVar24 + 2] == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea62cc;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea62cc:
            uVar25 = (uint)lVar24;
            if ((int)(local_280 - uVar4) <= (int)(uint)lVar24) {
              uVar25 = local_280 + ~uVar4;
            }
            if (0 < (int)uVar25) {
              (*(code *)local_78[3])(&local_78);
              memcpy((void *)((long)pcVar13 + (ulong)uVar4),local_70,(ulong)uVar25);
              *(undefined1 *)((long)pcVar13 + (long)(int)(uVar25 + uVar4)) = 0;
            }
            plVar22 = (long *)param_1[5];
            uVar10 = (**(code **)(*plVar22 + 0x78))(plVar22,uVar23);
            local_70 = (undefined1 *)(**(code **)(*plVar22 + 0x18))(plVar22,uVar10);
            pcVar13 = local_288;
            local_78 = &PTR_LAB_048f9770;
            (*(code *)local_290[3])(&local_290);
            lVar24 = 0;
            do {
              if (*(char *)((long)local_288 + lVar24) == '\0') goto LAB_03ea63ac;
              if (*(char *)((long)local_288 + lVar24 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea63ac;
              }
              if (*(char *)((long)local_288 + lVar24 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea63ac;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea63ac:
            uVar4 = (uint)lVar24 & ((int)(uint)lVar24 >> 0x1f ^ 0xffffffffU);
            (*(code *)local_78[3])(&local_78);
            lVar24 = 0;
            do {
              if (*(char *)((long)local_70 + lVar24) == '\0') goto LAB_03ea640c;
              if (*(char *)((long)local_70 + lVar24 + 1) == '\0') {
                lVar24 = lVar24 + 1;
                goto LAB_03ea640c;
              }
              if (*(char *)((long)local_70 + lVar24 + 2) == '\0') {
                lVar24 = lVar24 + 2;
                goto LAB_03ea640c;
              }
              lVar24 = lVar24 + 3;
            } while (lVar24 != 0x80001);
            lVar24 = 0;
LAB_03ea640c:
            uVar25 = (uint)lVar24;
            if ((int)(local_280 - uVar4) <= (int)(uint)lVar24) {
              uVar25 = local_280 + ~uVar4;
            }
            if (0 < (int)uVar25) {
              (*(code *)local_78[3])(&local_78);
              memcpy((void *)((long)pcVar13 + (ulong)uVar4),local_70,(ulong)uVar25);
              *(undefined1 *)((long)pcVar13 + (long)(int)(uVar25 + uVar4)) = 0;
            }
            uVar25 = (uint)uVar18;
            uVar4 = uVar25;
            if (*(uint *)(param_1 + 9) <= uVar25) {
              uVar4 = 0;
            }
            *(long *)(param_1[10] + (long)(int)uVar4 * 8) = lVar15;
            (*(code *)local_290[3])(&local_290);
            lVar15 = 0;
            do {
              if (*(char *)((long)local_288 + lVar15) == '\0') goto LAB_03ea6048;
              if (*(char *)((long)local_288 + lVar15 + 1) == '\0') {
                lVar15 = lVar15 + 1;
                goto LAB_03ea6048;
              }
              if (*(char *)((long)local_288 + lVar15 + 2) == '\0') {
                lVar15 = lVar15 + 2;
                goto LAB_03ea6048;
              }
              lVar15 = lVar15 + 3;
            } while (lVar15 != 0x80001);
            lVar15 = 0;
LAB_03ea6048:
            uVar19 = uVar19 + (int)lVar15 + 1;
            lVar15 = (long)(int)(uVar20 + *(uint *)(param_1 + 0xd) * uVar23);
            if (*(uint *)((long)param_1 + 0x6c) <= uVar23 || *(uint *)(param_1 + 0xd) <= uVar20) {
              lVar15 = 0;
            }
            *(uint *)(param_1[0xe] + lVar15 * 4) = uVar25;
            uVar18 = (ulong)(uVar25 + 1);
          }
          uVar23 = uVar23 + 1;
        } while (uVar23 != uVar9);
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar9);
    }
  }
  return;
}

