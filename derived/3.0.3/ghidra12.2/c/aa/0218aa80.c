
long FUN_0218aa80(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *__dest;
  long *plVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined **local_78;
  undefined1 *local_70;
  int local_68;
  undefined1 local_64 [15];
  undefined1 local_55;
  
  local_68 = 0x10;
  local_55 = 0;
  local_78 = &PTR_LAB_04904ac8;
  local_70 = local_64;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar9 = (undefined1 *)param_2[1];
  if (local_64 != puVar9) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0218ab40;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0218ab40;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0218ab40;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0218ab40:
    iVar2 = (int)lVar5;
    if (local_68 <= (int)lVar5) {
      iVar2 = local_68 + -1;
    }
    memcpy(local_64,puVar9,(long)iVar2);
    local_64[iVar2] = 0;
  }
  uVar10 = 0;
  lVar5 = param_1 + 8;
  local_78 = (undefined **)(PTR_DAT_04bb2ab0 + 0x10);
  iVar2 = 3;
  if (local_68 < 4) {
    iVar2 = local_68 + -1;
  }
  local_70[iVar2] = 0;
  do {
    plVar8 = (long *)(lVar5 + uVar10 * 0x38);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    (**(code **)(*plVar8 + 0x18))(plVar8);
    puVar9 = (undefined1 *)plVar8[1];
    (*(code *)local_78[3])(&local_78);
    if (puVar9 == local_70) {
LAB_0218ac6c:
      if (-1 < (int)(uint)uVar10) {
        lVar1 = lVar5 + (uVar10 & 0xffffffff) * 0x38;
        if (0x7f < (uint)uVar10) {
          lVar1 = lVar5;
        }
        return lVar1 + 0x28;
      }
      break;
    }
    uVar7 = 0;
    bVar4 = true;
    do {
      lVar1 = plVar8[1] + 2 + uVar7;
      cVar3 = *(char *)(lVar1 + -2);
      if (cVar3 != local_70[uVar7]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_0218ac6c;
        break;
      }
      cVar3 = *(char *)(lVar1 + -1);
      if (cVar3 != local_70[uVar7 + 1]) break;
      if (cVar3 == '\0') goto LAB_0218ac6c;
      cVar3 = *(char *)(plVar8[1] + 2 + uVar7);
      if (cVar3 != local_70[uVar7 + 2]) break;
      if (cVar3 == '\0') goto LAB_0218ac6c;
      bVar4 = uVar7 < 0x7fffe;
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x80);
  uVar10 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x48);
  while (*(char *)puVar6[-7] != '\0') {
    if (*(char *)*puVar6 == '\0') {
      uVar10 = uVar10 + 1;
      break;
    }
    uVar10 = uVar10 + 2;
    puVar6 = puVar6 + 0xe;
    if (uVar10 == 0x80) {
      return 0;
    }
  }
  if ((int)(uint)uVar10 < 0) {
    return 0;
  }
  lVar1 = lVar5 + (uVar10 & 0xffffffff) * 0x38;
  if (0x7f < (uint)uVar10) {
    lVar1 = lVar5;
  }
  __dest = *(undefined1 **)(lVar1 + 8);
  (*(code *)local_78[3])(&local_78);
  puVar9 = local_70;
  if (__dest != local_70) {
    (*(code *)local_78[3])(&local_78);
    lVar5 = 0;
    do {
      if (local_70[lVar5] == '\0') goto LAB_0218ad58;
      if (local_70[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0218ad58;
      }
      if (local_70[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0218ad58;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0218ad58:
    iVar2 = (int)lVar5;
    if (*(int *)(lVar1 + 0x10) <= (int)lVar5) {
      iVar2 = *(int *)(lVar1 + 0x10) + -1;
    }
    memcpy(__dest,puVar9,(long)iVar2);
    __dest[iVar2] = 0;
  }
  return lVar1 + 0x28;
}

