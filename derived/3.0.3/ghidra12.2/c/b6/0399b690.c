
long * FUN_0399b690(undefined8 param_1,long param_2,long param_3,uint param_4,void *param_5,
                   long *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  bool bVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  void *pvVar9;
  char *pcVar10;
  int iVar11;
  byte *pbVar12;
  void *__src;
  long lVar13;
  byte bVar14;
  char cVar15;
  long lVar16;
  byte *pbVar17;
  ulong uVar18;
  char *pcVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  byte *pbVar24;
  int iVar25;
  ulong uVar26;
  ulong local_498;
  undefined *local_490;
  byte *local_488;
  undefined *local_480;
  byte *local_478;
  undefined4 local_470;
  byte local_46c [1023];
  undefined1 local_6d;
  
  if ((0 < (int)param_4) && (param_5 != (void *)0x0)) {
    memset(param_5,0,(ulong)param_4);
  }
  lVar23 = *(long *)PTR_DAT_04bb2698;
  if (lVar23 == 0) {
    plVar7 = malloc(0x18);
  }
  else {
    plVar7 = param_6;
    if (param_6 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar23 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x18,8);
  }
  FUN_038f1770(plVar7,param_6,param_1,8);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  local_498 = 0;
  do {
    if (*(char *)(plVar7[1] + local_498) == '\0') {
LAB_0399b7bc:
      local_498 = local_498 & 0xffffffff;
      goto LAB_0399b7c0;
    }
    lVar23 = plVar7[1] + local_498;
    if (*(char *)(lVar23 + 1) == '\0') {
      local_498 = local_498 + 1;
      goto LAB_0399b7bc;
    }
    if (*(char *)(lVar23 + 2) == '\0') {
      local_498 = local_498 + 2;
      goto LAB_0399b7bc;
    }
    local_498 = local_498 + 3;
  } while (local_498 != 0x80001);
  local_498 = 0;
LAB_0399b7c0:
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pbVar12 = (byte *)plVar7[1];
  bVar14 = *pbVar12;
  if (bVar14 == 0) {
    return plVar7;
  }
  puVar1 = PTR_DAT_04bb2f40 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bc9388 + 0x10;
LAB_0399b838:
  lVar23 = (long)pbVar12 << 0x20;
  uVar26 = (ulong)pbVar12 & 0xffffffff;
  pbVar17 = pbVar12;
  pbVar24 = pbVar12;
  while( true ) {
    pbVar24 = pbVar24 + 1;
    iVar25 = (int)uVar26;
    if (bVar14 == 0x23) break;
    pbVar17 = pbVar17 + 1;
    bVar14 = *pbVar17;
    lVar23 = lVar23 + 0x100000000;
    uVar26 = (ulong)(iVar25 + 1);
    if (bVar14 == 0) {
      return plVar7;
    }
  }
  for (; bVar14 = *pbVar24, bVar14 < 0x21 && (1L << ((ulong)bVar14 & 0x3f) & 0x100002600U) != 0;
      pbVar24 = pbVar24 + 1) {
  }
  pbVar17 = (byte *)0x0;
  if (bVar14 != 0) {
    pbVar17 = pbVar24;
  }
  if (((((*pbVar17 == 0x69) && (pbVar17[1] == 0x6e)) && (pbVar17[2] == 99)) &&
      ((pbVar17[3] == 0x6c && (pbVar17[4] == 0x75)))) &&
     ((pbVar17[5] == 100 && (pbVar17[6] == 0x65)))) {
    bVar14 = pbVar17[7];
    if (bVar14 != 0) {
      lVar6 = 0;
      lVar16 = ((long)pbVar17 << 0x20) + 0x900000000;
      iVar21 = (int)pbVar17 + 9;
      do {
        if (bVar14 == 0x22) {
          pbVar24 = pbVar17 + lVar6 + 8;
          bVar14 = *pbVar24;
          if (bVar14 == 0) goto LAB_0399b964;
          uVar26 = 0;
          goto LAB_0399b948;
        }
        bVar14 = pbVar17[lVar6 + 8];
        lVar6 = lVar6 + 1;
        lVar16 = lVar16 + 0x100000000;
        iVar21 = iVar21 + 1;
      } while (bVar14 != 0);
    }
    pbVar24 = pbVar12;
  }
  goto LAB_0399bec4;
  while( true ) {
    bVar14 = pbVar17[uVar26 + lVar6 + 9];
    uVar26 = uVar26 + 1;
    lVar16 = lVar16 + 0x100000000;
    iVar21 = iVar21 + 1;
    if (bVar14 == 0) break;
LAB_0399b948:
    if (bVar14 == 0x22) {
      local_470 = 0x400;
      local_6d = 0;
      local_46c[0] = 0;
      local_480 = puVar1;
      local_478 = local_46c;
      if (pbVar24 == local_46c) goto LAB_0399b9e0;
      if (0 < (int)uVar26 + 1) {
        uVar26 = uVar26 & 0xffffffff;
        goto LAB_0399b9b4;
      }
      uVar26 = 0;
      goto LAB_0399bb5c;
    }
  }
LAB_0399b964:
  pbVar24 = pbVar12;
  goto LAB_0399bec4;
  while( true ) {
    if (pbVar17[lVar13 + -1] == 0) {
      uVar26 = uVar26 + 1;
      goto LAB_0399b9b4;
    }
    if (pbVar17[uVar26 + lVar6 + 10] == 0) {
      uVar26 = uVar26 + 2;
      goto LAB_0399b9b4;
    }
    uVar26 = uVar26 + 3;
    if (uVar26 == 0x80001) break;
LAB_0399bb5c:
    lVar13 = uVar26 + lVar6 + 10;
    if (pbVar17[lVar13 + -2] == 0) goto LAB_0399b9b4;
  }
  iVar11 = 0;
LAB_0399b9c0:
  memcpy(local_46c,pbVar24,(long)iVar11);
  local_46c[iVar11] = 0;
LAB_0399b9e0:
  if ((int)param_4 < 1) {
    return plVar7;
  }
  uVar26 = 0;
  while( true ) {
    local_488 = *(byte **)(param_2 + uVar26 * 8);
    local_490 = puVar2;
    (**(code **)(local_480 + 0x18))(&local_480);
    (**(code **)(local_480 + 0x18))(&local_480);
    pbVar12 = local_478;
    (**(code **)(local_490 + 0x18))(&local_490);
    if (pbVar12 == local_488) break;
    uVar18 = 0;
    bVar5 = true;
    do {
      if (local_478[uVar18] != local_488[uVar18]) break;
      if (local_478[uVar18] == 0) {
        if (bVar5) goto LAB_0399bacc;
        break;
      }
      if (local_478[uVar18 + 1] != local_488[uVar18 + 1]) break;
      if (local_478[uVar18 + 1] == 0) goto LAB_0399bacc;
      if (local_478[uVar18 + 2] != local_488[uVar18 + 2]) break;
      if (local_478[uVar18 + 2] == 0) goto LAB_0399bacc;
      bVar5 = uVar18 < 0x7fffe;
      uVar18 = uVar18 + 3;
    } while (uVar18 != 0x80001);
    uVar26 = uVar26 + 1;
    if (uVar26 == param_4) {
      return plVar7;
    }
  }
LAB_0399bacc:
  pcVar19 = *(char **)(param_3 + uVar26 * 8);
  if (param_5 != (void *)0x0) {
    *(undefined1 *)((long)param_5 + uVar26) = 1;
  }
  if (pcVar19 == (char *)0x0) {
    return plVar7;
  }
  if ((*pcVar19 == -0x11) && (pcVar19[1] == -0x45)) {
    lVar6 = 3;
    if (pcVar19[2] != -0x41) {
      lVar6 = 0;
    }
    pcVar19 = pcVar19 + lVar6;
  }
  lVar6 = 0;
  do {
    if (pcVar19[lVar6] == '\0') goto LAB_0399bb98;
    if (pcVar19[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0399bb98;
    }
    if (pcVar19[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0399bb98;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_0399bb98:
  plVar8 = (long *)FUN_038aa4a0(0x18,param_6,8);
  uVar4 = (int)lVar6 + (int)local_498;
  iVar11 = uVar4 + 1;
  pvVar9 = (void *)FUN_038aa550((long)iVar11,param_6,8);
  memset(pvVar9,0,(long)iVar11);
  plVar8[1] = (long)pvVar9;
  *(int *)(plVar8 + 2) = iVar11;
  *(undefined1 *)((long)pvVar9 + (ulong)uVar4) = 0;
  *plVar8 = (long)puVar3;
  *(undefined1 *)plVar8[1] = 0;
  pvVar9 = (void *)plVar8[1];
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = (void *)plVar7[1];
  if (pvVar9 != __src) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar6) == '\0') goto LAB_0399bc90;
      lVar13 = plVar7[1] + lVar6;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0399bc90;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0399bc90;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0399bc90:
    iVar11 = (int)lVar6;
    if ((int)plVar8[2] <= (int)lVar6) {
      iVar11 = (int)plVar8[2] + -1;
    }
    memcpy(pvVar9,__src,(long)iVar11);
    *(undefined1 *)((long)pvVar9 + (long)iVar11) = 0;
  }
  (**(code **)(*plVar7 + 0x18))(plVar7);
  lVar6 = plVar7[1];
  pcVar10 = (char *)FUN_038aa550((long)((int)local_498 + 1),param_6,8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  lVar13 = plVar8[1];
  cVar15 = *(char *)(lVar13 + (lVar16 - (lVar6 << 0x20) >> 0x20));
  iVar11 = (int)lVar6;
  if (cVar15 == '\0') {
    uVar26 = 0;
  }
  else {
    uVar18 = 0;
    do {
      pcVar10[uVar18] = cVar15;
      uVar26 = uVar18 + 1;
      cVar15 = *(char *)(lVar13 + (iVar21 - iVar11) + 1 + uVar18);
      uVar18 = uVar26;
    } while (cVar15 != '\0');
    uVar26 = uVar26 & 0xffffffff;
  }
  pcVar10[uVar26] = '\0';
  cVar15 = *pcVar19;
  if (cVar15 == '\0') {
    lVar16 = 0;
  }
  else {
    lVar22 = 0;
    do {
      *(char *)(lVar13 + (iVar25 - iVar11) + lVar22) = cVar15;
      lVar16 = lVar22 + 1;
      cVar15 = pcVar19[lVar22 + 1];
      lVar22 = lVar16;
    } while (cVar15 != '\0');
  }
  cVar15 = *pcVar10;
  if (cVar15 == '\0') {
    lVar22 = 0;
  }
  else {
    lVar20 = 0;
    do {
      *(char *)(lVar13 + lVar16 + (long)(iVar25 - iVar11) + lVar20) = cVar15;
      lVar22 = lVar20 + 1;
      cVar15 = pcVar10[lVar20 + 1];
      lVar20 = lVar22;
    } while (cVar15 != '\0');
  }
  *(undefined1 *)(lVar13 + (lVar23 - (lVar6 << 0x20) >> 0x20) + lVar16 + lVar22) = 0;
  operator_delete__(pcVar10);
  (**(code **)(*plVar7 + 8))(plVar7);
  plVar7 = (long *)FUN_038aa4a0(0x18,param_6,8);
  FUN_038f1770(plVar7,param_6,plVar8,8);
  (**(code **)(*plVar8 + 8))(plVar8);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pbVar24 = (byte *)plVar7[1];
  (**(code **)(*plVar7 + 0x18))(plVar7);
  local_498 = 0;
  do {
    if (*(char *)(plVar7[1] + local_498) == '\0') goto LAB_0399bea4;
    lVar23 = plVar7[1] + local_498;
    if (*(char *)(lVar23 + 1) == '\0') {
      local_498 = local_498 + 1;
      goto LAB_0399bea4;
    }
    if (*(char *)(lVar23 + 2) == '\0') {
      local_498 = local_498 + 2;
      goto LAB_0399bea4;
    }
    local_498 = local_498 + 3;
  } while (local_498 != 0x80001);
  local_498 = 0;
LAB_0399bea4:
LAB_0399bec4:
  pbVar12 = pbVar24;
  bVar14 = *pbVar12;
  if (bVar14 == 0) {
    return plVar7;
  }
  goto LAB_0399b838;
LAB_0399b9b4:
  iVar11 = (int)uVar26;
  if (0x3ff < iVar11) {
    iVar11 = 0x3ff;
  }
  goto LAB_0399b9c0;
}

