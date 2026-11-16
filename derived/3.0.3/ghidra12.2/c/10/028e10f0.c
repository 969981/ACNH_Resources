
void FUN_028e10f0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined1 *__src;
  undefined **local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  *(undefined1 *)(param_1 + 0x144) = 0;
  uVar2 = *(uint *)(param_1 + 0xc);
  local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar2);
  if (uVar2 < *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x100)) {
    lVar5 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb30a0 + 0x108) + (long)(int)uVar2 * 8);
  }
  else {
    lVar5 = 0;
  }
  plVar6 = (long *)(**(code **)(*(long *)(lVar5 + 0x30) + 0xf0))();
  local_88 = 0x40;
  local_45 = 0;
  local_98 = &PTR_LAB_048fd2d8;
  local_90 = local_84;
  (**(code **)(*plVar6 + 0x18))();
  __src = (undefined1 *)plVar6[1];
  if (local_84 != __src) {
    (**(code **)(*plVar6 + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(char *)(plVar6[1] + lVar5) == '\0') goto LAB_028e11ec;
      lVar1 = plVar6[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_028e11ec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_028e11ec;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_028e11ec:
    iVar8 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar8 = local_88 + -1;
    }
    memcpy(local_84,__src,(long)iVar8);
    local_84[iVar8] = 0;
  }
  puVar3 = PTR_DAT_04bb2bc0;
  lVar5 = 0;
  local_98 = (undefined **)(PTR_DAT_04bb2bc0 + 0x10);
  local_90[(long)local_88 + -1] = 0;
  do {
    if (local_90[lVar5] == '\0') goto LAB_028e127c;
    if (local_90[lVar5 + 1] == '\0') {
      lVar5 = lVar5 + 1;
      goto LAB_028e127c;
    }
    if (local_90[lVar5 + 2] == '\0') {
      lVar5 = lVar5 + 2;
      goto LAB_028e127c;
    }
    lVar5 = lVar5 + 3;
  } while (lVar5 != 0x80001);
  lVar5 = 0;
LAB_028e127c:
  iVar7 = (int)lVar5;
  iVar8 = iVar7;
  if (1 < iVar7) {
    iVar8 = 2;
  }
  local_90[iVar7 - iVar8] = 0;
  (**(code **)(puVar3 + 0x28))(&local_98);
  (*(code *)local_98[3])(&local_98);
  if (local_90 == &DAT_040cb35c) {
LAB_028e1300:
    *(undefined1 *)(param_1 + 0x144) = 1;
  }
  else {
    uVar9 = 0;
    bVar4 = true;
    do {
      if (local_90[uVar9] != (&DAT_040cb35c)[uVar9]) {
        return;
      }
      if (local_90[uVar9] == '\0') {
        if (!bVar4) {
          return;
        }
        goto LAB_028e1300;
      }
      bVar4 = uVar9 < 0x80000;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 0x80001);
  }
  return;
}

