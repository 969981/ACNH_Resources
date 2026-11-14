
void FUN_01c04544(long *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte *pbVar3;
  long lVar4;
  byte local_4 [4];
  
  if ((*(long **)(*param_1 + 0xb8) != (long *)0x0) &&
     ((**(code **)(**(long **)(*param_1 + 0xb8) + 0x10))(local_4), local_4[0] < 8))
  goto LAB_01c04664;
  if (DAT_04cd19d8 == 0) {
    pbVar3 = &DAT_0548e140;
LAB_01c045dc:
    if (*pbVar3 < 8) goto LAB_01c04648;
LAB_01c045e8:
    if (DAT_0537d558 == (long *)0x0) {
LAB_01c04640:
      pbVar3 = &DAT_0548e168;
      goto LAB_01c04648;
    }
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
    if (7 < local_4[0]) goto LAB_01c04640;
  }
  else {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
      pbVar3 = (byte *)(DAT_04cd19d8 + 0x158);
    }
    if (7 < *pbVar3) {
      if ((*(int *)(DAT_04cd19d8 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_01c045dc;
      }
      goto LAB_01c045e8;
    }
LAB_01c04648:
    local_4[0] = *pbVar3;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
  }
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_01c04664:
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
  *(byte *)(param_1[4] + 0x1f8) = local_4[0];
  return;
}

