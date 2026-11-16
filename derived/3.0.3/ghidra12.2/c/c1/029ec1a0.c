
uint FUN_029ec1a0(long *param_1,short *param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  char *pcVar7;
  undefined *local_98;
  undefined1 *puStack_90;
  undefined4 local_88;
  undefined1 local_84 [63];
  undefined1 local_45;
  undefined1 auStack_40 [16];
  
  lVar2 = DAT_04cea100;
  if (*(int *)(*(long *)PTR_DAT_04bb26a8 + 0x63804) - 3U < 2) {
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar7 = (char *)param_1[1];
    (**(code **)(DAT_055efdc0 + 0x18))(&DAT_055efdc0);
    if (pcVar7 == DAT_055efdc8) {
      return 1;
    }
    cVar1 = *(char *)param_1[1];
    if (cVar1 != *DAT_055efdc8) {
      return 0;
    }
    if (cVar1 == '\0') {
      return 1;
    }
    pcVar7 = (char *)param_1[1] + 2;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (uVar5 == 0x80000) goto LAB_029ec3f4;
      if (pcVar7[uVar5 - 1] != DAT_055efdc8[uVar5 + 1]) goto LAB_029ec3f8;
      if (pcVar7[uVar5 - 1] == '\0') goto LAB_029ec294;
      if (pcVar7[uVar5] != DAT_055efdc8[uVar5 + 2]) goto LAB_029ec400;
      uVar3 = uVar5 + 2;
    } while (pcVar7[uVar5] != '\0');
  }
  else {
    if (DAT_04cea100 == 0) {
      return 0;
    }
    FUN_0087a0f0(auStack_40,DAT_04cea100,param_1,param_2);
    iVar4 = FUN_00883150(lVar2,auStack_40,param_2,0);
    puStack_90 = local_84;
    local_45 = 0;
    local_84[0] = 0;
    local_98 = PTR_DAT_04bb2bc0 + 0x10;
    local_88 = 0x40;
    FUN_038d1270(&local_98,"%04d/%02d/%02d %02d:%02d:%02d",(long)*param_2,(long)(char)param_2[1],
                 (long)*(char *)((long)param_2 + 3),(long)(char)param_2[2],
                 (long)*(char *)((long)param_2 + 5),(long)(char)param_2[3]);
    if (iVar4 != -1) {
      return 1;
    }
    (**(code **)(*param_1 + 0x18))(param_1);
    (**(code **)(*param_1 + 0x18))(param_1);
    pcVar7 = (char *)param_1[1];
    (**(code **)(DAT_055efdc0 + 0x18))(&DAT_055efdc0);
    if (pcVar7 == DAT_055efdc8) {
      return 1;
    }
    cVar1 = *(char *)param_1[1];
    if (cVar1 != *DAT_055efdc8) {
      return 0;
    }
    if (cVar1 == '\0') {
      return 1;
    }
    pcVar7 = (char *)param_1[1] + 2;
    uVar3 = 0;
    do {
      uVar5 = uVar3;
      if (uVar5 == 0x80000) goto LAB_029ec3f4;
      if (pcVar7[uVar5 - 1] != DAT_055efdc8[uVar5 + 1]) goto LAB_029ec3f8;
      if (pcVar7[uVar5 - 1] == '\0') goto LAB_029ec294;
      if (pcVar7[uVar5] != DAT_055efdc8[uVar5 + 2]) goto LAB_029ec400;
      uVar3 = uVar5 + 2;
    } while (pcVar7[uVar5] != '\0');
  }
  uVar5 = uVar5 + 1;
LAB_029ec294:
  uVar6 = 1;
LAB_029ec408:
  return uVar5 < 0x80000 & uVar6;
LAB_029ec3f4:
  uVar6 = (uint)pcVar7;
  goto LAB_029ec408;
LAB_029ec3f8:
  uVar6 = 0;
  goto LAB_029ec408;
LAB_029ec400:
  uVar6 = 0;
  uVar5 = uVar5 | 1;
  goto LAB_029ec408;
}

