
undefined8 FUN_02537348(byte *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  long *plVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  undefined4 *puVar9;
  int local_38 [2];
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar9 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_8 = *puVar9;
  FUN_0071c8d0(&local_30,&local_8,PTR_DAT_04bb3238,0);
  plVar5 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_27 = '\0';
    }
  }
  if (local_30 == (long *)0x0) {
    return 0;
  }
  if (local_28 == '\0') {
    return 0;
  }
  if (local_27 == '\0') {
    return 0;
  }
  if (local_26 == '\0') {
    return 0;
  }
  if (param_1[0x14] == 0) {
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_38[0] = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8;
      if (0xff < (uint)(int)sVar4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_02537490;
    }
    local_38[0] = FUN_00a74b78(local_30 + 0x3dd);
    if (local_38[0] != 4) {
      return 0;
    }
  }
  else {
    uVar7 = FUN_0252ffe8(param_1);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
LAB_02537490:
  lVar8 = FUN_02547c90(param_1);
  if (*(char *)(lVar8 + 9) != '\0') {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 4);
  local_4 = 3;
  local_38[0] = *(int *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  bVar3 = param_1[0x15];
  *(byte *)((long)local_30 + 0x18f4) = *(byte *)((long)local_30 + 0x18f4) & 0xf7;
  local_30[0x331] = 0;
  local_30[0x332] = 0;
  local_30[0x333] = 0;
  local_30[0x334] = 0;
  local_30[0x335] = 0;
  local_30[0x336] = 0;
  local_30[0x337] = 0;
  local_30[0x338] = 0;
  local_30[0x339] = 0;
  local_30[0x32c] = local_30[0x31c];
  local_30[0x33a] = 0;
  *(undefined2 *)(local_30 + 0x33b) = 0;
  local_30[0x330] = lVar8;
  local_30[0x32d] = local_30[0x31d];
  local_30[0x32e] = local_30[0x31e];
  local_30[0x32f] = local_30[799];
  *(char *)((long)local_30 + 0x1989) = (char)uVar2;
  *(byte *)((long)local_30 + 0x198e) = bVar3;
  *(undefined1 *)((long)local_30 + 0x198a) = 0;
  *(char *)(local_30 + 0x331) = (char)local_38[0];
  FUN_0252d8f0(local_38,local_30 + 0x3dd);
  local_4 = 0x29;
  local_30[0x318] = local_30[0x338];
  local_30[0x319] = local_30[0x339];
  local_30[0x31a] = local_30[0x33a];
  *(short *)(local_30 + 0x31b) = (short)local_30[0x33b];
  local_30[0x314] = local_30[0x334];
  local_30[0x315] = local_30[0x335];
  local_30[0x316] = local_30[0x336];
  local_30[0x317] = local_30[0x337];
  local_30[0x310] = local_30[0x330];
  local_30[0x311] = local_30[0x331];
  local_30[0x312] = local_30[0x332];
  local_30[0x313] = local_30[0x333];
  local_30[0x30c] = local_30[0x32c];
  local_30[0x30d] = local_30[0x32d];
  local_30[0x30f] = local_30[0x32f];
  local_30[0x30e] = local_30[0x32e];
  lVar8 = 0;
  if (local_30[0xe] != 0) {
    lVar8 = local_30[0xe] + 0x278;
  }
  FUN_03ebb160(lVar8,0x29);
  return 1;
}

