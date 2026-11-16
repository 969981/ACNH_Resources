
undefined8 FUN_025355c4(byte *param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  long *plVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  byte bVar10;
  undefined4 local_40 [2];
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar8 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar8 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_28 = *puVar8;
  FUN_0071c8d0(&local_38,&local_28,param_1 + 0x14,0);
  plVar3 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_2f = '\0';
    }
  }
  if (local_38 == (long *)0x0) {
    return 0;
  }
  if (local_30 == '\0') {
    return 0;
  }
  if (local_2f == '\0') {
    return 0;
  }
  if (local_2e == '\0') {
    return 0;
  }
  lVar6 = FUN_02547c90(param_1);
  if (*(char *)(lVar6 + 9) == '\0') {
LAB_025356f0:
    lVar6 = *(long *)(param_1 + 4);
    local_40[0] = *(undefined4 *)(param_1 + 0xc);
    uVar2 = *(undefined4 *)(param_1 + 0x10);
    local_38[0x331] = 0;
    local_38[0x332] = 0;
    local_38[0x333] = 0;
    local_38[0x334] = 0;
    local_38[0x335] = 0;
    local_38[0x336] = 0;
    local_38[0x337] = 0;
    local_38[0x338] = 0;
    local_38[0x339] = 0;
    local_38[0x33a] = 0;
    *(undefined2 *)(local_38 + 0x33b) = 0;
    local_38[0x330] = lVar6;
    local_38[0x32c] = local_38[0x31c];
    local_38[0x32d] = local_38[0x31d];
    local_38[0x32e] = local_38[0x31e];
    local_38[0x32f] = local_38[799];
    *(char *)((long)local_38 + 0x1989) = (char)uVar2;
    *(char *)(local_38 + 0x331) = (char)local_40[0];
    *(undefined1 *)((long)local_38 + 0x198a) = 1;
    *(undefined1 *)((long)local_38 + 0x198e) = 1;
    FUN_0252d8f0(local_40,local_38 + 0x3dd);
    local_24 = 0x29;
    local_38[0x318] = local_38[0x338];
    local_38[0x319] = local_38[0x339];
    local_38[0x31a] = local_38[0x33a];
    *(short *)(local_38 + 0x31b) = (short)local_38[0x33b];
    local_38[0x314] = local_38[0x334];
    local_38[0x315] = local_38[0x335];
    local_38[0x316] = local_38[0x336];
    local_38[0x317] = local_38[0x337];
    local_38[0x310] = local_38[0x330];
    local_38[0x311] = local_38[0x331];
    local_38[0x312] = local_38[0x332];
    local_38[0x313] = local_38[0x333];
    local_38[0x30c] = local_38[0x32c];
    local_38[0x30d] = local_38[0x32d];
    local_38[0x30f] = local_38[0x32f];
    local_38[0x30e] = local_38[0x32e];
    lVar6 = 0;
    if (local_38[0xe] != 0) {
      lVar6 = local_38[0xe] + 0x278;
    }
    FUN_03ebb160(lVar6,0x29);
    uVar7 = 1;
  }
  else {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if ((lVar6 != 0) && (*(int *)(lVar6 + 0x15c) != 0)) {
      pbVar1 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar1 = (byte *)(lVar6 + 0x158);
      }
      bVar10 = *param_1;
      bVar9 = *pbVar1;
      if (7 < bVar9) {
        bVar9 = 0xff;
      }
      if (7 < bVar10) {
        bVar10 = 0xff;
      }
      if (bVar9 != bVar10) goto LAB_025356f0;
    }
    uVar7 = 0;
  }
  return uVar7;
}

