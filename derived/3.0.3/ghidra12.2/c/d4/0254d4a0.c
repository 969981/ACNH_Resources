
bool FUN_0254d4a0(byte *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_8 = *puVar6;
  FUN_0071c8d0(&local_30,&local_8,PTR_DAT_04bb3238,0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_27 = '\0';
    }
  }
  bVar3 = local_27 != '\0';
  if (((local_30 != (long *)0x0 && local_28 != '\0') && bVar3) && local_26 != '\0') {
    local_30[0x330] = 0;
    local_30[0x331] = 0;
    local_30[0x332] = 0;
    local_30[0x333] = 0;
    local_30[0x334] = 0;
    local_30[0x335] = 0;
    local_30[0x336] = 0;
    local_30[0x337] = 0;
    local_30[0x338] = 0;
    local_30[0x339] = 0;
    local_30[0x33a] = 0;
    local_30[0x32c] = local_30[0x31c];
    *(undefined2 *)(local_30 + 0x33b) = 0;
    local_30[0x32d] = local_30[0x31d];
    local_30[0x32e] = local_30[0x31e];
    local_30[0x32f] = local_30[799];
    local_4 = 0x60;
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
    local_30[0x30e] = local_30[0x32e];
    local_30[0x30f] = local_30[0x32f];
    lVar1 = 0;
    if (local_30[0xe] != 0) {
      lVar1 = local_30[0xe] + 0x278;
    }
    FUN_03ebb160(lVar1,0x60);
  }
  return ((local_30 != (long *)0x0 && local_28 != '\0') && bVar3) && local_26 != '\0';
}

