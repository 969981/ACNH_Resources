
void FUN_03963e90(undefined8 *param_1,int param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint *local_a0;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_65 = 0;
  local_88 = 0x20;
  puVar9 = (uint *)*param_1;
  local_84[0] = 0;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  local_90 = local_84;
  if (param_3 != (long *)0x0) {
    for (lVar6 = *param_3; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      while (*puVar9 < *(uint *)(lVar6 + 0x20)) {
        lVar6 = *(long *)(lVar6 + 8);
        if (lVar6 == 0) goto LAB_03963f28;
      }
      if (*puVar9 <= *(uint *)(lVar6 + 0x20)) {
        puVar4 = *(undefined1 **)(lVar6 + 0x28);
        if (local_84 == puVar4) goto LAB_03963f3c;
        lVar6 = 0;
        goto LAB_039641e0;
      }
    }
  }
LAB_03963f28:
  FUN_038d1270(&local_98,"0x%08x");
  puVar9 = (uint *)*param_1;
  goto LAB_03963f3c;
  while( true ) {
    if (puVar4[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0396421c;
    }
    if (puVar4[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0396421c;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_039641e0:
    if (puVar4[lVar6] == '\0') {
LAB_0396421c:
      iVar5 = (int)lVar6;
      if (0x1f < iVar5) {
        iVar5 = 0x1f;
      }
      goto LAB_03964228;
    }
  }
  iVar5 = 0;
LAB_03964228:
  memcpy(local_84,puVar4,(long)iVar5);
  local_84[iVar5] = 0;
LAB_03963f3c:
  uVar1 = puVar9[1];
  if (0xffff < uVar1) {
    uVar7 = uVar1 >> 0x10;
    puVar9 = puVar9 + ((ulong)uVar1 & 0xffff);
    do {
      local_a0 = puVar9;
      FUN_03963e90(&local_a0,param_2 + 1,param_3);
      puVar9 = puVar9 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
    puVar9 = (uint *)*param_1;
  }
  uVar1 = puVar9[2];
  if (uVar1 < 0x10000) {
    return;
  }
  uVar7 = 0;
  puVar9 = puVar9 + ((ulong)uVar1 & 0xffff);
LAB_03963ff4:
  puVar4 = local_90;
  if (param_3 != (long *)0x0) {
    for (lVar6 = *param_3; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
      while (*puVar9 < *(uint *)(lVar6 + 0x20)) {
        lVar6 = *(long *)(lVar6 + 8);
        if (lVar6 == 0) goto LAB_03964040;
      }
      if (*puVar9 <= *(uint *)(lVar6 + 0x20)) {
        puVar3 = *(undefined1 **)(lVar6 + 0x28);
        if (local_90 == puVar3) goto LAB_0396404c;
        lVar6 = 0;
        goto LAB_03964160;
      }
    }
  }
LAB_03964040:
  FUN_038d1270(&local_98,"0x%08x");
  goto LAB_0396404c;
  while( true ) {
    if (puVar3[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0396419c;
    }
    if (puVar3[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0396419c;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_03964160:
    if (puVar3[lVar6] == '\0') goto LAB_0396419c;
  }
  lVar6 = 0;
LAB_0396419c:
  iVar5 = (int)lVar6;
  if (local_88 <= (int)lVar6) {
    iVar5 = local_88 + -1;
  }
  memcpy(local_90,puVar3,(long)iVar5);
  puVar4[iVar5] = 0;
LAB_0396404c:
  uVar2 = puVar9[1];
  if (0xffff < uVar2) {
    uVar10 = 0;
    puVar8 = puVar9 + ((ulong)uVar2 & 0xffff);
LAB_0396408c:
    puVar4 = local_90;
    if (param_3 != (long *)0x0) {
      for (lVar6 = *param_3; lVar6 != 0; lVar6 = *(long *)(lVar6 + 0x10)) {
        while (*puVar8 < *(uint *)(lVar6 + 0x20)) {
          lVar6 = *(long *)(lVar6 + 8);
          if (lVar6 == 0) goto LAB_03964070;
        }
        if (*puVar8 <= *(uint *)(lVar6 + 0x20)) {
          puVar3 = *(undefined1 **)(lVar6 + 0x28);
          if (local_90 == puVar3) goto LAB_0396407c;
          lVar6 = 0;
          goto LAB_039640e0;
        }
      }
    }
LAB_03964070:
    FUN_038d1270(&local_98,"0x%08x");
    goto LAB_0396407c;
  }
LAB_03963fe0:
  uVar7 = uVar7 + 1;
  puVar9 = puVar9 + 2;
  if (uVar1 >> 0x10 == uVar7) {
    return;
  }
  goto LAB_03963ff4;
  while( true ) {
    if (puVar3[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_0396411c;
    }
    if (puVar3[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_0396411c;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_039640e0:
    if (puVar3[lVar6] == '\0') goto LAB_0396411c;
  }
  lVar6 = 0;
LAB_0396411c:
  iVar5 = (int)lVar6;
  if (local_88 <= (int)lVar6) {
    iVar5 = local_88 + -1;
  }
  memcpy(local_90,puVar3,(long)iVar5);
  puVar4[iVar5] = 0;
LAB_0396407c:
  uVar10 = uVar10 + 1;
  puVar8 = puVar8 + 2;
  if (uVar2 >> 0x10 == uVar10) goto LAB_03963fe0;
  goto LAB_0396408c;
}

