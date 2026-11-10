
undefined8 FUN_00281f00(long *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  byte bVar4;
  ushort uVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  byte bVar13;
  uint uVar14;
  
  uVar5 = *(ushort *)((long)param_1 + 0x3c);
  if (uVar5 != 0) {
    uVar8 = 0;
    uVar12 = 0;
    bVar11 = 0;
    do {
      bVar1 = bVar11 + 1;
      uVar7 = (uint)bVar1;
      uVar9 = (uint)uVar5;
      if (((param_2 >> (ulong)(uVar12 & 0x1f) & 1) != 0) && (uVar7 < uVar5)) {
        uVar14 = uVar7;
        bVar13 = bVar1;
        do {
          uVar3 = uVar8;
          if ((param_2 >> (ulong)(uVar14 & 0x1f) & 1) != 0) {
            bVar4 = *(byte *)(param_1[1] + (ulong)uVar9 * (ulong)uVar12 + (ulong)uVar14);
            if (((bVar4 != bVar11) && (bVar4 != bVar13)) &&
               (uVar3 = *(short *)(*param_1 + ((ulong)bVar4 * (ulong)uVar9 + (ulong)uVar14) * 2) +
                        *(short *)(*param_1 + ((ulong)bVar4 + (ulong)uVar9 * (ulong)uVar12) * 2),
               uVar3 <= uVar8)) {
              uVar3 = uVar8;
            }
          }
          uVar8 = uVar3;
          bVar13 = bVar13 + 1;
          uVar14 = (uint)bVar13;
        } while (uVar14 < uVar9);
      }
      uVar12 = uVar7;
      bVar11 = bVar1;
    } while (bVar1 < uVar9);
    if (uVar9 != 0) {
      uVar10 = 0;
      uVar12 = 0;
      uVar7 = param_2;
      do {
        bVar11 = *(byte *)(param_1[2] + (uVar10 & 0xff));
        uVar14 = (uint)uVar10;
        if (bVar11 <= uVar12) {
          uVar14 = uVar7;
        }
        uVar2 = (uint)uVar10 + 1;
        uVar10 = (ulong)uVar2;
        if (uVar12 <= bVar11) {
          uVar12 = (uint)bVar11;
        }
        uVar7 = uVar14;
      } while ((uVar2 & 0xff) < uVar9);
      if (uVar12 != 0) {
        uVar6 = FUN_00281a30(param_1,uVar14,param_2,uVar8,uVar12 - 1);
        return uVar6;
      }
    }
  }
  return 0;
}

