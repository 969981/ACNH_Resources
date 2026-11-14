
/* WARNING: Removing unreachable block (ram,0x01a0f704) */
/* WARNING: Removing unreachable block (ram,0x01a0f690) */
/* WARNING: Removing unreachable block (ram,0x01a0f6b8) */
/* WARNING: Removing unreachable block (ram,0x01a0f72c) */

void FUN_01a0f5b0(float *param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  ulong uVar5;
  byte bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined1 *)((long)param_1 + 0x21) = *(undefined1 *)(param_1 + 8);
    pfVar3 = *(float **)(param_1 + 0xc);
    uVar4 = **(uint **)(param_1 + 0xe);
    pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar4 >> 0x14) & 0xff0));
    fVar7 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar4 + 0x40000000 >> 0x18) * 0x10);
    fVar10 = param_1[6] * 0.5 * (*pfVar1 + fVar7 * pfVar1[1]);
    fVar9 = param_1[6] * 0.5 * (pfVar1[2] + fVar7 * pfVar1[3]);
    fVar8 = pfVar3[1];
    fVar11 = param_1[7] * (*pfVar2 + fVar7 * pfVar2[1]) + *pfVar3;
    fVar7 = param_1[7] * (pfVar2[2] + fVar7 * pfVar2[3]) + pfVar3[2];
    *param_1 = fVar10 + fVar11;
    param_1[1] = fVar8 + 0.0;
    param_1[2] = fVar9 + fVar7;
    uVar5 = FUN_01906898(*(undefined8 *)(param_1 + 10),param_1);
    if ((uVar5 & 1) == 0) {
      bVar6 = *(byte *)(param_1 + 8) | 1;
    }
    else {
      bVar6 = *(byte *)(param_1 + 8) & 0xfe;
    }
    *(byte *)(param_1 + 8) = bVar6;
    param_1[3] = fVar11 - fVar10;
    param_1[4] = fVar8 + 0.0;
    param_1[5] = fVar7 - fVar9;
    uVar5 = FUN_01906898(*(undefined8 *)(param_1 + 10),param_1 + 3);
    if ((uVar5 & 1) == 0) {
      bVar6 = *(byte *)(param_1 + 8) | 2;
    }
    else {
      bVar6 = *(byte *)(param_1 + 8) & 0xfd;
    }
    *(byte *)(param_1 + 8) = bVar6;
  }
  return;
}

