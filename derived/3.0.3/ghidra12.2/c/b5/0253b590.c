
bool FUN_0253b590(byte *param_1,undefined1 param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined4 *puVar6;
  long *local_48;
  char local_40;
  char local_3f;
  char local_3e;
  undefined4 local_34;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_34 = *puVar6;
  FUN_0071c8d0(&local_48,&local_34,PTR_DAT_04bb3238,0);
  plVar2 = local_48;
  if (local_48 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_3f = '\0';
    }
  }
  bVar3 = local_3f != '\0';
  if (((local_48 != (long *)0x0 && local_40 != '\0') && bVar3) && local_3e != '\0') {
    local_48[0x33a] = 0;
    *(undefined2 *)(local_48 + 0x33b) = 0;
    local_48[0x32c] = local_48[0x31c];
    local_48[0x32d] = local_48[0x31d];
    local_48[0x32e] = local_48[0x31e];
    local_48[0x330] = 0;
    local_48[0x331] = 0;
    local_48[0x332] = 0;
    local_48[0x333] = 0;
    local_48[0x32f] = local_48[799];
    local_48[0x334] = 0;
    local_48[0x335] = 0;
    local_48[0x336] = 0;
    local_48[0x337] = 0;
    local_48[0x338] = 0;
    local_48[0x339] = 0;
    *(undefined1 *)(local_48 + 0x330) = param_2;
    *(byte *)((long)local_48 + 0x1984) = param_3 & 3;
    local_48[0x318] = local_48[0x338];
    local_48[0x319] = local_48[0x339];
    local_48[0x31a] = local_48[0x33a];
    *(short *)(local_48 + 0x31b) = (short)local_48[0x33b];
    local_48[0x314] = local_48[0x334];
    local_48[0x315] = local_48[0x335];
    local_48[0x316] = local_48[0x336];
    local_48[0x317] = local_48[0x337];
    local_48[0x310] = local_48[0x330];
    local_48[0x311] = local_48[0x331];
    local_48[0x312] = local_48[0x332];
    local_48[0x313] = local_48[0x333];
    local_48[0x30c] = local_48[0x32c];
    local_48[0x30d] = local_48[0x32d];
    local_48[0x30e] = local_48[0x32e];
    local_48[0x30f] = local_48[0x32f];
    lVar1 = 0;
    if (local_48[0xe] != 0) {
      lVar1 = local_48[0xe] + 0x278;
    }
    FUN_03ebb160(lVar1,0x145);
  }
  return ((local_48 != (long *)0x0 && local_40 != '\0') && bVar3) && local_3e != '\0';
}

