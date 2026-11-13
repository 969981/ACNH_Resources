
ushort FUN_0123db50(undefined8 param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  
  lVar1 = DAT_05150358;
  if (param_2 == (uint *)0x0) {
    uVar4 = FUN_0277d6c4();
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if (*(uint *)(lVar1 + 0x1d8) <= uVar4) {
      return 0;
    }
    param_2 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8);
    if (param_2 == (uint *)0x0) {
      return 0;
    }
  }
  uVar4 = *param_2;
  if (uVar4 == 0) {
    return 0;
  }
  if (param_2 == (uint *)(ulong)uVar4) {
    return 0;
  }
  puVar5 = (uint *)((long)param_2 - (long)(ulong)uVar4);
  if (((*puVar5 != 0) && (uVar4 = puVar5[1], uVar4 != 0)) && ((ulong)(ushort)puVar5[2] != 0)) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
    if (lVar1 != 0) {
      uVar2 = 0;
      if ((ulong)uVar4 != 0) {
        uVar2 = (uint)((ulong)((long)param_2 - lVar1) / (ulong)uVar4);
      }
      if (*puVar5 <= uVar2) {
        uVar2 = 0xffffffff;
      }
      if ((uVar2 < DAT_051503b8) &&
         (uVar3 = *(ushort *)(DAT_051503c0 + (long)(int)uVar2 * 2), uVar3 < 0x2f)) {
        return uVar3;
      }
    }
  }
  return 0;
}

