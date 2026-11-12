
/* WARNING: Removing unreachable block (ram,0x009b4714) */
/* WARNING: Removing unreachable block (ram,0x009b44ac) */
/* WARNING: Removing unreachable block (ram,0x009b45e0) */
/* WARNING: Removing unreachable block (ram,0x009b47fc) */

void FUN_009b4390(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  
  lVar7 = *(long *)(param_1 + 0xf5b20);
  if ((lVar7 != 0) && (*(long **)(lVar7 + 0xc20) != (long *)0x0)) {
    uVar3 = (**(code **)(**(long **)(lVar7 + 0xc20) + 0x30))();
    if ((uVar3 & 1) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x58);
      if (*(byte *)(param_1 + 0x58) != 0) {
        uVar5 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30);
      }
      if (*(uint *)(DAT_05aec9d8 + 0x330) <= uVar5) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(*(long *)(DAT_05aec9d8 + 0x338) + (long)(int)uVar5 * 8);
      if (((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xc20), plVar4 == (long *)0x0)) ||
         (uVar3 = (**(code **)(*plVar4 + 0x30))(), (uVar3 & 1) == 0)) goto LAB_009b44e0;
    }
    if (*(int *)(lVar7 + 0xa8) != *(int *)(lVar7 + 8)) goto LAB_009b47c4;
    fVar8 = SQRT(*(float *)(lVar7 + 0x13c) * *(float *)(lVar7 + 0x13c) +
                 *(float *)(lVar7 + 0x138) * *(float *)(lVar7 + 0x138)) -
            SQRT(*(float *)(lVar7 + 0x9c) * *(float *)(lVar7 + 0x9c) +
                 *(float *)(lVar7 + 0x98) * *(float *)(lVar7 + 0x98));
    bVar1 = false;
    bVar2 = true;
    if (-0.01 <= fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 == 0.01;
        bVar2 = 0.01 <= fVar8;
      }
    }
    if (((bVar2 && !bVar1) ||
        (fVar8 = SQRT(*(float *)(lVar7 + 0x144) * *(float *)(lVar7 + 0x144) +
                      *(float *)(lVar7 + 0x140) * *(float *)(lVar7 + 0x140)) -
                 SQRT(*(float *)(lVar7 + 0xa4) * *(float *)(lVar7 + 0xa4) +
                      *(float *)(lVar7 + 0xa0) * *(float *)(lVar7 + 0xa0)), fVar8 < -0.01)) ||
       (0.01 < fVar8)) goto LAB_009b47c4;
  }
LAB_009b44e0:
  lVar7 = *(long *)(param_1 + 0xf5b28);
  if ((lVar7 != 0) && (*(long **)(lVar7 + 0xc20) != (long *)0x0)) {
    uVar3 = (**(code **)(**(long **)(lVar7 + 0xc20) + 0x30))();
    if ((uVar3 & 1) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x58);
      if (*(byte *)(param_1 + 0x58) != 0) {
        uVar5 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30);
      }
      if (*(uint *)(DAT_05aec9d8 + 0x330) <= uVar5) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(*(long *)(DAT_05aec9d8 + 0x338) + (long)(int)uVar5 * 8);
      if (((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xc20), plVar4 == (long *)0x0)) ||
         (uVar3 = (**(code **)(*plVar4 + 0x30))(), (uVar3 & 1) == 0)) goto LAB_009b4614;
    }
    if (*(int *)(lVar7 + 0xa8) != *(int *)(lVar7 + 8)) goto LAB_009b47c4;
    fVar8 = SQRT(*(float *)(lVar7 + 0x13c) * *(float *)(lVar7 + 0x13c) +
                 *(float *)(lVar7 + 0x138) * *(float *)(lVar7 + 0x138)) -
            SQRT(*(float *)(lVar7 + 0x9c) * *(float *)(lVar7 + 0x9c) +
                 *(float *)(lVar7 + 0x98) * *(float *)(lVar7 + 0x98));
    bVar1 = false;
    bVar2 = true;
    if (-0.01 <= fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 == 0.01;
        bVar2 = 0.01 <= fVar8;
      }
    }
    if (((bVar2 && !bVar1) ||
        (fVar8 = SQRT(*(float *)(lVar7 + 0x144) * *(float *)(lVar7 + 0x144) +
                      *(float *)(lVar7 + 0x140) * *(float *)(lVar7 + 0x140)) -
                 SQRT(*(float *)(lVar7 + 0xa4) * *(float *)(lVar7 + 0xa4) +
                      *(float *)(lVar7 + 0xa0) * *(float *)(lVar7 + 0xa0)), fVar8 < -0.01)) ||
       (0.01 < fVar8)) goto LAB_009b47c4;
  }
