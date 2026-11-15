
undefined8 FUN_0215ed50(long param_1,int *param_2,short param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint *puVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  long lVar9;
  ulong uVar10;
  char cVar11;
  uint uVar12;
  int iVar13;
  
  lVar9 = *(long *)(param_1 + 8);
  if (lVar9 != 0) {
    uVar2 = *(uint *)(lVar9 + 0x1c0);
    uVar12 = uVar2;
    if ((0 < (int)uVar2) ||
       (((*(long *)(lVar9 + 0xb0) != 0 &&
         (puVar5 = *(uint **)(*(long *)(lVar9 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
        (uVar12 = *puVar5, uVar12 != 0)))) {
      uVar10 = 0;
      cVar11 = DAT_053f6410;
      do {
        if ((int)uVar2 < 1) {
          if (((((*(long *)(lVar9 + 0xb0) != 0) &&
                (puVar5 = *(uint **)(*(long *)(lVar9 + 0xb0) + 8), puVar5 != (uint *)0x0)) &&
               ((*(uint *)(lVar9 + 200) <= uVar10 ||
                (*(char *)(*(long *)(lVar9 + 0xd0) + uVar10) != '\0')))) &&
              ((uVar10 < *puVar5 && (puVar5[1] != 0)))) && ((ushort)puVar5[2] != 0)) {
            iVar13 = 0xc;
            if (*(char *)((long)puVar5 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar5 = (uint *)((ulong)(puVar5[1] * (int)uVar10 + (uint)(ushort)puVar5[2] * 8 + iVar13
                                     ) + (long)puVar5);
            goto joined_r0x0215ef00;
          }
        }
        else if (uVar10 < uVar2) {
          uVar7 = uVar10 & 0xffffffff;
          if (*(uint *)(lVar9 + 0x1b0) <= uVar10) {
            uVar7 = 0;
          }
          puVar5 = *(uint **)(*(long *)(lVar9 + 0x1b8) + uVar7 * 8);
joined_r0x0215ef00:
          if (puVar5 != (uint *)0x0) {
            if (*puVar5 != 0) {
              while( true ) {
                if (cVar11 == '\0') {
                  cVar11 = '\x01';
                  DAT_053f6414 = 0xffffffffffffffff;
                  DAT_053f641c = 0xffffffffffffffff;
                  DAT_053f6410 = '\x01';
                  DAT_053f6434 = 0xffffffffffffffff;
                  DAT_053f6424 = 0xffffffffffffffff;
                  DAT_053f642c = -1;
                  uVar3 = *puVar5;
                }
                else {
                  if (-1 < DAT_053f642c) {
                    sVar4 = 0;
                    if ((short *)((ulong)DAT_053f642c._4_4_ + (long)puVar5) != (short *)0x0) {
                      sVar4 = *(short *)((ulong)DAT_053f642c._4_4_ + (long)puVar5);
                    }
                    goto LAB_0215ee94;
                  }
                  if (DAT_053f642c._4_4_ != 0xffffffff) break;
                  uVar3 = *puVar5;
                }
                if ((uVar3 == 0) || (puVar6 = (uint *)(ulong)uVar3, puVar5 == puVar6)) break;
                lVar1 = 0xc;
                if (*(char *)((long)puVar5 + (10 - (long)puVar6)) != '\0') {
                  lVar1 = 0x1c;
                }
                lVar1 = (long)puVar5 + (lVar1 - (long)puVar6);
                if (lVar1 == 0) break;
                uVar7 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar6));
                DAT_053f642c = CONCAT44(0xfffffffe,(undefined4)DAT_053f642c);
                if (uVar7 == 0) break;
                piVar8 = (int *)(lVar1 + 4);
                while (piVar8[-1] != 0x54706054) {
                  piVar8 = piVar8 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) goto LAB_0215ee90;
                }
                iVar13 = 0;
                if (*piVar8 != -1) {
                  iVar13 = *piVar8;
                }
                DAT_053f642c = CONCAT44(iVar13,(undefined4)DAT_053f642c);
                if (*puVar5 == 0) break;
              }
            }
LAB_0215ee90:
            sVar4 = 0;
LAB_0215ee94:
            if (sVar4 == param_3) {
              if (param_2 == (int *)0x0) {
                return 1;
              }
              *param_2 = (int)uVar10;
              return 1;
            }
          }
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar12);
    }
  }
  return 0;
}

