
void FUN_0136359c(long param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte local_4 [4];
  
  FUN_0125c8c0(param_1 + 0x1518);
  if (*(int *)(param_1 + 0x200) == 1) {
    return;
  }
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_01363624:
    if (7 < *pbVar3) {
LAB_01363630:
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
        local_4[0] = *pbVar3;
        if (local_4[0] < 8) goto LAB_013636b0;
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
        goto LAB_01363624;
      }
      goto LAB_01363630;
    }
  }
  local_4[0] = *pbVar3;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_013636b0:
  FUN_013864c0(local_4);
  return;
}