LAB_009b4614:
  lVar7 = *(long *)(param_1 + 0xf5b30);
  if ((lVar7 != 0) && (*(long **)(lVar7 + 0xc20) != (long *)0x0)) {
    uVar3 = (**(code **)(**(long **)(lVar7 + 0xc20) + 0x30))();
    if ((uVar3 & 1) == 0) {
      uVar5 = (uint)*(byte *)(param_1 + 0x58);
      if (*(byte *)(param_1 + 0x58) != 0) {
        uVar5 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30);
      }
      if (*(uint *)(DAT_05aec9d8 + 0x330) <= uVar5) {
        uVar5 = 0;
      }
      lVar6 = *(long *)(*(long *)(DAT_05aec9d8 + 0x338) + (long)(int)uVar5 * 8);
      if (((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xc20), plVar4 == (long *)0x0)) ||
         (uVar3 = (**(code **)(*plVar4 + 0x30))(), (uVar3 & 1) == 0)) goto LAB_009b4748;
    }
    if (*(int *)(lVar7 + 0xa8) != *(int *)(lVar7 + 8)) goto LAB_009b47c4;
    fVar8 = SQRT(*(float *)(lVar7 + 0x13c) * *(float *)(lVar7 + 0x13c) +
                 *(float *)(lVar7 + 0x138) * *(float *)(lVar7 + 0x138)) -
            SQRT(*(float *)(lVar7 + 0x9c) * *(float *)(lVar7 + 0x9c) +
                 *(float *)(lVar7 + 0x98) * *(float *)(lVar7 + 0x98));
    bVar1 = false;
    bVar2 = true;
    if (-0.01 <= fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 == 0.01;
        bVar2 = 0.01 <= fVar8;
      }
    }
    if (((bVar2 && !bVar1) ||
        (fVar8 = SQRT(*(float *)(lVar7 + 0x144) * *(float *)(lVar7 + 0x144) +
                      *(float *)(lVar7 + 0x140) * *(float *)(lVar7 + 0x140)) -
                 SQRT(*(float *)(lVar7 + 0xa4) * *(float *)(lVar7 + 0xa4) +
                      *(float *)(lVar7 + 0xa0) * *(float *)(lVar7 + 0xa0)), fVar8 < -0.01)) ||
       (0.01 < fVar8)) goto LAB_009b47c4;
  }
LAB_009b4748:
  lVar7 = *(long *)(param_1 + 0xf5b38);
  if ((lVar7 == 0) || (*(long **)(lVar7 + 0xc20) == (long *)0x0)) {
LAB_009b4884:
    *(int *)(param_1 + 0xf5b58) = *(int *)(param_1 + 0xf5b58) + 1;
    return;
  }
  uVar3 = (**(code **)(**(long **)(lVar7 + 0xc20) + 0x30))();
  if ((uVar3 & 1) == 0) {
    uVar5 = (uint)*(byte *)(param_1 + 0x58);
    if (*(byte *)(param_1 + 0x58) != 0) {
      uVar5 = *(uint *)(*(long *)(param_1 + 0x50) + 0xc30);
    }
    if (*(uint *)(DAT_05aec9d8 + 0x330) <= uVar5) {
      uVar5 = 0;
    }
    lVar6 = *(long *)(*(long *)(DAT_05aec9d8 + 0x338) + (long)(int)uVar5 * 8);
    if (((lVar6 == 0) || (plVar4 = *(long **)(lVar6 + 0xc20), plVar4 == (long *)0x0)) ||
       (uVar3 = (**(code **)(*plVar4 + 0x30))(), (uVar3 & 1) == 0)) goto LAB_009b4884;
  }
  if (*(int *)(lVar7 + 0xa8) == *(int *)(lVar7 + 8)) {
    fVar8 = SQRT(*(float *)(lVar7 + 0x13c) * *(float *)(lVar7 + 0x13c) +
                 *(float *)(lVar7 + 0x138) * *(float *)(lVar7 + 0x138)) -
            SQRT(*(float *)(lVar7 + 0x9c) * *(float *)(lVar7 + 0x9c) +
                 *(float *)(lVar7 + 0x98) * *(float *)(lVar7 + 0x98));
    bVar1 = false;
    bVar2 = true;
    if (-0.01 <= fVar8) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(fVar8)) {
        bVar1 = fVar8 == 0.01;
        bVar2 = 0.01 <= fVar8;
      }
    }
    if (((!bVar2 || bVar1) &&
        (fVar8 = SQRT(*(float *)(lVar7 + 0x144) * *(float *)(lVar7 + 0x144) +
                      *(float *)(lVar7 + 0x140) * *(float *)(lVar7 + 0x140)) -
                 SQRT(*(float *)(lVar7 + 0xa4) * *(float *)(lVar7 + 0xa4) +
                      *(float *)(lVar7 + 0xa0) * *(float *)(lVar7 + 0xa0)), -0.01 <= fVar8)) &&
       (fVar8 <= 0.01)) goto LAB_009b4884;
  }
LAB_009b47c4:
  *(undefined4 *)(param_1 + 0xf5b58) = 0;
  return;
}

