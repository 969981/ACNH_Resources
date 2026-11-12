
void FUN_007d6c4c(uint *param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  long lVar5;
  byte local_4 [4];
  
  *param_1 = DAT_04cb0c60;
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_007d6cc8:
    if (7 < *pbVar4) {
LAB_007d6cd4:
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
        local_4[0] = *pbVar4;
        if (local_4[0] < 8) goto LAB_007d6d54;
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
        goto LAB_007d6cc8;
      }
      goto LAB_007d6cd4;
    }
  }
  local_4[0] = *pbVar4;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_007d6d54:
  uVar3 = FUN_02582fe0(local_4);
  *param_1 = uVar3 & 7 | (uint)*(ushort *)((long)param_1 + 2) << 0x10 | 0x18;
  return;
}

