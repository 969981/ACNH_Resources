
void FUN_01c216f0(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  undefined4 uVar7;
  uint uVar8;
  char cVar9;
  undefined2 uVar10;
  ulong uVar11;
  int *piVar12;
  uint uVar13;
  int iVar14;
  
  if ((param_1 != (uint *)0x0) && (uVar4 = *param_1, uVar4 != 0)) {
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
          uVar8 = *puVar1;
          if (uVar8 != 0) {
            cVar9 = DAT_0534b078;
            do {
              if (cVar9 == '\0') {
                DAT_0534b07c = 0xffffffffffffffff;
                DAT_0534b084 = 0xffffffffffffffff;
                cVar9 = '\x01';
                DAT_0534b08c = 0xffffffff;
                uVar8 = *puVar1;
                DAT_0534b078 = '\x01';
              }
              else {
                if (-1 < (int)DAT_0534b07c) {
                  puVar2 = (undefined4 *)((long)puVar1 + (DAT_0534b07c & 0xffffffff));
                  if (puVar2 != (undefined4 *)0x0) {
                    uVar7 = *puVar2;
                    goto LAB_01c21870;
                  }
                  break;
                }
                if ((int)DAT_0534b07c != -1) break;
              }
              puVar6 = (uint *)(ulong)uVar8;
              uVar7 = 0;
              if ((puVar6 == (uint *)0x0) || (uVar7 = 0, puVar1 == puVar6)) goto LAB_01c21870;
              lVar5 = 0xc;
              if (*(char *)((long)puVar1 + (10 - (long)puVar6)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar1 + (lVar5 - (long)puVar6);
              if (lVar5 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar1 + (8 - (long)puVar6));
              DAT_0534b07c._4_4_ = (undefined4)(DAT_0534b07c >> 0x20);
              DAT_0534b07c = CONCAT44(DAT_0534b07c._4_4_,0xfffffffe);
              if (uVar11 == 0) break;
              piVar12 = (int *)(lVar5 + 4);
              while (piVar12[-1] != -0x4188918f) {
                piVar12 = piVar12 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_01c2186c;
              }
              iVar14 = 0;
              if (*piVar12 != -1) {
                iVar14 = *piVar12;
              }
              DAT_0534b07c = CONCAT44(DAT_0534b07c._4_4_,iVar14);
              uVar8 = *puVar1;
              if (uVar8 == 0) break;
            } while( true );
          }
LAB_01c2186c:
          uVar7 = 0;
LAB_01c21870:
          if (((*puVar1 == 0) || (lVar5 = (long)puVar1 - (ulong)*puVar1, lVar5 == 0)) ||
             (*(char *)(lVar5 + 0xb) == '\0')) {
            uVar8 = FUN_01c1abd0(uVar7,0);
            if (9 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          else {
            uVar8 = FUN_01c1a5f0(uVar7,0);
            if (9 < uVar8) {
              uVar8 = 0;
            }
            uVar10 = (undefined2)uVar8;
          }
          puVar6 = (uint *)((long)puVar1 - (ulong)*puVar1);
          if ((((*puVar1 != 0) && (puVar6 != (uint *)0x0)) && (*puVar6 != 0)) &&
             ((uVar8 = puVar6[1], uVar8 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
            lVar5 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar6 + lVar5 + (ulong)(ushort)puVar6[2] * 8;
            if (lVar5 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)puVar1 - lVar5) / (ulong)uVar8);
              }
              if (*puVar6 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_0534b090) {
                *(undefined2 *)(DAT_0534b098 + (long)(int)uVar3 * 2) = uVar10;
              }
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != uVar4);
  }
  return;
}

