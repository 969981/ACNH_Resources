
void FUN_01dab9b0(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bb39b0;
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 1;
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
    bVar2 = *PTR_DAT_04bb32e0;
joined_r0x01daba40:
    uVar4 = (uint)bVar2;
    if (7 < bVar2) {
LAB_01daba44:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        uVar4 = (uint)*pbVar5;
        if (*pbVar5 < 8) goto LAB_01dabab0;
      }
      uVar4 = (uint)(byte)*PTR_DAT_04bb5038;
      if (7 < (byte)*PTR_DAT_04bb5038) goto LAB_01dabac8;
    }
  }
  else {
    pbVar5 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    uVar4 = (uint)*pbVar5;
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto joined_r0x01daba40;
      }
      goto LAB_01daba44;
    }
  }
LAB_01dabab0:
  *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c4) =
       *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c4) | 1 << (ulong)(uVar4 & 0x1f);
LAB_01dabac8:
  lVar6 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar6 + 8) != lVar6) {
    lVar8 = (long)*(int *)(lVar6 + 0x14);
    plVar7 = (long *)(*(long *)(lVar6 + 8) - lVar8);
    do {
      (**(code **)(*plVar7 + 0x30))(plVar7,0,0);
      plVar7 = (long *)(*(long *)((long)plVar7 + lVar8 + 8) - lVar8);
    } while (plVar7 != (long *)(lVar6 - lVar8));
  }
  return;
}

