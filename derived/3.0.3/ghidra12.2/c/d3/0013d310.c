
uint FUN_0013d310(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint uVar13;
  
  param_2 = param_2 + (param_3 & 0xffff) * 0x20;
  puVar6 = (uint *)(param_2 + 0x10);
  uVar2 = *puVar6;
  if (1 < uVar2 + 1) {
    lVar8 = *(long *)(param_1 + 0x20);
    if (lVar8 == 0) {
      lVar8 = *(long *)(param_1 + 8);
      uVar11 = (ulong)*(byte *)(lVar8 + 0x38) << 0x18 | (ulong)*(byte *)(lVar8 + 0x39) << 0x10 |
               (ulong)*(byte *)(lVar8 + 0x3a) << 8;
      pbVar12 = (byte *)(lVar8 + 0x3b);
      uVar9 = *(uint *)(param_2 + 0x14);
      uVar10 = *(uint *)(param_2 + 0x18);
      if (uVar9 <= uVar10) goto LAB_0013d38c;
    }
    else {
      uVar11 = (ulong)*(byte *)(lVar8 + 0x10) << 0x18 | (ulong)*(byte *)(lVar8 + 0x11) << 0x10 |
               (ulong)*(byte *)(lVar8 + 0x12) << 8;
      pbVar12 = (byte *)(lVar8 + 0x13);
      uVar9 = *(uint *)(param_2 + 0x14);
      uVar10 = *(uint *)(param_2 + 0x18);
      if (uVar9 <= uVar10) {
LAB_0013d38c:
        lVar8 = lVar8 + (uVar11 | *pbVar12);
        uVar13 = uVar9 * 4 - 4;
        uVar1 = *(byte *)(lVar8 + (ulong)(uVar2 * 4 - 4)) & 0x7f;
        uVar7 = 0;
        uVar4 = 0xffffd8f0;
        do {
          uVar5 = *(byte *)(lVar8 + (ulong)uVar13) & 0x7f;
          if ((uVar2 < uVar9) && (uVar5 == uVar1)) {
            *puVar6 = uVar9;
            return uVar5;
          }
          uVar3 = uVar9;
          if (uVar1 <= uVar5 || (int)uVar5 <= (int)uVar4) {
            uVar5 = uVar4;
            uVar3 = uVar7;
          }
          uVar7 = uVar3;
          uVar9 = uVar9 + 1;
          uVar13 = uVar13 + 4;
          uVar4 = uVar5;
        } while (uVar9 <= uVar10);
        if (uVar5 != 0xffffd8f0) goto LAB_0013d410;
      }
    }
  }
  uVar5 = 0xffffd8f0;
  uVar7 = 0xffffffff;
LAB_0013d410:
  *puVar6 = uVar7;
  return uVar5;
}

