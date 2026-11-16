
uint FUN_0291dd50(undefined8 param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte local_14 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_0291ddbc:
    if (7 < *pbVar4) {
LAB_0291ddc8:
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
        local_14[0] = *pbVar4;
        if (local_14[0] < 8) goto LAB_0291de48;
      }
      pbVar4 = &DAT_0548e168;
    }
  }
  else {
    pbVar4 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar4 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar4) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_0291ddbc;
      }
      goto LAB_0291ddc8;
    }
  }
  local_14[0] = *pbVar4;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_0291de48:
  uVar3 = FUN_02917d90(param_1,local_14);
  return uVar3 & 1;
}

