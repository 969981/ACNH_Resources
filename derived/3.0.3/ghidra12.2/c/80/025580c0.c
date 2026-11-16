
undefined * FUN_025580c0(byte *param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  
  uVar7 = (ulong)*param_1;
  if (7 < *param_1) {
    return PTR_DAT_04bb37e0;
  }
  lVar8 = **(long **)PTR_DAT_04bb27d0;
  if (*(byte *)(lVar8 + 0x476) < 2) {
    iVar5 = FUN_02582d8c(param_1,2);
    if (iVar5 < 0) {
      return PTR_DAT_04bb37e0;
    }
    uVar7 = (ulong)*param_1;
    if (7 < *param_1) {
      return PTR_DAT_04bb37e0;
    }
  }
  else {
    bVar4 = *(byte *)(lVar8 + uVar7 * 4 + 0x44e);
    if ((long)(char)bVar4 == 0xffffffffffffffff) {
      return PTR_DAT_04bb37e0;
    }
    pbVar2 = (byte *)(lVar8 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x80;
    if (7 < bVar4) {
      pbVar2 = (byte *)(lVar8 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) == 0) {
      return PTR_DAT_04bb37e0;
    }
  }
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  puVar1 = (undefined *)(DAT_054f5738 + uVar7 * 8 + 0xe10);
  uVar6 = FUN_0277d6c4(puVar1);
  if (*(long *)puVar3 == 0) {
    return PTR_DAT_04bb37e0;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar6) {
    return PTR_DAT_04bb37e0;
  }
  puVar3 = PTR_DAT_04bb37e0;
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0) {
    puVar3 = puVar1;
  }
  return puVar3;
}

