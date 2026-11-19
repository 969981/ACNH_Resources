
void FUN_03b3feb0(long param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (((param_2 != 0) && (lVar5 = *(long *)(param_1 + 0x38), lVar5 != 0)) &&
     (uVar8 = *(uint *)(param_1 + 0x44), uVar8 != 0)) {
    uVar7 = 0;
    if (uVar8 != 0) {
      uVar7 = param_2 / uVar8;
    }
    uVar7 = param_2 - uVar7 * uVar8;
    uVar9 = uVar7;
    do {
      uVar4 = *(uint *)(lVar5 + (-(ulong)(uVar9 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar9 << 3));
      if (uVar4 == param_2) {
        uVar8 = *(uint *)(lVar5 + (long)(int)uVar9 * 8 + 4);
        if (uVar8 < *(uint *)(param_1 + 8)) {
          lVar5 = *(long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar8 * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((param_4 & 1) == 0) {
          iVar3 = *(int *)(lVar5 + 0xb8);
          iVar6 = iVar3;
          if (*(float *)(lVar5 + 0x74) <= 0.0) {
            iVar6 = iVar3 + -1;
            if (iVar3 < 1) {
              iVar6 = 0;
            }
            *(int *)(lVar5 + 0xb8) = iVar6;
          }
          if (0 < iVar6) {
            return;
          }
          if ((*(byte *)(lVar5 + 0xb0) >> 2 & 1) != 0) {
            return;
          }
          *(byte *)(lVar5 + 0xb0) = *(byte *)(lVar5 + 0xb0) & 0xfa;
          if ((param_3 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x7c) = 6;
          }
          if (*(float *)(lVar5 + 0xd0) == 1.0) {
            return;
          }
          if ((*(long *)(lVar5 + 200) != 0) && (uVar8 = *(uint *)(lVar5 + 0xc0), 0 < (int)uVar8)) {
            uVar7 = 1;
            uVar9 = 0;
            do {
              uVar4 = uVar9 + 1;
              uVar1 = uVar9;
              if (uVar8 <= uVar9) {
                uVar1 = 0;
              }
              if (uVar9 < *(uint *)(lVar5 + 0x98)) {
                lVar10 = lVar5 + 0x88;
                if (6 < uVar9) {
                  uVar8 = uVar7 & 0xfffffff8;
                  do {
                    uVar8 = uVar8 - 8;
                    lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar8 != 0);
                }
                if ((uVar4 & 7) != 0) {
                  uVar8 = uVar7 & 7;
                  do {
                    lVar10 = *(long *)(lVar10 + 8);
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
              }
              else {
                lVar10 = 0;
              }
              uVar7 = uVar7 + 1;
              lVar2 = 0;
              if (lVar10 != 0) {
                lVar2 = lVar10 - *(int *)(lVar5 + 0x9c);
              }
              *(undefined4 *)(lVar2 + 8) =
                   *(undefined4 *)(*(long *)(lVar5 + 200) + (ulong)uVar1 * 4);
              uVar8 = *(uint *)(lVar5 + 0xc0);
              uVar9 = uVar4;
            } while ((int)uVar4 < (int)uVar8);
          }
        }
        else {
          *(undefined4 *)(lVar5 + 0xb8) = 0;
          *(byte *)(lVar5 + 0xb0) = *(byte *)(lVar5 + 0xb0) & 0xfa;
          if ((param_3 & 1) != 0) {
            *(undefined4 *)(lVar5 + 0x7c) = 6;
          }
          if (*(float *)(lVar5 + 0xd0) == 1.0) {
            return;
          }
          if ((*(long *)(lVar5 + 200) != 0) && (uVar8 = *(uint *)(lVar5 + 0xc0), 0 < (int)uVar8)) {
            uVar7 = 1;
            uVar9 = 0;
            do {
              uVar4 = uVar9 + 1;
              uVar1 = uVar9;
              if (uVar8 <= uVar9) {
                uVar1 = 0;
              }
              if (uVar9 < *(uint *)(lVar5 + 0x98)) {
                lVar10 = lVar5 + 0x88;
                if (6 < uVar9) {
                  uVar8 = uVar7 & 0xfffffff8;
                  do {
                    uVar8 = uVar8 - 8;
                    lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*
                                                  (long *)(lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                      + 8);
                  } while (uVar8 != 0);
                }
                if ((uVar4 & 7) != 0) {
                  uVar8 = uVar7 & 7;
                  do {
                    lVar10 = *(long *)(lVar10 + 8);
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
              }
              else {
                lVar10 = 0;
              }
              uVar7 = uVar7 + 1;
              lVar2 = 0;
              if (lVar10 != 0) {
                lVar2 = lVar10 - *(int *)(lVar5 + 0x9c);
              }
              *(undefined4 *)(lVar2 + 8) =
                   *(undefined4 *)(*(long *)(lVar5 + 200) + (ulong)uVar1 * 4);
              uVar8 = *(uint *)(lVar5 + 0xc0);
              uVar9 = uVar4;
            } while ((int)uVar4 < (int)uVar8);
          }
        }
        *(undefined4 *)(lVar5 + 0xd0) = 0x3f800000;
        return;
      }
      if (uVar4 == 0) {
        return;
      }
      uVar4 = 0;
      if ((int)(uVar9 + 1) < (int)uVar8) {
        uVar4 = uVar9 + 1;
      }
      uVar9 = uVar4;
    } while (uVar4 != uVar7);
  }
  return;
}

