
undefined8 FUN_03d712c0(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *local_70;
  char *local_68;
  
  uVar2 = *(uint *)(param_1 + 0x2b0);
  if ((int)uVar2 < 1) {
    return 0;
  }
  uVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_03d71334:
  if (uVar13 < *(uint *)(param_1 + 0x290)) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x298) + uVar13 * 8);
  }
  else {
    lVar5 = 0;
  }
  pcVar6 = (char *)(**(code **)(*(long *)(lVar5 + 0xb8) + 0xf0))();
  if (*pcVar6 == '\0') {
    if (uVar13 < *(uint *)(param_1 + 0x290)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x298) + uVar13 * 8);
    }
    else {
      lVar5 = 0;
    }
    plVar7 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
    (**(code **)(*plVar7 + 0x18))();
    local_68 = (char *)plVar7[1];
    local_70 = puVar1;
    (**(code **)(*param_2 + 0x18))(param_2);
    (**(code **)(*param_2 + 0x18))(param_2);
    pcVar6 = (char *)param_2[1];
    (**(code **)(local_70 + 0x18))(&local_70);
    if (pcVar6 == local_68) {
LAB_03d71608:
      if ((uint)uVar13 < *(uint *)(param_1 + 0x290)) {
        return *(undefined8 *)(*(long *)(param_1 + 0x298) + (uVar13 & 0xffffffff) * 8);
      }
      return 0;
    }
    uVar12 = 0;
    bVar4 = true;
    do {
      lVar5 = param_2[1] + 2 + uVar12;
      cVar3 = *(char *)(lVar5 + -2);
      if (cVar3 != local_68[uVar12]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_03d71608;
        break;
      }
      cVar3 = *(char *)(lVar5 + -1);
      if (cVar3 != local_68[uVar12 + 1]) break;
      if (cVar3 == '\0') goto LAB_03d71608;
      cVar3 = *(char *)(param_2[1] + 2 + uVar12);
      if (cVar3 != local_68[uVar12 + 2]) break;
      if (cVar3 == '\0') goto LAB_03d71608;
      bVar4 = uVar12 < 0x7fffe;
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
  }
  else {
    if (uVar13 < *(uint *)(param_1 + 0x290)) {
      lVar5 = *(long *)(*(long *)(param_1 + 0x298) + uVar13 * 8);
    }
    else {
      lVar5 = 0;
    }
    plVar7 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
    (**(code **)(*plVar7 + 0x18))();
    local_68 = (char *)plVar7[1];
    local_70 = PTR_DAT_04bb2020 + 0x10;
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_03d71508;
      lVar9 = param_2[1] + lVar5;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d71508;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d71508;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d71508:
    (**(code **)(local_70 + 0x18))(&local_70);
    lVar9 = 0;
    do {
      iVar11 = (int)lVar5;
      if (local_68[lVar9] == '\0') {
LAB_03d71554:
        iVar8 = (int)lVar9;
        if (iVar11 < iVar8) goto LAB_03d71328;
LAB_03d7156c:
        if ((int)lVar9 < 1) goto LAB_03d715f8;
        uVar12 = 0;
        goto LAB_03d71580;
      }
      if (local_68[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03d71554;
      }
      if (local_68[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        iVar8 = (int)lVar9;
        if (iVar8 <= iVar11) goto LAB_03d7156c;
        goto LAB_03d71328;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (-1 < iVar11) {
LAB_03d715f8:
      (**(code **)(local_70 + 0x18))(&local_70);
      goto LAB_03d71608;
    }
  }
  goto LAB_03d71328;
  while( true ) {
    pcVar6 = local_68;
    lVar10 = lVar9;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (*(char *)(lVar5 + uVar12) != *pcVar6) break;
      if ((*(char *)(lVar5 + uVar12) == '\0') ||
         (lVar5 = lVar5 + 1, pcVar6 = pcVar6 + 1, lVar10 == 0)) goto LAB_03d71320;
    }
    uVar12 = uVar12 + 1;
    if (uVar12 == (iVar11 - iVar8) + 1) break;
LAB_03d71580:
    lVar5 = param_2[1];
    (**(code **)(local_70 + 0x18))(&local_70);
    if ((char *)(lVar5 + uVar12) == local_68) {
LAB_03d71320:
      if ((int)uVar12 != -1) goto LAB_03d71608;
      break;
    }
  }
LAB_03d71328:
  uVar13 = uVar13 + 1;
  if (uVar13 == uVar2) {
    return 0;
  }
  goto LAB_03d71334;
}

