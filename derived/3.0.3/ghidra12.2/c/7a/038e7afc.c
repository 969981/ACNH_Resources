
void FUN_038e7afc(long param_1,long param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar4 = *(float *)(param_1 + 8);
  fVar3 = *(float *)(param_1 + 0xc);
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  fVar5 = fVar3;
  fVar6 = fVar4;
  switch(uVar1) {
  case 0:
    fVar5 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x10) - fVar4)) - fVar4;
    fVar6 = fVar3;
    break;
  case 1:
    fVar5 = fVar4;
    fVar6 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x14) - fVar3)) - fVar3;
    break;
  case 2:
    fVar6 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar4)) - fVar4;
    fVar5 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar3);
    goto LAB_038e7bc8;
  case 3:
    fVar6 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar4)) - fVar4;
    break;
  case 4:
    fVar5 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar3);
LAB_038e7bc8:
    fVar5 = fVar5 - fVar3;
  }
  fVar9 = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14);
  uVar2 = *(undefined8 *)(param_2 + 0xb8);
  fVar8 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10);
  fVar7 = *(float *)(param_3 + 0x10) + (fVar6 / *(float *)(param_3 + 8)) * fVar8;
  fVar3 = *(float *)(param_1 + 0x14) - fVar3;
  fVar4 = *(float *)(param_1 + 0x10) - fVar4;
  fVar6 = fVar3;
  if (1 < uVar1) {
    fVar6 = fVar4;
    fVar4 = fVar3;
  }
  fVar4 = fVar9 * (fVar4 / *(float *)(param_3 + 0xc));
  fVar5 = (fVar9 - fVar4) -
          (*(float *)(param_3 + 0x14) + (fVar5 / *(float *)(param_3 + 0xc)) * fVar9);
  (**(code **)PTR_DAT_04bcfda8)
            (uVar2,(int)fVar7,(int)fVar5,
             (int)((fVar7 + fVar8 * (fVar6 / *(float *)(param_3 + 8))) - (float)(int)fVar7),
             (int)((fVar4 + fVar5) - (float)(int)fVar5));
                    /* WARNING: Could not recover jumptable at 0x038e7c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf1f0)
            (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),uVar2);
  return;
}

