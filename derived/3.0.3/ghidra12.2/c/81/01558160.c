
void FUN_01558160(long param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *__dest;
  undefined1 *puVar7;
  long lVar8;
  undefined *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  local_45 = 0;
  local_88 = 0x40;
  local_84[0] = 0;
  local_90 = local_84;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_98 = puVar1;
  FUN_0180d960(&local_98);
  local_e0 = 0x40;
  local_9d = 0;
  local_dc[0] = 0;
  lVar8 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x160);
  local_f0 = puVar1;
  local_e8 = local_dc;
  (**(code **)(*(long *)(lVar8 + 0x220) + 0x18))(lVar8 + 0x220);
  puVar7 = *(undefined1 **)(lVar8 + 0x228);
  if (local_dc != puVar7) {
    (**(code **)(*(long *)(lVar8 + 0x220) + 0x18))(lVar8 + 0x220);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(lVar8 + 0x228) + lVar5) == '\0') goto LAB_01558250;
      lVar2 = *(long *)(lVar8 + 0x228) + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01558250;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01558250;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01558250:
    iVar3 = (int)lVar5;
    if (local_e0 <= (int)lVar5) {
      iVar3 = local_e0 + -1;
    }
    memcpy(local_dc,puVar7,(long)iVar3);
    local_dc[iVar3] = 0;
  }
  (**(code **)(local_98 + 0x18))(&local_98);
  (**(code **)(local_98 + 0x18))(&local_98);
  puVar7 = local_90;
  (**(code **)(local_f0 + 0x18))(&local_f0);
  if (puVar7 == local_e8) {
LAB_015582f4:
    __dest = *(undefined1 **)(param_1 + 0x248);
    (**(code **)(local_98 + 0x18))(&local_98);
    puVar7 = local_90;
    if (__dest == local_90) goto LAB_01558478;
    (**(code **)(local_98 + 0x18))(&local_98);
    lVar8 = 0;
    do {
      if (local_90[lVar8] == '\0') goto LAB_0155844c;
      if (local_90[lVar8 + 1] == '\0') goto LAB_01558440;
      if (local_90[lVar8 + 2] == '\0') goto LAB_01558448;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  else {
    uVar6 = 0;
    bVar4 = true;
    do {
      if (local_90[uVar6] != local_e8[uVar6]) break;
      if (local_90[uVar6] == '\0') {
        if (bVar4) goto LAB_015582f4;
        break;
      }
      bVar4 = uVar6 < 0x80000;
      uVar6 = uVar6 + 1;
    } while (uVar6 != 0x80001);
    lVar8 = FUN_0160cc10(param_1,0xffffffff,&local_f0,0);
    __dest = *(undefined1 **)(param_1 + 0x248);
    if (lVar8 == 0) {
      (**(code **)(local_98 + 0x18))(&local_98);
      puVar7 = local_90;
      if (__dest == local_90) goto LAB_01558478;
      (**(code **)(local_98 + 0x18))(&local_98);
      lVar8 = 0;
      do {
        if (local_90[lVar8] == '\0') goto LAB_0155844c;
        if (local_90[lVar8 + 1] == '\0') goto LAB_01558440;
        if (local_90[lVar8 + 2] == '\0') goto LAB_01558448;
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
    }
    else {
      (**(code **)(local_f0 + 0x18))(&local_f0);
      puVar7 = local_e8;
      if (__dest == local_e8) goto LAB_01558478;
      (**(code **)(local_f0 + 0x18))(&local_f0);
      lVar8 = 0;
      do {
        if (local_e8[lVar8] == '\0') goto LAB_0155844c;
        if (local_e8[lVar8 + 1] == '\0') goto LAB_01558440;
        if (local_e8[lVar8 + 2] == '\0') goto LAB_01558448;
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
    }
  }
  lVar8 = 0;
LAB_0155844c:
  iVar3 = (int)lVar8;
  if (*(int *)(param_1 + 0x250) <= (int)lVar8) {
    iVar3 = *(int *)(param_1 + 0x250) + -1;
  }
  memcpy(__dest,puVar7,(long)iVar3);
  __dest[iVar3] = 0;
LAB_01558478:
  FUN_0160cc10(param_1,*(undefined4 *)(param_1 + 0x298),param_1 + 0x240,param_1 + 0x298);
  return;
LAB_01558440:
  lVar8 = lVar8 + 1;
  goto LAB_0155844c;
LAB_01558448:
  lVar8 = lVar8 + 2;
  goto LAB_0155844c;
}

