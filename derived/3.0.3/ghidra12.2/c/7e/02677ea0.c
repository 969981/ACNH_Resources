
short * FUN_02677ea0(byte *param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  short *psVar8;
  short *psVar9;
  long lVar10;
  byte local_24 [4];
  
  if ((7 < *param_1) ||
     ((((uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4 ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0')) &&
      (((7 < *param_1 || (uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4)) ||
       ((lVar6 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0' ||
        ((*(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0' ||
         (*(int *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d0) != 1)))))))))) {
LAB_02677ff0:
    return &DAT_05586008;
  }
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  lVar6 = FUN_025830c0(DAT_055021a0,local_24,1);
  if (lVar6 == 0) goto LAB_02677ff0;
  lVar10 = lVar6 + 0x194b0;
  if (*(long *)(lVar6 + 0x194b8) == 0) {
    lVar10 = *(long *)(DAT_05574040 + 0x20);
  }
  if ((*(long **)(lVar10 + 0x98) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x98), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar6 = *(long *)(lVar10 + 0x80) + *(long *)(lVar10 + 0x78);
  uVar5 = *(uint *)(lVar6 + 0x158);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  uVar2 = param_2 - uVar5;
  if (param_2 < uVar5) {
    psVar9 = (short *)(lVar6 + (ulong)param_2 * 8 + 0xb8);
    sVar1 = *psVar9;
LAB_02678064:
    psVar8 = psVar9;
    if (sVar1 == -2) goto LAB_026780d4;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar5 = FUN_0277d6c4(psVar9);
    if (*(long *)puVar3 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      psVar8 = (short *)PTR_DAT_04bb37e0;
      if ((uVar5 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        psVar8 = psVar9;
      }
      goto LAB_026780d4;
    }
  }
  else if (-1 < (int)uVar2) {
    uVar5 = *(uint *)(lVar6 + 0xa0);
    if (0x13 < uVar5) {
      uVar5 = 0x14;
    }
    if (uVar2 < uVar5) {
      psVar9 = (short *)(lVar6 + (ulong)uVar2 * 8);
      sVar1 = *psVar9;
      goto LAB_02678064;
    }
  }
  psVar8 = &DAT_05586008;
LAB_026780d4:
  if ((uVar4 & 1) != 0) {
    return psVar8;
  }
  if (*(long *)(lVar10 + 0x98) == 0) {
    return psVar8;
  }
  puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x98) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    return psVar8;
  }
  (**(code **)*puVar7)();
  return psVar8;
}

