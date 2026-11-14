
undefined8 FUN_01ae4e50(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  lVar5 = FUN_01ae4d10();
  if (lVar5 == 0) {
    return 0;
  }
  puVar7 = *(uint **)(param_1 + 0x10);
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  uVar3 = *puVar7;
  uVar4 = 0;
  if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
    puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
    if ((*puVar8 != 0) && ((uVar3 = puVar8[1], uVar3 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
        }
        if (*puVar8 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326af0) &&
           (uVar4 = *(ushort *)(DAT_05326af8 + (long)(int)uVar2 * 2), uVar4 < 0xa2))
        goto LAB_01ae4f08;
      }
    }
    uVar4 = 0;
  }
LAB_01ae4f08:
  uVar6 = FUN_01ae5024(uVar4);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  *(ushort *)(lVar5 + 2) = *(ushort *)(lVar5 + 2) & 0xfc00;
  return 1;
}

