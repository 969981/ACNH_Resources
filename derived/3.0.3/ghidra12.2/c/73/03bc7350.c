
void FUN_03bc7350(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  
  if ((DAT_05aebb78 != 0) && (*(long *)(DAT_05aebb78 + 0x10) != 0)) {
    lVar4 = *(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8);
    if (lVar4 == 0) {
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar4 = 0;
        do {
          *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar4 * 4) = 0x3f800000;
          lVar4 = lVar4 + 1;
        } while (lVar4 < *(int *)(param_1 + 0x50));
      }
    }
    else {
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) {
        if (0 < *(int *)(param_1 + 0x50)) {
          lVar4 = 0;
          do {
            *(undefined4 *)(*(long *)(param_1 + 0x48) + lVar4 * 4) = 0x3f800000;
            lVar4 = lVar4 + 1;
          } while (lVar4 < *(int *)(param_1 + 0x50));
        }
      }
      else {
        uVar1 = 0;
        if (*(long *)(lVar4 + 0x10) != 0) {
          uVar1 = *(uint *)(lVar4 + 8);
        }
        if (0 < (int)uVar1) {
          uVar5 = 0;
          do {
            fVar7 = 1.0;
            if (*(long *)(lVar4 + 0x10) != 0) {
              uVar3 = *(uint *)(lVar4 + 8);
              fVar7 = 1.0;
              if (uVar3 != 0) {
                fVar7 = 1.0;
                uVar2 = (uint)uVar5;
                if (-1 < (int)*(uint *)(lVar4 + 0x18)) {
                  uVar2 = *(uint *)(lVar4 + 0x18);
                }
                if ((int)uVar3 <= (int)uVar2) {
                  uVar2 = 0;
                }
                if (uVar2 < uVar3) {
                  lVar6 = *(long *)(*(long *)(lVar4 + 0x10) + (long)(int)uVar2 * 8);
                  fVar7 = 1.0;
                  if (lVar6 != 0) {
                    fVar7 = *(float *)(lVar6 + 0x18) *
                            *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x20);
                  }
                }
              }
            }
            *(float *)(*(long *)(param_1 + 0x48) + uVar5 * 4) = fVar7;
            uVar5 = uVar5 + 1;
          } while (uVar1 != uVar5);
        }
      }
    }
  }
  return;
}

