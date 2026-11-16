
undefined8 FUN_02543078(byte *param_1)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_8;
  undefined4 local_4;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_8 = *puVar5;
  FUN_0071c8d0(&local_30,&local_8,PTR_DAT_04bb3238,0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_27 = '\0';
    }
  }
  uVar6 = 0;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    local_4 = 0x12e;
    uVar6 = 1;
    local_30[0x318] = local_30[0x328];
    local_30[0x318] = 0;
    local_30[0x319] = local_30[0x329];
    local_30[0x319] = 0;
    local_30[0x31a] = local_30[0x32a];
    local_30[0x31a] = 0;
    *(short *)(local_30 + 0x31b) = (short)local_30[0x32b];
    local_30[0x314] = local_30[0x324];
    local_30[0x314] = 0;
    local_30[0x315] = local_30[0x325];
    local_30[0x315] = 0;
    local_30[0x316] = local_30[0x326];
    local_30[0x316] = 0;
    local_30[0x317] = local_30[0x327];
    local_30[0x317] = 0;
    local_30[0x310] = local_30[800];
    local_30[0x310] = 0;
    local_30[0x311] = local_30[0x321];
    local_30[0x311] = 0;
    local_30[0x312] = local_30[0x322];
    local_30[0x312] = 0;
    local_30[0x313] = local_30[0x323];
    local_30[0x313] = 0;
    local_30[0x30c] = local_30[0x31c];
    local_30[0x30d] = local_30[0x31d];
    local_30[0x30e] = local_30[0x31e];
    local_30[0x30f] = local_30[799];
    lVar1 = 0;
    if (local_30[0xe] != 0) {
      lVar1 = local_30[0xe] + 0x278;
    }
    FUN_03ebb160(lVar1,0x12e);
  }
  return uVar6;
}

