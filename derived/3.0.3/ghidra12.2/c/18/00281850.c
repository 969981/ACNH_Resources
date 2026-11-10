
void FUN_00281850(long *param_1,uint param_2,uint param_3)

{
  long lVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  uint uVar7;
  byte bVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  
  uVar12 = (uint)*(ushort *)((long)param_1 + 0x3c);
  if (*(ushort *)((long)param_1 + 0x3c) != 0) {
    uVar7 = 0;
    bVar6 = 0;
    do {
      if ((param_2 >> (ulong)(uVar7 & 0x1f) & 1) != 0) {
        uVar10 = 0;
        bVar8 = 0;
        do {
          if ((bVar6 != bVar8) &&
             (uVar9 = (uint)uVar10, (1 << (ulong)(uVar9 & 0x1f) & (param_3 | param_2)) != 0)) {
            lVar13 = *param_1;
            lVar1 = uVar12 * uVar7 + uVar10;
            if (*(short *)(lVar13 + lVar1 * 2) == 0) {
              if (uVar12 != 0) {
                uVar4 = 0;
                do {
                  if ((param_3 >> (ulong)(uVar4 & 0x1f) & 1) != 0) {
                    sVar2 = *(short *)(lVar13 + (ulong)(uVar12 * uVar7 + (uVar4 & 0xff)) * 2);
                    if ((((sVar2 != 0) &&
                         (sVar3 = *(short *)(lVar13 + (ulong)(uVar9 + uVar12 * (uVar4 & 0xff)) * 2),
                         sVar3 != 0)) && ((ushort)(sVar3 + sVar2) <= *(ushort *)(param_1 + 6))) &&
                       (uVar5 = (ulong)uVar4 & 0xff,
                       (ushort)(*(byte *)(param_1[2] + uVar5) + 2) <=
                       *(ushort *)((long)param_1 + 0x32))) {
                      *(char *)(param_1[1] + lVar1) = (char)uVar4;
                      *(char *)(param_1[1] +
                               (ulong)uVar7 + *(ushort *)((long)param_1 + 0x3c) * uVar10) =
                           (char)uVar4;
                      *(char *)(param_1[2] + uVar5) = *(char *)(param_1[2] + uVar5) + '\x02';
                      goto LAB_002818bc;
                    }
                  }
                  uVar4 = uVar4 + 1;
                } while ((uVar4 & 0xff) < uVar12);
                uVar4 = 0;
                bVar11 = 0;
                do {
                  if ((((param_3 >> (ulong)(uVar4 & 0x1f) & 1) != 0) &&
                      (*(short *)(lVar13 + (ulong)(uVar7 * uVar12 + uVar4) * 2) != 0)) &&
                     (*(short *)(lVar13 + (ulong)(uVar9 + uVar4 * uVar12) * 2) != 0)) {
                    *(byte *)(param_1[1] + uVar7 * uVar12 + uVar10) = bVar11;
                    *(byte *)(param_1[1] + (ulong)uVar7 + *(ushort *)((long)param_1 + 0x3c) * uVar10
                             ) = bVar11;
                    *(char *)(param_1[2] + (ulong)bVar11) =
                         *(char *)(param_1[2] + (ulong)bVar11) + '\x02';
                    break;
                  }
                  bVar11 = bVar11 + 1;
                  uVar4 = (uint)bVar11;
                } while (uVar4 < uVar12);
              }
            }
            else {
              *(byte *)(param_1[1] + lVar1) = bVar8;
              *(byte *)(param_1[1] + (ulong)uVar7 + *(ushort *)((long)param_1 + 0x3c) * uVar10) =
                   bVar6;
            }
          }
LAB_002818bc:
          uVar12 = (uint)*(ushort *)((long)param_1 + 0x3c);
          bVar8 = bVar8 + 1;
          uVar10 = (ulong)bVar8;
        } while (bVar8 < uVar12);
      }
      bVar6 = bVar6 + 1;
      uVar7 = (uint)bVar6;
    } while (uVar7 < uVar12);
  }
  return;
}

