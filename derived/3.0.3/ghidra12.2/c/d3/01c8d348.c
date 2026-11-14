
undefined8 FUN_01c8d348(long param_1,char *param_2)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  if (param_2[1] == '\0' && *param_2 == '\x02') {
    if ((*(char *)(param_1 + 0x40) == '\0') &&
       (uVar5 = nn::pctl::CheckFreeCommunicationPermission(false), (uVar5 & 1) != 0)) {
      *(undefined1 *)(*(long *)(param_1 + 0x38) + 0xa8) = 1;
    }
    puVar3 = PTR_DAT_04bc3a80;
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "TapIndoorSelectCloudIsland";
      iVar4 = FUN_02743000(&local_30);
      if (iVar4 != 0) {
        return 0;
      }
      if (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0) {
        return 0;
      }
    }
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      local_30 = (undefined *)CONCAT44(local_30._4_4_,0x20);
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return 0;
      }
    }
    if ((*(int *)(puVar3 + 0x38) != -0x3f5c743d) &&
       (((*(int *)(puVar3 + 0x38) != -0x2f1ac06c ||
         (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)) &&
        (uVar5 = nn::pctl::CheckFreeCommunicationPermission(false), (uVar5 & 1) == 0)))) {
      *(undefined2 *)(*(long *)(param_1 + 0x38) + 0xa8) = 0;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 0;
  }
  return 0;
}

