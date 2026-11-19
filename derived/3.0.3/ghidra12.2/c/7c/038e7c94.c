
void FUN_038e7c94(long param_1,long param_2,long param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar3 = *(float *)(param_1 + 8);
  fVar2 = *(float *)(param_1 + 0xc);
  uVar1 = *(int *)(param_1 + 0x18) - 1;
  fVar4 = fVar2;
  fVar5 = fVar3;
  switch(uVar1) {
  case 0:
    fVar4 = (*(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x10) - fVar3)) - fVar3;
    fVar5 = fVar2;
    break;
  case 1:
    fVar4 = fVar3;
    fVar5 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x14) - fVar2)) - fVar2;
    break;
  case 2:
    fVar5 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar3)) - fVar3;
    fVar4 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar2);
    goto LAB_038e7d50;
  case 3:
    fVar5 = (*(float *)(param_3 + 8) - (*(float *)(param_1 + 0x10) - fVar3)) - fVar3;
    break;
  case 4:
    fVar4 = *(float *)(param_3 + 0xc) - (*(float *)(param_1 + 0x14) - fVar2);
LAB_038e7d50:
    fVar4 = fVar4 - fVar2;
  }
  fVar8 = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14);
  fVar7 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10);
  fVar6 = *(float *)(param_3 + 0x10) + (fVar5 / *(float *)(param_3 + 8)) * fVar7;
  fVar2 = *(float *)(param_1 + 0x14) - fVar2;
  fVar3 = *(float *)(param_1 + 0x10) - fVar3;
  fVar5 = fVar2;
  if (1 < uVar1) {
    fVar5 = fVar3;
    fVar3 = fVar2;
  }
  fVar3 = fVar8 * (fVar3 / *(float *)(param_3 + 0xc));
  fVar4 = (fVar8 - fVar3) -
          (*(float *)(param_3 + 0x14) + (fVar4 / *(float *)(param_3 + 0xc)) * fVar8);
                    /* WARNING: Could not recover jumptable at 0x038e7df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf290)
            (*(undefined8 *)(param_2 + 0xb8),(int)fVar6,(int)fVar4,
             (int)((fVar6 + fVar7 * (fVar5 / *(float *)(param_3 + 8))) - (float)(int)fVar6),
             (int)((fVar3 + fVar4) - (float)(int)fVar4));
  return;
}

