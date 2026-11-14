
ushort FUN_0170aef0(undefined8 param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  uint *puVar6;
  uint *puVar7;
  
  if ((**(char **)(param_2 + 8) == '\0') || (uVar5 = FUN_0171ef80(param_2,10), (uVar5 & 1) == 0)) {
    puVar6 = (uint *)FUN_0171ee68(param_1);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    uVar3 = *puVar6;
    if (uVar3 == 0) {
      return 0;
    }
    if (puVar6 == (uint *)(ulong)uVar3) {
      return 0;
    }
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    if (*puVar7 == 0) {
      return 0;
    }
    uVar3 = puVar7[1];
    if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05248f20) &&
           (uVar4 = *(ushort *)(DAT_05248f28 + (long)(int)uVar2 * 2), uVar4 < 0x75)) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

