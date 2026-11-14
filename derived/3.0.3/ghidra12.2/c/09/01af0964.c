
int FUN_01af0964(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *__s;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  ushort uVar10;
  uint *puVar11;
  char cVar12;
  
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_1 + 0x10);
  if ((puVar11 != (uint *)0x0) && (uVar4 = *puVar11, uVar4 != 0 && puVar11 != (uint *)(ulong)uVar4))
  {
    puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
    if ((*puVar8 != 0) && ((uVar4 = puVar8[1], uVar4 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar11 - lVar2) / (ulong)uVar4);
        }
        if (*puVar8 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
           (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2) == 0x59)) {
          uVar10 = 0;
          uVar4 = *puVar11;
          if ((uVar4 != 0) && (puVar11 != (uint *)(ulong)uVar4)) {
            puVar8 = (uint *)((long)puVar11 - (long)(ulong)uVar4);
            uVar10 = 0;
            if (*puVar8 != 0) {
              uVar4 = puVar8[1];
              if ((uVar4 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar2 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar2 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar4 != 0) {
                    uVar3 = (uint)((ulong)((long)puVar11 - lVar2) / (ulong)uVar4);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                     uVar10 < 0xbd)) goto LAB_01af0a94;
                }
              }
              uVar10 = 0;
            }
          }
LAB_01af0a94:
          if (uVar10 == 0x59) {
            iVar6 = 0;
            if (*puVar11 != 0) {
              cVar12 = *PTR_DAT_04bbfe88;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  *puVar5 = 1;
                  memset(__s,0xff,0x1ac);
                }
                else {
                  uVar4 = *(uint *)(__s + 0xec);
                  if (-1 < (int)uVar4) {
                    iVar6 = 0;
                    if ((int *)((ulong)uVar4 + (long)puVar11) != (int *)0x0) {
                      iVar6 = *(int *)((ulong)uVar4 + (long)puVar11);
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) goto LAB_01af0ba8;
                }
                puVar8 = (uint *)(ulong)*puVar11;
                iVar6 = 0;
                if ((*puVar11 == 0) || (puVar11 == puVar8)) break;
                lVar2 = 0xc;
                if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
                  lVar2 = 0x1c;
                }
                lVar2 = (long)puVar11 + (lVar2 - (long)puVar8);
                if (lVar2 == 0) goto LAB_01af0ba8;
                uVar7 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
                *(undefined4 *)(__s + 0xec) = 0xfffffffe;
                iVar6 = 0;
                if (uVar7 == 0) break;
                piVar9 = (int *)(lVar2 + 4);
                while (piVar9[-1] != 0x718b024d) {
                  piVar9 = piVar9 + 2;
                  uVar7 = uVar7 - 1;
                  if (uVar7 == 0) {
                    iVar6 = 0;
                    goto LAB_01af0bac;
                  }
                }
                iVar6 = 0;
                iVar1 = 0;
                if (*piVar9 != -1) {
                  iVar1 = *piVar9;
                }
                *(int *)(__s + 0xec) = iVar1;
                if (*puVar11 == 0) break;
              } while( true );
            }
          }
          else {
LAB_01af0ba8:
            iVar6 = 0;
          }
LAB_01af0bac:
          return iVar6 * param_2;
        }
      }
    }
  }
  return 0;
}

