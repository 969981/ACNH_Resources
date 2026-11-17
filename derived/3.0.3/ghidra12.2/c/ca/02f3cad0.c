
void FUN_02f3cad0(long param_1,undefined2 *param_2,int param_3,undefined4 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *__dest;
  void *__dest_00;
  undefined1 *__src;
  void *__src_00;
  undefined *local_f0;
  undefined1 *local_e8;
  undefined4 local_e0;
  undefined1 local_dc [63];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  
  local_45 = 0;
  local_84[0] = 0;
  local_88 = 0x40;
  local_e8 = local_dc;
  *(undefined2 *)(param_1 + 0x460) = *param_2;
  *(undefined1 *)(param_1 + 0x462) = *(undefined1 *)(param_2 + 1);
  local_f0 = PTR_DAT_04bb2bc0;
  local_e0 = 0x40;
  local_9d = 0;
  local_dc[0] = 0;
  local_90 = local_84;
  *(undefined1 *)(param_1 + 0x463) = *(undefined1 *)((long)param_2 + 3);
  lVar4 = param_1 + 0x460;
  local_f0 = local_f0 + 0x10;
  uVar3 = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_1 + 0x46c) = param_4;
  *(int *)(param_1 + 0x468) = param_3;
  *(undefined4 *)(param_1 + 0x464) = uVar3;
  local_98 = local_f0;
  if (param_3 == 1) {
    uVar5 = *(undefined8 *)PTR_DAT_04bb3d80;
    uVar3 = FUN_0277d6c4(lVar4);
    FUN_013ee8f0(uVar5,&local_98,uVar3);
    (**(code **)(local_98 + 0x18))(&local_98);
    FUN_038d1270(&local_f0,"Layout_BookFishIcon_%s",local_90);
    __dest = *(undefined1 **)(param_1 + 0x410);
    (**(code **)(local_f0 + 0x18))(&local_f0);
    __src = local_e8;
    if (__dest == local_e8) goto LAB_02f3cdb8;
    (**(code **)(local_f0 + 0x18))(&local_f0);
    lVar4 = 0;
    do {
      if (local_e8[lVar4] == '\0') goto LAB_02f3cd8c;
      if (local_e8[lVar4 + 1] == '\0') goto LAB_02f3cd80;
      if (local_e8[lVar4 + 2] == '\0') goto LAB_02f3cd88;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else if (param_3 == 0) {
    uVar5 = *(undefined8 *)PTR_DAT_04bb4008;
    iVar2 = FUN_0277d6c4(lVar4);
    if (iVar2 != 0xfffe) {
      FUN_01a11820(uVar5,&local_98,iVar2,0);
    }
    (**(code **)(local_98 + 0x18))(&local_98);
    FUN_038d1270(&local_f0,"Layout_BookInsectIcon_%s",local_90);
    __dest = *(undefined1 **)(param_1 + 0x410);
    (**(code **)(local_f0 + 0x18))(&local_f0);
    __src = local_e8;
    if (__dest == local_e8) goto LAB_02f3cdb8;
    (**(code **)(local_f0 + 0x18))(&local_f0);
    lVar4 = 0;
    do {
      if (local_e8[lVar4] == '\0') goto LAB_02f3cd8c;
      if (local_e8[lVar4 + 1] == '\0') goto LAB_02f3cd80;
      if (local_e8[lVar4 + 2] == '\0') goto LAB_02f3cd88;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    FUN_029535f0(*(undefined8 *)PTR_DAT_04bb4208,&local_98,lVar4);
    (**(code **)(local_98 + 0x18))(&local_98);
    FUN_038d1270(&local_f0,"Layout_BookDiveFishIcon_%s",local_90);
    __dest = *(undefined1 **)(param_1 + 0x410);
    (**(code **)(local_f0 + 0x18))(&local_f0);
    __src = local_e8;
    if (__dest == local_e8) goto LAB_02f3cdb8;
    (**(code **)(local_f0 + 0x18))(&local_f0);
    lVar4 = 0;
    do {
      if (local_e8[lVar4] == '\0') goto LAB_02f3cd8c;
      if (local_e8[lVar4 + 1] == '\0') goto LAB_02f3cd80;
      if (local_e8[lVar4 + 2] == '\0') goto LAB_02f3cd88;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
  goto LAB_02f3cd8c;
LAB_02f3cd80:
  lVar4 = lVar4 + 1;
  goto LAB_02f3cd8c;
LAB_02f3cd88:
  lVar4 = lVar4 + 2;
LAB_02f3cd8c:
  iVar2 = (int)lVar4;
  if (*(int *)(param_1 + 0x418) <= (int)lVar4) {
    iVar2 = *(int *)(param_1 + 0x418) + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  __dest[iVar2] = 0;
LAB_02f3cdb8:
  __dest_00 = *(void **)(param_1 + 0x2e0);
  (**(code **)(*(long *)(param_1 + 0x408) + 0x18))(param_1 + 0x408);
  __src_00 = *(void **)(param_1 + 0x410);
  if (__dest_00 != __src_00) {
    (**(code **)(*(long *)(param_1 + 0x408) + 0x18))(param_1 + 0x408);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x410) + lVar4) == '\0') goto LAB_02f3ce30;
      lVar1 = *(long *)(param_1 + 0x410) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_02f3ce30;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_02f3ce30;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_02f3ce30:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x2e8) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x2e8) + -1;
    }
    memcpy(__dest_00,__src_00,(long)iVar2);
    *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0x470) = 0;
  *(undefined1 *)(param_1 + 0x370) = 1;
  *(undefined4 *)(param_1 + 0x374) = 2;
  return;
}

