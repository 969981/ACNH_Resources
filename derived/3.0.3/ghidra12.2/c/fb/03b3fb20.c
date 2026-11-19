
long FUN_03b3fb20(float param_1,long param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  
  if (((param_3 != 0) && (lVar5 = *(long *)(param_2 + 0x38), lVar5 != 0)) &&
     (uVar9 = *(uint *)(param_2 + 0x44), uVar9 != 0)) {
    uVar6 = 0;
    if (uVar9 != 0) {
      uVar6 = param_3 / uVar9;
    }
    uVar6 = param_3 - uVar6 * uVar9;
    uVar7 = uVar6;
    do {
      uVar2 = *(uint *)(lVar5 + (-(ulong)(uVar7 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar7 << 3));
      if (uVar2 == param_3) {
        uVar9 = *(uint *)(lVar5 + (long)(int)uVar7 * 8 + 4);
        if (uVar9 < *(uint *)(param_2 + 8)) {
          lVar5 = *(long *)(*(long *)(param_2 + 0x10) + (long)(int)uVar9 * 8);
        }
        else {
          lVar5 = 0;
        }
        bVar4 = *(float *)(lVar5 + 0xd0) != param_1;
        if ((param_5 & 1) == 0) {
          if ((bVar4) && (*(long *)(lVar5 + 200) != 0)) {
            uVar9 = *(uint *)(lVar5 + 0xc0);
            if (0 < (int)uVar9) {
              uVar6 = 1;
              uVar7 = 0;
              do {
                uVar2 = uVar7 + 1;
                uVar1 = uVar7;
                if (uVar9 <= uVar7) {
                  uVar1 = 0;
                }
                fVar11 = 1.0 - param_1 * (1.0 - *(float *)(*(long *)(lVar5 + 200) + (ulong)uVar1 * 4
                                                          ));
                fVar12 = 0.0;
                if (0.0 <= fVar11) {
                  fVar12 = fVar11;
                }
                if (uVar7 < *(uint *)(lVar5 + 0x98)) {
                  lVar8 = lVar5 + 0x88;
                  if (6 < uVar7) {
                    uVar9 = uVar6 & 0xfffffff8;
                    do {
                      uVar9 = uVar9 - 8;
                      lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  *(long *)(lVar8 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                       + 8);
                    } while (uVar9 != 0);
                  }
                  if ((uVar2 & 7) != 0) {
                    uVar9 = uVar6 & 7;
                    do {
                      lVar8 = *(long *)(lVar8 + 8);
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else {
                  lVar8 = 0;
                }
                uVar6 = uVar6 + 1;
                lVar10 = 0;
                if (lVar8 != 0) {
                  lVar10 = lVar8 - *(int *)(lVar5 + 0x9c);
                }
                *(float *)(lVar10 + 8) = fVar12;
                uVar9 = *(uint *)(lVar5 + 0xc0);
                uVar7 = uVar2;
              } while ((int)uVar2 < (int)uVar9);
            }
            *(float *)(lVar5 + 0xd0) = param_1;
            *(undefined4 *)(lVar5 + 0x7c) = 0;
          }
          if (((param_4 & 1) == 0) && (*(float *)(lVar5 + 0x74) <= 0.0)) {
            *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + 1;
          }
        }
        else {
          if ((bVar4) && (*(long *)(lVar5 + 200) != 0)) {
            uVar9 = *(uint *)(lVar5 + 0xc0);
            if (0 < (int)uVar9) {
              uVar6 = 1;
              uVar7 = 0;
              do {
                uVar2 = uVar7 + 1;
                uVar1 = uVar7;
                if (uVar9 <= uVar7) {
                  uVar1 = 0;
                }
                fVar11 = 1.0 - param_1 * (1.0 - *(float *)(*(long *)(lVar5 + 200) + (ulong)uVar1 * 4
                                                          ));
                fVar12 = 0.0;
                if (0.0 <= fVar11) {
                  fVar12 = fVar11;
                }
                if (uVar7 < *(uint *)(lVar5 + 0x98)) {
                  lVar8 = lVar5 + 0x88;
                  if (6 < uVar7) {
                    uVar9 = uVar6 & 0xfffffff8;
                    do {
                      uVar9 = uVar9 - 8;
                      lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(
                                                  *(long *)(lVar8 + 8) + 8) + 8) + 8) + 8) + 8) + 8)
                                       + 8);
                    } while (uVar9 != 0);
                  }
                  if ((uVar2 & 7) != 0) {
                    uVar9 = uVar6 & 7;
                    do {
                      lVar8 = *(long *)(lVar8 + 8);
                      uVar9 = uVar9 - 1;
                    } while (uVar9 != 0);
                  }
                }
                else {
                  lVar8 = 0;
                }
                uVar6 = uVar6 + 1;
                lVar10 = 0;
                if (lVar8 != 0) {
                  lVar10 = lVar8 - *(int *)(lVar5 + 0x9c);
                }
                *(float *)(lVar10 + 8) = fVar12;
                uVar9 = *(uint *)(lVar5 + 0xc0);
                uVar7 = uVar2;
              } while ((int)uVar2 < (int)uVar9);
            }
            *(float *)(lVar5 + 0xd0) = param_1;
            *(undefined4 *)(lVar5 + 0x7c) = 0;
          }
          if (((param_4 & 1) == 0) && (*(float *)(lVar5 + 0x74) <= 0.0)) {
            *(int *)(lVar5 + 0xb8) = *(int *)(lVar5 + 0xb8) + 1;
          }
          if (*(long *)(lVar5 + 0x90) != lVar5 + 0x88) {
            lVar10 = (long)*(int *)(lVar5 + 0x9c);
            lVar8 = *(long *)(lVar5 + 0x90) - lVar10;
            do {
              FUN_03b773d4(*(undefined4 *)(lVar8 + 8),0,lVar8 + 0x18);
              lVar8 = *(long *)(lVar8 + lVar10 + 8) - lVar10;
            } while (lVar8 != (lVar5 + 0x88) - lVar10);
          }
          *(undefined4 *)(lVar5 + 0xa0) = 0;
          *(undefined4 *)(lVar5 + 0x7c) = 2;
        }
        bVar3 = *(byte *)(lVar5 + 0xb0);
        *(byte *)(lVar5 + 0xb0) = bVar3 | 1;
        if ((bVar3 >> 1 & 1) != 0) {
          return lVar5;
        }
        nn::os::LockMutex((MutexType *)(param_2 + 0x68));
        if (*(int *)(param_2 + 0x28) < *(int *)(param_2 + 0x2c)) {
          *(long *)(*(long *)(param_2 + 0x30) + (long)*(int *)(param_2 + 0x28) * 8) = lVar5;
          *(int *)(param_2 + 0x28) = *(int *)(param_2 + 0x28) + 1;
        }
        *(byte *)(lVar5 + 0xb0) = *(byte *)(lVar5 + 0xb0) | 2;
        nn::os::UnlockMutex((MutexType *)(param_2 + 0x68));
        return lVar5;
      }
      if (uVar2 == 0) {
        return 0;
      }
      uVar2 = 0;
      if ((int)(uVar7 + 1) < (int)uVar9) {
        uVar2 = uVar7 + 1;
      }
      uVar7 = uVar2;
    } while (uVar2 != uVar6);
  }
  return 0;
}

