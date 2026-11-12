
void FUN_009cefb8(long param_1)

{
  long *plVar1;
  int iVar2;
  float *pfVar3;
  long lVar4;
  float *pfVar5;
  float *pfVar6;
  long lVar7;
  float fVar8;
  
  lVar4 = DAT_04d02f58;
  plVar1 = (long *)(DAT_04d02f58 + 0xf5b20);
  pfVar3 = (float *)&DAT_0419b55c;
  pfVar5 = (float *)&DAT_0419b560;
  if ((DAT_04d02f58 == 0) || (lVar7 = *plVar1, lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 8);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0x98);
    pfVar5 = (float *)(lVar7 + 0x9c);
    iVar2 = *(int *)(param_1 + 8);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf060;
    }
    else {
      iVar2 = *(int *)(param_1 + 0xc);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0xc) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 8) = 0;
LAB_009cf060:
        *(undefined4 *)(param_1 + 0xc) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *plVar1, lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x10);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0xa0);
    pfVar5 = (float *)(lVar7 + 0xa4);
    iVar2 = *(int *)(param_1 + 0x10);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf0f4;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x14);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x14) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x10) = 0;
LAB_009cf0f4:
        *(undefined4 *)(param_1 + 0x14) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0xf5b28), lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x18);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0x98);
    pfVar5 = (float *)(lVar7 + 0x9c);
    iVar2 = *(int *)(param_1 + 0x18);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf188;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x1c);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x1c) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x18) = 0;
LAB_009cf188:
        *(undefined4 *)(param_1 + 0x1c) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0xf5b28), lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x20);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0xa0);
    pfVar5 = (float *)(lVar7 + 0xa4);
    iVar2 = *(int *)(param_1 + 0x20);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf21c;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x24);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x24) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x20) = 0;
LAB_009cf21c:
        *(undefined4 *)(param_1 + 0x24) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0xf5b30), lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x28);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0x98);
    pfVar5 = (float *)(lVar7 + 0x9c);
    iVar2 = *(int *)(param_1 + 0x28);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf2b0;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x2c);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x2c) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x28) = 0;
LAB_009cf2b0:
        *(undefined4 *)(param_1 + 0x2c) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0xf5b30), lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x30);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0xa0);
    pfVar5 = (float *)(lVar7 + 0xa4);
    iVar2 = *(int *)(param_1 + 0x30);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf344;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x34);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x34) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x30) = 0;
LAB_009cf344:
        *(undefined4 *)(param_1 + 0x34) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 == 0) || (lVar7 = *(long *)(lVar4 + 0xf5b38), lVar7 == 0)) {
    pfVar6 = (float *)&DAT_0419b55c;
    iVar2 = *(int *)(param_1 + 0x38);
  }
  else {
    pfVar6 = (float *)(lVar7 + 0x98);
    pfVar5 = (float *)(lVar7 + 0x9c);
    iVar2 = *(int *)(param_1 + 0x38);
  }
  if (iVar2 != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar6 * *pfVar6);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf3d8;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x3c);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x3c) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x38) = 0;
LAB_009cf3d8:
        *(undefined4 *)(param_1 + 0x3c) = 5;
      }
    }
  }
  pfVar5 = (float *)&DAT_0419b560;
  if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0xf5b38), lVar4 != 0)) {
    pfVar3 = (float *)(lVar4 + 0xa0);
    pfVar5 = (float *)(lVar4 + 0xa4);
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fVar8 = SQRT(*pfVar5 * *pfVar5 + *pfVar3 * *pfVar3);
    if (0.21 <= fVar8) {
      if (0.21 <= fVar8) goto LAB_009cf460;
    }
    else {
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 < 2) {
        iVar2 = 1;
      }
      *(int *)(param_1 + 0x44) = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        *(undefined4 *)(param_1 + 0x40) = 0;
LAB_009cf460:
        *(undefined4 *)(param_1 + 0x44) = 5;
        return;
      }
    }
  }
  return;
}

