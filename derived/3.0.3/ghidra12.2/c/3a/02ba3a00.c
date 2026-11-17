
void FUN_02ba3a00(uint *param_1)

{
  uint *puVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined2 uVar8;
  uint *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  
  if ((param_1 != (uint *)0x0) && (uVar5 = *param_1, uVar5 != 0)) {
    uVar13 = 0;
    do {
      if (((uVar13 < *param_1) && (param_1[1] != 0)) && ((ushort)param_1[2] != 0)) {
        iVar14 = 0xc;
        if (*(char *)((long)param_1 + 10) != '\0') {
          iVar14 = 0x1c;
        }
        puVar1 = (uint *)((ulong)(param_1[1] * uVar13 + (uint)(ushort)param_1[2] * 8 + iVar14) +
                         (long)param_1);
        if (puVar1 != (uint *)0x0) {
          puVar9 = (uint *)(ulong)*puVar1;
          if (*puVar1 == 0) {
LAB_02ba3b30:
            uVar6 = 0;
LAB_02ba3b34:
            uVar7 = FUN_02ba4180(uVar6);
            if (0x16 < uVar7) {
              uVar7 = 0;
            }
            uVar8 = (undefined2)uVar7;
          }
          else {
            if ((DAT_05642a20 & 1) == 0) {
              DAT_05642a24 = 0xffffffffffffffff;
              DAT_05642a2c = 0xffffffffffffffff;
              DAT_05642a20 = 1;
              uVar10 = 0xffffffff;
              DAT_05642b04 = 0xffffffff;
              DAT_05642a34 = 0xffffffffffffffff;
              DAT_05642a3c = 0xffffffffffffffff;
              DAT_05642a44 = 0xffffffffffffffff;
              DAT_05642a4c = 0xffffffffffffffff;
              DAT_05642a54 = 0xffffffffffffffff;
              DAT_05642a5c = 0xffffffffffffffff;
              DAT_05642a64 = 0xffffffffffffffff;
              DAT_05642a6c = 0xffffffffffffffff;
              DAT_05642a74 = 0xffffffffffffffff;
              DAT_05642a7c = 0xffffffffffffffff;
              DAT_05642a84 = 0xffffffffffffffff;
              DAT_05642a8c = 0xffffffffffffffff;
              DAT_05642a94 = 0xffffffffffffffff;
              DAT_05642a9c = 0xffffffffffffffff;
              DAT_05642aa4 = 0xffffffffffffffff;
              DAT_05642aac = 0xffffffffffffffff;
              DAT_05642ab4 = 0xffffffffffffffff;
              DAT_05642abc = 0xffffffffffffffff;
              DAT_05642ac4 = 0xffffffffffffffff;
              DAT_05642acc = 0xffffffffffffffff;
              DAT_05642ad4 = 0xffffffffffffffff;
              DAT_05642adc = 0xffffffffffffffff;
              DAT_05642ae4 = 0xffffffffffffffff;
              DAT_05642aec = 0xffffffffffffffff;
              DAT_05642af4 = 0xffffffffffffffff;
              DAT_05642afc = 0xffffffffffffffff;
LAB_02ba3b28:
              if (puVar1 == puVar9) goto LAB_02ba3b30;
              do {
                if (uVar10 != 0xffffffff) goto LAB_02ba3c44;
                lVar2 = 0xc;
                if (*(char *)((long)puVar1 + (10 - (long)puVar9)) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar1 + (lVar2 - (long)puVar9);
                if (lVar2 == 0) goto LAB_02ba3c44;
                uVar10 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar9));
                DAT_05642a24 = CONCAT44(DAT_05642a24._4_4_,0xfffffffe);
                if (uVar10 == 0) goto LAB_02ba3c44;
                puVar12 = (uint *)(lVar2 + 4);
                while (puVar12[-1] != 0xa988063c) {
                  puVar12 = puVar12 + 2;
                  uVar10 = uVar10 - 1;
                  if (uVar10 == 0) goto LAB_02ba3c44;
                }
                uVar10 = (ulong)*puVar12;
                uVar3 = 0;
                if (*puVar12 != 0xffffffff) {
                  uVar3 = uVar10;
                }
                DAT_05642a24 = CONCAT44(DAT_05642a24._4_4_,(int)uVar3);
              } while ((int)uVar3 < 0);
              puVar11 = (undefined4 *)((long)puVar1 + uVar3);
              if (puVar11 != (undefined4 *)0x0) goto LAB_02ba3ad0;
LAB_02ba3c44:
              uVar6 = 0;
              if (puVar1 != puVar9) goto LAB_02ba3c50;
              goto LAB_02ba3b34;
            }
            uVar10 = DAT_05642a24 & 0xffffffff;
            if ((int)DAT_05642a24 < 0) goto LAB_02ba3b28;
            puVar11 = (undefined4 *)((long)puVar1 + uVar10);
            if (puVar11 == (undefined4 *)0x0) goto LAB_02ba3c44;
LAB_02ba3ad0:
            uVar6 = *puVar11;
            if (puVar1 == puVar9) goto LAB_02ba3b34;
LAB_02ba3c50:
            if (*(char *)((long)puVar1 + (0xb - (long)puVar9)) == '\0') goto LAB_02ba3b34;
            uVar7 = FUN_02ba3c90();
            if (0x16 < uVar7) {
              uVar7 = 0;
            }
            uVar8 = (undefined2)uVar7;
          }
          puVar9 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if (((*puVar1 != 0) && (puVar9 != (uint *)0x0)) &&
             ((*puVar9 != 0 && ((uVar7 = puVar9[1], uVar7 != 0 && ((ulong)(ushort)puVar9[2] != 0))))
             )) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar9 + lVar2 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar2 != 0) {
              uVar4 = 0;
              if ((ulong)uVar7 != 0) {
                uVar4 = (uint)((ulong)((long)puVar1 - lVar2) / (ulong)uVar7);
              }
              if (*puVar9 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if (uVar4 < DAT_05642b18) {
                *(undefined2 *)(DAT_05642b20 + (long)(int)uVar4 * 2) = uVar8;
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar5);
  }
  return;
}

