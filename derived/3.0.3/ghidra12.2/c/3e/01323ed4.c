
bool FUN_01323ed4(long param_1)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(param_1 + 8);
  if (puVar5 == (uint *)0x0) {
    return false;
  }
  uVar4 = *puVar5;
  if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
    puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
    if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar4 != 0) {
          uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05159970) &&
           (uVar3 = *(ushort *)(DAT_05159978 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
           uVar3 < 0x18)) goto LAB_01323f64;
      }
    }
  }
  uVar4 = 0;
LAB_01323f64:
  if (((((uint)DAT_0518f810 == uVar4) || (DAT_0518f810._4_4_ == uVar4)) ||
      (((uint)DAT_0518f818 == uVar4 ||
       (((DAT_0518f818._4_4_ == uVar4 || ((uint)DAT_0518f820 == uVar4)) ||
        (DAT_0518f820._4_4_ == uVar4)))))) || ((uint)DAT_0518f828 == uVar4)) {
    return true;
  }
  return DAT_0518f828._4_4_ == uVar4;
}

