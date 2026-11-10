
long * FUN_00355bb0(long param_1,char param_2,uint param_3)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  
  if (*(uint *)(param_1 + 0x1880) != 0) {
    uVar8 = 0;
    plVar1 = (long *)(param_1 + 0x60);
    do {
      if (*(char *)(param_1 + uVar8 * 0x18 + 0x94) == param_2) {
        lVar6 = param_1 + uVar8 * 0x18;
        plVar9 = *(long **)(lVar6 + 0x88);
        plVar5 = (long *)(lVar6 + 0x80);
        if (plVar9 != plVar5) {
          iVar11 = 0;
          plVar7 = plVar9;
          plVar10 = plVar9;
          do {
            while ((char)plVar10[5] == '\0' && *(int *)((long)plVar10 + 0x2c) == 0) {
              uVar2 = (uint)*(ushort *)((long)plVar10 + 0x34);
              if (iVar11 == 0) {
                plVar7 = plVar10;
                if (plVar10 == plVar9) goto LAB_00355cac;
LAB_00355c54:
                plVar4 = plVar7;
                do {
                  plVar4 = (long *)*plVar4;
                  if ((*(byte *)(plVar4 + 5) >> 3 & 1) == 0) break;
                } while (plVar9 != plVar4);
                uVar3 = ((uint)*(ushort *)(plVar7 + 6) -
                        ((uint)*(ushort *)(plVar4 + 6) + (uint)*(ushort *)((long)plVar4 + 0x34))) -
                        2;
                uVar2 = (uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU)) + uVar2;
              }
              else {
                uVar2 = ((uint)*(ushort *)(plVar10 + 6) + (uint)*(ushort *)((long)plVar10 + 0x34)) -
                        (uint)*(ushort *)(plVar7 + 6);
                if (plVar7 != plVar9) goto LAB_00355c54;
LAB_00355cac:
                uVar3 = 0;
              }
              if ((param_3 & 0xffff) <= uVar2) {
                plVar5 = (long *)plVar10[1];
                if (plVar7 != plVar5) {
                  plVar9 = plVar7;
                  do {
                    if ((*(byte *)(plVar9 + 5) >> 3 & 1) == 0) {
                      plVar10 = plVar9 + -2;
                      lVar6 = *plVar10;
                      *(byte *)(plVar9 + 5) = *(byte *)(plVar9 + 5) | 8;
                      *plVar10 = *plVar1;
                      *(long **)(lVar6 + 8) = plVar1;
                      *(long **)(*plVar1 + 8) = plVar10;
                      *plVar1 = lVar6;
                    }
                    plVar9 = (long *)plVar9[1];
                  } while (plVar9 != plVar5);
                }
                if (0 < (int)uVar3) {
                  *(short *)(plVar7 + 6) = (short)plVar7[6] - (short)uVar3;
                }
                return plVar7 + -2;
              }
              iVar11 = iVar11 + 1;
              plVar10 = (long *)plVar10[1];
              if (plVar10 == plVar5) goto LAB_00355bd0;
            }
            iVar11 = 0;
            plVar10 = (long *)plVar10[1];
          } while (plVar10 != plVar5);
        }
      }
LAB_00355bd0:
      uVar8 = uVar8 + 1;
    } while (uVar8 < *(uint *)(param_1 + 0x1880));
  }
  return (long *)0x0;
}

