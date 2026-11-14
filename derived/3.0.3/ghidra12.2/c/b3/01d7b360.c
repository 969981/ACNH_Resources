
undefined8 FUN_01d7b360(long *param_1)

{
  undefined1 *__src;
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  char cVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  undefined *local_858;
  undefined *local_850;
  undefined4 local_848;
  undefined1 local_844 [255];
  undefined1 local_745;
  undefined *local_740;
  char *local_738;
  undefined4 local_730;
  char local_72c [4];
  undefined8 local_728;
  undefined8 uStack_720;
  undefined4 local_718;
  undefined *local_710;
  undefined1 *puStack_708;
  undefined4 local_700;
  undefined1 local_6fc [63];
  undefined1 local_6bd;
  undefined *local_6b8;
  undefined1 *puStack_6b0;
  undefined4 local_6a8;
  undefined1 local_6a4 [63];
  undefined1 local_665;
  undefined1 local_660 [8];
  undefined8 local_658;
  undefined8 local_650;
  undefined8 local_648;
  undefined8 local_640;
  undefined8 local_638;
  undefined8 local_630;
  undefined8 local_628;
  undefined8 local_620;
  undefined8 local_618;
  undefined8 local_610;
  undefined8 local_608;
  undefined8 local_600;
  undefined8 local_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined *local_5e0;
  char *local_5d8;
  undefined4 local_5d0;
  char local_5cc [4];
  undefined8 local_5c8;
  undefined8 local_5c0;
  undefined4 local_5b8;
  undefined *local_5b0;
  undefined1 *local_5a8;
  undefined4 local_5a0;
  undefined1 local_59c [63];
  undefined1 local_55d;
  undefined *local_558;
  undefined1 *local_550;
  undefined4 local_548;
  undefined1 local_544 [63];
  undefined1 local_505;
  undefined1 local_500 [8];
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  undefined8 local_4e0;
  undefined8 local_4d8;
  undefined8 local_4d0;
  undefined8 local_4c8;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined8 local_498;
  undefined8 local_490;
  undefined8 local_488;
  undefined *local_480;
  undefined1 *local_478;
  undefined4 local_470;
  undefined1 local_46c [1023];
  undefined1 local_6d;
  
  *(undefined1 *)param_1[1] = 0;
  puVar1 = PTR_DAT_04bb7bc0;
  local_470 = 0x400;
  local_6d = 0;
  local_480 = PTR_DAT_04bb2f40 + 0x10;
  local_46c[0] = 0;
  lVar11 = *(long *)PTR_DAT_04bb7bc0;
  if (*(long *)(lVar11 + 0x2f8) != 0) {
    __src = (undefined1 *)(lVar11 + 0x300);
    lVar12 = 1;
    do {
      if (__src[lVar12 + -1] == '\0') {
        lVar12 = lVar12 + -1;
LAB_01d7b410:
        if ((int)lVar12 == -1) {
          return 0;
        }
        if (0x3ff < (int)lVar12) {
          return 0;
        }
        local_478 = local_46c;
        if (local_46c == __src) goto LAB_01d7b49c;
        lVar12 = 0;
        goto LAB_01d7b440;
      }
      if (__src[lVar12] == '\0') goto LAB_01d7b410;
      if (__src[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01d7b410;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x301);
  }
  return 0;
  while( true ) {
    if (*(char *)(lVar3 + 0x301) == '\0') {
      lVar12 = lVar12 + 1;
      goto LAB_01d7b47c;
    }
    if (*(char *)(lVar3 + 0x302) == '\0') {
      lVar12 = lVar12 + 2;
      goto LAB_01d7b47c;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_01d7b440:
    lVar3 = lVar11 + lVar12;
    if (*(char *)(lVar3 + 0x300) == '\0') {
LAB_01d7b47c:
      iVar8 = (int)lVar12;
      if (0x3ff < iVar8) {
        iVar8 = 0x3ff;
      }
      goto LAB_01d7b488;
    }
  }
  iVar8 = 0;
LAB_01d7b488:
  memcpy(local_46c,__src,(long)iVar8);
  local_46c[iVar8] = 0;
LAB_01d7b49c:
  lVar12 = param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar11 = 0;
  do {
    if (*(char *)(param_1[1] + lVar11) == '\0') goto LAB_01d7b4f0;
    lVar3 = param_1[1] + lVar11;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7b4f0;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7b4f0;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7b4f0:
  uVar10 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_480 + 0x18))(&local_480);
  lVar11 = 0;
  do {
    if (local_478[lVar11] == '\0') goto LAB_01d7b54c;
    if (local_478[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7b54c;
    }
    if (local_478[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7b54c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7b54c:
  uVar13 = (uint)lVar11;
  if ((int)((int)param_1[2] - uVar10) <= (int)(uint)lVar11) {
    uVar13 = (int)param_1[2] + ~uVar10;
  }
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  else {
    (**(code **)(local_480 + 0x18))(&local_480);
    memcpy((void *)(lVar12 + (ulong)uVar10),local_478,(ulong)uVar13);
    *(undefined1 *)(lVar12 + (int)(uVar13 + uVar10)) = 0;
  }
  (**(code **)(local_480 + 0x18))(&local_480);
  puVar6 = PTR_DAT_04bb2020;
  lVar11 = 0;
  do {
    if (local_478[lVar11] == '\0') {
LAB_01d7b5fc:
      uVar10 = (uint)lVar11;
joined_r0x01d7b600:
      if (uVar13 != uVar10) goto LAB_01d7bb4c;
      goto LAB_01d7b604;
    }
    if (local_478[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7b5fc;
    }
    if (local_478[lVar11 + 2] == '\0') {
      uVar10 = (int)lVar11 + 2;
      goto joined_r0x01d7b600;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  if (uVar13 != 0) goto LAB_01d7bb4c;
LAB_01d7b604:
  local_5d8 = "\n";
  lVar12 = param_1[1];
  local_5e0 = PTR_DAT_04bb2020 + 0x10;
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar11 = 0;
  do {
    if (*(char *)(param_1[1] + lVar11) == '\0') goto LAB_01d7b68c;
    lVar3 = param_1[1] + lVar11;
    if (*(char *)(lVar3 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7b68c;
    }
    if (*(char *)(lVar3 + 2) == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7b68c;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7b68c:
  uVar10 = (uint)lVar11 & ((int)(uint)lVar11 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_5e0 + 0x18))(&local_5e0);
  lVar11 = 0;
  do {
    if (local_5d8[lVar11] == '\0') goto LAB_01d7b6ec;
    if (local_5d8[lVar11 + 1] == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_01d7b6ec;
    }
    if (local_5d8[lVar11 + 2] == '\0') {
      lVar11 = lVar11 + 2;
      goto LAB_01d7b6ec;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  lVar11 = 0;
LAB_01d7b6ec:
  uVar13 = (uint)lVar11;
  if ((int)((int)param_1[2] - uVar10) <= (int)(uint)lVar11) {
    uVar13 = (int)param_1[2] + ~uVar10;
  }
  if ((int)uVar13 < 1) goto LAB_01d7bb4c;
  (**(code **)(local_5e0 + 0x18))(&local_5e0);
  memcpy((void *)(lVar12 + (ulong)uVar10),local_5d8,(ulong)uVar13);
  *(undefined1 *)(lVar12 + (int)(uVar13 + uVar10)) = 0;
  puVar2 = PTR_DAT_04bb2028;
  if ((uVar13 != 1) || (lVar11 = *(long *)(*(long *)puVar1 + 0x600), lVar11 == 0))
  goto LAB_01d7bb4c;
  if (*(char *)(lVar11 + 0x2c) == '\0') {
    local_5b0._0_4_ = (uint)(uint3)local_5b0;
    local_5d0 = 0x20;
    local_5d8 = local_5cc;
    local_5cc[0] = '\0';
    local_5e0 = PTR_DAT_04bb2028 + 0x10;
    uVar9 = FUN_01d7bb80(&local_5e0,*(undefined4 *)(lVar11 + 0x10),*(undefined4 *)(lVar11 + 0x14));
    if (((uVar9 & 1) == 0) || (uVar9 = FUN_01d7aed0(param_1,&local_5e0,0), (uVar9 & 1) == 0))
    goto LAB_01d7bb4c;
    if (*(int *)(lVar11 + 0x28) < 2) {
LAB_01d7b8a8:
      bVar7 = true;
    }
    else {
      local_5b0._0_4_ = (uint)(uint3)local_5b0;
      local_5d8 = local_5cc;
      local_5d0 = 0x20;
      local_5e0 = puVar2 + 0x10;
      local_5cc[0] = '\0';
      uVar9 = FUN_01d7bb80(&local_5e0,*(undefined4 *)(lVar11 + 0x1c),*(undefined4 *)(lVar11 + 0x20))
      ;
      if ((uVar9 & 1) == 0) goto LAB_01d7bb4c;
      bVar7 = true;
      uVar9 = FUN_01d7aed0(param_1,&local_5e0,1);
      if ((uVar9 & 1) == 0) goto LAB_01d7bb4c;
    }
  }
  else {
    local_5b0._0_4_ = (uint)(uint3)local_5b0;
    local_5d0 = 0x20;
    local_730 = 0x20;
    local_5d8 = local_5cc;
    local_738 = local_72c;
    local_5cc[0] = '\0';
    local_710._0_4_ = (uint)(uint3)local_710;
    local_740 = PTR_DAT_04bb2028 + 0x10;
    local_72c[0] = '\0';
    local_5e0 = local_740;
    uVar9 = FUN_01d77650(&local_5e0,&local_740,lVar11);
    if ((uVar9 & 1) == 0) goto LAB_01d7bb4c;
    cVar5 = *local_5d8;
    bVar7 = cVar5 != '\0';
    if ((cVar5 != '\0') && (uVar9 = FUN_01d7aed0(param_1,&local_5e0,0), (uVar9 & 1) == 0))
    goto LAB_01d7bb4c;
    if (*local_738 != '\0') {
      uVar9 = FUN_01d7aed0(param_1,&local_740,cVar5 != '\0');
      if ((uVar9 & 1) == 0) goto LAB_01d7bb4c;
      goto LAB_01d7b8a8;
    }
  }
  local_5cc[0] = '\0';
  local_5d0 = 0x40;
  local_5c8 = 0xffffffff;
  local_5a8 = local_59c;
  local_5c0 = 0xffffffff00000000;
  local_5d8 = local_500;
  local_5b8 = 0xffffffff;
  local_5a0 = 0x40;
  local_55d = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_550 = local_544;
  local_59c[0] = 0;
  local_548 = 0x40;
  local_505 = 0;
  local_544[0] = 0;
  puVar2 = PTR_DAT_04bb6b18 + 0x10;
  ppuVar4 = &local_480;
  if (&local_480 <= local_500 + 2) {
    ppuVar4 = (undefined **)(local_500 + 2);
  }
  local_488 = 0;
  local_490 = 0;
  local_498 = 0;
  local_4a0 = 0;
  local_4a8 = 0;
  local_4b0 = 0;
  local_4b8 = 0;
  local_4c0 = 0;
  local_4c8 = 0;
  local_4d0 = 0;
  local_4d8 = 0;
  local_4e0 = 0;
  local_4e8 = 0;
  local_4f0 = 0;
  local_4f8 = 0;
  local_500 = (undefined1  [8])0x0;
  local_5e0 = puVar2;
  local_5b0 = puVar1;
  local_558 = puVar1;
  memset(local_5d8,0,(size_t)((long)ppuVar4 + (-0xe0 - (long)&local_5e0)));
  local_858 = puVar6 + 0x10;
  local_738 = "STR_Common";
  local_850 = &DAT_04067e0f;
  local_740 = local_858;
  FUN_006f50a0(&local_5e0,&local_740,&local_858,0);
  puStack_708 = local_6fc;
  local_730 = 0x40;
  puStack_6b0 = local_6a4;
  local_738 = local_660;
  local_72c[0] = '\0';
  local_718 = 0xffffffff;
  local_700 = 0x40;
  local_6bd = 0;
  local_6fc[0] = 0;
  local_6a8 = 0x40;
  local_665 = 0;
  local_6a4[0] = 0;
  local_5e8 = 0;
  local_5f0 = 0;
  local_5f8 = 0;
  local_600 = 0;
  local_608 = 0;
  local_610 = 0;
  local_618 = 0;
  local_620 = 0;
  local_628 = 0;
  local_630 = 0;
  local_638 = 0;
  local_640 = 0;
  local_648 = 0;
  local_650 = 0;
  local_658 = 0;
  local_660 = (undefined1  [8])0x0;
  ppuVar4 = &local_5e0;
  if (&local_5e0 <= local_660 + 2) {
    ppuVar4 = (undefined **)(local_660 + 2);
  }
  local_728 = 0xffffffff;
  uStack_720 = 0xffffffff00000000;
  local_740 = puVar2;
  local_710 = puVar1;
  local_6b8 = puVar1;
  memset(local_738,0,(size_t)((long)ppuVar4 + (-0xe0 - (long)&local_740)));
  uVar9 = FUN_01c08708(&local_740,&local_5e0);
  if ((uVar9 & 1) != 0) {
    local_745 = 0;
    local_850 = local_844;
    local_848 = 0x100;
    local_844[0] = 0;
    local_858 = PTR_DAT_04bb21f8 + 0x10;
    FUN_006f4bf4(&local_740,&local_858,0);
    if (((!bVar7) || (iVar8 = FUN_01d7b2c0(param_1,0x20), iVar8 != 0)) &&
       (iVar8 = FUN_01d7b2c0(param_1,0x23), iVar8 != 0)) {
      iVar8 = FUN_00958800(param_1,&local_858,0xffffffff);
      (**(code **)(local_858 + 0x18))(&local_858);
      lVar11 = 0;
      do {
        if (local_850[lVar11] == '\0') goto LAB_01d7bb3c;
        if (local_850[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_01d7bb3c;
        }
        if (local_850[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_01d7bb3c;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_01d7bb3c:
      if (iVar8 == (int)lVar11) {
        return 1;
      }
    }
  }
LAB_01d7bb4c:
  *(undefined1 *)param_1[1] = 0;
  return 0;
}

