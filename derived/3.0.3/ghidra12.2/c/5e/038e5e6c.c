
void FUN_038e5e6c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  
  puVar2 = PTR_DAT_04bd0ea8;
  uVar4 = *(undefined4 *)PTR_DAT_04bd0eb0;
  uVar6 = *(undefined4 *)PTR_DAT_04bd0eb8;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined2 *)(param_1 + 1) = 0x101;
  uVar1 = *(undefined4 *)puVar2;
  *param_1 = &PTR_LAB_04b65788;
  *(undefined4 *)(param_1 + 0x12) = uVar4;
  *(undefined4 *)((long)param_1 + 0x94) = uVar6;
  *(undefined4 *)((long)param_1 + 0x8c) = uVar1;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  uVar17 = param_2[1];
  uVar14 = *param_2;
  param_1[0x14] = uVar17;
  param_1[0x13] = uVar14;
  uVar11 = param_2[3];
  uVar8 = param_2[2];
  param_1[0x16] = uVar11;
  param_1[0x15] = uVar8;
  uVar5 = param_2[4];
  param_1[0x18] = param_2[5];
  param_1[0x17] = uVar5;
  uVar5 = param_2[6];
  param_1[0x1a] = param_2[7];
  param_1[0x19] = uVar5;
  fVar15 = (float)((ulong)uVar14 >> 0x20);
  fVar16 = (float)uVar17;
  fVar18 = (float)((ulong)uVar17 >> 0x20);
  fVar9 = (float)((ulong)uVar8 >> 0x20);
  fVar10 = (float)uVar11;
  fVar12 = (float)((ulong)uVar11 >> 0x20);
  fVar13 = (float)uVar14;
  fVar7 = (float)uVar8;
  switch(param_3) {
  case 1:
    *(float *)((long)param_1 + 0xb4) = fVar18;
    pfVar3 = (float *)((long)param_1 + 0xa4);
    *(float *)(param_1 + 0x15) = fVar13;
    *(float *)((long)param_1 + 0xac) = fVar15;
    *(float *)(param_1 + 0x16) = fVar16;
    *(float *)(param_1 + 0x13) = -fVar7;
    *(float *)(param_1 + 0x14) = -fVar10;
    *(float *)((long)param_1 + 0x9c) = -fVar9;
    goto LAB_038e5ffc;
  case 2:
    *(float *)((long)param_1 + 0xa4) = fVar12;
    pfVar3 = (float *)((long)param_1 + 0xb4);
    *(float *)(param_1 + 0x13) = fVar7;
    *(float *)((long)param_1 + 0x9c) = fVar9;
    *(float *)(param_1 + 0x14) = fVar10;
    *(float *)(param_1 + 0x15) = -fVar13;
    *(float *)((long)param_1 + 0xac) = -fVar15;
    *(float *)(param_1 + 0x16) = -fVar16;
    break;
  case 3:
    pfVar3 = (float *)((long)param_1 + 0xb4);
    *(float *)(param_1 + 0x13) = -fVar13;
    *(float *)((long)param_1 + 0xa4) = -fVar18;
    *(float *)(param_1 + 0x15) = -fVar7;
    *(float *)(param_1 + 0x14) = -fVar16;
    *(float *)((long)param_1 + 0x9c) = -fVar15;
    *(float *)((long)param_1 + 0xac) = -fVar9;
    *(float *)(param_1 + 0x16) = -fVar10;
    fVar18 = fVar12;
    break;
  case 4:
    pfVar3 = (float *)((long)param_1 + 0xa4);
    *(float *)(param_1 + 0x13) = -fVar13;
    *(float *)((long)param_1 + 0x9c) = -fVar15;
    *(float *)(param_1 + 0x14) = -fVar16;
    break;
  case 5:
    pfVar3 = (float *)((long)param_1 + 0xb4);
    *(float *)(param_1 + 0x15) = -fVar7;
    *(float *)((long)param_1 + 0xac) = -fVar9;
    *(float *)(param_1 + 0x16) = -fVar10;
LAB_038e5ffc:
    fVar18 = fVar12;
    break;
  default:
    goto switchD_038e5f18_default;
  }
  *pfVar3 = -fVar18;
switchD_038e5f18_default:
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)(param_1 + 0x1e) = 1;
  return;
}

