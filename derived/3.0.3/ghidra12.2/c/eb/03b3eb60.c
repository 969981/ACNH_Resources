
void FUN_03b3eb60(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  
  if (((*(byte *)(param_1 + 0xb0) & 1) != 0) || (*(int *)(param_1 + 0x7c) != 0)) {
    FUN_03ba69f0(param_1 + 0x60);
    bVar5 = *(byte *)(param_1 + 0xb0);
    uVar7 = (uint)bVar5;
    if (((0.0 < *(float *)(param_1 + 0x74) && *(int *)(param_1 + 0x7c) == 5) &&
        *(int *)(param_1 + 0xb8) < 1) && (bVar5 & 4) == 0) {
      uVar7 = bVar5 & 0xfa;
      *(char *)(param_1 + 0xb0) = (char)uVar7;
      if (*(float *)(param_1 + 0xd0) != 1.0) {
        if ((*(long *)(param_1 + 200) != 0) && (uVar8 = *(uint *)(param_1 + 0xc0), 0 < (int)uVar8))
        {
          uVar7 = 1;
          uVar9 = 0;
          do {
            uVar1 = uVar9 + 1;
            uVar2 = uVar9;
            if (uVar8 <= uVar9) {
              uVar2 = 0;
            }
            if (uVar9 < *(uint *)(param_1 + 0x98)) {
              lVar10 = param_1 + 0x88;
              if (6 < uVar9) {
                uVar8 = uVar7 & 0xfffffff8;
                do {
                  uVar8 = uVar8 - 8;
                  lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                    + 8);
                } while (uVar8 != 0);
              }
              if ((uVar1 & 7) != 0) {
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
            lVar3 = 0;
            if (lVar10 != 0) {
              lVar3 = lVar10 - *(int *)(param_1 + 0x9c);
            }
            *(undefined4 *)(lVar3 + 8) =
                 *(undefined4 *)(*(long *)(param_1 + 200) + (ulong)uVar2 * 4);
            uVar8 = *(uint *)(param_1 + 0xc0);
            uVar9 = uVar1;
          } while ((int)uVar1 < (int)uVar8);
          uVar7 = (uint)*(byte *)(param_1 + 0xb0);
        }
        *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
      }
    }
    if (((((uVar7 >> 2 & 1) != 0) &&
         (iVar4 = *(int *)(param_1 + 0xb4), iVar6 = iVar4 + -1, *(int *)(param_1 + 0xb4) = iVar6,
         iVar6 == 0 || iVar4 < 1)) && (*(int *)(param_1 + 0xb8) < 1)) &&
       (*(byte *)(param_1 + 0xb0) = (byte)uVar7 & 0xfa, *(float *)(param_1 + 0xd0) != 1.0)) {
      if ((*(long *)(param_1 + 200) != 0) && (uVar7 = *(uint *)(param_1 + 0xc0), 0 < (int)uVar7)) {
        uVar8 = 1;
        uVar9 = 0;
        do {
          uVar1 = uVar9 + 1;
          uVar2 = uVar9;
          if (uVar7 <= uVar9) {
            uVar2 = 0;
          }
          if (uVar9 < *(uint *)(param_1 + 0x98)) {
            lVar10 = param_1 + 0x88;
            if (6 < uVar9) {
              uVar7 = uVar8 & 0xfffffff8;
              do {
                uVar7 = uVar7 - 8;
                lVar10 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(
                                                  long *)(lVar10 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                  + 8);
              } while (uVar7 != 0);
            }
            if ((uVar1 & 7) != 0) {
              uVar7 = uVar8 & 7;
              do {
                lVar10 = *(long *)(lVar10 + 8);
                uVar7 = uVar7 - 1;
              } while (uVar7 != 0);
            }
          }
          else {
            lVar10 = 0;
          }
          uVar8 = uVar8 + 1;
          lVar3 = 0;
          if (lVar10 != 0) {
            lVar3 = lVar10 - *(int *)(param_1 + 0x9c);
          }
          *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(*(long *)(param_1 + 200) + (ulong)uVar2 * 4);
          uVar7 = *(uint *)(param_1 + 0xc0);
          uVar9 = uVar1;
        } while ((int)uVar1 < (int)uVar7);
      }
      *(undefined4 *)(param_1 + 0xd0) = 0x3f800000;
    }
  }
  return;
}

