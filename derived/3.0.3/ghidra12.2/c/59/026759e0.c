
short * FUN_026759e0(long param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  short *psVar9;
  short *psVar10;
  long lVar11;
  
  if (param_1 == 0) {
    return &DAT_05586008;
  }
  lVar11 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar11 = *(long *)(DAT_05574040 + 0x20);
    plVar7 = *(long **)(lVar11 + 0x98);
    if (plVar7 != (long *)0x0) goto LAB_02675a3c;
LAB_02675a58:
    uVar4 = 1;
  }
  else {
    plVar7 = *(long **)(param_1 + 0x19548);
    if (plVar7 == (long *)0x0) goto LAB_02675a58;
LAB_02675a3c:
    if ((undefined8 *)*plVar7 == (undefined8 *)0x0) goto LAB_02675a58;
    uVar4 = (*(code *)**(undefined8 **)*plVar7)();
    uVar4 = uVar4 ^ 1;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)(lVar11 + 0x80) + *(long *)(lVar11 + 0x78);
  uVar5 = *(uint *)(lVar8 + 0x158);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  uVar2 = param_2 - uVar5;
  if (param_2 < uVar5) {
    psVar10 = (short *)(lVar8 + (ulong)param_2 * 8 + 0xb8);
    sVar1 = *psVar10;
LAB_02675aa8:
    psVar9 = psVar10;
    if (sVar1 == -2) goto joined_r0x02675b1c;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(psVar10);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      psVar9 = (short *)PTR_DAT_04bb37e0;
      if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        psVar9 = psVar10;
      }
      goto joined_r0x02675b1c;
    }
  }
  else if (-1 < (int)uVar2) {
    uVar5 = *(uint *)(lVar8 + 0xa0);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    if (uVar5 <= uVar2) {
      psVar9 = &DAT_05586008;
      goto joined_r0x02675b1c;
    }
    psVar10 = (short *)(lVar8 + (ulong)uVar2 * 8);
    sVar1 = *psVar10;
    goto LAB_02675aa8;
  }
  psVar9 = &DAT_05586008;
joined_r0x02675b1c:
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar11 + 0x98) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar11 + 0x98) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return psVar9;
}

