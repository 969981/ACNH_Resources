
void FUN_02605160(undefined8 *param_1,long *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  void *__src;
  undefined1 *__src_00;
  undefined4 local_9c;
  undefined *local_98;
  undefined1 *puStack_90;
  int local_88;
  undefined1 auStack_84 [31];
  undefined1 local_65;
  
  *param_1 = &PTR_LAB_04a86d20;
  param_1[1] = 0;
  __dest = (void *)((long)param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 0x20;
  puVar4 = PTR_DAT_04bb2a08;
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  param_1[2] = puVar4 + 0x10;
  param_1[3] = __dest;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_0260523c;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0260523c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0260523c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0260523c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 4) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 4) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  puVar3 = PTR_DAT_04bb2028;
  *(undefined1 *)(param_1 + 9) = 0;
  local_65 = 0;
  local_88 = 0x20;
  param_1[2] = puVar3 + 0x10;
  local_98 = puVar4 + 0x10;
  puStack_90 = auStack_84;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src_00 = (undefined1 *)param_2[1];
  if (auStack_84 != __src_00) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_026052fc;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_026052fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_026052fc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_026052fc:
    iVar2 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar2 = local_88 + -1;
    }
    memcpy(auStack_84,__src_00,(long)iVar2);
    auStack_84[iVar2] = 0;
  }
  local_9c = 0;
  local_98 = puVar3 + 0x10;
  lVar5 = FUN_03f29144(&local_98,param_3,param_4,param_5,&local_9c);
  param_1[1] = lVar5;
  if (lVar5 == 0) {
    *(undefined1 *)(*(long *)PTR_DAT_04bb2268 + 0xb1) = 1;
  }
  return;
}

