
void FUN_0252d4c8(byte *param_1)

{
  uint *puVar1;
  bool bVar2;
  long *plVar3;
  byte *pbVar4;
  byte bVar5;
  long lVar6;
  
  plVar3 = *(long **)PTR_DAT_04bb27d0;
  if ((plVar3 != (long *)0x0) && (1 < *(uint *)(plVar3 + 0x10))) {
    FUN_02582b70(2);
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar4 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) {
      pbVar4 = PTR_DAT_04bb5038;
    }
    if (plVar3 == (long *)0x0 || (byte)*PTR_DAT_04bb32e0 < 8) goto LAB_0252d5e8;
    goto LAB_0252d58c;
  }
  if (*(int *)(lVar6 + 0x15c) != 0) {
    pbVar4 = (byte *)(lVar6 + 0x158);
  }
  if (*pbVar4 < 8) goto LAB_0252d5e8;
  if ((*(int *)(lVar6 + 0x15c) == 0) || (DAT_054f5738 == 0)) {
    if (plVar3 != (long *)0x0) goto LAB_0252d58c;
  }
  else {
    bVar2 = 7 < *(byte *)(DAT_054f5738 + 0x11a5);
    pbVar4 = (byte *)(DAT_054f5738 + 0x11a5);
    if (bVar2) {
      pbVar4 = PTR_DAT_04bb5038;
    }
    if ((plVar3 == (long *)0x0) || (!bVar2)) goto LAB_0252d5e8;
LAB_0252d58c:
    lVar6 = *plVar3;
    bVar5 = *(byte *)(lVar6 + 0x473);
    pbVar4 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar4 = (byte *)(lVar6 + 0x471);
      }
    }
    bVar5 = *pbVar4;
    bVar2 = bVar5 < 8;
    if (!bVar2) {
      bVar5 = 0xff;
    }
    *param_1 = bVar5;
    if (bVar2) {
      return;
    }
  }
  pbVar4 = PTR_DAT_04bb5038;
LAB_0252d5e8:
  bVar5 = *pbVar4;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *param_1 = bVar5;
  return;
}

