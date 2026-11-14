
void FUN_01da7210(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  undefined1 *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  iVar2 = *(int *)((*(long **)PTR_DAT_04bb27d0)[2] + 0xaa0);
  lVar5 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar5 + 0x473);
  puVar4 = PTR_DAT_04bc1220;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar5 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar5 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      puVar4 = (undefined1 *)(lVar5 + 0x473);
    }
  }
  *(undefined1 *)(*(long *)PTR_DAT_04bb4df8 + 0x48a8) = *puVar4;
  if (iVar2 != 3) {
    FUN_0265e2f0(1);
    FUN_021af274(&DAT_053fe348);
    FUN_021a5380(&DAT_053fe348,1,1,0,0);
    lVar5 = *(long *)PTR_DAT_04bc14a0;
    memset((void *)(lVar5 + 8),0xff,0x180);
    FUN_020d4430(lVar5);
    DAT_05453f08 = 0;
    FUN_021c8a64(&DAT_053fe348);
  }
  FUN_0142b510();
  FUN_01a19250();
  FUN_0142b680();
  lVar5 = *(long *)PTR_DAT_04bb26a8;
  FUN_029b01a4(lVar5 + 0x11f9d8);
  FUN_029d103c(lVar5 + 0x120f98);
  lVar5 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar5 + 8) != lVar5) {
    lVar7 = (long)*(int *)(lVar5 + 0x14);
    plVar6 = (long *)(*(long *)(lVar5 + 8) - lVar7);
    do {
      (**(code **)(*plVar6 + 0x28))(plVar6,1);
      plVar6 = (long *)(*(long *)((long)plVar6 + lVar7 + 8) - lVar7);
    } while (plVar6 != (long *)(lVar5 - lVar7));
  }
  return;
}

