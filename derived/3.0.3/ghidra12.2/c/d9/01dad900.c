
void FUN_01dad900(void)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  
  lVar4 = *(long *)PTR_DAT_04bb26a8;
  *(byte *)(*(long *)PTR_DAT_04bb28b0 + 0x61) = *(byte *)(*(long *)PTR_DAT_04bb28b0 + 0x61) | 1;
  *(uint *)(lVar4 + 0xb389c) = *(uint *)(lVar4 + 0xb389c) | 0x21;
  if (*(long *)PTR_DAT_04bb27f0 != 0) {
    FUN_026c3ae8();
  }
  lVar4 = *(long *)PTR_DAT_04bc1368;
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar5 + 0x473);
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar5 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x80;
    if (7 < bVar2) {
      pbVar1 = (byte *)(lVar5 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      bVar3 = *(byte *)(lVar5 + 0x472) == bVar2;
      goto LAB_01dad9bc;
    }
  }
  bVar3 = true;
LAB_01dad9bc:
  if (*(long *)(lVar4 + 8) != lVar4) {
    lVar5 = (long)*(int *)(lVar4 + 0x14);
    plVar6 = (long *)(*(long *)(lVar4 + 8) - lVar5);
    do {
      (**(code **)(*plVar6 + 0x30))(plVar6,bVar3,1);
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar5 + 8) - lVar5);
    } while (plVar6 != (long *)(lVar4 - lVar5));
  }
  return;
}

