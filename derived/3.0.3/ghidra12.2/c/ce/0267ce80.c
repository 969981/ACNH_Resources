
short * FUN_0267ce80(byte *param_1,uint param_2)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  short *psVar7;
  long lVar8;
  byte local_24 [4];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar4 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar4 == 0) {
    return &DAT_05586008;
  }
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    plVar6 = *(long **)(lVar8 + 0x178);
    if (plVar6 != (long *)0x0) goto LAB_0267cf08;
LAB_0267cf28:
    uVar2 = 1;
    plVar6 = (long *)PTR_DAT_04bb43c0;
  }
  else {
    plVar6 = *(long **)(lVar4 + 0x19628);
    if (plVar6 == (long *)0x0) goto LAB_0267cf28;
LAB_0267cf08:
    if ((undefined8 *)*plVar6 == (undefined8 *)0x0) goto LAB_0267cf28;
    uVar2 = (*(code *)**(undefined8 **)*plVar6)();
    uVar2 = uVar2 ^ 1;
    plVar6 = (long *)PTR_DAT_04bb43c0;
  }
  PTR_DAT_04bb43c0 = (undefined *)plVar6;
  if (-1 < (int)param_2) {
    lVar4 = *(long *)(lVar8 + 0x160) + *(long *)(lVar8 + 0x158);
    uVar3 = *(uint *)(lVar4 + 72000);
    if (8999 < uVar3) {
      uVar3 = 9000;
    }
    if (param_2 < uVar3) {
      psVar1 = (short *)(lVar4 + (ulong)param_2 * 8);
      if (*psVar1 == -2) {
        psVar7 = psVar1;
        goto LAB_0267cfd4;
      }
      lVar4 = *plVar6;
      uVar3 = FUN_0277d6c4(psVar1);
      if (*plVar6 != 0) {
        lVar4 = *(long *)(lVar4 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        psVar7 = (short *)PTR_DAT_04bb37e0;
        if ((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          psVar7 = psVar1;
        }
        goto LAB_0267cfd4;
      }
    }
  }
  psVar7 = &DAT_05586008;
LAB_0267cfd4:
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar8 + 0x178) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar8 + 0x178) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return psVar7;
}

