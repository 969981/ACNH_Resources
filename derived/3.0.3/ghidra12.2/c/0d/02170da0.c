
void FUN_02170da0(undefined4 *param_1,long *param_2,undefined4 *param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined1 *__dest;
  undefined4 *puVar8;
  long *plVar9;
  undefined1 *puVar10;
  ulong uVar11;
  undefined4 uVar12;
  undefined **local_80;
  undefined1 *local_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  local_70 = 8;
  local_65 = 0;
  local_80 = &PTR_LAB_04937050;
  local_78 = local_6c;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar10 = (undefined1 *)param_2[1];
  if (local_6c != puVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_02170e6c;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02170e6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02170e6c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02170e6c:
    iVar2 = (int)lVar5;
    if (local_70 <= (int)lVar5) {
      iVar2 = local_70 + -1;
    }
    memcpy(local_6c,puVar10,(long)iVar2);
    local_6c[iVar2] = 0;
  }
  uVar11 = 0;
  local_80 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
  iVar2 = 3;
  if (local_70 < 4) {
    iVar2 = local_70 + -1;
  }
  local_78[iVar2] = 0;
  do {
    plVar9 = (long *)(param_1 + uVar11 * 0xc + 4);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    (**(code **)(*plVar9 + 0x18))(plVar9);
    puVar10 = *(undefined1 **)(param_1 + uVar11 * 0xc + 6);
    (*(code *)local_80[3])(&local_80);
    if (puVar10 == local_78) {
LAB_02170f90:
      if (-1 < (int)(uint)uVar11) {
        puVar8 = param_1 + (uVar11 & 0xffffffff) * 0xc;
        if (0x7f < (uint)uVar11) {
          puVar8 = param_1;
        }
        *puVar8 = *param_3;
        puVar8[1] = param_3[1];
        uVar12 = param_3[2];
        puVar8[3] = param_4;
        __dest = *(undefined1 **)(puVar8 + 6);
        puVar8[2] = uVar12;
        (*(code *)local_80[3])(&local_80);
        puVar10 = local_78;
        if (__dest == local_78) {
          return;
        }
        (*(code *)local_80[3])(&local_80);
        lVar5 = 0;
        goto LAB_02171000;
      }
      break;
    }
    uVar7 = 0;
    bVar4 = true;
    do {
      lVar5 = *(long *)(param_1 + uVar11 * 0xc + 6) + 2 + uVar7;
      cVar3 = *(char *)(lVar5 + -2);
      if (cVar3 != local_78[uVar7]) break;
      if (cVar3 == '\0') {
        if (bVar4) goto LAB_02170f90;
        break;
      }
      cVar3 = *(char *)(lVar5 + -1);
      if (cVar3 != local_78[uVar7 + 1]) break;
      if (cVar3 == '\0') goto LAB_02170f90;
      cVar3 = *(char *)(*(long *)(param_1 + uVar11 * 0xc + 6) + 2 + uVar7);
      if (cVar3 != local_78[uVar7 + 2]) break;
      if (cVar3 == '\0') goto LAB_02170f90;
      bVar4 = uVar7 < 0x7fffe;
      uVar7 = uVar7 + 3;
    } while (uVar7 != 0x80001);
    uVar11 = uVar11 + 1;
  } while (uVar11 != 0x80);
  uVar11 = 0;
  puVar6 = (undefined8 *)(param_1 + 0x12);
  while (*(char *)puVar6[-6] != '\0') {
    if (*(char *)*puVar6 == '\0') {
      uVar11 = uVar11 + 1;
      break;
    }
    uVar11 = uVar11 + 2;
    puVar6 = puVar6 + 0xc;
    if (uVar11 == 0x80) {
      return;
    }
  }
  if ((int)(uint)uVar11 < 0) {
    return;
  }
  puVar8 = param_1 + (uVar11 & 0xffffffff) * 0xc;
  if (0x7f < (uint)uVar11) {
    puVar8 = param_1;
  }
  *puVar8 = *param_3;
  puVar8[1] = param_3[1];
  uVar12 = param_3[2];
  puVar8[3] = param_4;
  __dest = *(undefined1 **)(puVar8 + 6);
  puVar8[2] = uVar12;
  (*(code *)local_80[3])(&local_80);
  puVar10 = local_78;
  if (__dest == local_78) {
    return;
  }
  (*(code *)local_80[3])(&local_80);
  lVar5 = 0;
  do {
    if (local_78[lVar5] == '\0') goto LAB_0217110c;
    if (local_78[lVar5 + 1] == '\0') goto LAB_02171100;
    if (local_78[lVar5 + 2] == '\0') goto LAB_02171108;
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
LAB_021710f8:
  lVar5 = 0;
LAB_0217110c:
  iVar2 = (int)lVar5;
  if ((int)puVar8[8] <= (int)lVar5) {
    iVar2 = puVar8[8] + -1;
  }
  memcpy(__dest,puVar10,(long)iVar2);
  __dest[iVar2] = 0;
  return;
  while( true ) {
    if (local_78[lVar5 + 1] == '\0') goto LAB_02171100;
    if (local_78[lVar5 + 2] == '\0') goto LAB_02171108;
    lVar5 = lVar5 + 3;
    if (lVar5 == 0x80001) break;
LAB_02171000:
    if (local_78[lVar5] == '\0') goto LAB_0217110c;
  }
  goto LAB_021710f8;
LAB_02171100:
  lVar5 = lVar5 + 1;
  goto LAB_0217110c;
LAB_02171108:
  lVar5 = lVar5 + 2;
  goto LAB_0217110c;
}

