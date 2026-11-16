
void FUN_028e0100(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined1 *__src;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  undefined1 auStack_24 [4];
  
  uVar2 = *(uint *)(param_1 + 0xc);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar2);
  if (uVar2 < *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x100)) {
    lVar6 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb30a0 + 0x108) + (long)(int)uVar2 * 8);
  }
  else {
    lVar6 = 0;
  }
  plVar7 = (long *)(**(code **)(*(long *)(lVar6 + 0x30) + 0xf0))();
  local_88 = 0x40;
  local_45 = 0;
  local_98 = PTR_DAT_04bb2f70 + 0x10;
  local_90 = local_84;
  (**(code **)(*plVar7 + 0x18))();
  __src = (undefined1 *)plVar7[1];
  if (local_84 != __src) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar6 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar6) == '\0') goto LAB_028e01fc;
      lVar1 = plVar7[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_028e01fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_028e01fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_028e01fc:
    iVar5 = (int)lVar6;
    if (local_88 <= (int)lVar6) {
      iVar5 = local_88 + -1;
    }
    memcpy(local_84,__src,(long)iVar5);
    local_84[iVar5] = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  lVar6 = 0;
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  local_90[(long)local_88 + -1] = 0;
  do {
    if (local_90[lVar6] == '\0') goto LAB_028e028c;
    if (local_90[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_028e028c;
    }
    if (local_90[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_028e028c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_028e028c:
  iVar8 = (int)lVar6;
  iVar5 = iVar8;
  if (1 < iVar8) {
    iVar5 = 2;
  }
  local_90[iVar8 - iVar5] = 0;
  (**(code **)(puVar3 + 0x28))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (local_90 == &DAT_040b6d0d) {
LAB_028e0310:
    *(undefined8 *)(param_1 + 0xd4) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
    *(undefined8 *)(param_1 + 0xbc) = 0;
    *(undefined8 *)(param_1 + 0xb4) = 0;
    *(undefined8 *)(param_1 + 0xac) = 0;
    *(undefined8 *)(param_1 + 0xa4) = 0;
    *(undefined8 *)(param_1 + 0x9c) = 0;
    *(undefined8 *)(param_1 + 0x94) = 0;
    *(undefined8 *)(param_1 + 0x8c) = 0;
    *(undefined8 *)(param_1 + 0x84) = 0;
    *(undefined8 *)(param_1 + 0x7c) = 0;
    local_a8 = PTR_DAT_04bb2020 + 0x10;
    pcStack_a0 = "RainbowNum";
    iVar5 = FUN_02757a80(auStack_24,&local_a8);
    if (iVar5 == 2) {
      uVar9 = 6;
      uVar10 = 4;
    }
    else {
      if (iVar5 != 1) {
        return;
      }
      uVar9 = 5;
      uVar10 = 3;
    }
    *(undefined4 *)(param_1 + 0x94) = uVar10;
    *(undefined4 *)(param_1 + 0x98) = uVar9;
    *(undefined4 *)(param_1 + 0x9c) = uVar9;
    *(undefined4 *)(param_1 + 0xa0) = uVar9;
    *(undefined4 *)(param_1 + 0xa4) = uVar9;
    *(undefined4 *)(param_1 + 0xa8) = uVar9;
    *(undefined4 *)(param_1 + 0xac) = uVar9;
    *(undefined4 *)(param_1 + 0xb0) = uVar9;
    *(undefined4 *)(param_1 + 0xb4) = uVar9;
    *(undefined4 *)(param_1 + 0xb8) = uVar9;
    *(undefined4 *)(param_1 + 0xbc) = uVar9;
    *(int *)(param_1 + 0xc0) = iVar5;
  }
  else {
    uVar11 = 0;
    bVar4 = true;
    do {
      if (local_90[uVar11] != (&DAT_040b6d0d)[uVar11]) {
        return;
      }
      if (local_90[uVar11] == '\0') {
        if (!bVar4) {
          return;
        }
        goto LAB_028e0310;
      }
      bVar4 = uVar11 < 0x80000;
      uVar11 = uVar11 + 1;
    } while (uVar11 != 0x80001);
  }
  return;
}

