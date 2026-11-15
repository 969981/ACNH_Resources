
undefined8 FUN_0234c05c(void)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  uint *puVar4;
  byte local_8 [8];
  
  pbVar3 = (byte *)FUN_02335d54();
  local_8[0] = *pbVar3;
  if ((((local_8[0] < 8) && (uVar1 = FUN_02582d8c(local_8,1), uVar1 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_054f0960);
        puVar4 = (uint *)&DAT_054f0958;
        if (iVar2 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
          puVar4 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar4 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar4 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)local_8[0] < 8) {
        puVar4 = puVar4 + (ulong)local_8[0] * 2;
      }
    }
    if ((*puVar4 >> 0x12 & 1) != 0) {
      return 1;
    }
  }
  return 0;
}

