
void FUN_007d69f0(uint *param_1,undefined8 param_2)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte local_24 [4];
  
  *param_1 = DAT_04cb0c60;
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_007d6a74:
    if (7 < *pbVar4) {
LAB_007d6a80:
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
        if (local_24[0] < 8) goto LAB_007d6b00;
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
        goto LAB_007d6a74;
      }
      goto LAB_007d6a80;
    }
  }
  local_24[0] = *pbVar4;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
LAB_007d6b00:
  uVar3 = FUN_02582fe0(local_24);
  *param_1 = *param_1 & 0xffffffc0 | uVar3 & 7 | 0x10;
  uVar3 = FUN_007d6b40(param_2);
  *param_1 = *param_1 & 0xffff0000 | *param_1 & 0x3f | (uVar3 & 0x3ff) << 6;
  return;
}

