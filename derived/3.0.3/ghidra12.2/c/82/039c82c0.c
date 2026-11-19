
undefined8 FUN_039c82c0(long param_1,void *param_2,long param_3,uint param_4,float *param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  uVar4 = FUN_039c35b4(param_3 + 0xd8,param_5);
  if (-1 < (int)uVar4) {
    uVar5 = FUN_039c3864(param_3,uVar4);
    if ((int)uVar5 != 0) {
      return uVar5;
    }
    fVar12 = *(float *)(param_3 + 0x180);
    fVar13 = fVar12 * *(float *)(param_3 + 0x188);
    iVar10 = (int)fVar12;
    fVar11 = (float)uVar4 / fVar13;
    uVar6 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar6 = (uint)(fVar11 < 0.0);
    }
    uVar7 = (uint)fVar13;
    uVar3 = 0;
    if (uVar7 != 0) {
      uVar3 = uVar4 / uVar7;
    }
    uVar3 = uVar4 - uVar3 * uVar7;
    iVar2 = 0;
    if (iVar10 != 0) {
      iVar2 = (int)uVar3 / iVar10;
    }
    uVar7 = 0;
    if ((int)fVar12 != 0) {
      uVar7 = uVar3 / (uint)(int)fVar12;
    }
    fVar12 = (*param_5 -
             (*(float *)(param_3 + 0x120) +
             (float)(int)(uVar3 - iVar2 * iVar10) * *(float *)(param_3 + 0x170))) /
             *(float *)(param_3 + 0x170);
    uVar6 = uVar4 << 3 |
            (uint)(0.5 < (param_5[2] -
                         (*(float *)(param_3 + 0x128) +
                         (float)(int)uVar7 * *(float *)(param_3 + 0x178))) /
                         *(float *)(param_3 + 0x178)) << 1 |
            (uint)(0.5 < fVar12) |
            (uint)(0.5 < (param_5[1] -
                         (*(float *)(param_3 + 0x124) +
                         (float)(int)((int)fVar11 - uVar6) * *(float *)(param_3 + 0x174))) /
                         *(float *)(param_3 + 0x174)) << 2;
    if (*(int *)(param_3 + 0x1f0) == 1) {
      uVar3 = *(uint *)(*(long *)(param_3 + 0x250) + (ulong)(uVar6 >> 1) * 4);
      uVar6 = uVar3 >> 0x10;
      if (fVar12 <= 0.5) {
        uVar6 = uVar3 & 0xffff;
      }
      if (uVar6 < 0xfff5) {
LAB_039c843c:
        lVar8 = *(long *)(param_1 + 0x250);
        if ((lVar8 != 0) && (*(int *)(lVar8 + 0x28) == 4)) {
          lVar9 = 0;
          lVar1 = lVar8 + 0x2a8 + (ulong)param_4 * 0x400;
          if (0xf < param_4) {
            lVar1 = lVar8 + 0x2a8;
          }
          do {
            if (*(uint *)(lVar1 + lVar9 * 4) == uVar4) goto LAB_039c84d0;
            if (*(uint *)(lVar1 + lVar9 * 4 + 4) == uVar4) {
              lVar9 = lVar9 + 1;
              goto LAB_039c84d0;
            }
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0x100);
          lVar9 = 0;
          do {
            if (*(int *)(lVar1 + lVar9 * 4) < 0) {
LAB_039c84cc:
              *(uint *)(lVar1 + lVar9 * 4) = uVar4;
LAB_039c84d0:
              lVar1 = lVar8 + 0x42a8 + (ulong)param_4 * 0x400;
              if (0xf < param_4) {
                lVar1 = lVar8 + 0x42a8;
              }
              *(undefined4 *)(lVar1 + lVar9 * 4) = *(undefined4 *)(lVar8 + 0x82a8);
              break;
            }
            if (*(int *)(lVar1 + lVar9 * 4 + 4) < 0) {
              lVar9 = lVar9 + 1;
              goto LAB_039c84cc;
            }
            lVar9 = lVar9 + 2;
          } while (lVar9 != 0x100);
        }
        memcpy(param_2,(void *)(*(long *)(param_3 + 0x328) + (ulong)(uVar6 * 0x1b) * 4),
               (ulong)(uint)(*(int *)(param_3 + 0x308) << 2));
        return 0;
      }
    }
    else {
      uVar6 = *(uint *)(*(long *)(param_3 + 0x250) + (long)(int)uVar6 * 4);
      if (uVar6 < 0xfffffff5) goto LAB_039c843c;
    }
  }
  return 0xfffffffd;
}

