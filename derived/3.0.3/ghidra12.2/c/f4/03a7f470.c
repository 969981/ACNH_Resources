
void FUN_03a7f470(long param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  lVar4 = *(long *)(param_1 + 0x468);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
    plVar5 = *(long **)(lVar4 + 0x20);
    lVar4 = (long)*(int *)(lVar4 + 0x18) << 3;
    do {
      lVar6 = *plVar5;
      if ((*(char *)(lVar6 + 0x58) != '\0' && *(short *)(lVar6 + 0x33e) != 0) &&
         (*(char *)(lVar6 + 0x230) != '\0')) {
        fVar9 = *(float *)(lVar6 + 0x134);
        fVar8 = *(float *)(lVar6 + 0x1c0) * fVar9;
        fVar11 = *(float *)(lVar6 + 0x128);
        fVar12 = *(float *)(lVar6 + 300);
        fVar13 = *(float *)(lVar6 + 0x130);
        uVar2 = *param_2;
        fVar14 = *(float *)(lVar6 + 0x2d8);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        uVar10 = *(undefined4 *)(lVar6 + 0x270);
        uVar3 = *(undefined4 *)(lVar6 + 0x250);
        uVar15 = *(undefined4 *)(lVar6 + 0x290);
        uVar16 = *(undefined4 *)(lVar6 + 0x2f8);
        *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(lVar6 + 0x178);
        *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar6 + 0x17c);
        *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar6 + 0x180);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x40) = uVar10;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        *(float *)(lVar7 + 0x20) = fVar11 * fVar8 * fVar14;
        *(float *)(lVar7 + 0x24) = fVar8 * fVar12 * fVar14;
        *(float *)(lVar7 + 0x28) = fVar8 * fVar13 * fVar14;
        *(float *)(lVar7 + 0x2c) = fVar8 * fVar9 * fVar14;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x30) = uVar3;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar6 + 0x2b0);
        *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(lVar6 + 0x2b4);
        *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(lVar6 + 0x2b8);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x44) = uVar15;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar2 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar2 * 0x50 + 0x48) = uVar16;
        *param_2 = *param_2 + 1;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  lVar4 = *(long *)(param_1 + 0x470);
  if ((lVar4 != 0) && (*(int *)(lVar4 + 0x18) != 0)) {
    plVar5 = *(long **)(lVar4 + 0x20);
    lVar4 = (long)*(int *)(lVar4 + 0x18) << 3;
    do {
      lVar6 = *plVar5;
      if ((*(char *)(lVar6 + 0x58) != '\0' && *(short *)(lVar6 + 0x36e) != 0) &&
         (*(char *)(lVar6 + 0x288) != '\0')) {
        fVar9 = *(float *)(lVar6 + 0x134);
        fVar8 = *(float *)(lVar6 + 0x178) * fVar9;
        fVar11 = *(float *)(lVar6 + 0x128);
        fVar12 = *(float *)(lVar6 + 300);
        fVar13 = *(float *)(lVar6 + 0x130);
        uVar2 = *param_2;
        fVar14 = *(float *)(lVar6 + 0x308);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        uVar10 = *(undefined4 *)(lVar6 + 0x2c8);
        uVar3 = *(undefined4 *)(lVar6 + 0x2a8);
        uVar15 = *(undefined4 *)(lVar6 + 0x2e8);
        uVar16 = *(undefined4 *)(lVar6 + 0x328);
        *(undefined4 *)(lVar7 + 0x14) = *(undefined4 *)(lVar6 + 0x1e0);
        *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar6 + 0x1e4);
        *(undefined4 *)(lVar7 + 0x1c) = *(undefined4 *)(lVar6 + 0x1e8);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x40) = uVar10;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        *(float *)(lVar7 + 0x20) = fVar11 * fVar8 * fVar14;
        *(float *)(lVar7 + 0x24) = fVar8 * fVar12 * fVar14;
        *(float *)(lVar7 + 0x28) = fVar8 * fVar13 * fVar14;
        *(float *)(lVar7 + 0x2c) = fVar8 * fVar9 * fVar14;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x30) = uVar3;
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        lVar7 = *(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50;
        *(undefined4 *)(lVar7 + 0x34) = *(undefined4 *)(lVar6 + 0x1b8);
        *(undefined4 *)(lVar7 + 0x38) = *(undefined4 *)(lVar6 + 0x1bc);
        *(undefined4 *)(lVar7 + 0x3c) = *(undefined4 *)(lVar6 + 0x1c0);
        uVar1 = uVar2;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar1 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar1 * 0x50 + 0x44) = uVar15;
        if (*(uint *)(param_3 + 0x3d0) <= uVar2) {
          uVar2 = 0;
        }
        *(undefined4 *)(*(long *)(param_3 + 0x3d8) + (long)(int)uVar2 * 0x50 + 0x48) = uVar16;
        *param_2 = *param_2 + 1;
      }
      plVar5 = plVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  return;
}

