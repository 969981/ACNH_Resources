
short * FUN_0267e480(byte *param_1,uint param_2)

{
  short *psVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  short *psVar9;
  long lVar10;
  byte local_28 [4];
  byte local_24 [4];
  
  local_28[0] = *param_1;
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_28,1);
  if (lVar5 == 0) {
    return &DAT_05586008;
  }
  lVar10 = lVar5 + 0x194b0;
  if (*(long *)(lVar5 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
    plVar8 = *(long **)(lVar10 + 0x1b0);
    if (plVar8 != (long *)0x0) goto LAB_0267e50c;
LAB_0267e528:
    uVar3 = 1;
  }
  else {
    plVar8 = *(long **)(lVar5 + 0x19660);
    if (plVar8 == (long *)0x0) goto LAB_0267e528;
LAB_0267e50c:
    if ((undefined8 *)*plVar8 == (undefined8 *)0x0) goto LAB_0267e528;
    uVar3 = (*(code *)**(undefined8 **)*plVar8)();
    uVar3 = uVar3 ^ 1;
  }
  lVar5 = *(long *)(lVar10 + 0x198) + *(long *)(lVar10 + 400);
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  uVar6 = FUN_02669430(local_24);
  puVar2 = PTR_DAT_04bb43c0;
  if ((uVar6 & 1) == 0) {
    lVar5 = lVar5 + 0xa4;
  }
  if (-1 < (int)param_2) {
    uVar4 = *(uint *)(lVar5 + 0xa0);
    if (0x13 < uVar4) {
      uVar4 = 0x14;
    }
    if (param_2 < uVar4) {
      psVar1 = (short *)(lVar5 + (ulong)param_2 * 8);
      if (*psVar1 == -2) {
        psVar9 = psVar1;
        goto LAB_0267e5f4;
      }
      lVar5 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(psVar1);
      if (*(long *)puVar2 != 0) {
        lVar5 = *(long *)(lVar5 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
        psVar9 = (short *)PTR_DAT_04bb37e0;
        if ((uVar4 < *(uint *)(lVar5 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          psVar9 = psVar1;
        }
        goto LAB_0267e5f4;
      }
    }
  }
  psVar9 = &DAT_05586008;
LAB_0267e5f4:
  if ((((uVar3 & 1) == 0) && (*(long *)(lVar10 + 0x1b0) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x1b0) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return psVar9;
}

