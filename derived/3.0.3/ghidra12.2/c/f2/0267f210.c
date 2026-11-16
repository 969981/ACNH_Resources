
short * FUN_0267f210(byte *param_1,uint param_2)

{
  short *psVar1;
  long lVar2;
  short *psVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  byte local_24 [4];
  
  if (7 < *param_1) {
    return &DAT_05586008;
  }
  uVar5 = FUN_02582d8c(param_1,1);
  puVar4 = PTR_DAT_04bb4fb8;
  if ((((uVar5 < 8) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
     ((uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8 &&
      (lVar7 = *(long *)puVar4, *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))) {
    local_24[0] = *param_1;
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    uVar6 = FUN_02669430(local_24);
    puVar4 = PTR_DAT_04bb43c0;
    lVar2 = 0xff8;
    if ((uVar6 & 1) == 0) {
      lVar2 = 0x109c;
    }
    if (-1 < (int)param_2) {
      lVar2 = lVar7 + (ulong)uVar5 * 0x13f0 + lVar2;
      uVar5 = *(uint *)(lVar2 + 0xa0);
      if (0x13 < uVar5) {
        uVar5 = 0x14;
      }
      if (param_2 < uVar5) {
        psVar1 = (short *)(lVar2 + (ulong)param_2 * 8);
        if (*psVar1 == -2) {
          return psVar1;
        }
        lVar7 = *(long *)PTR_DAT_04bb43c0;
        uVar5 = FUN_0277d6c4(psVar1);
        if (*(long *)puVar4 != 0) {
          lVar7 = *(long *)(lVar7 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (*(uint *)(lVar7 + 0x1d8) <= uVar5) {
            return (short *)PTR_DAT_04bb37e0;
          }
          psVar3 = (short *)PTR_DAT_04bb37e0;
          if (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0) {
            psVar3 = psVar1;
          }
          return psVar3;
        }
      }
    }
  }
  return &DAT_05586008;
}

