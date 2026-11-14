
undefined8 FUN_01d7a7f0(long *param_1,long param_2)

{
  undefined1 *__src;
  long lVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  long lVar13;
  uint uVar14;
  undefined *local_850;
  undefined *local_848;
  undefined4 local_840;
  undefined1 local_83c [255];
  undefined1 local_73d;
  undefined *local_738;
  char *local_730;
  undefined4 local_728;
  char local_724 [31];
  undefined1 local_705;
  undefined *local_5d8;
  char *local_5d0;
  undefined4 local_5c8;
  char local_5c4 [31];
  undefined1 local_5a5;
  undefined *local_478;
  undefined1 *local_470;
  int local_468;
  undefined1 local_464 [1023];
  undefined1 local_65;
  char local_44 [4];
  
  *(undefined1 *)param_1[1] = 0;
  uVar10 = FUN_01d77c78(param_2);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  uVar10 = FUN_01d77c78(param_2);
  puVar4 = PTR_DAT_04bb7bc0;
  if (((uVar10 & 1) != 0) && (*(char *)(param_2 + 0xc) == '\0')) {
    bVar8 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_2 + 0xd,param_2);
    *(byte *)(param_2 + 0xc) = bVar8 & 1;
    if ((bVar8 & 1) != 0) {
      return 0;
    }
    if (*(int *)(param_2 + 8) != 3) {
      return 0;
    }
    local_65 = 0;
    local_468 = 0x400;
    local_470 = local_464;
    local_464[0] = 0;
    local_478 = PTR_DAT_04bb2f40 + 0x10;
    uVar10 = FUN_01d77c78(param_2);
    if ((uVar10 & 1) == 0) {
      return 0;
    }
    lVar11 = FUN_01dff648(*(undefined8 *)puVar4,param_2);
    puVar6 = local_470;
    if (lVar11 == 0) {
      return 0;
    }
    lVar13 = 0;
    __src = (undefined1 *)(lVar11 + 0xc8c);
    do {
      if (__src[lVar13] == '\0') {
LAB_01d7a934:
        if ((int)lVar13 == -1) {
          return 0;
        }
        if (local_468 <= (int)lVar13) {
          return 0;
        }
        if (local_470 == __src) goto LAB_01d7a9bc;
        lVar13 = 0;
        goto LAB_01d7a960;
      }
      if (__src[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_01d7a934;
      }
      if (__src[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_01d7a934;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x300);
  }
  return 0;
  while( true ) {
    if (*(char *)(lVar1 + 0xc8d) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_01d7a99c;
    }
    if (*(char *)(lVar1 + 0xc8e) == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_01d7a99c;
    }
    lVar13 = lVar13 + 3;
    if (lVar13 == 0x80001) break;
LAB_01d7a960:
    lVar1 = lVar11 + lVar13;
    if (*(char *)(lVar1 + 0xc8c) == '\0') goto LAB_01d7a99c;
  }
  lVar13 = 0;
LAB_01d7a99c:
  iVar9 = (int)lVar13;
  if (local_468 <= (int)lVar13) {
    iVar9 = local_468 + -1;
  }
  memcpy(local_470,__src,(long)iVar9);
  puVar6[iVar9] = 0;
LAB_01d7a9bc:
  lVar13 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar11 = 0;
  do {
    if (*(char *)(param_1[1] + lVar11) == '\0') goto LAB_01d7aa10;
    lVar1 = param_1[1] + lVar11;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7aa10;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7aa10;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7aa10:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_478 + 0x18))(&local_478);
  lVar11 = 0;
  do {
    if (local_470[lVar11] == '\0') goto LAB_01d7aa68;
    if (local_470[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7aa68;
    }
    if (local_470[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7aa68;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7aa68:
  uVar14 = (uint)lVar11;
  if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar11) {
    uVar14 = (int)param_1[2] + ~uVar2;
  }
  if ((int)uVar14 < 1) {
    uVar14 = 0;
  }
  else {
    (**(code **)(local_478 + 0x18))(&local_478);
    memcpy((void *)(lVar13 + (ulong)uVar2),local_470,(ulong)uVar14);
    *(undefined1 *)(lVar13 + (int)(uVar14 + uVar2)) = 0;
  }
  (**(code **)(local_478 + 0x18))(&local_478);
  puVar4 = PTR_DAT_04bb2020;
  lVar11 = 0;
  do {
    if (local_470[lVar11] == '\0') goto LAB_01d7ab10;
    if (local_470[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7ab10;
    }
    if (local_470[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7ab10;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7ab10:
  if (uVar14 != (uint)lVar11) goto LAB_01d7ac44;
  local_5d0 = "\n";
  lVar13 = param_1[1];
  local_5d8 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar11 = 0;
  do {
    if (*(char *)(param_1[1] + lVar11) == '\0') goto LAB_01d7ab88;
    lVar1 = param_1[1] + lVar11;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7ab88;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7ab88;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7ab88:
  uVar2 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_5d8 + 0x18))(&local_5d8);
  lVar11 = 0;
  do {
    if (local_5d0[lVar11] == '\0') goto LAB_01d7abe0;
    if (local_5d0[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7abe0;
    }
    if (local_5d0[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7abe0;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7abe0:
  uVar14 = (uint)lVar11;
  if ((int)((int)param_1[2] - uVar2) <= (int)(uint)lVar11) {
    uVar14 = (int)param_1[2] + ~uVar2;
  }
  if ((int)uVar14 < 1) goto LAB_01d7ac44;
  (**(code **)(local_5d8 + 0x18))(&local_5d8);
  memcpy((void *)(lVar13 + (ulong)uVar2),local_5d0,(ulong)uVar14);
  *(undefined1 *)(lVar13 + (int)(uVar14 + uVar2)) = 0;
  if ((uVar14 != 1) ||
     (iVar9 = FUN_01d78784(param_2,local_44), puVar5 = PTR_DAT_04bb2028, iVar9 != 0))
  goto LAB_01d7ac44;
  if (local_44[0] == '\0') {
    local_5a5 = 0;
    local_5c8 = 0x20;
    local_728 = 0x20;
    local_5d0 = local_5c4;
    local_730 = local_724;
    local_5c4[0] = '\0';
    local_705 = 0;
    local_738 = PTR_DAT_04bb2028 + 0x10;
    local_724[0] = '\0';
    local_5d8 = local_738;
    iVar9 = FUN_01d79ec0(param_2,&local_5d8,&local_738);
    if (iVar9 != 0) goto LAB_01d7ac44;
    cVar3 = *local_5d0;
    bVar7 = cVar3 != '\0';
    if ((cVar3 != '\0') && (uVar10 = FUN_01d7aed0(param_1,&local_5d8,0), (uVar10 & 1) == 0))
    goto LAB_01d7ac44;
    if (*local_730 != '\0') {
      bVar7 = cVar3 != '\0';
      ppuVar12 = &local_738;
      goto LAB_01d7ada0;
    }
  }
  else {
    local_5a5 = 0;
    local_5c8 = 0x20;
    local_5d0 = local_5c4;
    local_5c4[0] = '\0';
    local_5d8 = PTR_DAT_04bb2028 + 0x10;
    iVar9 = FUN_01d7908c(param_2,&local_5d8,&local_738);
    if ((iVar9 != 0) || (uVar10 = FUN_01d7aed0(param_1,&local_5d8,0), (uVar10 & 1) == 0))
    goto LAB_01d7ac44;
    local_5d0 = local_5c4;
    local_5a5 = 0;
    local_5c8 = 0x20;
    local_5d8 = puVar5 + 0x10;
    local_5c4[0] = '\0';
    iVar9 = FUN_01d79890(param_2,&local_5d8,&local_738);
    if (iVar9 != 0) goto LAB_01d7ac44;
    if (*local_5d0 != '\0') {
      ppuVar12 = &local_5d8;
      bVar7 = true;
LAB_01d7ada0:
      uVar10 = FUN_01d7aed0(param_1,ppuVar12,bVar7);
      if ((uVar10 & 1) == 0) goto LAB_01d7ac44;
    }
    bVar7 = true;
  }
  FUN_00d5a868(&local_5d8);
  local_850 = puVar4 + 0x10;
  local_730 = "STR_Common";
  local_848 = &DAT_04067e0f;
  local_738 = local_850;
  FUN_006f50a0(&local_5d8,&local_738,&local_850,0);
  FUN_00d5a868(&local_738);
  uVar10 = FUN_01c08708(&local_738,&local_5d8);
  if ((uVar10 & 1) != 0) {
    local_73d = 0;
    local_848 = local_83c;
    local_840 = 0x100;
    local_83c[0] = 0;
    local_850 = PTR_DAT_04bb21f8 + 0x10;
    FUN_006f4bf4(&local_738,&local_850,0);
    if (((!bVar7) || (iVar9 = FUN_01d7b2c0(param_1,0x20), iVar9 != 0)) &&
       (iVar9 = FUN_01d7b2c0(param_1,0x23), iVar9 != 0)) {
      iVar9 = FUN_00958800(param_1,&local_850,0xffffffff);
      (**(code **)(local_850 + 0x18))(&local_850);
      lVar11 = 0;
      do {
        if (local_848[lVar11] == '\0') goto LAB_01d7aec0;
        if (local_848[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01d7aec0;
        }
        if (local_848[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01d7aec0;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01d7aec0:
      if (iVar9 == (int)lVar11) {
        return 1;
      }
    }
  }
LAB_01d7ac44:
  *(undefined1 *)param_1[1] = 0;
  return 0;
}

