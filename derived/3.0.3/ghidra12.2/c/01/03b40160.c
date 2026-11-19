
void FUN_03b40160(long param_1,uint param_2)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    plVar6 = *(long **)(param_1 + 0x30);
    plVar2 = plVar6 + *(int *)(param_1 + 0x28);
    do {
      lVar7 = *plVar6;
      iVar5 = *(int *)(lVar7 + 0xb8);
      iVar8 = iVar5;
      if (*(float *)(lVar7 + 0x74) <= 0.0) {
        iVar8 = iVar5 + -1;
        if (iVar5 < 1) {
          iVar8 = 0;
        }
        *(int *)(lVar7 + 0xb8) = iVar8;
      }
      if ((iVar8 < 1) && ((*(byte *)(lVar7 + 0xb0) >> 2 & 1) == 0)) {
        *(byte *)(lVar7 + 0xb0) = *(byte *)(lVar7 + 0xb0) & 0xfa;
        if ((param_2 & 1) != 0) {
          *(undefined4 *)(lVar7 + 0x7c) = 6;
        }
        if (*(float *)(lVar7 + 0xd0) != 1.0) {
          if ((*(long *)(lVar7 + 200) != 0) && (uVar10 = *(uint *)(lVar7 + 0xc0), 0 < (int)uVar10))
          {
            uVar9 = 1;
            uVar11 = 0;
            do {
              uVar1 = uVar11 + 1;
              uVar3 = uVar11;
              if (uVar10 <= uVar11) {
                uVar3 = 0;
              }
              if (uVar11 < *(uint *)(lVar7 + 0x98)) {
                lVar12 = lVar7 + 0x88;
                if (6 < uVar11) {
                  uVar10 = uVar9 & 0xfffffff8;
                  do {
                    uVar10 = uVar10 - 8;
                    lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar12 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar10 != 0);
                }
                if ((uVar1 & 7) != 0) {
                  uVar10 = uVar9 & 7;
                  do {
                    lVar12 = *(long *)(lVar12 + 8);
                    uVar10 = uVar10 - 1;
                  } while (uVar10 != 0);
                }
              }
              else {
                lVar12 = 0;
              }
              uVar9 = uVar9 + 1;
              lVar4 = 0;
              if (lVar12 != 0) {
                lVar4 = lVar12 - *(int *)(lVar7 + 0x9c);
              }
              *(undefined4 *)(lVar4 + 8) =
                   *(undefined4 *)(*(long *)(lVar7 + 200) + (ulong)uVar3 * 4);
              uVar10 = *(uint *)(lVar7 + 0xc0);
              uVar11 = uVar1;
            } while ((int)uVar1 < (int)uVar10);
          }
          *(undefined4 *)(lVar7 + 0xd0) = 0x3f800000;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  return;
}

