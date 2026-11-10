
void FUN_0036b820(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ushort *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  
  if (*(short *)(param_2 + 0x46) == 0) {
    *(undefined2 *)(param_2 + 0x46) = 1;
    lVar7 = 0;
    if (*(long *)(param_2 + 0x28) != 0) {
      lVar7 = param_3 + *(long *)(param_2 + 0x28);
    }
    lVar3 = 0;
    if (*(long *)(param_2 + 0x30) != 0) {
      lVar3 = param_3 + *(long *)(param_2 + 0x30);
    }
    *(long *)(param_2 + 0x28) = lVar7;
    *(long *)(param_2 + 0x30) = lVar3;
    lVar7 = 0;
    if (*(long *)(param_2 + 0x38) != 0) {
      lVar7 = param_3 + *(long *)(param_2 + 0x38);
    }
    *(long *)(param_2 + 0x38) = lVar7;
    if (*(short *)(param_2 + 0x42) != 0) {
      uVar2 = 0;
      do {
        lVar3 = *(long *)(param_2 + 0x30) + uVar2 * 0x48;
        plVar4 = (long *)(lVar3 + 0x38);
        lVar7 = 0;
        if (*plVar4 != 0) {
          lVar7 = param_3 + *plVar4;
        }
        *plVar4 = lVar7;
        puVar5 = (ushort *)(lVar3 + 0x44);
        if (*puVar5 != 0) {
          uVar6 = 0;
          lVar7 = 0x20;
          do {
            uVar6 = uVar6 + 1;
            lVar10 = *(long *)(*plVar4 + lVar7);
            lVar3 = 0;
            if (lVar10 != 0) {
              lVar3 = param_3 + lVar10;
            }
            *(long *)(*plVar4 + lVar7) = lVar3;
            lVar7 = lVar7 + 0x30;
          } while (uVar6 < *puVar5);
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_2 + 0x42));
    }
    if (*(short *)(param_2 + 0x40) != 0) {
      uVar2 = 0;
      do {
        lVar7 = *(long *)(param_2 + 0x28) + uVar2 * 0x80;
        plVar4 = (long *)(lVar7 + 0x68);
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = param_3 + *plVar4;
        }
        *plVar4 = lVar3;
        if (*(ushort *)(lVar7 + 0x78) != 0) {
          lVar3 = 0;
          uVar6 = 0;
          do {
            uVar6 = uVar6 + 1;
            lVar10 = *plVar4 + lVar3;
            lVar3 = lVar3 + 0x38;
            lVar8 = 0;
            if (*(long *)(lVar10 + 0x20) != 0) {
              lVar8 = param_3 + *(long *)(lVar10 + 0x20);
            }
            lVar1 = 0;
            if (*(long *)(lVar10 + 0x28) != 0) {
              lVar1 = param_3 + *(long *)(lVar10 + 0x28);
            }
            *(long *)(lVar10 + 0x20) = lVar8;
            *(long *)(lVar10 + 0x28) = lVar1;
          } while (uVar6 < *(ushort *)(lVar7 + 0x78));
        }
        plVar4 = (long *)(lVar7 + 0x70);
        lVar3 = 0;
        if (*plVar4 != 0) {
          lVar3 = param_3 + *plVar4;
        }
        *plVar4 = lVar3;
        if (*(ushort *)(lVar7 + 0x7a) != 0) {
          uVar6 = 0;
          do {
            lVar10 = *plVar4;
            lVar8 = lVar10 + uVar6 * 0xa0;
            plVar9 = (long *)(lVar8 + 0x78);
            lVar3 = 0;
            if (*plVar9 != 0) {
              lVar3 = param_3 + *plVar9;
            }
            *plVar9 = lVar3;
            puVar5 = (ushort *)(lVar8 + 0x80);
            if (*puVar5 != 0) {
              uVar11 = 0;
              lVar3 = 0x30;
              do {
                uVar11 = uVar11 + 1;
                lVar1 = *(long *)(*plVar9 + lVar3);
                lVar8 = 0;
                if (lVar1 != 0) {
                  lVar8 = param_3 + lVar1;
                }
                *(long *)(*plVar9 + lVar3) = lVar8;
                lVar3 = lVar3 + 0x40;
              } while (uVar11 < *puVar5);
            }
            lVar10 = lVar10 + uVar6 * 0xa0;
            uVar6 = uVar6 + 1;
            lVar8 = *(long *)(lVar10 + 0x90);
            lVar3 = 0;
            if (lVar8 != 0) {
              lVar3 = param_3 + lVar8;
            }
            *(long *)(lVar10 + 0x90) = lVar3;
          } while (uVar6 < *(ushort *)(lVar7 + 0x7a));
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < *(ushort *)(param_2 + 0x40));
    }
  }
  return;
}

