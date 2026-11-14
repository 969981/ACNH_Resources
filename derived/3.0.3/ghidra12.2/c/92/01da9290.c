
void FUN_01da9290(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  byte *pbVar9;
  long lVar10;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar3 = PTR_DAT_04bb3968;
  if (*(int *)((*(long **)PTR_DAT_04bb27d0)[2] + 0xaa0) != 3) {
    *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
         *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 1;
    FUN_01e27720(*(long *)puVar3 + 0xda0);
    FUN_021af274(&DAT_053fe348);
    FUN_021c279c(&DAT_053fe348);
    DAT_054542c4 = 1;
    FUN_021c69dc(&DAT_053fe348);
    goto LAB_01da94f0;
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    bVar8 = *PTR_DAT_04bb32e0;
    if (7 < bVar8) goto LAB_01da939c;
LAB_01da93f0:
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
  }
  else {
    pbVar9 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar9 = (byte *)(lVar10 + 0x158);
    }
    bVar8 = *pbVar9;
    if ((bVar8 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar8 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar8 < 8)))) goto LAB_01da93f0;
LAB_01da939c:
    lVar10 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar10 + 0x473);
    pbVar9 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar1 = (uint *)(lVar10 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar9 = (byte *)(lVar10 + 0x471);
      }
    }
    bVar8 = *pbVar9;
    if (7 < bVar8) {
      bVar8 = *PTR_DAT_04bb5038;
      goto LAB_01da93f0;
    }
  }
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar8);
  lVar10 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_48,1);
  if (lVar10 != 0) {
    lVar7 = *(long *)(lVar10 + 0x178);
    if (lVar7 == 0) {
      uVar4 = 0;
    }
    else {
      if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
        uVar4 = 0;
        plVar5 = *(long **)(lVar7 + 0x20);
      }
      else {
        uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
        uVar4 = uVar4 & 0xffffffff;
        if (*(long *)(lVar10 + 0x178) == 0) goto LAB_01da9494;
        plVar5 = *(long **)(*(long *)(lVar10 + 0x178) + 0x20);
      }
      if (plVar5 != (long *)0x0) {
        local_48 = *(undefined8 *)(lVar10 + 0x158);
        uStack_40 = *(undefined8 *)(lVar10 + 0x160);
        local_38 = 0x1198;
        (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
      }
    }
LAB_01da9494:
    lVar7 = *(long *)(lVar10 + 0x160) + *(long *)(lVar10 + 0x158);
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)(lVar7 + 0x1190) = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)(lVar7 + 0x1194) = uVar2;
    if ((((uVar4 & 1) != 0) && (*(long *)(lVar10 + 0x178) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x178) + 0x18), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 1;
LAB_01da94f0:
  lVar10 = *(long *)PTR_DAT_04bc1368;
  if (*(long *)(lVar10 + 8) != lVar10) {
    lVar7 = (long)*(int *)(lVar10 + 0x14);
    plVar5 = (long *)(*(long *)(lVar10 + 8) - lVar7);
    do {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      plVar5 = (long *)(*(long *)((long)plVar5 + lVar7 + 8) - lVar7);
    } while (plVar5 != (long *)(lVar10 - lVar7));
  }
  return;
}

