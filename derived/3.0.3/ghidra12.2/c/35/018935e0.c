
void FUN_018935e0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *__src;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  if ((*(long *)PTR_DAT_04bb4008 == 0) ||
     (uVar5 = FUN_01a12390(*(long *)PTR_DAT_04bb4008,2,*(undefined4 *)(param_1 + 0x3a8)),
     puVar3 = PTR_PTR_04bb2238, (uVar5 & 1) == 0)) {
    FUN_0188a148(param_1,10,0);
    return;
  }
  local_45 = 0;
  local_88 = 0x40;
  local_98 = PTR_DAT_04bb2f70 + 0x10;
  local_90 = local_84;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  __src = *(undefined1 **)(puVar3 + 8);
  if (local_84 != __src) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar6) == '\0') goto LAB_018936e4;
      lVar1 = *(long *)(puVar3 + 8) + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_018936e4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_018936e4;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_018936e4:
    iVar2 = (int)lVar6;
    if (local_88 <= (int)lVar6) {
      iVar2 = local_88 + -1;
    }
    memcpy(local_84,__src,(long)iVar2);
    local_84[iVar2] = 0;
  }
  local_98 = PTR_DAT_04bb2bc0 + 0x10;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = &DAT_040ba9de;
  FUN_0189abf0(param_1,&local_98,&local_a8);
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  if (local_90 == &DAT_040ba9de) {
LAB_018937b0:
    FUN_0188a148(param_1,10,0);
  }
  else {
    uVar5 = 0;
    bVar4 = true;
    do {
      if (local_90[uVar5] != (&DAT_040ba9de)[uVar5]) break;
      if (local_90[uVar5] == '\0') {
        if (bVar4) goto LAB_018937b0;
        break;
      }
      bVar4 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar6 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar6 != 0)) {
      FUN_0073d870(lVar6,&local_98,10,0,0);
    }
  }
  return;
}

