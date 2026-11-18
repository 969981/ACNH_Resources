
void FUN_033d5ec0(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  undefined4 *puVar7;
  byte local_14 [4];
  
  if (DAT_05739190 == 0) {
    return;
  }
  puVar7 = *(undefined4 **)(DAT_05739190 + 0x478);
  if (puVar7 == (undefined4 *)0x0) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_033d5f48:
    if (7 < *pbVar5) {
LAB_033d5f54:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_14[0] = *pbVar5;
        if (local_14[0] < 8) goto LAB_033d5fdc;
      }
      pbVar5 = &DAT_0548e168;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar5 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar5 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_033d5f48;
      }
      goto LAB_033d5f54;
    }
  }
  local_14[0] = *pbVar5;
  if (7 < local_14[0]) {
    return;
  }
LAB_033d5fdc:
  uVar4 = FUN_02582d8c(local_14,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((uVar4 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar4 = FUN_02582d8c(local_14,1), uVar4 < 8 &&
      (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar6 = *(long *)puVar3 + (ulong)uVar4 * 0x13f0;
    *(undefined4 *)(lVar6 + 0x13b0) = *puVar7;
    *(undefined2 *)(lVar6 + 0x13b4) = *(undefined2 *)(puVar7 + 1);
  }
  return;
}

