
undefined8 FUN_002814e0(long *param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined1 uVar15;
  
  uVar4 = *(ushort *)((long)param_1 + 0x3c);
  if (uVar4 != 0) {
    uVar9 = 0;
    uVar14 = 0;
    uVar8 = (uint)param_2;
    uVar1 = uVar8 & 0xff;
    do {
      if ((param_3 >> (ulong)((uint)uVar9 & 0x1f) & 1) != 0) {
        lVar11 = *param_1;
        lVar12 = uVar4 * uVar1 + uVar9;
        if (*(short *)(lVar11 + lVar12 * 2) == 0) {
          if (uVar4 == 0) {
            uVar15 = 1;
          }
          else {
            uVar10 = 0;
            uVar7 = uVar4 * uVar1;
            uVar15 = 1;
            do {
              uVar2 = uVar10 & 0xff;
              if ((((uVar2 != (uVar14 & 0xff)) && (uVar2 != (uVar8 & 0xff))) &&
                  ((1 << (ulong)(uVar10 & 0x1f) & param_3) != 0)) &&
                 ((sVar5 = *(short *)(lVar11 + (ulong)(uVar7 + uVar2) * 2), sVar5 != 0 &&
                  (sVar6 = *(short *)(lVar11 + (ulong)((uint)uVar9 + uVar4 * uVar2) * 2), sVar6 != 0
                  )))) {
                if (*(ushort *)(param_1 + 6) < (ushort)(sVar6 + sVar5)) {
                  uVar15 = 2;
                }
                else {
                  uVar13 = (ulong)uVar10 & 0xff;
                  if ((ushort)(*(byte *)(param_1[2] + uVar13) + 2) <=
                      *(ushort *)((long)param_1 + 0x32)) {
                    *(char *)(param_1[1] + uVar7 + uVar9) = (char)uVar10;
                    *(char *)(param_1[1] +
                             (param_2 & 0xff) + *(ushort *)((long)param_1 + 0x3c) * uVar9) =
                         (char)uVar10;
                    *(char *)(param_1[2] + uVar13) = *(char *)(param_1[2] + uVar13) + '\x02';
                    goto LAB_00281548;
                  }
                  uVar15 = 3;
                }
              }
              uVar10 = uVar10 + 1;
            } while ((uVar10 & 0xff) < (uint)uVar4);
          }
          uVar9 = FUN_00281370(param_1,param_2 & 0xffffffff,uVar14,param_3);
          if ((uVar9 & 1) == 0) {
            *(undefined1 *)(param_1[5] + (param_2 & 0xff)) = uVar15;
            if ((uVar14 & 0xff) != 0) {
              uVar9 = 0;
              do {
                lVar12 = param_1[1];
                bVar3 = *(byte *)(lVar12 + (param_2 & 0xff) *
                                           (ulong)*(ushort *)((long)param_1 + 0x3c) + uVar9);
                if ((uint)bVar3 == (uVar8 & 0xff) || (uint)uVar9 == (uint)bVar3) {
                  uVar13 = uVar9 + (param_2 & 0xff) * (ulong)*(ushort *)((long)param_1 + 0x3c);
                }
                else {
                  *(char *)(param_1[2] + (ulong)bVar3) = *(char *)(param_1[2] + (ulong)bVar3) + -2;
                  lVar12 = param_1[1];
                  uVar13 = (ulong)((uint)uVar9 + *(ushort *)((long)param_1 + 0x3c) * uVar1);
                }
                *(char *)(lVar12 + uVar13) = (char)param_2;
                *(char *)(param_1[1] +
                         (uVar9 & 0xffffffff) * (ulong)*(ushort *)((long)param_1 + 0x3c) +
                         (param_2 & 0xff)) = (char)uVar9;
                uVar9 = uVar9 + 1;
              } while ((uVar14 & 0xff) != (uint)uVar9);
            }
            return 0;
          }
        }
        else {
          *(char *)(param_1[1] + lVar12) = (char)uVar14;
          *(char *)(param_1[1] + (param_2 & 0xff) + *(ushort *)((long)param_1 + 0x3c) * uVar9) =
               (char)(param_2 & 0xffffffff);
        }
      }
LAB_00281548:
      uVar4 = *(ushort *)((long)param_1 + 0x3c);
      uVar14 = uVar14 + 1;
      uVar9 = (ulong)(uVar14 & 0xff);
    } while ((uVar14 & 0xff) < (uint)uVar4);
  }
  return 1;
}

