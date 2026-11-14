
uint FUN_016e5e90(void)

{
  uint *puVar1;
  undefined *puVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  undefined *local_30;
  char *pcStack_28;
  
  puVar2 = PTR_DAT_04bb6298;
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  if (uVar4 != 0xffff) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x11 & 1) != 0) {
      return 0;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x17 & 1) != 0) {
      return 0;
    }
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < uVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x19 & 1) != 0) {
      return 0;
    }
  }
  iVar3 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if (iVar3 == -0x7a57de51) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "TapIndoorSelectCloudIsland";
    iVar3 = FUN_02743000(&local_30);
    if ((iVar3 == 0) && (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) == 0)) {
      uVar4 = *(ushort *)puVar2;
      goto LAB_016e6004;
    }
  }
  else if ((iVar3 != -0x3f5c743d) &&
          ((iVar3 != -0x2f1ac06c || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) == 0)))) {
LAB_016e6004:
    if (uVar4 == 0xffff) {
      uVar5 = 0;
    }
    else {
      puVar2 = PTR_DAT_04bc39f8 + ((long)(short)uVar4 & 0xffffffffU) * 8;
      if (0xff < uVar4) {
        puVar2 = PTR_DAT_04bc39f8;
      }
      uVar5 = *(uint *)(puVar2 + 4) & 1;
    }
    return uVar5 ^ 1;
  }
  return 0;
}

