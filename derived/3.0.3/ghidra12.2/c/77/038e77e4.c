
void FUN_038e77e4(long param_1,long param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = *(float *)(param_1 + 8);
  fVar5 = *(float *)(param_1 + 0xc);
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  fVar7 = fVar5;
  fVar8 = fVar6;
  switch(uVar1) {
  case 0:
    fVar7 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x10) - fVar6)) - fVar6;
    fVar8 = fVar5;
    break;
  case 1:
    fVar7 = fVar6;
    fVar8 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x14) - fVar5)) - fVar5;
    break;
  case 2:
    fVar8 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar6)) - fVar6;
    fVar7 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar5);
    goto LAB_038e78b8;
  case 3:
    fVar8 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar6)) - fVar6;
    break;
  case 4:
    fVar7 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar5);
LAB_038e78b8:
    fVar7 = fVar7 - fVar5;
  }
  fVar11 = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14);
  uVar3 = *(undefined8 *)(param_2 + 0xb8);
  fVar10 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10);
  fVar9 = *(float *)(param_3 + 0x10) + (fVar8 / *(float *)(param_3 + 8)) * fVar10;
  fVar5 = *(float *)(param_1 + 0x14) - fVar5;
  fVar6 = *(float *)(param_1 + 0x10) - fVar6;
  fVar8 = fVar5;
  if (1 < uVar1) {
    fVar8 = fVar6;
    fVar6 = fVar5;
  }
  fVar6 = fVar11 * (fVar6 / *(float *)(param_3 + 0xc));
  fVar7 = (fVar11 - fVar6) -
          (*(float *)(param_3 + 0x14) + (fVar7 / *(float *)(param_3 + 0xc)) * fVar11);
  iVar2 = (int)((fVar9 + fVar10 * (fVar8 / *(float *)(param_3 + 8))) - (float)(int)fVar9);
  iVar4 = (int)((fVar6 + fVar7) - (float)(int)fVar7);
  (**(code **)PTR_DAT_04bcf290)(uVar3,(int)fVar9,(int)fVar7,iVar2,iVar4);
  (**(code **)PTR_DAT_04bcfda8)(uVar3,(int)fVar9,(int)fVar7,iVar2,iVar4);
                    /* WARNING: Could not recover jumptable at 0x038e79b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf1f0)
            (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),uVar3);
  return;
}

