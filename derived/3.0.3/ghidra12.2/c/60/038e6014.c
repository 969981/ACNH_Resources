
void FUN_038e6014(long param_1,undefined8 *param_2,undefined4 param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  
  uVar13 = param_2[1];
  uVar10 = *param_2;
  *(undefined8 *)(param_1 + 0xa0) = uVar13;
  *(undefined8 *)(param_1 + 0x98) = uVar10;
  uVar7 = param_2[3];
  uVar4 = param_2[2];
  *(undefined8 *)(param_1 + 0xb0) = uVar7;
  *(undefined8 *)(param_1 + 0xa8) = uVar4;
  uVar2 = param_2[4];
  *(undefined8 *)(param_1 + 0xc0) = param_2[5];
  *(undefined8 *)(param_1 + 0xb8) = uVar2;
  uVar2 = param_2[6];
  *(undefined8 *)(param_1 + 0xd0) = param_2[7];
  *(undefined8 *)(param_1 + 200) = uVar2;
  fVar11 = (float)((ulong)uVar10 >> 0x20);
  fVar12 = (float)uVar13;
  fVar14 = (float)((ulong)uVar13 >> 0x20);
  fVar5 = (float)((ulong)uVar4 >> 0x20);
  fVar6 = (float)uVar7;
  fVar8 = (float)((ulong)uVar7 >> 0x20);
  fVar9 = (float)uVar10;
  fVar3 = (float)uVar4;
  switch(param_3) {
  case 1:
    *(float *)(param_1 + 0xb4) = fVar14;
    pfVar1 = (float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0xa8) = fVar9;
    *(float *)(param_1 + 0xac) = fVar11;
    *(float *)(param_1 + 0xb0) = fVar12;
    *(float *)(param_1 + 0x98) = -fVar3;
    *(float *)(param_1 + 0xa0) = -fVar6;
    *(float *)(param_1 + 0x9c) = -fVar5;
    goto LAB_038e6150;
  case 2:
    *(float *)(param_1 + 0xa4) = fVar8;
    pfVar1 = (float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0x98) = fVar3;
    *(float *)(param_1 + 0x9c) = fVar5;
    *(float *)(param_1 + 0xa0) = fVar6;
    *(float *)(param_1 + 0xa8) = -fVar9;
    *(float *)(param_1 + 0xac) = -fVar11;
    *(float *)(param_1 + 0xb0) = -fVar12;
    break;
  case 3:
    pfVar1 = (float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0x98) = -fVar9;
    *(float *)(param_1 + 0xa4) = -fVar14;
    *(float *)(param_1 + 0xa8) = -fVar3;
    *(float *)(param_1 + 0xa0) = -fVar12;
    *(float *)(param_1 + 0x9c) = -fVar11;
    *(float *)(param_1 + 0xac) = -fVar5;
    *(float *)(param_1 + 0xb0) = -fVar6;
    fVar14 = fVar8;
    break;
  case 4:
    pfVar1 = (float *)(param_1 + 0xa4);
    *(float *)(param_1 + 0x98) = -fVar9;
    *(float *)(param_1 + 0x9c) = -fVar11;
    *(float *)(param_1 + 0xa0) = -fVar12;
    break;
  case 5:
    pfVar1 = (float *)(param_1 + 0xb4);
    *(float *)(param_1 + 0xa8) = -fVar3;
    *(float *)(param_1 + 0xac) = -fVar5;
    *(float *)(param_1 + 0xb0) = -fVar6;
LAB_038e6150:
    fVar14 = fVar8;
    break;
  default:
    goto switchD_038e606c_default;
  }
  *pfVar1 = -fVar14;
switchD_038e606c_default:
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0xf0) = 1;
  return;
}

