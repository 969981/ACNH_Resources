
undefined8 FUN_003a1910(long param_1)

{
  long lVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  bool bVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  uVar4 = *(uint *)(param_1 + 4);
  if ((uVar4 & 1) == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 0x4c);
    if ((ulong)uVar2 == 0) {
      uVar6 = 0;
    }
    else {
      uVar7 = 0;
      uVar6 = 0;
      bVar8 = false;
      do {
        lVar9 = *(long *)(param_1 + 0x28) + uVar7 * 0x38;
        uVar5 = (ulong)*(byte *)(lVar9 + 0x2e);
        if (uVar5 != 0) {
          lVar10 = 0;
          lVar11 = uVar5 * 0x30;
          do {
            while( true ) {
              lVar1 = *(long *)(lVar9 + 8) + lVar10;
              uVar3 = *(ushort *)(lVar1 + 0x10);
              if ((!bVar8) && ((uVar3 & 0x70) == 0x20)) {
                uVar6 = *(undefined8 *)(lVar1 + 8);
                bVar8 = true;
              }
              if ((uVar3 >> 6 & 1) != 0) break;
              FUN_0039ddf4();
              lVar10 = lVar10 + 0x30;
              if (lVar11 == lVar10) goto LAB_003a1960;
            }
            FUN_0039de78();
            lVar10 = lVar10 + 0x30;
          } while (lVar11 != lVar10);
        }
LAB_003a1960:
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar2);
      uVar4 = *(uint *)(param_1 + 4);
    }
    *(uint *)(param_1 + 4) = uVar4 ^ 1;
  }
  return uVar6;
}

