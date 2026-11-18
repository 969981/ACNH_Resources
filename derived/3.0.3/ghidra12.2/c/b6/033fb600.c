
void FUN_033fb600(void)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_033fb66c:
    if (7 < *pbVar3) {
LAB_033fb678:
      if (DAT_0537d558 != (long *)0x0) {
        lVar4 = *DAT_0537d558;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar3 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar3 = (byte *)(lVar4 + 0x471);
          }
        }
        local_14[0] = *pbVar3;
        if (local_14[0] < 8) goto LAB_033fb6f8;
      }
      pbVar3 = &DAT_0548e168;
    }
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_033fb66c;
      }
      goto LAB_033fb678;
    }
  }
  local_14[0] = *pbVar3;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_033fb6f8:
  FUN_033fb710(local_14);
  return;
}

