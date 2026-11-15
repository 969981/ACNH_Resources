
void FUN_0218a1d0(long param_1,long *param_2,undefined2 *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *__dest;
  long *plVar7;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined **local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 local_74 [15];
  undefined1 local_65;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar4 = 0;
  do {
    if (*(char *)(param_2[1] + lVar4) == '\0') {
LAB_0218a250:
      iVar3 = (int)lVar4;
joined_r0x0218a254:
      if (0x10 < iVar3) {
        return;
      }
      break;
    }
    lVar8 = param_2[1] + lVar4;
    if (*(char *)(lVar8 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_0218a250;
    }
    if (*(char *)(lVar8 + 2) == '\0') {
      iVar3 = (int)lVar4 + 2;
      goto joined_r0x0218a254;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  local_78 = 0x10;
  local_65 = 0;
  local_88 = &PTR_LAB_04904ac8;
  local_80 = local_74;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar9 = (undefined1 *)param_2[1];
  if (local_74 != puVar9) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_0218a2fc;
      lVar8 = param_2[1] + lVar4;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0218a2fc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0218a2fc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0218a2fc:
    iVar3 = (int)lVar4;
    if (local_78 <= (int)lVar4) {
      iVar3 = local_78 + -1;
    }
    memcpy(local_74,puVar9,(long)iVar3);
    local_74[iVar3] = 0;
  }
  uVar10 = 0;
  lVar4 = param_1 + 8;
  local_88 = (undefined **)(PTR_DAT_04bb2ab0 + 0x10);
  iVar3 = 3;
  if (local_78 < 4) {
    iVar3 = local_78 + -1;
  }
  local_80[iVar3] = 0;
  do {
    plVar7 = (long *)(lVar4 + uVar10 * 0x38);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    (**(code **)(*plVar7 + 0x18))(plVar7);
    puVar9 = (undefined1 *)plVar7[1];
    (*(code *)local_88[3])(&local_88);
    if (puVar9 == local_80) {
LAB_0218a42c:
      if (-1 < (int)(uint)uVar10) {
        lVar8 = lVar4 + (uVar10 & 0xffffffff) * 0x38;
        if (0x7f < (uint)uVar10) {
          lVar8 = lVar4;
        }
        *(undefined2 *)(lVar8 + 0x30) = *param_3;
        *(undefined1 *)(lVar8 + 0x32) = *(undefined1 *)(param_3 + 1);
        *(undefined1 *)(lVar8 + 0x33) = *(undefined1 *)((long)param_3 + 3);
        __dest = *(undefined1 **)(lVar8 + 8);
        *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(param_3 + 2);
        (*(code *)local_88[3])(&local_88);
        puVar9 = local_80;
        if (__dest == local_80) {
          return;
        }
        (*(code *)local_88[3])(&local_88);
        lVar4 = 0;
        goto LAB_0218a4a0;
      }
      break;
    }
    uVar6 = 0;
    bVar2 = true;
    do {
      lVar8 = plVar7[1] + 2 + uVar6;
      cVar1 = *(char *)(lVar8 + -2);
      if (cVar1 != local_80[uVar6]) break;
      if (cVar1 == '\0') {
        if (bVar2) goto LAB_0218a42c;
        break;
      }
      cVar1 = *(char *)(lVar8 + -1);
      if (cVar1 != local_80[uVar6 + 1]) break;
      if (cVar1 == '\0') goto LAB_0218a42c;
      cVar1 = *(char *)(plVar7[1] + 2 + uVar6);
      if (cVar1 != local_80[uVar6 + 2]) break;
      if (cVar1 == '\0') goto LAB_0218a42c;
      bVar2 = uVar6 < 0x7fffe;
      uVar6 = uVar6 + 3;
    } while (uVar6 != 0x80001);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x80);
  uVar10 = 0;
  puVar5 = (undefined8 *)(param_1 + 0x48);
  while (*(char *)puVar5[-7] != '\0') {
    if (*(char *)*puVar5 == '\0') {
      uVar10 = uVar10 + 1;
      break;
    }
    uVar10 = uVar10 + 2;
    puVar5 = puVar5 + 0xe;
    if (uVar10 == 0x80) {
      return;
    }
  }
  if ((int)(uint)uVar10 < 0) {
    return;
  }
  lVar8 = lVar4 + (uVar10 & 0xffffffff) * 0x38;
  if (0x7f < (uint)uVar10) {
    lVar8 = lVar4;
  }
  *(undefined2 *)(lVar8 + 0x30) = *param_3;
  *(undefined1 *)(lVar8 + 0x32) = *(undefined1 *)(param_3 + 1);
  *(undefined1 *)(lVar8 + 0x33) = *(undefined1 *)((long)param_3 + 3);
  __dest = *(undefined1 **)(lVar8 + 8);
  *(undefined4 *)(lVar8 + 0x34) = *(undefined4 *)(param_3 + 2);
  (*(code *)local_88[3])(&local_88);
  puVar9 = local_80;
  if (__dest == local_80) {
    return;
  }
  (*(code *)local_88[3])(&local_88);
  lVar4 = 0;
  do {
    if (local_80[lVar4] == '\0') goto LAB_0218a5b0;
    if (local_80[lVar4 + 1] == '\0') goto LAB_0218a5a4;
    if (local_80[lVar4 + 2] == '\0') goto LAB_0218a5ac;
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
LAB_0218a59c:
  lVar4 = 0;
LAB_0218a5b0:
  iVar3 = (int)lVar4;
  if (*(int *)(lVar8 + 0x10) <= (int)lVar4) {
    iVar3 = *(int *)(lVar8 + 0x10) + -1;
  }
  memcpy(__dest,puVar9,(long)iVar3);
  __dest[iVar3] = 0;
  return;
  while( true ) {
    if (local_80[lVar4 + 1] == '\0') goto LAB_0218a5a4;
    if (local_80[lVar4 + 2] == '\0') goto LAB_0218a5ac;
    lVar4 = lVar4 + 3;
    if (lVar4 == 0x80001) break;
LAB_0218a4a0:
    if (local_80[lVar4] == '\0') goto LAB_0218a5b0;
  }
  goto LAB_0218a59c;
LAB_0218a5a4:
  lVar4 = lVar4 + 1;
  goto LAB_0218a5b0;
LAB_0218a5ac:
  lVar4 = lVar4 + 2;
  goto LAB_0218a5b0;
}

