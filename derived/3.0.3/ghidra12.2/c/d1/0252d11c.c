
void FUN_0252d11c(byte *param_1)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  long lVar5;
  byte local_4 [4];
  
  if (DAT_04cd19d8 == 0) {
    pbVar4 = &DAT_0548e140;
LAB_0252d190:
    if (*pbVar4 < 8) goto LAB_0252d200;
LAB_0252d19c:
    if (DAT_0537d558 == (long *)0x0) {
LAB_0252d1f8:
      pbVar4 = &DAT_0548e168;
      goto LAB_0252d200;
    }
    lVar5 = *DAT_0537d558;
    bVar3 = *(byte *)(lVar5 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar5 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar5 + 0x471);
      }
    }
    bVar3 = *pbVar4;
    local_4[0] = bVar3;
    if (7 < bVar3) {
      local_4[0] = 0xff;
    }
    if (7 < bVar3) goto LAB_0252d1f8;
LAB_0252d21c:
    lVar5 = *DAT_0537d558;
    if (*(byte *)(lVar5 + 0x476) < 2) {
      iVar2 = FUN_02582d8c(local_4,2);
      if (-1 < iVar2) {
LAB_0252d278:
        pbVar4 = local_4;
        goto LAB_0252d27c;
      }
    }
    else {
      bVar3 = *(byte *)(lVar5 + (ulong)bVar3 * 4 + 0x44e);
      if ((long)(char)bVar3 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar5 + 0x48);
        }
        if ((*puVar1 >> 3 & 1) != 0) goto LAB_0252d278;
      }
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
        goto LAB_0252d190;
      }
      goto LAB_0252d19c;
    }
LAB_0252d200:
    bVar3 = *pbVar4;
    local_4[0] = bVar3;
    if (7 < bVar3) {
      local_4[0] = 0xff;
    }
    if (bVar3 < 8) goto LAB_0252d21c;
  }
  pbVar4 = &DAT_0548e140;
LAB_0252d27c:
  bVar3 = *pbVar4;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *param_1 = bVar3;
  return;
}

