
void FUN_033fc7d0(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  ulong uVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  byte local_4 [4];
  
  bVar2 = *(byte *)(*(long *)PTR_DAT_04bb2230 + 0x428);
  bVar4 = bVar2;
  if (7 < bVar2) {
    bVar4 = 0xff;
  }
  *param_1 = bVar4;
  if (DAT_04cd19d8 == 0) {
    pbVar5 = &DAT_0548e140;
LAB_033fc860:
    if (7 < *pbVar5) {
LAB_033fc86c:
      if (DAT_0537d558 != (long *)0x0) {
        lVar6 = *DAT_0537d558;
        bVar4 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_4[0] = *pbVar5;
        if (local_4[0] < 8) goto LAB_033fc8ec;
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
        goto LAB_033fc860;
      }
      goto LAB_033fc86c;
    }
  }
  local_4[0] = *pbVar5;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_033fc8ec:
  if ((bVar2 < 8) && (uVar3 = FUN_00a738a0(local_4,0), (uVar3 & 1) == 0)) {
    return;
  }
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
  *param_1 = local_4[0];
  return;
}

