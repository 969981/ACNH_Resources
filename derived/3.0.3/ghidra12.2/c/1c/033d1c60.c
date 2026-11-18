
void FUN_033d1c60(void)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 local_34;
  undefined4 local_2c;
  undefined2 local_28;
  byte local_24 [4];
  
  local_2c = 0;
  local_34 = 0xfffe00000000;
  FUN_0277d4ac((long)&local_34 + 4);
  local_28 = 0x10;
  local_24[0] = *PTR_DAT_04bb32e0;
  if (local_24[0] < 8) {
LAB_033d1d8c:
    uVar3 = FUN_02582d8c(local_24,1);
    puVar6 = PTR_DAT_04bb4fb8;
    if (((uVar3 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar3 = FUN_02582d8c(local_24,1), uVar3 < 8 &&
         (*(char *)(*(long *)puVar6 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
      puVar6 = (undefined *)(*(long *)puVar6 + (ulong)uVar3 * 0x13f0 + 0x6b0);
      goto LAB_033d1e24;
    }
  }
  else {
    if (DAT_04cd19d8 == 0) {
LAB_033d1d04:
      if (DAT_0537d558 != (long *)0x0) {
        lVar5 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar5 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar5 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar5 + 0x471);
          }
        }
        local_24[0] = *pbVar4;
        if (local_24[0] < 8) goto LAB_033d1d8c;
      }
      pbVar4 = &DAT_0548e168;
    }
    else {
      pbVar4 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      if ((7 < *pbVar4) &&
         (((*(int *)(DAT_04cd19d8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
          (pbVar4 = (byte *)(DAT_054f5738 + 0x11a5), 7 < *pbVar4)))) goto LAB_033d1d04;
    }
    local_24[0] = *pbVar4;
    if (local_24[0] < 8) goto LAB_033d1d8c;
    local_24[0] = 0xff;
  }
  puVar6 = &DAT_05745710;
  FUN_033d2620(&DAT_05745710);
LAB_033d1e24:
  *(undefined8 *)(puVar6 + 0x810) = local_34;
  *(undefined4 *)(puVar6 + 0x818) = local_2c;
  *(undefined2 *)(puVar6 + 0x81c) = local_28;
  return;
}

