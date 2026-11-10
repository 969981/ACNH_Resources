
undefined8 FUN_00281a30(long *param_1,uint param_2,uint param_3,uint param_4,ushort param_5)

{
  ushort uVar1;
  long lVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  
  uVar3 = *(ushort *)((long)param_1 + 0x3c);
  if (uVar3 < 2) {
    return 0;
  }
  uVar8 = 1;
  uVar6 = 1;
  do {
    uVar5 = (uint)uVar6;
    if (((uVar5 & 0xff) != (param_2 & 0xff)) && ((uVar6 & 0xff) != 0)) {
      uVar4 = uVar8 * uVar3;
      uVar7 = 0;
      do {
        if (((uint)uVar7 != (param_2 & 0xff)) &&
           (lVar2 = uVar7 + uVar4, (uint)*(byte *)(param_1[1] + lVar2) == (param_2 & 0xff))) {
          uVar10 = 0;
          bVar9 = 0;
          do {
            if ((((((uint)bVar9 != (param_2 & 0xff)) && ((uint)uVar7 != (uint)bVar9)) &&
                 ((uint)bVar9 != (uVar5 & 0xff))) &&
                (((1 << (ulong)(uVar10 & 0x1f) & param_3) != 0 &&
                 (uVar12 = (uint)*(ushort *)(*param_1 + (ulong)(uVar10 + uVar4) * 2), uVar12 != 0)))
                ) && ((uVar10 = (uint)*(ushort *)(*param_1 + (uVar7 + uVar10 * uVar3) * 2),
                      uVar10 != 0 &&
                      (uVar10 = uVar10 + uVar12, (uVar10 & 0xffff) <= (uint)*(ushort *)(param_1 + 6)
                      )))) {
              uVar11 = (ulong)bVar9;
              uVar1 = *(byte *)(param_1[2] + uVar11) + 2;
              if (((uVar1 <= *(ushort *)((long)param_1 + 0x32)) && (uVar10 <= (param_4 & 0xffff)))
                 && (uVar1 <= param_5)) {
                *(byte *)(param_1[1] + lVar2) = bVar9;
                *(byte *)(param_1[1] +
                         (uVar7 & 0xffffffff) * (ulong)*(ushort *)((long)param_1 + 0x3c) +
                         (ulong)uVar8) = bVar9;
                *(char *)(param_1[2] + uVar11) = *(char *)(param_1[2] + uVar11) + '\x02';
                *(char *)(param_1[2] + ((ulong)param_2 & 0xff)) =
                     *(char *)(param_1[2] + ((ulong)param_2 & 0xff)) + -2;
                return 1;
              }
            }
            bVar9 = bVar9 + 1;
            uVar10 = (uint)bVar9;
          } while (uVar10 < uVar3);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != (uVar6 & 0xff));
    }
    uVar6 = (ulong)(uVar5 + 1);
    uVar8 = uVar5 + 1 & 0xff;
    if (uVar3 <= uVar8) {
      return 0;
    }
  } while( true );
}

